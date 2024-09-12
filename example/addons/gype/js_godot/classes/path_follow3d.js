import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node3D } from '@js_godot/classes/node3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_progress;
  method_get_progress;
  method_set_h_offset;
  method_get_h_offset;
  method_set_v_offset;
  method_get_v_offset;
  method_set_progress_ratio;
  method_get_progress_ratio;
  method_set_rotation_mode;
  method_get_rotation_mode;
  method_set_cubic_interpolation;
  method_get_cubic_interpolation;
  method_set_use_model_front;
  method_is_using_model_front;
  method_set_loop;
  method_has_loop;
  method_set_tilt_enabled;
  method_is_tilt_enabled;
  method_correct_posture;
}
export class PathFollow3D extends Node3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PathFollow3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_progress() {
    if (!this.#_bindings.method_set_progress) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("set_progress");
      this.#_bindings.method_set_progress = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_progress() {
    if (!this.#_bindings.method_get_progress) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("get_progress");
      this.#_bindings.method_get_progress = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_h_offset() {
    if (!this.#_bindings.method_set_h_offset) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("set_h_offset");
      this.#_bindings.method_set_h_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_h_offset() {
    if (!this.#_bindings.method_get_h_offset) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("get_h_offset");
      this.#_bindings.method_get_h_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_v_offset() {
    if (!this.#_bindings.method_set_v_offset) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("set_v_offset");
      this.#_bindings.method_set_v_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_v_offset() {
    if (!this.#_bindings.method_get_v_offset) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("get_v_offset");
      this.#_bindings.method_get_v_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_progress_ratio() {
    if (!this.#_bindings.method_set_progress_ratio) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("set_progress_ratio");
      this.#_bindings.method_set_progress_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_progress_ratio() {
    if (!this.#_bindings.method_get_progress_ratio) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("get_progress_ratio");
      this.#_bindings.method_get_progress_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_rotation_mode() {
    if (!this.#_bindings.method_set_rotation_mode) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("set_rotation_mode");
      this.#_bindings.method_set_rotation_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1640311967
      );
    }
  }
  static init_method_get_rotation_mode() {
    if (!this.#_bindings.method_get_rotation_mode) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("get_rotation_mode");
      this.#_bindings.method_get_rotation_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814010545
      );
    }
  }
  static init_method_set_cubic_interpolation() {
    if (!this.#_bindings.method_set_cubic_interpolation) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("set_cubic_interpolation");
      this.#_bindings.method_set_cubic_interpolation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_cubic_interpolation() {
    if (!this.#_bindings.method_get_cubic_interpolation) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("get_cubic_interpolation");
      this.#_bindings.method_get_cubic_interpolation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_use_model_front() {
    if (!this.#_bindings.method_set_use_model_front) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("set_use_model_front");
      this.#_bindings.method_set_use_model_front = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_model_front() {
    if (!this.#_bindings.method_is_using_model_front) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("is_using_model_front");
      this.#_bindings.method_is_using_model_front = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_loop() {
    if (!this.#_bindings.method_set_loop) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("set_loop");
      this.#_bindings.method_set_loop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_has_loop() {
    if (!this.#_bindings.method_has_loop) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("has_loop");
      this.#_bindings.method_has_loop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_tilt_enabled() {
    if (!this.#_bindings.method_set_tilt_enabled) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("set_tilt_enabled");
      this.#_bindings.method_set_tilt_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_tilt_enabled() {
    if (!this.#_bindings.method_is_tilt_enabled) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("is_tilt_enabled");
      this.#_bindings.method_is_tilt_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_correct_posture() {
    if (!this.#_bindings.method_correct_posture) {
      let classname = new StringName("PathFollow3D");
      let methodname = new StringName("correct_posture");
      this.#_bindings.method_correct_posture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2686588690
      );
    }
  }

  
  
  set_progress(_progress) {
    PathFollow3D.init_method_set_progress();
    return _call_native_mb_no_ret(
      PathFollow3D.#_bindings.method_set_progress,
      this._owner,
      _progress
    );
    
  }
  get_progress() {
    PathFollow3D.init_method_get_progress();
    return _call_native_mb_ret(
      PathFollow3D.#_bindings.method_get_progress,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_h_offset(_h_offset) {
    PathFollow3D.init_method_set_h_offset();
    return _call_native_mb_no_ret(
      PathFollow3D.#_bindings.method_set_h_offset,
      this._owner,
      _h_offset
    );
    
  }
  get_h_offset() {
    PathFollow3D.init_method_get_h_offset();
    return _call_native_mb_ret(
      PathFollow3D.#_bindings.method_get_h_offset,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_v_offset(_v_offset) {
    PathFollow3D.init_method_set_v_offset();
    return _call_native_mb_no_ret(
      PathFollow3D.#_bindings.method_set_v_offset,
      this._owner,
      _v_offset
    );
    
  }
  get_v_offset() {
    PathFollow3D.init_method_get_v_offset();
    return _call_native_mb_ret(
      PathFollow3D.#_bindings.method_get_v_offset,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_progress_ratio(_ratio) {
    PathFollow3D.init_method_set_progress_ratio();
    return _call_native_mb_no_ret(
      PathFollow3D.#_bindings.method_set_progress_ratio,
      this._owner,
      _ratio
    );
    
  }
  get_progress_ratio() {
    PathFollow3D.init_method_get_progress_ratio();
    return _call_native_mb_ret(
      PathFollow3D.#_bindings.method_get_progress_ratio,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_rotation_mode(_rotation_mode) {
    PathFollow3D.init_method_set_rotation_mode();
    return _call_native_mb_no_ret(
      PathFollow3D.#_bindings.method_set_rotation_mode,
      this._owner,
      _rotation_mode
    );
    
  }
  get_rotation_mode() {
    PathFollow3D.init_method_get_rotation_mode();
    return _call_native_mb_ret(
      PathFollow3D.#_bindings.method_get_rotation_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_cubic_interpolation(_enabled) {
    PathFollow3D.init_method_set_cubic_interpolation();
    return _call_native_mb_no_ret(
      PathFollow3D.#_bindings.method_set_cubic_interpolation,
      this._owner,
      _enabled
    );
    
  }
  get_cubic_interpolation() {
    PathFollow3D.init_method_get_cubic_interpolation();
    return _call_native_mb_ret(
      PathFollow3D.#_bindings.method_get_cubic_interpolation,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_use_model_front(_enabled) {
    PathFollow3D.init_method_set_use_model_front();
    return _call_native_mb_no_ret(
      PathFollow3D.#_bindings.method_set_use_model_front,
      this._owner,
      _enabled
    );
    
  }
  is_using_model_front() {
    PathFollow3D.init_method_is_using_model_front();
    return _call_native_mb_ret(
      PathFollow3D.#_bindings.method_is_using_model_front,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_loop(_loop) {
    PathFollow3D.init_method_set_loop();
    return _call_native_mb_no_ret(
      PathFollow3D.#_bindings.method_set_loop,
      this._owner,
      _loop
    );
    
  }
  has_loop() {
    PathFollow3D.init_method_has_loop();
    return _call_native_mb_ret(
      PathFollow3D.#_bindings.method_has_loop,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_tilt_enabled(_enabled) {
    PathFollow3D.init_method_set_tilt_enabled();
    return _call_native_mb_no_ret(
      PathFollow3D.#_bindings.method_set_tilt_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_tilt_enabled() {
    PathFollow3D.init_method_is_tilt_enabled();
    return _call_native_mb_ret(
      PathFollow3D.#_bindings.method_is_tilt_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  correct_posture(_transform, _rotation_mode) {
    PathFollow3D.init_method_correct_posture();
    return _call_native_mb_ret(
      PathFollow3D.#_bindings.method_correct_posture,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      _transform, _rotation_mode
    );
    
  }
  
get progress () {
  return this.get_progress();
}
set progress (new_value) {
  this.set_progress(new_value);
}
get progress_ratio () {
  return this.get_progress_ratio();
}
set progress_ratio (new_value) {
  this.set_progress_ratio(new_value);
}
get h_offset () {
  return this.get_h_offset();
}
set h_offset (new_value) {
  this.set_h_offset(new_value);
}
get v_offset () {
  return this.get_v_offset();
}
set v_offset (new_value) {
  this.set_v_offset(new_value);
}
get rotation_mode () {
  return this.get_rotation_mode();
}
set rotation_mode (new_value) {
  this.set_rotation_mode(new_value);
}
get use_model_front () {
  return this.is_using_model_front();
}
set use_model_front (new_value) {
  this.set_use_model_front(new_value);
}
get cubic_interp () {
  return this.get_cubic_interpolation();
}
set cubic_interp (new_value) {
  this.set_cubic_interpolation(new_value);
}
get loop () {
  return this.has_loop();
}
set loop (new_value) {
  this.set_loop(new_value);
}
get tilt_enabled () {
  return this.is_tilt_enabled();
}
set tilt_enabled (new_value) {
  this.set_tilt_enabled(new_value);
}

  static RotationMode = {
    ROTATION_NONE: 0,
    ROTATION_Y: 1,
    ROTATION_XY: 2,
    ROTATION_XYZ: 3,
    ROTATION_ORIENTED: 4,
  }
}