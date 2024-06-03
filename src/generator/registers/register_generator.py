import json
from jinja2 import FileSystemLoader, Environment
import sys
from pathlib import Path
from binding_generator import is_pod_type, is_included_type, is_packed_array, is_enum, is_bitfield, get_enum_fullname
import re
sys.setrecursionlimit(100)

cur_num = 0
root = '../../..'
api_file = '../extension_api.json'
builtin_classes = []
engine_classes = {}
refcounted_classes = {}
converter = {
    'int': 'int64_t',
    'uint32_t': 'uint32_t',
    'uint64_t': 'uint64_t',
    'float': 'real_t',
    'double': 'double',
    'bool': 'bool',
    'void': 'void',
}

with open(api_file, 'r', encoding='utf-8') as file:
    data = json.loads(file.read())

def is_refcounted(type_name):
    return type_name in engine_classes and engine_classes[type_name]

def init_engine_classes():
    global data
    for class_api in data["classes"]:
        # Generate code for the ClassDB singleton under a different name.
        if class_api["name"] == "ClassDB":
            class_api["name"] = "ClassDBSingleton"
            class_api["alias_for"] = "ClassDB"
        engine_classes[class_api["name"]] = class_api["is_refcounted"]
    for native_struct in data["native_structures"]:
        if native_struct["name"] == "ObjectID":
            continue
        engine_classes[native_struct["name"]] = False

def init_builtin_classes():
    global builtin_classes
    global data
    for builtin_api in data["builtin_classes"]:
        if is_pod_type(builtin_api["name"]):
            continue
        builtin_classes.append(builtin_api["name"])

def regex_test(value, pattern):
    return bool(re.search(pattern, value))

def add_arr_surfix(gen, surfix):
    arr = list(gen)
    for i in range(len(arr)):
        arr[i] += surfix
    return arr

def extract_property(text):
    # 定义正则表达式模式
    pattern = re.compile(r'\bget_(\w+)\b|\bset_(\w+)\b')
    # 使用re.findall提取所有匹配项
    matches = re.findall(pattern, text)
    return '' if len(matches) == 0 else matches[0][0]

def get_property_from_method(methods):
    prop = {}
    method_names = map(lambda m: m['name'], methods)
    getters = list(filter(lambda name: regex_test(name, r'^(get)_(\w+)'), method_names))
    setters = list(filter(lambda name: regex_test(name, r'^(set)_(\w+)'), method_names))
    for method in methods:
        prop_name = extract_property(method['name'])
        if prop_name == '':
            continue
        if prop.get(prop_name, None) is None:
            prop[prop_name] = {}
        if method['name'] in getters:
            prop[prop_name]['getter'] = method['name']
        elif method['name'] in setters:
            prop[prop_name]['setter'] = method['name']
    return prop

def is_engine_class(type_name):
    global engine_classes
    return type_name == "Object" or type_name in engine_classes

def convert_gen_paramter_type(gen):
    global builtin_classes
    arr = list(gen)
    if len(builtin_classes) == 0:
        with open(api_file, 'r', encoding='utf-8') as file:
            data = json.loads(file.read())
        builtin_classes = list(map(lambda e: e['name'], data['builtin_classes']))
    for i in range(len(arr)):
        if is_variant(arr[i]):
            arr[i] = 'const ' + arr[i] + ' &'
        elif is_pod_type(arr[i]):
            arr[i] = converter[arr[i]]
        else:
            arr[i] += ' *'
    return arr

def increment_num(name):
    global cur_num
    cur_num = cur_num + 1
    return name + '_' + str(cur_num)

def flush_letter():
    global cur_num
    cur_num = 0
    return ''

def convert_paramter_type(types, is_vararg):
    def _convert(t):
        if is_pod_type(t):
            return converter[t]
        elif is_variant(t):
            return f'const {t} &'
        elif is_enum(t):
            return get_enum_fullname(t).replace('.', '::')
        elif t.rfind('&') != -1:
            at = t.removesuffix('&')
            if (is_pod_type(at)):
                return f'const {converter[at]}&'
            else:
                return f'const {at}&'
        elif t.startswith('_'):
            return t.removeprefix('_')
        else:
            return f'{t} *'
    params = list(map(_convert, types))
    if is_vararg:
        params.append('rest<Variant> args')
    return params

