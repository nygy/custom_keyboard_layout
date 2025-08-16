import svgwrite
import ast
from svgwrite import Drawing

with open('custom layout.txt', 'r') as file:
    file_content = file.read()
layout_def = ast.literal_eval(file_content)

dwg: Drawing = svgwrite.Drawing('pattern.svg', size=("297mm", "210mm"), profile='tiny')
sticker_radius = 6
button_size = 16
button_gap = 2.85
row_offsets = [0, 29, 33, 43]
font_sizes = [22, 14, 14]
x_offsets = [0, 0, 2.5]
y_offsets = [0, 4, 4]


def draw_button(cen_x: float, cen_y: float, content: list) -> None:
    dwg.add(dwg.circle(center=(f'{cen_x}mm', f'{cen_y}mm'),
                       r=f'{sticker_radius}mm', fill='none',
                       stroke='gray', stroke_width='0.1mm'))
    dwg.add(dwg.rect(insert=(f'{cen_x-button_size/2}mm', f'{cen_y-button_size/2}mm'),
                     fill='none',
                     size=(f'{button_size-0.5}mm', f'{button_size-0.5}mm'),
                     stroke='grey', stroke_width='1mm', stroke_opacity='0.5'))
    for char_position, char in enumerate(content):
        dwg.add(dwg.text(content[char_position],
                         insert=(f'{cen_x+x_offsets[char_position]}mm', f'{cen_y+y_offsets[char_position]}mm'),
                         text_anchor="middle",
                         fill='black',
                         font_size=f'{font_sizes[char_position]}px',
                         font_family='DejaVu Sans Mono'))
        print(f'\t{char_position=}, {content[char_position]=}, {x_offsets[char_position]=}, {y_offsets[char_position]=}, {font_sizes[char_position]=}')
    return

button_index = 0
rows = sorted({button_item[0] for button_item in layout_def})
print(rows)
for row in rows:
    row_buttons = [sublist for sublist in layout_def if sublist[0] == row]
    row_len = len(row_buttons)
    print(f'{row=} {row_len=}\n{row_buttons=}')
    for button_position in range(row_len):
        pos_x = button_position*(button_size + button_gap) + row_offsets[row-1] + 20
        pos_y = row*18
        button_texts = [txt for txt in layout_def[button_index][3:] if isinstance(txt, str)]
        print(f'{button_position=} {button_index=} {button_texts=} {pos_x=:.2f} {pos_y=:.2f}')
        if button_texts[0].isalpha():
            main_char = button_texts[1]
            small_char = ""
        else:
            main_char = button_texts[0]
            small_char = button_texts[1]
        if len(button_texts) == 3:
            AltGr_char = button_texts[2]
        else:
            AltGr_char = ""
        print_texts = [main_char, small_char, AltGr_char]
        print(f'{print_texts=}')

        draw_button(pos_x, pos_y, print_texts)
        button_index = button_index + 1

dwg.save()
