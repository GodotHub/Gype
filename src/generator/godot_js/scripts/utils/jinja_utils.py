import re
from scripts.utils.file_utils import gde_json

def variant_types():
    vt = map(lambda e: e['name'], gde_json['builtin_classes'])
    pt = pod_types()
    ret = list(filter(lambda e: e not in pt, vt))
    ret.append('Variant')
    return ret

def to_js_type(gd_type):
    if gd_type == 'String':
        return 'GDString'
    else:
        return gd_type
    
def to_c_type(gd_type):
    if gd_type == 'GDString':
        return 'String'
    else:
        return gd_type


def pod_types():
    return [
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

def operator_id_name(op):
    op_id_map = {
        "==": "equal",
        "!=": "not_equal",
        "<": "less",
        "<=": "less_equal",
        ">": "greater",
        ">=": "greater_equal",
        "+": "add",
        "-": "subtract",
        "*": "multiply",
        "/": "divide",
        "unary-": "negate",
        "unary+": "positive",
        "%": "module",
        "**": "power",
        "<<": "shift_left",
        ">>": "shift_right",
        "&": "bit_and",
        "|": "bit_or",
        "^": "bit_xor",
        "~": "bit_negate",
        "and": "and",
        "or": "or",
        "xor": "xor",
        "not": "not",
        "and": "and",
        "in": "in",
    }
    return op_id_map[op]

GDExtensionVariantType = [
    'GDEXTENSION_VARIANT_TYPE_NIL',

    'GDEXTENSION_VARIANT_TYPE_BOOL',
    'GDEXTENSION_VARIANT_TYPE_INT',
    'GDEXTENSION_VARIANT_TYPE_FLOAT',
    'GDEXTENSION_VARIANT_TYPE_STRING',

    'GDEXTENSION_VARIANT_TYPE_VECTOR2',
    'GDEXTENSION_VARIANT_TYPE_VECTOR2I',
    'GDEXTENSION_VARIANT_TYPE_RECT2',
    'GDEXTENSION_VARIANT_TYPE_RECT2I',
    'GDEXTENSION_VARIANT_TYPE_VECTOR3',
    'GDEXTENSION_VARIANT_TYPE_VECTOR3I',
    'GDEXTENSION_VARIANT_TYPE_TRANSFORM2D',
    'GDEXTENSION_VARIANT_TYPE_VECTOR4',
    'GDEXTENSION_VARIANT_TYPE_VECTOR4I',
    'GDEXTENSION_VARIANT_TYPE_PLANE',
    'GDEXTENSION_VARIANT_TYPE_QUATERNION',
    'GDEXTENSION_VARIANT_TYPE_AABB',
    'GDEXTENSION_VARIANT_TYPE_BASIS',
    'GDEXTENSION_VARIANT_TYPE_TRANSFORM3D',
    'GDEXTENSION_VARIANT_TYPE_PROJECTION',

    'GDEXTENSION_VARIANT_TYPE_COLOR',
    'GDEXTENSION_VARIANT_TYPE_STRING_NAME',
    'GDEXTENSION_VARIANT_TYPE_NODE_PATH',
    'GDEXTENSION_VARIANT_TYPE_RID',
    'GDEXTENSION_VARIANT_TYPE_OBJECT',
    'GDEXTENSION_VARIANT_TYPE_CALLABLE',
    'GDEXTENSION_VARIANT_TYPE_SIGNAL',
    'GDEXTENSION_VARIANT_TYPE_DICTIONARY',
    'GDEXTENSION_VARIANT_TYPE_ARRAY',

    'GDEXTENSION_VARIANT_TYPE_PACKED_BYTE_ARRAY',
    'GDEXTENSION_VARIANT_TYPE_PACKED_INT32_ARRAY',
    'GDEXTENSION_VARIANT_TYPE_PACKED_INT64_ARRAY',
    'GDEXTENSION_VARIANT_TYPE_PACKED_FLOAT32_ARRAY',
    'GDEXTENSION_VARIANT_TYPE_PACKED_FLOAT64_ARRAY',
    'GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY',
    'GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR2_ARRAY',
    'GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR3_ARRAY',
    'GDEXTENSION_VARIANT_TYPE_PACKED_COLOR_ARRAY',
    'GDEXTENSION_VARIANT_TYPE_PACKED_VECTOR4_ARRAY',

    'GDEXTENSION_VARIANT_TYPE_VARIANT_MAX'
]

def add_opaque(args):
    v_types = variant_types()
    tmp = []
    if args:
        for i in range(len(args)):
            if args[i]['type'] in v_types:
                tmp.append('%s.opaque' % args[i]['name'])
            else:
                tmp.append(args[i]['name'])
    return tmp

def norm_op_name(ops):
    ret = []
    for op in ops:
        tmp = operator_id_name(op['name'])
        tmp = 'operator_%s_%s' % (operator_id_name(op['name']), op['right_type'] if op.get('right_type') else '')
        ret.append(tmp)
    return ret

def camel_to_snake(x):
    return re.sub(r'(?<=[a-z])[A-Z]|(?<!^)[A-Z](?=[a-z])', r'_\g<0>', x).lower()

def get_module_path(class_name):
    if to_c_type(class_name) in variant_types():
        return 'src/js_godot/variant/%s' % camel_to_snake(class_name)
    else:
        raise Exception()