def convert_types(types, is_vararg):
    def _convert(t):
        t = t.get('meta', t['type'])
        if is_pod_type(t):
            if t == 'float':
                return 'double'
            elif t == 'int':
                return 'int64_t'
            return t
        elif is_variant(t):
            if t.count('typedarray::') > 0:
                return f'const TypedArray<{t.removeprefix('typedarray::')}> &'
            else:
                return f'const {t} &'
        elif is_enum(t):
            return get_enum_fullname(t).replace('.', '::')
        elif t.rfind('&') != -1:
            at = t.removesuffix('&')
            if (is_pod_type(at)):
                return f'const {converter[at]}&'
            else:
                return f'const {at}&'
        elif is_refcounted(t):
            return f'const Ref<{t}> &'
        elif t.startswith('_'):
            return t.removeprefix('_')
        elif t.count('*') > 0:
            return t
        else:
            return f'{t} *'
    params = list(map(_convert, types))
    if is_vararg:
        params.append('rest<Variant> args')
    return params

def convert_type(t):
    if is_pod_type(t):
        if type == 'float':
            return 'double'
        elif type == 'int':
            return 'int64_t'
        return t
    elif is_variant(t):
        return f'const {t} &'
    elif is_enum(t):
        return get_enum_fullname(t).replace('.', '::')
    elif t.rfind('&') != -1:
        at = t.removesuffix('&')
        if (is_pod_type(at)):
            return f'const {converter[at]}&'
        else:
            return f'const {at}&'
    elif is_refcounted(t):
        return f'Ref<{t}> &'
    elif t.startswith('_'):
        return t.removeprefix('_')
    elif t.count('*') > 0:
        return t
    else:
        return f'{t} *'

def convert_return_type_t(type):
    if is_pod_type(type):
        return converter[type]
    elif is_variant(type):
        return type
    elif is_enum(type):
        return get_enum_fullname(type).replace('.', '::')
    elif type.rfind('&') != -1:
        at = type.removesuffix('&')
        if (is_pod_type(at)):
            return f'const {converter[at]}&'
        else:
            return f'const {at}&'
    
    elif type.startswith('_'):
        return type.removeprefix('_')
    else:
        return f'{type} *'
    
def convert_return_type(type):
    if is_pod_type(type):
        if type == 'float':
            return 'double'
        elif type == 'int':
            return 'int64_t'
        return type
    elif is_variant(type):
        return type
    elif is_enum(type):
        return get_enum_fullname(type).replace('.', '::')
    elif type.rfind('&') != -1:
        at = type.removesuffix('&')
        if (is_pod_type(at)):
            return f'const {converter[at]}&'
        else:
            return f'const {at}&'
    elif is_refcounted(type):
        return f'Ref<{type}>'
    elif type.startswith('_'):
        return type.removeprefix('_')
    elif type.count('*') > 0:
        return type
    else:
        return f'{type} *'

def is_variant(type_name):
    return (
        type_name == "Variant"
        or type_name in builtin_classes
        or type_name == "Nil"
        or type_name.startswith("typedarray::")
    )

def typedarray_convert(type):
    type = type.removeprefix('typedarray::')
    return f'TypedArray<{type}>'

def build_tree(classes, clazz):
    children = clazz.get('children', {})
    for clz in classes:
        if clz.get('inherits', None): 
            if clz['inherits'] == clazz['name']:
                children[clz['name']] = clz
                clazz['children'] = children
                build_tree(classes, clz)

def generate_utility_functions_cpp(env, data):
    template = env.get_template('./utility_functions/utility_functions.cpp.jinja')
    render = template.render({ 'utility_functions': data, 'ignore': ['typeof'] })
    with open(root + '/src/register/register_utility_functions.cpp', 'w') as file:
        file.write(render)

