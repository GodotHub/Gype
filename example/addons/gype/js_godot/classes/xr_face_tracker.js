import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { XRTracker } from '@js_godot/classes/xr_tracker'
import { Variant } from '@js_godot/variant/variant'
import { PackedFloat32Array } from '@js_godot/variant/packed_float32_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_blend_shape;
  method_set_blend_shape;
  method_get_blend_shapes;
  method_set_blend_shapes;
}
export class XRFaceTracker extends XRTracker{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("XRFaceTracker");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("XRFaceTracker");
      let methodname = new StringName("get_blend_shape");
      this._bindings.method_get_blend_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        330010046
      );
    }
    {
      let classname = new StringName("XRFaceTracker");
      let methodname = new StringName("set_blend_shape");
      this._bindings.method_set_blend_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2352588791
      );
    }
    {
      let classname = new StringName("XRFaceTracker");
      let methodname = new StringName("get_blend_shapes");
      this._bindings.method_get_blend_shapes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        675695659
      );
    }
    {
      let classname = new StringName("XRFaceTracker");
      let methodname = new StringName("set_blend_shapes");
      this._bindings.method_set_blend_shapes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2899603908
      );
    }
  }
  
  get_blend_shape(_blend_shape) {
    return _call_native_mb_ret(
      XRFaceTracker._bindings.method_get_blend_shape,
      this._owner,
			Variant.Type.FLOAT,
      _blend_shape
    );
    
  }
  set_blend_shape(_blend_shape, _weight) {
    return _call_native_mb_no_ret(
      XRFaceTracker._bindings.method_set_blend_shape,
      this._owner,
      _blend_shape, _weight
    );
    
  }
  get_blend_shapes() {
    return _call_native_mb_ret(
      XRFaceTracker._bindings.method_get_blend_shapes,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY,
    
      
    );
    
  }
  set_blend_shapes(_weights) {
    return _call_native_mb_no_ret(
      XRFaceTracker._bindings.method_set_blend_shapes,
      this._owner,
      _weights
    );
    
  }
  
