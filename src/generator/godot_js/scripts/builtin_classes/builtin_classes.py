from jinja2 import Environment, FileSystemLoader
from scripts.utils.file_utils import gde_json, workspace_dir
from scripts.utils.jinja_utils import variant_types, add_opaque, norm_op_name, to_js_type, camel_to_snake, get_module_path, GDExtensionVariantType

__precision__ = 'float_64'

def __render__(env, template_name, dependcies, index):
    template = env.get_template(template_name)
    content = template.render({'gde_json': gde_json, 
                               'precision': __precision__, 
                               'dependcies': dependcies,
                               'GDExtensionVariantType': GDExtensionVariantType[index], 
                               'index': index})
    file_name = camel_to_snake(to_js_type(gde_json['builtin_classes'][index]['name']))
    with open('%s/render/%s.js' % (workspace_dir, file_name), mode='w') as f:
        f.write(content)
    

def render_builtin_classes(precision):
    global __precision__
    __precision__ = precision
    env = Environment(loader=FileSystemLoader('%s/templates/builtin_classes' % workspace_dir))

    env.filters['add_opaque'] = add_opaque
    env.filters['norm_op_name'] = norm_op_name
    env.globals['camel_to_snake'] = camel_to_snake
    env.globals['get_module_path'] = get_module_path
    env.globals['to_js_type'] = to_js_type
    env.globals['variant_types'] = variant_types

    __render__(env, 'builtin_classes.jinja2', ['StringName', 'NodePath', 'Variant'], 4)
    __render__(env, 'builtin_classes.jinja2', ['GDString', 'NodePath', 'Variant'], 21)
    __render__(env, 'builtin_classes.jinja2', ['StringName', 'GDString', 'Variant'], 22)