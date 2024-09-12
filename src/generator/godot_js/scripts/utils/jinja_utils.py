import re
from scripts.utils.file_utils import gde_json

def is_variant(t):
    return t in variant_types()

def variant_types():
    vt = map(lambda e: e['name'], gde_json['builtin_classes'])
    pt = pod_types()
    ret = list(filter(lambda e: e not in pt, vt))
    ret.append('Variant')
    return ret

def to_js_type(gd_type):
    if gd_type == 'String':
        return 'GDString'
    elif gd_type == 'Object':
        return 'GodotObject'
    elif gd_type =='Array':
        return 'GDArray'
    elif is_pod_type(gd_type):
        if gd_type == 'float' or gd_type == 'int':
            return 'number'
        else:
            return gd_type
    else:
        return gd_type
    
def to_gd_type(gd_type):
    if not gd_type:
        return None
    if gd_type == 'GDString':
        return 'String'
    elif gd_type.find('typedarray::') != -1:
        return 'Array'
    elif gd_type == 'GDArray':
        return 'Array'
    elif gd_type.find('enum::'):
        return 'int'
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

def is_pod_type(t):
    return t in pod_types()

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

def type_index():
    return {
    'NIL': 0,

    'BOOL': 1,
    'INT': 2,
    'FLOAT': 3,
    'STRING': 4,

    'VECTOR2': 5,
    'VECTOR2I': 6,
    'RECT2': 7,
    'RECT2I': 8,
    'VECTOR3': 9,
    'VECTOR3I': 10,
    'TRANSFORM2D': 11,
    'VECTOR4': 12,
    'VECTOR4I': 13,
    'PLANE': 14,
    'QUATERNION': 15,
    'AABB': 16,
    'BASIS': 17,
    'TRANSFORM3D': 18,
    'PROJECTION': 19,

    'COLOR': 20,
    'STRING_NAME': 21,
    'NODE_PATH': 22,
    'RID': 23,
    'OBJECT': 24,
    'CALLABLE': 25,
    'SIGNAL': 26,
    'DICTIONARY': 27,
    'ARRAY': 28,

    'PACKED_BYTE_ARRAY': 29,
    'PACKED_INT32_ARRAY': 30,
    'PACKED_INT64_ARRAY': 31,
    'PACKED_FLOAT32_ARRAY': 32,
    'PACKED_FLOAT64_ARRAY': 33,
    'PACKED_STRING_ARRAY': 34,
    'PACKED_VECTOR2_ARRAY': 35,
    'PACKED_VECTOR3_ARRAY': 36,
    'PACKED_COLOR_ARRAY': 37,
    'PACKED_VECTOR4_ARRAY': 38,

    'VARIANT': 39,
  }

def get_type_index(t):
    return type_index()[t]

def add_prefix_suffix(values, prefix='', suffix=''):
    _values = list(values)
    for i in range(0, len(_values)):
        _values[i] = (f"{prefix}{_values[i]}{suffix}")
    return _values

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
    if class_name in variant_types():
        return '@js_godot/variant/%s' % camel_to_snake(to_js_type(class_name))
    elif class_name.find('typedarray::') != -1:
        return '@js_godot/variant/gd_array'
    else:
        return '@js_godot/classes/%s' % camel_to_snake(to_js_type(class_name))
    