def generate_builtin_classes_h(env, data):
    template = env.get_template('./builtin_classes/builtin_classes.h.jinja')
    render = template.render({ 'builtin_classes': data })
    with open(root + '/include/register/register_builtin_classes.h', 'w') as file:
        file.write(render)

def generate_builtin_classes_cpp(env, data):
    for clazz in data:
        if is_pod_type(clazz['name']):
            continue
        template = env.get_template('./builtin_classes/builtin_classes.cpp.jinja')
        render = template.render({ 'clazz': clazz })
        with open(f'{root}/src/register/register_builtin_classes_{clazz['name']}.cpp', 'w') as file:
            file.write(render)

def generate_classes_h(env, data):
    template = env.get_template('./classes/classes.h.jinja')
    render = template.render({ 'classes': data })
    with open(root + '/include/register/register_classes.h', 'w') as file:
        file.write(render)

def generate_classes_cpp(env, data):
    obj = data[422]
    node = data[413]
    node2d = data[414]
    node3d = data[415]
    node['mudule'] = 'System'
    node['mudule'] = 'Node'
    node2d['mudule'] = 'Node2D'
    node3d['mudule'] = 'Node3D'
    build_tree(data, obj)
    
    def _generate(clazz):
        if clazz['is_instantiable']:
            template = env.get_template('./classes/classes.cpp.jinja')
            render = template.render({ 'clazz': clazz })
            with open(f'{root}/src/register/register_classes_{clazz['name']}.cpp', 'w') as file:
                file.write(render)

    def _generate_object(clazz):
        _generate(clazz)
        children = clazz.get('children', None)
        if children:
            for child in children.values():
                if child['name'] in ['Node', 'RefCounted']:
                    continue
                child['module'] = 'System'
                _generate_object(child)

    def _generate_node(clazz):
        _generate(clazz)
        children = clazz.get('children', None)
        if children:
            for child in children.values():
                if child['name'] in ['Node3D', 'CanvasItem']:
                    continue
                child['module'] = 'Node'
                _generate_node(child)

    def _generate_node2d(clazz):
        _generate(clazz)
        children = clazz.get('children', None)
        if children:
            for child in children.values():
                child['module'] = 'Node2D'
                _generate_node2d(child)

    def _generate_node3d(clazz):
        _generate(clazz)
        children = clazz.get('children', None)
        if children:
            for child in children.values():
                child['module'] = 'Node3D'
                _generate_node3d(child)

    _generate_object(obj)
    _generate_node(node)
    _generate_node2d(node2d)
    _generate_node3d(node3d)

def generate_types_cpp(env, data):
    template = env.get_template('./types/register_types.cpp.jinja')
    render = template.render({ 'builtin_classes': filter(lambda clazz: not is_pod_type(clazz['name']), data['builtin_classes']) })
    with open(f'{root}/src/register/register_types.cpp', 'w') as file:
        file.write(render)

if __name__ == '__main__':
    env = Environment(loader=FileSystemLoader('templates'), trim_blocks=True, lstrip_blocks=True)
    env.globals['flush_letter'] = flush_letter
    env.globals['is_pod_type'] = is_pod_type
    env.globals['is_refcounted'] = is_refcounted
    env.globals['regex_test'] = regex_test
    env.globals['get_property_from_method'] = get_property_from_method
    env.filters['add_arr_surfix'] = add_arr_surfix
    env.filters['convert_gen_paramter_type'] = convert_gen_paramter_type
    env.filters['increment_num'] = increment_num
    env.filters['convert_paramter_type'] = convert_paramter_type
    env.filters['convert_return_type_t'] = convert_return_type_t
    env.filters['convert_return_type'] = convert_return_type
    env.filters['convert_types'] = convert_types
    env.filters['convert_type'] = convert_type
    env.filters['typedarray_convert'] = typedarray_convert
    init_engine_classes()
    init_builtin_classes()
    generate_utility_functions_cpp(env, data['utility_functions'])
    generate_builtin_classes_h(env, data['builtin_classes'])
    generate_builtin_classes_cpp(env, data['builtin_classes'])
    generate_classes_h(env, data['classes'])
    generate_classes_cpp(env, data['classes'])
    generate_types_cpp(env, data)