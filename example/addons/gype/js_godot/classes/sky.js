import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_radiance_size;
  method_get_radiance_size;
  method_set_process_mode;
  method_get_process_mode;
  method_set_material;
  method_get_material;
}
@GodotClass
export class Sky extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Sky");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_radiance_size() {
    if (!this._bindings.method_set_radiance_size) {
      let classname = new StringName("Sky");
      let methodname = new StringName("set_radiance_size");
      this._bindings.method_set_radiance_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1512957179
      );
    }
  }
  static init_method_get_radiance_size() {
    if (!this._bindings.method_get_radiance_size) {
      let classname = new StringName("Sky");
      let methodname = new StringName("get_radiance_size");
      this._bindings.method_get_radiance_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2708733976
      );
    }
  }
  static init_method_set_process_mode() {
    if (!this._bindings.method_set_process_mode) {
      let classname = new StringName("Sky");
      let methodname = new StringName("set_process_mode");
      this._bindings.method_set_process_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        875986769
      );
    }
  }
  static init_method_get_process_mode() {
    if (!this._bindings.method_get_process_mode) {
      let classname = new StringName("Sky");
      let methodname = new StringName("get_process_mode");
      this._bindings.method_get_process_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        731245043
      );
    }
  }
  static init_method_set_material() {
    if (!this._bindings.method_set_material) {
      let classname = new StringName("Sky");
      let methodname = new StringName("set_material");
      this._bindings.method_set_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2757459619
      );
    }
  }
  static init_method_get_material() {
    if (!this._bindings.method_get_material) {
      let classname = new StringName("Sky");
      let methodname = new StringName("get_material");
      this._bindings.method_get_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        5934680
      );
    }
  }

  
  
  set_radiance_size(_size) {
    Sky.init_method_set_radiance_size();
    return _call_native_mb_no_ret(
      Sky._bindings.method_set_radiance_size,
      this._owner,
      _size
    );
    
  }
  get_radiance_size() {
    Sky.init_method_get_radiance_size();
    return _call_native_mb_ret(
      Sky._bindings.method_get_radiance_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_process_mode(_mode) {
    Sky.init_method_set_process_mode();
    return _call_native_mb_no_ret(
      Sky._bindings.method_set_process_mode,
      this._owner,
      _mode
    );
    
  }
  get_process_mode() {
    Sky.init_method_get_process_mode();
    return _call_native_mb_ret(
      Sky._bindings.method_get_process_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_material(_material) {
    Sky.init_method_set_material();
    return _call_native_mb_no_ret(
      Sky._bindings.method_set_material,
      this._owner,
      _material
    );
    
  }
  get_material() {
    Sky.init_method_get_material();
    return _call_native_mb_ret(
      Sky._bindings.method_get_material,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get sky_material () {
  return this.get_material();
}
set sky_material (new_value) {
  this.set_material(new_value);
}
get process_mode () {
  return this.get_process_mode();
}
set process_mode (new_value) {
  this.set_process_mode(new_value);
}
get radiance_size () {
  return this.get_radiance_size();
}
set radiance_size (new_value) {
  this.set_radiance_size(new_value);
}

  static RadianceSize = {
    RADIANCE_SIZE_32: 0,
    RADIANCE_SIZE_64: 1,
    RADIANCE_SIZE_128: 2,
    RADIANCE_SIZE_256: 3,
    RADIANCE_SIZE_512: 4,
    RADIANCE_SIZE_1024: 5,
    RADIANCE_SIZE_2048: 6,
    RADIANCE_SIZE_MAX: 7,
  }
  static ProcessMode = {
    PROCESS_MODE_AUTOMATIC: 0,
    PROCESS_MODE_QUALITY: 1,
    PROCESS_MODE_INCREMENTAL: 2,
    PROCESS_MODE_REALTIME: 3,
  }
}