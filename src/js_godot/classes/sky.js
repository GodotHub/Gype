import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classes/resource'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_radiance_size;
    method_get_radiance_size;
    method_set_process_mode;
    method_get_process_mode;
    method_set_material;
    method_get_material;
}


export class Sky extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Sky");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Sky");
        let methodname = new StringName("set_radiance_size");
        this._bindings.method_set_radiance_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1512957179
        );
      }
      {
        let classname = new StringName("Sky");
        let methodname = new StringName("get_radiance_size");
        this._bindings.method_get_radiance_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2708733976
        );
      }
      {
        let classname = new StringName("Sky");
        let methodname = new StringName("set_process_mode");
        this._bindings.method_set_process_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          875986769
        );
      }
      {
        let classname = new StringName("Sky");
        let methodname = new StringName("get_process_mode");
        this._bindings.method_get_process_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          731245043
        );
      }
      {
        let classname = new StringName("Sky");
        let methodname = new StringName("set_material");
        this._bindings.method_set_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2757459619
        );
      }
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_radiance_size,
      this._owner,
      _size
    );
    
  }
  get_radiance_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_radiance_size,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_process_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_process_mode,
      this._owner,
      _mode
    );
    
  }
  get_process_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_process_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_material(_material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_material,
      this._owner,
      _material
    );
    
  }
  get_material() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_material,
      this._owner,
			Variant.INT,
      
    );
    
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