get blend_shapes () {
  return this.get_blend_shapes();
}
set blend_shapes (new_value) {
  this.set_blend_shapes(new_value);
}

  static BlendShapeEntry = {
    FT_EYE_LOOK_OUT_RIGHT: 0,
    FT_EYE_LOOK_IN_RIGHT: 1,
    FT_EYE_LOOK_UP_RIGHT: 2,
    FT_EYE_LOOK_DOWN_RIGHT: 3,
    FT_EYE_LOOK_OUT_LEFT: 4,
    FT_EYE_LOOK_IN_LEFT: 5,
    FT_EYE_LOOK_UP_LEFT: 6,
    FT_EYE_LOOK_DOWN_LEFT: 7,
    FT_EYE_CLOSED_RIGHT: 8,
    FT_EYE_CLOSED_LEFT: 9,
    FT_EYE_SQUINT_RIGHT: 10,
    FT_EYE_SQUINT_LEFT: 11,
    FT_EYE_WIDE_RIGHT: 12,
    FT_EYE_WIDE_LEFT: 13,
    FT_EYE_DILATION_RIGHT: 14,
    FT_EYE_DILATION_LEFT: 15,
    FT_EYE_CONSTRICT_RIGHT: 16,
    FT_EYE_CONSTRICT_LEFT: 17,
    FT_BROW_PINCH_RIGHT: 18,
    FT_BROW_PINCH_LEFT: 19,
    FT_BROW_LOWERER_RIGHT: 20,
    FT_BROW_LOWERER_LEFT: 21,
    FT_BROW_INNER_UP_RIGHT: 22,
    FT_BROW_INNER_UP_LEFT: 23,
    FT_BROW_OUTER_UP_RIGHT: 24,
    FT_BROW_OUTER_UP_LEFT: 25,
    FT_NOSE_SNEER_RIGHT: 26,
    FT_NOSE_SNEER_LEFT: 27,
    FT_NASAL_DILATION_RIGHT: 28,
    FT_NASAL_DILATION_LEFT: 29,
    FT_NASAL_CONSTRICT_RIGHT: 30,
    FT_NASAL_CONSTRICT_LEFT: 31,
    FT_CHEEK_SQUINT_RIGHT: 32,
    FT_CHEEK_SQUINT_LEFT: 33,
    FT_CHEEK_PUFF_RIGHT: 34,
    FT_CHEEK_PUFF_LEFT: 35,
    FT_CHEEK_SUCK_RIGHT: 36,
    FT_CHEEK_SUCK_LEFT: 37,
    FT_JAW_OPEN: 38,
    FT_MOUTH_CLOSED: 39,
    FT_JAW_RIGHT: 40,
    FT_JAW_LEFT: 41,
    FT_JAW_FORWARD: 42,
    FT_JAW_BACKWARD: 43,
    FT_JAW_CLENCH: 44,
    FT_JAW_MANDIBLE_RAISE: 45,
    FT_LIP_SUCK_UPPER_RIGHT: 46,
    FT_LIP_SUCK_UPPER_LEFT: 47,
    FT_LIP_SUCK_LOWER_RIGHT: 48,
    FT_LIP_SUCK_LOWER_LEFT: 49,
    FT_LIP_SUCK_CORNER_RIGHT: 50,
    FT_LIP_SUCK_CORNER_LEFT: 51,
    FT_LIP_FUNNEL_UPPER_RIGHT: 52,
    FT_LIP_FUNNEL_UPPER_LEFT: 53,
    FT_LIP_FUNNEL_LOWER_RIGHT: 54,
    FT_LIP_FUNNEL_LOWER_LEFT: 55,
    FT_LIP_PUCKER_UPPER_RIGHT: 56,
    FT_LIP_PUCKER_UPPER_LEFT: 57,
    FT_LIP_PUCKER_LOWER_RIGHT: 58,
    FT_LIP_PUCKER_LOWER_LEFT: 59,
    FT_MOUTH_UPPER_UP_RIGHT: 60,
    FT_MOUTH_UPPER_UP_LEFT: 61,
    FT_MOUTH_LOWER_DOWN_RIGHT: 62,
    FT_MOUTH_LOWER_DOWN_LEFT: 63,
    FT_MOUTH_UPPER_DEEPEN_RIGHT: 64,
    FT_MOUTH_UPPER_DEEPEN_LEFT: 65,
    FT_MOUTH_UPPER_RIGHT: 66,
    FT_MOUTH_UPPER_LEFT: 67,
    FT_MOUTH_LOWER_RIGHT: 68,
    FT_MOUTH_LOWER_LEFT: 69,
    FT_MOUTH_CORNER_PULL_RIGHT: 70,
    FT_MOUTH_CORNER_PULL_LEFT: 71,
    FT_MOUTH_CORNER_SLANT_RIGHT: 72,
    FT_MOUTH_CORNER_SLANT_LEFT: 73,
    FT_MOUTH_FROWN_RIGHT: 74,
    FT_MOUTH_FROWN_LEFT: 75,
    FT_MOUTH_STRETCH_RIGHT: 76,
    FT_MOUTH_STRETCH_LEFT: 77,
    FT_MOUTH_DIMPLE_RIGHT: 78,
    FT_MOUTH_DIMPLE_LEFT: 79,
    FT_MOUTH_RAISER_UPPER: 80,
    FT_MOUTH_RAISER_LOWER: 81,
    FT_MOUTH_PRESS_RIGHT: 82,
    FT_MOUTH_PRESS_LEFT: 83,
    FT_MOUTH_TIGHTENER_RIGHT: 84,
    FT_MOUTH_TIGHTENER_LEFT: 85,
    FT_TONGUE_OUT: 86,
    FT_TONGUE_UP: 87,
    FT_TONGUE_DOWN: 88,
    FT_TONGUE_RIGHT: 89,
    FT_TONGUE_LEFT: 90,
    FT_TONGUE_ROLL: 91,
    FT_TONGUE_BLEND_DOWN: 92,
    FT_TONGUE_CURL_UP: 93,
    FT_TONGUE_SQUISH: 94,
    FT_TONGUE_FLAT: 95,
    FT_TONGUE_TWIST_RIGHT: 96,
    FT_TONGUE_TWIST_LEFT: 97,
    FT_SOFT_PALATE_CLOSE: 98,
    FT_THROAT_SWALLOW: 99,
    FT_NECK_FLEX_RIGHT: 100,
    FT_NECK_FLEX_LEFT: 101,
    FT_EYE_CLOSED: 102,
    FT_EYE_WIDE: 103,
    FT_EYE_SQUINT: 104,
    FT_EYE_DILATION: 105,
    FT_EYE_CONSTRICT: 106,
    FT_BROW_DOWN_RIGHT: 107,
    FT_BROW_DOWN_LEFT: 108,
    FT_BROW_DOWN: 109,
    FT_BROW_UP_RIGHT: 110,
    FT_BROW_UP_LEFT: 111,
    FT_BROW_UP: 112,
    FT_NOSE_SNEER: 113,
    FT_NASAL_DILATION: 114,
    FT_NASAL_CONSTRICT: 115,
    FT_CHEEK_PUFF: 116,
    FT_CHEEK_SUCK: 117,
    FT_CHEEK_SQUINT: 118,
    FT_LIP_SUCK_UPPER: 119,
    FT_LIP_SUCK_LOWER: 120,
    FT_LIP_SUCK: 121,
    FT_LIP_FUNNEL_UPPER: 122,
    FT_LIP_FUNNEL_LOWER: 123,
    FT_LIP_FUNNEL: 124,
    FT_LIP_PUCKER_UPPER: 125,
    FT_LIP_PUCKER_LOWER: 126,
    FT_LIP_PUCKER: 127,
    FT_MOUTH_UPPER_UP: 128,
    FT_MOUTH_LOWER_DOWN: 129,
    FT_MOUTH_OPEN: 130,
    FT_MOUTH_RIGHT: 131,
    FT_MOUTH_LEFT: 132,
    FT_MOUTH_SMILE_RIGHT: 133,
    FT_MOUTH_SMILE_LEFT: 134,
    FT_MOUTH_SMILE: 135,
    FT_MOUTH_SAD_RIGHT: 136,
    FT_MOUTH_SAD_LEFT: 137,
    FT_MOUTH_SAD: 138,
    FT_MOUTH_STRETCH: 139,
    FT_MOUTH_DIMPLE: 140,
    FT_MOUTH_TIGHTENER: 141,
    FT_MOUTH_PRESS: 142,
    FT_MAX: 143,
  }

  static {
    this._init_bindings();
  }
}