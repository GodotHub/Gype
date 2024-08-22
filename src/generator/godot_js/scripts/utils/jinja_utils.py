from scripts.utils.file_utils import gde_json

def variant_types():
    vt = map(lambda e: e['name'], gde_json['builtin_classes'])
    pt = pod_types()
    return list(filter(lambda e: e not in pt, vt))

def to_js_type(type):
    if type == 'String':
        return 'GDString'
    else:
        return type

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

