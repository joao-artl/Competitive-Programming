import os
import argparse

def get_content(path):
    content = ""
    for root, _, files in sorted(os.walk(path)):
        section_name = os.path.basename(root).replace('_', ' ').replace('-', ' ').title()
        
        if root != path and files:
            content += f"\\section{{{section_name}}}\n"
        
        for f in sorted(files):
            if f.endswith(('.cpp', '.py', 'java')):
                filepath = os.path.join(root, f)
                
                tex_path = os.path.splitext(filepath)[0] + '.tex'

                if os.path.exists(tex_path):
                    with open(tex_path, 'r', encoding='utf-8') as tex_file:
                        content += tex_file.read() + '\n'
                else:
                    subsection_title = os.path.splitext(f)[0].replace('_', ' ').replace('-', ' ').title()
                    content += f"\\subsection{{{subsection_title}}}\n"

                with open(filepath, 'r', encoding='utf-8') as code_file:
                    code = code_file.read()
                    caption = f.replace('_', ' ').replace('-', ' ')
                    content += f"\\begin{{lstlisting}}[caption={{{caption}}}]\n{code}\n\\end{{lstlisting}}\n"
    return content

def get_macros(confpath):
    macros_content = ""
    macros_path = os.path.join(confpath, 'macros.tex')
    if os.path.exists(macros_path):
        with open(macros_path, 'r', encoding='utf-8') as f:
            macros_content = f.read()
    return macros_content

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument('--path')
    parser.add_argument('--confpath')
    args = parser.parse_args()

    with open('Notebook/scripts/notebook/notebook.tex', 'r', encoding='utf-8') as f:
        template = f.read()

    content = get_content(args.path)
    macros = get_macros(args.confpath)

    template = template.replace('%%CONTENT%%', content)
    template = template.replace('%%MACROS%%', macros)

    with open('notebook.tex', 'w', encoding='utf-8') as f:
        f.write(template)