import ast

with open('custom layout.txt', 'r') as file:
    file_content = file.read()
layout_def = ast.literal_eval(file_content)

with open('nygy', 'w') as file:
    file.write("partial alphanumeric_keys modifier_keys xkb_symbols \"nygy\" {\n")
    file.write("  include \"level3(lalt_switch)\"\n")
    file.write("  include \"level3(ralt_switch)\"\n")

    for button_index, button_content in enumerate(layout_def):
        button_texts = [txt for txt in button_content[3:] if isinstance(txt, str)]
        U_codes = [f'U{ord(char):04X}' for char in button_texts]
        print(f'{button_index=}\t{button_content=}\t{button_texts=}\t{U_codes=}')
        file.write(f'  key {button_content[2]} {{[{",".join(U_codes)}]}};\n')

    file.write("  };\n")
