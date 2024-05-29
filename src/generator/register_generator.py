import json
from jinja2 import FileSystemLoader, Environment

root = '../..'
api_file = root + '/godot-cpp/gdextension/extension_api.json'

def is_pod_type(type_name):
    """
    Those are types for which no class should be generated.
    """
    return type_name in [
        "Nil",
        "void",
        "bool",
        "real_t",
        "float",
        "double",
        "int",
        "int8_t",
        "uint8_t",
        "int16_t",
        "uint16_t",
        "int32_t",
        "int64_t",
        "uint32_t",
        "uint64_t",
    ]


def generate_utility_functions_cpp(env, data):
    template = env.get_template('./utility_functions/utility_functions.cpp.jinja')
    render = template.render({ 'utility_functions': data, 'ignore': ['typeof'] })
    with open(root + '/src/register/register_utility_functions.cpp', 'w') as file:
        file.write(render)

def generate_utility_functions(env, data):
    generate_utility_functions_cpp(env, data['utility_functions'])

with open(api_file, 'r', encoding='utf-8') as file:
    data = json.loads(file.read())

env = Environment(loader=FileSystemLoader('templates'))
generate_utility_functions(env, data)