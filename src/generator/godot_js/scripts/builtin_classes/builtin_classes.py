from jinja2 import Environment, FileSystemLoader
from scripts.utils.file_utils import gde_json, workspace_dir, js_generated_dir
from scripts.utils.jinja_utils import variant_types, add_opaque, norm_op_name, to_js_type, camel_to_snake, get_module_path, is_variant, add_prefix_suffix
import os

__precision__ = 'float_64'

def __render__(env, template_name, dependcies, index):
    template = env.get_template(template_name)
    content = template.render({'gde_json': gde_json, 
                               'precision': __precision__, 
                               'dependcies': dependcies,
                               'index': index})
    file_name = camel_to_snake(to_js_type(gde_json['builtin_classes'][index]['name']))
    with open('%s\\variant\\%s.js' % (js_generated_dir, file_name), mode='w') as f:
        f.write(content)

def dependcies_collect(clazz):
    depencies = set()
    for ctor in clazz.get('constructors', []):
        for arg in ctor.get('arguments', []):
            _type = arg.get('type', None)
            if _type and is_variant(_type):
                depencies.add(to_js_type(_type))
    for method in clazz.get('methods', []):
        _type = method.get('return_type', None)
        if _type and is_variant(_type):
            depencies.add(to_js_type(_type))
        for arg in method.get('arguments', []):
            _type = arg.get('type', None)
            if _type and is_variant(_type):
                depencies.add(to_js_type(_type))
    depencies.add('Variant')
    depencies.discard(to_js_type(clazz['name']))
    return depencies

def render_builtin_classes(precision):
    global __precision__
    __precision__ = precision
    env = Environment(loader=FileSystemLoader('%s/templates/builtin_classes' % workspace_dir))

    env.filters['add_opaque'] = add_opaque
    env.filters['norm_op_name'] = norm_op_name
    env.filters['add_prefix_suffix'] = add_prefix_suffix
    env.globals['camel_to_snake'] = camel_to_snake
    env.globals['get_module_path'] = get_module_path
    env.globals['to_js_type'] = to_js_type
    env.globals['variant_types'] = variant_types

    for i in range(4, 38):
        __render__(env, 'builtin_classes.jinja2', dependcies_collect(gde_json['builtin_classes'][i]), i)