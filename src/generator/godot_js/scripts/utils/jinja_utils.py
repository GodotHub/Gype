import re
from scripts.utils.file_utils import gde_json

def is_variant(type_name):
    return (
        type_name == "Variant"
        or type_name in map(lambda e: e['name'], gde_json['builtin_classes'])
        or type_name == "Nil"
        or type_name.startswith("typedarray::")
    )

def variant_types():
    vt = map(lambda e: e['name'], gde_json['builtin_classes'])
    pt = pod_types()
    ret = list(filter(lambda e: e not in pt, vt))
    ret.append('Variant')
    return ret

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

def camel_to_snake(name):
    name = re.sub("(.)([A-Z][a-z]+)", r"\1_\2", name)
    name = re.sub("([a-z0-9])([A-Z])", r"\1_\2", name)
    return name.replace("1_D", "1D").replace("2_D", "2D").replace("3_D", "3D").lower()

def is_enum(type_name):
    return type_name.startswith("enum::") or type_name.startswith("bitfield::")

def is_bitfield(type_name):
    return type_name.startswith("bitfield::")

def get_enum_class(enum_name: str):
    if "." in enum_name:
        if is_bitfield(enum_name):
            return enum_name.replace("bitfield::", "").split(".")[0]
        else:
            return enum_name.replace("enum::", "").split(".")[0]
    else:
        return "GlobalConstants"


def get_enum_fullname(enum_name: str):
    if is_bitfield(enum_name):
        return enum_name.replace("bitfield::", "BitField<") + ">"
    else:
        return enum_name.replace("enum::", "")


def get_enum_name(enum_name: str):
    if is_bitfield(enum_name):
        return enum_name.replace("bitfield::", "").split(".")[-1]
    else:
        return enum_name.replace("enum::", "").split(".")[-1]

# ---给内置类使用
def put_args(arguments):
    def mapper(pair):
        index, arg = pair
        return 'v'+str(index)
    if (len(arguments) > 0):
        l = list(map(mapper, enumerate(arguments)))
        return ','.join(l)
    else:
        return ''

def variant_type_cond(arguments):
    arr = []
    for i in range(len(arguments)):
        vtype = camel_to_snake(arguments[i]['type']).upper()
        if vtype == 'FLOAT':
            arr.append(f'(Variant(argv[{i}]).get_type() == Variant::Type::FLOAT||Variant(argv[{i}]).get_type() == Variant::Type::INT)')
        else:
            arr.append(f'Variant(argv[{i}]).get_type() == Variant::Type::{vtype}')
    if (len(arr) > 0):
        return '&&' + '&&'.join(arr)
    else:
        return ''
# ---

# ---ts声明使用
def is_number(arg_type):
    return arg_type == 'float' or arg_type == 'int'

def is_bool(arg_type):
    return arg_type == 'bool'

def connect_args(args):
    def mapper(arg):
        arg_name = '_' + arg.get('name', '')
        arg_type = arg.get('type', '')
        default_value = arg.get('default_value', None)
        arg_type = set_type(arg_type)
        if arg_type == "String" or arg_type == "StringName":
            ret = arg_name + ": " + "GDString | StringName | string"
        elif arg_type == 'NodePath':
            ret = arg_name + ": " + "GDString | NodePath | string"
        else:
            ret = arg_name + ': ' + arg_type
        if default_value:
            if isinstance(default_value, str) and default_value[0] == '&':
                ret += ' = ' + default_value.removeprefix('&')
            else:
                ret += ' = ' + default_value
        return ret

    if args:
        return ', '.join(list(map(mapper, args)))
    return ''

def set_return(arg_type):
    if arg_type and arg_type.find(',') != -1:
        arg_type = arg_type.split(',')[0]
    if arg_type:
        return ': ' + set_type(arg_type)
    return ': void'

def set_type(type):
    if is_number(type):
        return 'number'
    elif is_bool(type):
        return 'boolean'
    elif is_enum(type):
        return 'number'
    elif type.find('typedarray:') != -1:
        return 'GDArray'
    elif type == 'Array':
        return 'GDArray'
    elif type == 'Variant':
        return 'any'
    elif type == 'Object':
        return 'GodotObject'
    else:
        return type
# ---