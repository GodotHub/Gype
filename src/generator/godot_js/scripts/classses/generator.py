from scripts.utils.file_utils import gde_json, generated_root_dir
from jinja2 import Environment, FileSystemLoader
from pathlib import Path
from scripts.utils.jinja_utils import camel_to_snake, is_pod_type, get_enum_fullname, is_enum, is_variant

def gen_classes():
    gen_classes_cpp()
    gen_classes_h()

def gen_classes_cpp():
    env = Environment(loader=FileSystemLoader(searchpath='./templates/classes'))
    cpp_template = env.get_template('classes.cpp.jinja')
    config_env(env)
    singletons = gde_json['singletons']
    for clazz in gde_json['classes']:
        dependency = collect_dependency(clazz)
        content = cpp_template.render({ 'clazz': clazz, 'dependency': dependency, 'singletons': singletons })
        with open(file=Path.joinpath(generated_root_dir, 'src', 'register', 'classes', f'register_{camel_to_snake(clazz['name'])}.cpp'), mode='w', encoding='utf8') as file:
            file.write(content)

def gen_classes_h():
    env = Environment(loader=FileSystemLoader(searchpath='./templates/classes'))
    cpp_template = env.get_template('classes.h.jinja')
    config_env(env)
    classes = gde_json['classes']
    content = cpp_template.render({ 'classes': classes })
    with open(file=Path.joinpath(generated_root_dir, 'include', 'register', 'classes', f'register_classes.h'), mode='w', encoding='utf8') as file:
        file.write(content)

def collect_dependency(clazz):
    dependency = set()
    for method in clazz.get('methods', []):
        if method.get('return_value',None) and not is_pod_type(method['return_value'].get('type', None)):
            dependency.add(method['return_value']['type'])
        if method.get('arguments', None):
            for arg in method['arguments']:
                dependency.add(arg['type'])
    dependency.add(clazz['name'])
    if clazz.get('inherits', None):
        dependency.add(clazz['inherits'])
    dependency = list(map(lambda e: e.split('::')[1] if e.startswith('typedarray::') else e, dependency))
    dependency = filter(lambda e: not is_enum(e) and not is_pod_type(e) and not is_variant(e) and e.count('*') == 0, dependency)
    dependency = list(map(lambda e: camel_to_snake(e), dependency))
    return dependency

def config_env(env: Environment):
    env.globals['camel_to_snake'] = camel_to_snake