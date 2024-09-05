import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Shape3D } from '@js_godot/classes/shape3d'
import { Variant } from '@js_godot/variant/variant'
import { PackedFloat32Array } from '@js_godot/variant/packed_float32_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_map_width;
  method_get_map_width;
  method_set_map_depth;
  method_get_map_depth;
  method_set_map_data;
  method_get_map_data;
  method_get_min_height;
  method_get_max_height;
  method_update_map_data_from_image;
}
export class HeightMapShape3D extends Shape3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("HeightMapShape3D");
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
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("set_map_width");
      this._bindings.method_set_map_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("get_map_width");
      this._bindings.method_get_map_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("set_map_depth");
      this._bindings.method_set_map_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("get_map_depth");
      this._bindings.method_get_map_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("set_map_data");
      this._bindings.method_set_map_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2899603908
      );
    }
    {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("get_map_data");
      this._bindings.method_get_map_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        675695659
      );
    }
    {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("get_min_height");
      this._bindings.method_get_min_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("get_max_height");
      this._bindings.method_get_max_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("update_map_data_from_image");
      this._bindings.method_update_map_data_from_image = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2636652979
      );
    }
  }
  
  set_map_width(_width) {
    return _call_native_mb_no_ret(
      HeightMapShape3D._bindings.method_set_map_width,
      this._owner,
      _width
    );
    
  }
  get_map_width() {
    return _call_native_mb_ret(
      HeightMapShape3D._bindings.method_get_map_width,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_map_depth(_height) {
    return _call_native_mb_no_ret(
      HeightMapShape3D._bindings.method_set_map_depth,
      this._owner,
      _height
    );
    
  }
  get_map_depth() {
    return _call_native_mb_ret(
      HeightMapShape3D._bindings.method_get_map_depth,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_map_data(_data) {
    return _call_native_mb_no_ret(
      HeightMapShape3D._bindings.method_set_map_data,
      this._owner,
      _data
    );
    
  }
  get_map_data() {
    return _call_native_mb_ret(
      HeightMapShape3D._bindings.method_get_map_data,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY,
    
      
    );
    
  }
  get_min_height() {
    return _call_native_mb_ret(
      HeightMapShape3D._bindings.method_get_min_height,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_max_height() {
    return _call_native_mb_ret(
      HeightMapShape3D._bindings.method_get_max_height,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  update_map_data_from_image(_image, _height_min, _height_max) {
    return _call_native_mb_no_ret(
      HeightMapShape3D._bindings.method_update_map_data_from_image,
      this._owner,
      _image, _height_min, _height_max
    );
    
  }
  
get map_width () {
  return this.get_map_width();
}
set map_width (new_value) {
  this.set_map_width(new_value);
}
get map_depth () {
  return this.get_map_depth();
}
set map_depth (new_value) {
  this.set_map_depth(new_value);
}
get map_data () {
  return this.get_map_data();
}
set map_data (new_value) {
  this.set_map_data(new_value);
}


  static {
    this._init_bindings();
  }
}