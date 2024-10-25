from scripts.utils.file_utils import gde_json, generated_root_dir
from jinja2 import Environment, FileSystemLoader
from pathlib import Path
from scripts.utils.jinja_utils import camel_to_snake, is_pod_type, get_enum_fullname, is_enum, is_variant

def gen_global_enum():
    gen_global_enum_cpp()
    gen_global_enum_h()

def gen_global_enum_cpp():
    env = Environment(loader=FileSystemLoader(searchpath='./templates/global_enum'))
    cpp_template = env.get_template('global_enum.cpp.jinja')
    config_env(env)
    content = cpp_template.render({'enums': gde_json['global_enums']})
    with open(file=Path.joinpath(generated_root_dir, 'src', 'register', 'global_enum', 'register_global_enum.cpp'), mode='w', encoding='utf8') as file:
        file.write(content)

def gen_global_enum_h():
    env = Environment(loader=FileSystemLoader(searchpath='./templates/global_enum'))
    cpp_template = env.get_template('global_enum.h.jinja')
    config_env(env)
    content = cpp_template.render()
    with open(file=Path.joinpath(generated_root_dir, 'include', 'register', 'global_enum', f'register_global_enum.h'), mode='w', encoding='utf8') as file:
        file.write(content)

def config_env(env: Environment):
    env.globals['camel_to_snake'] = camel_to_snake
