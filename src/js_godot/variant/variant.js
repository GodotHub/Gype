import {
  get_variant_from_type_constructor,
  get_variant_to_type_constructor,
  variant_new_nil,
  variant_new_copy,
} from "__internal__";
import { GDString } from "src/js_godot/variant/gd_string";
import { StringName } from "src/js_godot/variant/string_name";
import { NodePath } from "src/js_godot/variant/node_path";
import { GDArray } from "src/js_godot/variant/gd_array";
import { PackedStringArray } from "src/js_godot/variant/packed_string_array";
import { PackedByteArray } from "src/js_godot/variant/packed_byte_array";
import { GD, Math, Random } from "src/js_godot/variant/utility_functions";
import { Dictionary } from "src/js_godot/variant/dictionary";
import { Callable } from "src/js_godot/variant/callable";
import { AABB } from "src/js_godot/variant/aabb";
import { Basis } from "src/js_godot/variant/basis";
import { Color } from "src/js_godot/variant/color";
import { PackedFloat32Array } from "src/js_godot/variant/packed_float32_array";
import { PackedFloat64Array } from "src/js_godot/variant/packed_float64_array";
import { PackedInt32Array } from "src/js_godot/variant/packed_int32_array";
import { PackedInt64Array } from "src/js_godot/variant/packed_int64_array";
import { PackedVector2Array } from "src/js_godot/variant/packed_vector2_array";
import { PackedVector3Array } from "src/js_godot/variant/packed_vector3_array";
import { PackedVector4Array } from "src/js_godot/variant/packed_vector4_array";
import { Vector2 } from "src/js_godot/variant/vector2";
import { Vector2i } from "src/js_godot/variant/vector2i";
import { Vector3 } from "src/js_godot/variant/vector3";
import { Vector3i } from "src/js_godot/variant/vector3i";
import { Vector4 } from "src/js_godot/variant/vector4";
import { Vector4i } from "src/js_godot/variant/vector4i";
import { Plane } from "src/js_godot/variant/plane";
import { Projection } from "src/js_godot/variant/projection";
import { Quaternion } from "src/js_godot/variant/quaternion";
import { Rect2 } from "src/js_godot/variant/rect2";
import { Rect2i } from "src/js_godot/variant/rect2i";
import { RID } from "src/js_godot/variant/rid";
import { Signal } from "src/js_godot/variant/signal";
import { Transform2D } from "src/js_godot/variant/transform2d";
import { Transform3D } from "src/js_godot/variant/transform3d";

export class Variant {
  static from_type_constructor = [];
  static to_type_constructor = [];

  static #VARIANT_SIZE = 24;
  opaque = new Uint8Array(Variant.#VARIANT_SIZE);

  constructor(value) {
    if (!value) {
      variant_new_nil(this.opaque);
    } else if (value instanceof GDString) {
      Variant.from_type_constructor[Variant.Type.STRING](
        this.opaque,
        value.opaque
      );
    } else if (value instanceof StringName) {
      Variant.from_type_constructor[Variant.Type.STRING_NAME](
        this.opaque,
        value.opaque
      );
    } else if (value instanceof Variant) {
      variant_new_copy(this.opaque, value.opaque);
    } else {
      this.#primitive_constructor(value);
    }
  }

  #primitive_constructor(value) {
    if (typeof value == "boolean") {
      Variant.from_type_constructor[Variant.Type.BOOL](this.opaque, value);
    } else if (typeof value == "string") {
      Variant.from_type_constructor[Variant.Type.STRING](
        this.opaque,
        new GDString(value).opaque
      );
    } else if (typeof value == "number") {
      if (Number.isInteger(value)) {
        Variant.from_type_constructor[Variant.Type.INT](this.opaque, value);
      } else {
        Variant.from_type_constructor[Variant.Type.FLOAT](this.opaque, value);
      }
    } else {
      throw new TypeError();
    }
  }

  static _init_bindings() {
    for (let i = 1; i < this.Type.VARIANT_MAX; i++) {
      this.from_type_constructor[i] = get_variant_from_type_constructor(i);
      this.to_type_constructor[i] = get_variant_to_type_constructor(i);
    }
    StringName._init_bindings();
    GDString._init_bindings();
    NodePath._init_bindings();
    GDArray._init_bindings();
    Dictionary._init_bindings();
    Callable._init_bindings();
    AABB._init_bindings();
    Basis._init_bindings();
    Color._init_bindings();
    Plane._init_bindings();
    Projection._init_bindings();
    Quaternion._init_bindings();
    Rect2._init_bindings();
    Rect2i._init_bindings();
    RID._init_bindings();
    Signal._init_bindings();
    Transform2D._init_bindings();
    Transform3D._init_bindings();
    Vector2._init_bindings();
    Vector2i._init_bindings();
    Vector3._init_bindings();
    Vector3i._init_bindings();
    Vector4._init_bindings();
    Vector4i._init_bindings();
    PackedByteArray._init_bindings();
    PackedStringArray._init_bindings();
    PackedFloat64Array._init_bindings();
    PackedFloat32Array._init_bindings();
    PackedInt32Array._init_bindings();
    PackedInt64Array._init_bindings();
    PackedVector2Array._init_bindings();
    PackedVector3Array._init_bindings();
    PackedVector4Array._init_bindings();
    GD._init_bindings();
    Math._init_bindings();
    Random._init_bindings();
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
    PACKED_VECTOR4_ARRAY: 38,

    VARIANT: 39,
  };

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
    OP_MAX: 25,
  };
}

// export { Variant, StringName, GDString, NodePath, UtilityFunctions };
