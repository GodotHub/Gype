import {
  get_variant_from_type_constructor,
  get_variant_to_type_constructor
} from '__internal__'
// import { GDExtensionVariantType } from 'src/js_godot/gde/gde.js'
import { GDString } from 'src/js_godot/variant/gdstring'
import { StringName } from 'src/js_godot/variant/string_name'

export class Variant {
  static from_type_constructor = []
  static to_type_constructor = []

  opaque = new Uint8Array(24)

  constructor (value) {
    if (!value) {
      variant_new_nil(opaque)
    } else if (value instanceof GDString) {
      from_type_constructor[this.Type.STRING](this.opaque, value.opaque)
    } else if (value instanceof StringName) {
      from_type_constructor[this.Type.STRING_NAME](this.opaque, value.opaque)
    } else if (value instanceof String) {
      from_type_constructor[this.Type.STRING](
        this.opaque,
        new GDString(value).opaque
      )
    }
  }

  static _init_bindings () {
    for (let i = 1; i < this.Type.VARIANT_MAX; i++) {
      Variant.from_type_constructor[i] = get_variant_from_type_constructor(i)
      Variant.to_type_constructor[i] = get_variant_to_type_constructor(i)
    }
    GDString._init_bindings()
    StringName._init_bindings()
  }

  static Type = {
    NIL: 0,

    // atomic types
    BOOL: 1,
    INT: 2,
    FLOAT: 3,
    STRING: 4,

    // math types
    VECTOR2: 5,
    VECTOR2I: 6,
    RECT2: 7,
    RECT2I: 8,
    VECTOR3: 9,
    VECTOR3I: 10,
    TRANSFORM2D: 11,
    VECTOR4: 12,
    VECTOR4I: 13,
    PLANE: 14,
    QUATERNION: 15,
    AABB: 16,
    BASIS: 17,
    TRANSFORM3D: 18,
    PROJECTION: 19,

    // misc types
    COLOR: 20,
    STRING_NAME: 21,
    NODE_PATH: 22,
    RID: 23,
    OBJECT: 24,
    CALLABLE: 25,
    SIGNAL: 26,
    DICTIONARY: 27,
    ARRAY: 28,

    // typed arrays
    PACKED_BYTE_ARRAY: 29,
    PACKED_INT32_ARRAY: 30,
    PACKED_INT64_ARRAY: 31,
    PACKED_FLOAT32_ARRAY: 32,
    PACKED_FLOAT64_ARRAY: 33,
    PACKED_STRING_ARRAY: 34,
    PACKED_VECTOR2_ARRAY: 35,
    PACKED_VECTOR3_ARRAY: 36,
    PACKED_COLOR_ARRAY: 37,

    VARIANT_MAX: 38
  }

  static Operator = {
    // comparison
    OP_EQUAL: 0,
    OP_NOT_EQUAL: 1,
    OP_LESS: 2,
    OP_LESS_EQUAL: 3,
    OP_GREATER: 4,
    OP_GREATER_EQUAL: 5,
    // mathematic
    OP_ADD: 6,
    OP_SUBTRACT: 7,
    OP_MULTIPLY: 8,
    OP_DIVIDE: 9,
    OP_NEGATE: 10,
    OP_POSITIVE: 11,
    OP_MODULE: 12,
    OP_POWER: 13,
    // bitwise
    OP_SHIFT_LEFT: 14,
    OP_SHIFT_RIGHT: 15,
    OP_BIT_AND: 16,
    OP_BIT_OR: 17,
    OP_BIT_XOR: 18,
    OP_BIT_NEGATE: 19,
    // logic
    OP_AND: 20,
    OP_OR: 21,
    OP_XOR: 22,
    OP_NOT: 23,
    // containment
    OP_IN: 24,
    OP_MAX: 25
  }
}
