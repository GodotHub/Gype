from jinja2 import Environment, FileSystemLoader
from scripts.utils.file_utils import gde_json, workspace_dir, js_generated_dir
from scripts.utils.jinja_utils import variant_types, add_opaque, norm_op_name, to_js_type, camel_to_snake, get_module_path, to_gd_type, pod_types, is_variant, add_prefix_suffix

def __render__(env, template_name, dependcies, index):
    template = env.get_template(template_name)
    if gde_json['classes'][index]['name'] == 'Object':
        gde_json['classes'][index]['inherits'] = 'Wrapped'
    content = template.render({'gde_json': gde_json, 
                               'dependcies': dependcies,
                               'index': index})
    file_name = camel_to_snake(to_js_type(gde_json['classes'][index]['name']))
    with open('%s\\classes\\%s.js' % (js_generated_dir, file_name), mode='w') as f:
        f.write(content)

def dependencies_collect(clazz):
    dependencies = set()
    if clazz.get('inherits', None):
        dependencies.add(to_js_type(clazz['inherits']))
    for method in clazz.get('methods', []):
        _type = method.get('return_value', {}).get('type', None)
        _type = to_gd_type(_type)
        if _type and is_variant(_type):
            dependencies.add(_type)
        for arg in method.get('arguments', []):
            _type = arg.get('type', None)
            _type = to_gd_type(_type)
            if _type and is_variant(_type):
                dependencies.add(_type)
    dependencies.discard(clazz['name'])
    dependencies.add('StringName')
    # if clazz['name'] != 'ClassDB':
    #     dependencies.add('ClassDB')
    dependencies.add('Variant')
    return dependencies
            

def render_classes(precision):
    global __precision__
    __precision__ = precision
    env = Environment(loader=FileSystemLoader('%s/templates/classes' % workspace_dir))

    env.filters['add_opaque'] = add_opaque
    env.filters['norm_op_name'] = norm_op_name
    env.filters['add_prefix_suffix'] = add_prefix_suffix

    env.globals['camel_to_snake'] = camel_to_snake
    env.globals['get_module_path'] = get_module_path
    env.globals['to_js_type'] = to_js_type
    env.globals['variant_types'] = variant_types
    env.globals['to_gd_type'] = to_gd_type
    env.globals['pod_types'] = pod_types

    for i in range(0, 920):
        __render__(env, 'classes.jinja2', dependencies_collect(gde_json['classes'][i]), i)
        print('class %d finish' % i)