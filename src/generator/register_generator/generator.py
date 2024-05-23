import json
from jinja2 import Environment, FileSystemLoader

root = '../../..'

with open('../json/extension_api.json', 'r', encoding='utf-8') as file:
    api = json.load(file)

env = Environment(loader=FileSystemLoader('./templates'))

def generator_utility_functions():
    template = env.get_template('utility_functions/template.h.jinja')
    utility_functions = api['utility_functions']
    render = template.render({'utility_functions': utility_functions})
    with open(root + '/include/gen/utility_functions/gen.h', 'w', encoding='utf-8') as file:
        file.writelines(render)

generator_utility_functions()