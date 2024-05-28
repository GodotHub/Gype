import json
from jinja2 import FileSystemLoader, Environment

root = '../../..'

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

def generate_utility_functions_h(data, env):
    template = env.get_template('./utility_functions/utility_functions.h.jinja')
    render = template.render({ 'utility_functions': data })
    with open(root + '/include/gen/variant/utility_functions.h', 'w') as file:
        file.write(render)

def generate_utility_functions(data):
    utility_functions = data['utility_functions']
    env = Environment(loader=FileSystemLoader('templates'))
    generate_utility_functions_h(utility_functions, env)

with open('./extension_api.json', 'r', encoding='utf-8') as file:
    data = json.loads(file.read())

# generate_utility_functions(data)