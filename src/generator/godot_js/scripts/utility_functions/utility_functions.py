from jinja2 import Environment, FileSystemLoader
from scripts.utils.file_utils import gde_json, workspace_dir, js_generated_dir
from scripts.utils.jinja_utils import variant_types, add_opaque, norm_op_name, to_js_type, camel_to_snake, get_module_path, to_gd_type, pod_types
import os

def __render__(env, template_name):
    template = env.get_template(template_name)
    content = template.render({'gde_json': gde_json, 'func_types': get_func_types()})
    file_name = 'utility_functions'
    with open('%s\\variant\\%s.js' % (js_generated_dir, file_name), mode='w') as f:
        f.write(content)

def get_func_types():
    types = set()
    for func in gde_json['utility_functions']:
        types.add(func['category'])
    return types

def render_functions():
    env = Environment(loader=FileSystemLoader('%s/templates/utility_functions' % workspace_dir))

    env.filters['add_opaque'] = add_opaque
    env.filters['norm_op_name'] = norm_op_name

    env.globals['camel_to_snake'] = camel_to_snake
    env.globals['get_module_path'] = get_module_path
    env.globals['to_js_type'] = to_js_type
    env.globals['variant_types'] = variant_types
    env.globals['to_gd_type'] = to_gd_type
    env.globals['pod_types'] = pod_types

    __render__(env, 'utility_functions.jinja2')