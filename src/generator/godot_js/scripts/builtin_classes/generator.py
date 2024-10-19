from scripts.utils.file_utils import gde_json, generated_root_dir
from jinja2 import Environment, FileSystemLoader
from pathlib import Path
from scripts.utils.jinja_utils import camel_to_snake, is_pod_type, get_enum_fullname, is_enum, is_variant,put_args,variant_type_cond

def gen_builtin_classes():
    gen_builtin_classes_cpp()
    gen_builtin_classes_h()
    gen_builtin_classes_register()

def gen_builtin_classes_cpp():
    env = Environment(loader=FileSystemLoader(searchpath='./templates/builtin_classes'))
    cpp_template = env.get_template('builtin_classes.cpp.jinja')
    config_env(env)
    builtin_class = list(filter(lambda e: not is_pod_type(e['name']), gde_json['builtin_classes']))
    for clazz in builtin_class:
        content = cpp_template.render({ 'clazz': clazz  })
        with open(file=Path.joinpath(generated_root_dir, 'src', 'register', 'builtin_classes', f'register_{camel_to_snake(clazz['name'])}.cpp'), mode='w', encoding='utf8') as file:
            file.write(content)

def gen_builtin_classes_h():
    env = Environment(loader=FileSystemLoader(searchpath='./templates/builtin_classes'))
    cpp_template = env.get_template('builtin_classes.h.jinja')
    config_env(env)
    builtin_class = list(filter(lambda e: not is_pod_type(e['name']), gde_json['builtin_classes']))
    content = cpp_template.render({ 'classes': builtin_class  })
    with open(file=Path.joinpath(generated_root_dir, 'include', 'register', 'builtin_classes', f'register_builtin_classes.h'), mode='w', encoding='utf8') as file:
        file.write(content)

def gen_builtin_classes_register():
    env = Environment(loader=FileSystemLoader(searchpath='./templates/builtin_classes'))
    cpp_template = env.get_template('register_builtin_classes.cpp.jinja')
    config_env(env)
    builtin_class = list(filter(lambda e: not is_pod_type(e['name']), gde_json['builtin_classes']))
    content = cpp_template.render({ 'classes': builtin_class })
    with open(file=Path.joinpath(generated_root_dir, 'src', 'register', 'builtin_classes', f'register_builtin_classes.cpp'), mode='w', encoding='utf8') as file:
        file.write(content)

def config_env(env: Environment):
    env.globals['camel_to_snake'] = camel_to_snake
    env.globals['put_args'] = put_args
    env.globals['variant_type_cond'] = variant_type_cond
