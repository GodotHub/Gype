import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Vector3 } from '@js_godot/variant/vector3'
import { VisualInstance3D } from '@js_godot/classes/visual_instance3d'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_probe_data;
  method_get_probe_data;
  method_set_subdiv;
  method_get_subdiv;
  method_set_size;
  method_get_size;
  method_set_camera_attributes;
  method_get_camera_attributes;
  method_bake;
  method_debug_bake;
}
export class VoxelGI extends VisualInstance3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VoxelGI");
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
      let classname = new StringName("VoxelGI");
      let methodname = new StringName("set_probe_data");
      this._bindings.method_set_probe_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1637849675
      );
    }
    {
      let classname = new StringName("VoxelGI");
      let methodname = new StringName("get_probe_data");
      this._bindings.method_get_probe_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1730645405
      );
    }
    {
      let classname = new StringName("VoxelGI");
      let methodname = new StringName("set_subdiv");
      this._bindings.method_set_subdiv = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240898472
      );
    }
    {
      let classname = new StringName("VoxelGI");
      let methodname = new StringName("get_subdiv");
      this._bindings.method_get_subdiv = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4261647950
      );
    }
    {
      let classname = new StringName("VoxelGI");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("VoxelGI");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("VoxelGI");
      let methodname = new StringName("set_camera_attributes");
      this._bindings.method_set_camera_attributes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2817810567
      );
    }
    {
      let classname = new StringName("VoxelGI");
      let methodname = new StringName("get_camera_attributes");
      this._bindings.method_get_camera_attributes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3921283215
      );
    }
    {
      let classname = new StringName("VoxelGI");
      let methodname = new StringName("bake");
      this._bindings.method_bake = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2781551026
      );
    }
    {
      let classname = new StringName("VoxelGI");
      let methodname = new StringName("debug_bake");
      this._bindings.method_debug_bake = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
  }
  
  set_probe_data(_data) {
    return _call_native_mb_no_ret(
      VoxelGI._bindings.method_set_probe_data,
      this._owner,
      _data
    );
    
  }
  get_probe_data() {
    return _call_native_mb_ret(
      VoxelGI._bindings.method_get_probe_data,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_subdiv(_subdiv) {
    return _call_native_mb_no_ret(
      VoxelGI._bindings.method_set_subdiv,
      this._owner,
      _subdiv
    );
    
  }
  get_subdiv() {
    return _call_native_mb_ret(
      VoxelGI._bindings.method_get_subdiv,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_size(_size) {
    return _call_native_mb_no_ret(
      VoxelGI._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    return _call_native_mb_ret(
      VoxelGI._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_camera_attributes(_camera_attributes) {
    return _call_native_mb_no_ret(
      VoxelGI._bindings.method_set_camera_attributes,
      this._owner,
      _camera_attributes
    );
    
  }
  get_camera_attributes() {
    return _call_native_mb_ret(
      VoxelGI._bindings.method_get_camera_attributes,
      this._owner,
			Variant.INT,
      
    );
    
  }
  bake(_from_node, _create_visual_debug) {
    return _call_native_mb_no_ret(
      VoxelGI._bindings.method_bake,
      this._owner,
      _from_node, _create_visual_debug
    );
    
  }
  debug_bake() {
    return _call_native_mb_no_ret(
      VoxelGI._bindings.method_debug_bake,
      this._owner,
      
    );
    
  }
  
get subdiv () {
  return this.get_subdiv();
}
set subdiv (new_value) {
  this.set_subdiv(new_value);
}
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}
get camera_attributes () {
  return this.get_camera_attributes();
}
set camera_attributes (new_value) {
  this.set_camera_attributes(new_value);
}
get data () {
  return this.get_probe_data();
}
set data (new_value) {
  this.set_probe_data(new_value);
}

  static Subdiv = {
    SUBDIV_64: 0,
    SUBDIV_128: 1,
    SUBDIV_256: 2,
    SUBDIV_512: 3,
    SUBDIV_MAX: 4,
  }

  static {
    this._init_bindings();
  }
}