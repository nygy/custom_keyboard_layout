import svgwrite
import ast
from svgwrite import Drawing

with open('custom layout.txt', 'r') as file:
     content = file.read()
layout_def = ast.literal_eval(content)

dwg: Drawing = svgwrite.Drawing('pattern.svg', size=("297mm", "210mm"), profile='tiny')
sticker_radius = 6
button_size = 16
button_gap = 3.25
font_sizes = [22, 14, 14]
x_offsets = [0, 0, 2.5]
y_offsets = [0.5, 4, 4]
button_text = ["Ű", "", "{"]

def draw_button(cen_x: float, cen_y: float, content: list) -> None:
    dwg.add(dwg.circle(center=(f'{cen_x}mm', f'{cen_y}mm'),
                       r=f'{sticker_radius}mm', fill='none',
                       stroke='black', stroke_width='0.2mm'))
    dwg.add(dwg.rect(insert=(f'{cen_x-button_size/2}mm', f'{cen_y-button_size/2}mm'),
                     fill='none',
                     size=(f'{button_size-0.5}mm', f'{button_size-0.5}mm'),
                     stroke='red', stroke_width='1mm', stroke_opacity='0.5'))
    for i, char in enumerate(content):
        if char.isalpha() & i == 1 :
            continue
        dwg.add(dwg.text(content[i],
                         insert=(f'{cen_x+x_offsets[i]}mm', f'{cen_y+y_offsets[i]}mm'),
                         text_anchor="middle",
                         fill='black',
                         font_size=f'{font_sizes[i]}px',
                         font_family='DejaVu Sans Mono'))
        print(f'{i=}, {content[i]=}, {x_offsets[i]=}, {y_offsets[i]=}, {font_sizes[i]=}')
    return

button_index = 0
rows = sorted({button_item[0] for button_item in layout_def})
print(rows)
for row in rows:
    row_buttons = [sublist for sublist in layout_def if sublist[0] == row]
    row_len = len(row_buttons)
    print(f'{row=} {row_len=} {row_buttons=}')
    for i in range(row_len):
        pos_x = i*(button_size + button_gap - 0.4) + 20
        pos_y = 22*row
        button_texts = [txt for txt in layout_def[button_index][3:] if isinstance(txt, str)]
#        print(f'{i=} {button_index=} {button_texts=} {pos_x=:.2f} {pos_y=:.2f}')
        draw_button(pos_x, pos_y, button_texts)
        button_index = button_index + 1

dwg.save()

#char = 'ű'
#code = ord(char)
#hex_code = f"U+{code:04X}"
#print(hex_code)  # Output: U+0171

