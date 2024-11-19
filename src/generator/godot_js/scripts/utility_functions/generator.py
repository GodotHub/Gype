from scripts.utils.file_utils import gde_json, generated_root_dir
from jinja2 import Environment, FileSystemLoader
from pathlib import Path
from scripts.utils.jinja_utils import camel_to_snake, is_pod_type, is_enum, is_variant, connect_mutable_args

def gen_utility_functions():
    gen_utility_functions_cpp()
    gen_utility_functions_h()
    # gen_vararg_method()

def gen_utility_functions_cpp():
    env = Environment(loader=FileSystemLoader(searchpath='./templates/utility_functions'))
    cpp_template = env.get_template('utility_functions.cpp.jinja')
    config_env(env)
    utility_functions = gde_json['utility_functions']
    content = cpp_template.render({ 'utility_functions': utility_functions })
    with open(file=Path.joinpath(generated_root_dir, 'src', 'register', 'utility_functions', f'register_utility_functions.cpp'), mode='w', encoding='utf8') as file:
        file.write(content)

def gen_utility_functions_h():
    env = Environment(loader=FileSystemLoader(searchpath='./templates/utility_functions'))
    cpp_template = env.get_template('utility_functions.h.jinja')
    config_env(env)
    utility_functions = gde_json['utility_functions']
    content = cpp_template.render({ 'utility_functions': utility_functions })
    with open(file=Path.joinpath(generated_root_dir, 'include', 'register', 'utility_functions', f'register_utility_functions.h'), mode='w', encoding='utf8') as file:
        file.write(content)

def gen_vararg_method():
    env = Environment(loader=FileSystemLoader(searchpath='./templates/utility_functions'))
    cpp_template = env.get_template('vararg_method.h.jinja')
    config_env(env)
    utility_functions = gde_json['utility_functions']
    content = cpp_template.render({ 'utility_functions': utility_functions })
    with open(file=Path.joinpath(generated_root_dir, 'include', 'register', 'utility_functions', f'utility_functions_vararg_method.hpp'), mode='w', encoding='utf8') as file:
        file.write(content)

def config_env(env: Environment):
    env.globals['camel_to_snake'] = camel_to_snake
    env.globals['connect_mutable_args'] = connect_mutable_args