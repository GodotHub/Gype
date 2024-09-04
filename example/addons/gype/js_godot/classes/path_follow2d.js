import * as internal from '__internal__';
import { Node2D } from '@js_godot/classes/node2d'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
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
  method_set_rotates;
  method_is_rotating;
  method_set_cubic_interpolation;
  method_get_cubic_interpolation;
  method_set_loop;
  method_has_loop;
}
export class PathFollow2D extends Node2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PathFollow2D");
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
      let classname = new StringName("PathFollow2D");
      let methodname = new StringName("set_progress");
      this._bindings.method_set_progress = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PathFollow2D");
      let methodname = new StringName("get_progress");
      this._bindings.method_get_progress = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PathFollow2D");
      let methodname = new StringName("set_h_offset");
      this._bindings.method_set_h_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PathFollow2D");
      let methodname = new StringName("get_h_offset");
      this._bindings.method_get_h_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PathFollow2D");
      let methodname = new StringName("set_v_offset");
      this._bindings.method_set_v_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PathFollow2D");
      let methodname = new StringName("get_v_offset");
      this._bindings.method_get_v_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PathFollow2D");
      let methodname = new StringName("set_progress_ratio");
      this._bindings.method_set_progress_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PathFollow2D");
      let methodname = new StringName("get_progress_ratio");
      this._bindings.method_get_progress_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PathFollow2D");
      let methodname = new StringName("set_rotates");
      this._bindings.method_set_rotates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PathFollow2D");
      let methodname = new StringName("is_rotating");
      this._bindings.method_is_rotating = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PathFollow2D");
      let methodname = new StringName("set_cubic_interpolation");
      this._bindings.method_set_cubic_interpolation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PathFollow2D");
      let methodname = new StringName("get_cubic_interpolation");
      this._bindings.method_get_cubic_interpolation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PathFollow2D");
      let methodname = new StringName("set_loop");
      this._bindings.method_set_loop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PathFollow2D");
      let methodname = new StringName("has_loop");
      this._bindings.method_has_loop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_progress(_progress) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_progress,
      this._owner,
      _progress
    );
    
  }
  get_progress() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_progress,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_h_offset(_h_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_h_offset,
      this._owner,
      _h_offset
    );
    
  }
  get_h_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_h_offset,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_v_offset(_v_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_v_offset,
      this._owner,
      _v_offset
    );
    
  }
  get_v_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_v_offset,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_progress_ratio(_ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_progress_ratio,
      this._owner,
      _ratio
    );
    
  }
  get_progress_ratio() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_progress_ratio,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_rotates(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rotates,
      this._owner,
      _enabled
    );
    
  }
  is_rotating() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_rotating,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_cubic_interpolation(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cubic_interpolation,
      this._owner,
      _enabled
    );
    
  }
  get_cubic_interpolation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cubic_interpolation,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_loop(_loop) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_loop,
      this._owner,
      _loop
    );
    
  }
  has_loop() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_loop,
      this._owner,
			Variant.Type.BOOL,
      
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
get rotates () {
  return this.is_rotating();
}
set rotates (new_value) {
  this.set_rotates(new_value);
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


  static {
    this._init_bindings();
  }
}