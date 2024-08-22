from jinja2 import Environment, FileSystemLoader
from scripts.utils.file_utils import gde_json, workspace_dir
from scripts.utils.jinja_utils import variant_types, add_opaque, norm_op_name, to_js_type

def render_gdstring():
    env = Environment(loader=FileSystemLoader('%s/templates/builtin_classes' % workspace_dir))

    env.filters['add_opaque'] = add_opaque
    env.filters['norm_op_name'] = norm_op_name
    env.globals['to_js_type'] = to_js_type
    env.globals['variant_types'] = variant_types

    template = env.get_template('gdstring.jinja')
    content = template.render({'gde_json': gde_json, 'variant_types': variant_types})
    with open('%s/render/gdstring.js' % workspace_dir, mode='w') as f:
        f.write(content)
