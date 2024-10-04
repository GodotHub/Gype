from scripts.utils.file_utils import gde_json, cpp_generated_dir
from jinja2 import Environment, FileSystemLoader
from pathlib import Path
from scripts.utils.jinja_utils import camel_to_snake

def gen_classes_cpp():
    env = Environment(loader=FileSystemLoader(searchpath='./templates/classes'))
    cpp_template = env.get_template('classes.cpp.jinja')
    config_env(env)
    # for clazz in gde_json['classes']:
    clazz = gde_json['classes'][430]
    content = cpp_template.render({ 'clazz': clazz })
    with open(file=Path.joinpath(cpp_generated_dir, 'src', 'register', 'classes', f'register_{camel_to_snake(clazz['name'])}.cpp'), mode='w', encoding='utf8') as file:
        file.write(content)

def config_env(env: Environment):
    env.globals['camel_to_snake'] = camel_to_snake