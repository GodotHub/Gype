from jinja2 import Environment, FileSystemLoader
from scripts.utils.file_utils import gde_json, workspace_dir, cpp_generated_dir
from scripts.utils.jinja_utils import variant_types, add_opaque, norm_op_name, to_js_type, camel_to_snake, get_module_path, to_gd_type

def __render__(env):
    template = env.get_template('register_enums.h.jinja2')
    content = template.render({'gde_json': gde_json})
    file_name = 'register_enums'
    with open('%s\\include\\register\\%s.h' % (cpp_generated_dir, file_name), mode='w') as f:
        f.write(content)

    template = env.get_template('register_enums.cpp.jinja2')
    content = template.render({'gde_json': gde_json})
    file_name = 'register_enums'
    with open('%s\\src\\register\\%s.cpp' % (cpp_generated_dir, file_name), mode='w') as f:
        f.write(content)
    

def render_enums():
    env = Environment(loader=FileSystemLoader('%s/templates/enums' % workspace_dir))

    env.filters['add_opaque'] = add_opaque
    env.filters['norm_op_name'] = norm_op_name

    env.globals['camel_to_snake'] = camel_to_snake
    env.globals['get_module_path'] = get_module_path
    env.globals['to_js_type'] = to_js_type
    env.globals['variant_types'] = variant_types
    env.globals['to_gd_type'] = to_gd_type

    __render__(env)