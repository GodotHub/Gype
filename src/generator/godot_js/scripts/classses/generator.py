from scripts.utils.file_utils import gde_json, generated_root_dir
from jinja2 import Environment, FileSystemLoader
from pathlib import Path
from scripts.utils.jinja_utils import camel_to_snake, is_pod_type, get_enum_fullname, is_enum, is_variant, connect_mutable_args, has_vararg_method

def gen_classes():
    sort()
    gen_classes_cpp()
    gen_classes_h()
    gen_classes_register()
    gen_singleton_cpp()
    gen_vararg_method()

def gen_classes_cpp():
    env = Environment(loader=FileSystemLoader(searchpath='./templates/classes'))
    cpp_template = env.get_template('classes.cpp.jinja')
    config_env(env)
    singletons = gde_json['singletons']
    for clazz in gde_json['classes']:
        if clazz['name'] not in map(lambda e: e['type'], singletons):
            dependency = collect_dependency(clazz)
            content = cpp_template.render({ 'clazz': clazz, 'dependency': dependency, 'singletons': singletons })
            with open(file=Path.joinpath(generated_root_dir, 'src', 'register', 'classes', f'register_{camel_to_snake(clazz['name'])}.cpp'), mode='w', encoding='utf8') as file:
                file.write(content)

def gen_singleton_cpp():
    env = Environment(loader=FileSystemLoader(searchpath='./templates/classes'))
    cpp_template = env.get_template('singleton.cpp.jinja')
    config_env(env)
    singletons = gde_json['singletons']
    for clazz in gde_json['classes']:
        if clazz['name'] in map(lambda e: e['type'], singletons):
            dependency = collect_dependency(clazz)
            content = cpp_template.render({ 'clazz': clazz, 'dependency': dependency, 'singletons': singletons })
            with open(file=Path.joinpath(generated_root_dir, 'src', 'register', 'classes', f'register_{camel_to_snake(clazz['name'])}.cpp'), mode='w', encoding='utf8') as file:
                file.write(content)

def gen_vararg_method():
    env = Environment(loader=FileSystemLoader(searchpath='./templates/classes'))
    cpp_template = env.get_template('vararg_method.h.jinja')
    config_env(env)
    for clazz in gde_json['classes']:
        if has_vararg_method(clazz):
            dependency = collect_dependency(clazz)
            content = cpp_template.render({ 'clazz': clazz, 'dependency': dependency })
            with open(file=Path.joinpath(generated_root_dir, 'include', 'register', 'classes', f'{camel_to_snake(clazz['name'])}_vararg_method.hpp'), mode='w', encoding='utf8') as file:
                file.write(content)

def gen_classes_h():
    env = Environment(loader=FileSystemLoader(searchpath='./templates/classes'))
    cpp_template = env.get_template('classes.h.jinja')
    config_env(env)
    classes = gde_json['classes']
    content = cpp_template.render({ 'classes': classes })
    with open(file=Path.joinpath(generated_root_dir, 'include', 'register', 'classes', f'register_classes.h'), mode='w', encoding='utf8') as file:
        file.write(content)

def gen_classes_register():
    env = Environment(loader=FileSystemLoader(searchpath='./templates/classes'))
    cpp_template = env.get_template('register_classes.cpp.jinja')
    config_env(env)
    classes = gde_json['classes']
    content = cpp_template.render({ 'classes': classes })
    with open(file=Path.joinpath(generated_root_dir, 'src', 'register', 'classes', f'register_classes.cpp'), mode='w', encoding='utf8') as file:
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

def sort(base = gde_json['classes'][439], classes = gde_json['classes'], sets = set()):
    for clazz in classes:
        if base['name'] == clazz['name']:
            continue
        inherits = clazz.get('inherits', None)
        base['children'] = base.get('children', [])
        if inherits == base['name']:
            base['children'].append(clazz)
            sort(clazz)

def register_classes():
    def _process(ret = '',clazz=gde_json['classes'][439]):
        ret = f'\tregister_{ camel_to_snake(clazz['name']) }();\n'
        for subclass in clazz['children']:
            ret += _process(ret,subclass)
        return ret
    ret = _process()
    return ret

def config_env(env: Environment):
    env.globals['camel_to_snake'] = camel_to_snake
    env.globals['register_classes'] = register_classes
    env.globals['connect_mutable_args'] = connect_mutable_args