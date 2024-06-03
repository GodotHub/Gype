from jinja2 import FileSystemLoader, Environment
import json,sys
from pathlib import Path
from binding_generator import is_pod_type, is_included_struct_type, is_packed_array, get_enum_fullname

root = '../../..'
builtin_classes = []

def list_files_relative(directory):
    directory = Path(directory)
    relative_paths = [file.relative_to(directory) for file in directory.rglob('*') if file.is_file()]
    ''.count('visual_shader')
    return list(filter(lambda path: path.count('visual_shader_node') == 0, map(lambda path: str(path).replace('\\', '/'), relative_paths)))

def add_builtin_classes(data):
    global builtin_classes
    for clazz in data['builtin_classes']:
        if not is_pod_type(clazz['name']):
            builtin_classes.append(clazz['name'])

def generate_qjspp_h(env, data):
    generate_godot_headers_h(env)
    add_builtin_classes(data)
    template = env.get_template('qjspp.h.jinja')
    render = template.render({ 'data': data, 'builtin_classes': builtin_classes })
    with open(f'{root}/quickjspp/include/qjspp.hpp', 'w') as file:
        file.write(render)

def generate_godot_headers_h(env):
    files = list_files_relative(f'{root}/godot-cpp/include')
    files.extend(list_files_relative(f'{root}/godot-cpp/gen/include'))
    template = env.get_template('godot_headers.h.jinja')
    render = template.render({ 'includes': files })
    with open(f'{root}/quickjspp/include/godot_headers.hpp', 'w') as file:
        file.write(render)

if __name__ == '__main__':
    env = Environment(loader=FileSystemLoader('templates'), trim_blocks=True, lstrip_blocks=True)
    env.globals['is_pod_type'] = is_pod_type
    env.globals['is_included_struct_type'] = is_included_struct_type
    env.globals['is_packed_array'] = is_packed_array
    env.filters['get_enum_fullname'] = get_enum_fullname
    with open(root + '/src/generator/extension_api.json', 'r', encoding = 'utf-8') as file:
        data = json.loads(file.read())
    generate_qjspp_h(env, data)