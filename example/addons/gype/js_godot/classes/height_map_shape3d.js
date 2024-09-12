import * as internal from '__internal__';
import { Shape3D } from '@js_godot/classes/shape3d'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("HeightMapShape3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_map_width() {
    if (!this.#_bindings.method_set_map_width) {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("set_map_width");
      this.#_bindings.method_set_map_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_map_width() {
    if (!this.#_bindings.method_get_map_width) {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("get_map_width");
      this.#_bindings.method_get_map_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_map_depth() {
    if (!this.#_bindings.method_set_map_depth) {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("set_map_depth");
      this.#_bindings.method_set_map_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_map_depth() {
    if (!this.#_bindings.method_get_map_depth) {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("get_map_depth");
      this.#_bindings.method_get_map_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_map_data() {
    if (!this.#_bindings.method_set_map_data) {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("set_map_data");
      this.#_bindings.method_set_map_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2899603908
      );
    }
  }
  static init_method_get_map_data() {
    if (!this.#_bindings.method_get_map_data) {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("get_map_data");
      this.#_bindings.method_get_map_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        675695659
      );
    }
  }
  static init_method_get_min_height() {
    if (!this.#_bindings.method_get_min_height) {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("get_min_height");
      this.#_bindings.method_get_min_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_max_height() {
    if (!this.#_bindings.method_get_max_height) {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("get_max_height");
      this.#_bindings.method_get_max_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_update_map_data_from_image() {
    if (!this.#_bindings.method_update_map_data_from_image) {
      let classname = new StringName("HeightMapShape3D");
      let methodname = new StringName("update_map_data_from_image");
      this.#_bindings.method_update_map_data_from_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2636652979
      );
    }
  }

  
  
  set_map_width(_width) {
    HeightMapShape3D.init_method_set_map_width();
    return _call_native_mb_no_ret(
      HeightMapShape3D.#_bindings.method_set_map_width,
      this._owner,
      _width
    );
    
  }
  get_map_width() {
    HeightMapShape3D.init_method_get_map_width();
    return _call_native_mb_ret(
      HeightMapShape3D.#_bindings.method_get_map_width,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_map_depth(_height) {
    HeightMapShape3D.init_method_set_map_depth();
    return _call_native_mb_no_ret(
      HeightMapShape3D.#_bindings.method_set_map_depth,
      this._owner,
      _height
    );
    
  }
  get_map_depth() {
    HeightMapShape3D.init_method_get_map_depth();
    return _call_native_mb_ret(
      HeightMapShape3D.#_bindings.method_get_map_depth,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_map_data(_data) {
    HeightMapShape3D.init_method_set_map_data();
    return _call_native_mb_no_ret(
      HeightMapShape3D.#_bindings.method_set_map_data,
      this._owner,
      _data
    );
    
  }
  get_map_data() {
    HeightMapShape3D.init_method_get_map_data();
    return _call_native_mb_ret(
      HeightMapShape3D.#_bindings.method_get_map_data,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY,
    
      
    );
    
  }
  get_min_height() {
    HeightMapShape3D.init_method_get_min_height();
    return _call_native_mb_ret(
      HeightMapShape3D.#_bindings.method_get_min_height,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_max_height() {
    HeightMapShape3D.init_method_get_max_height();
    return _call_native_mb_ret(
      HeightMapShape3D.#_bindings.method_get_max_height,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  update_map_data_from_image(_image, _height_min, _height_max) {
    HeightMapShape3D.init_method_update_map_data_from_image();
    return _call_native_mb_no_ret(
      HeightMapShape3D.#_bindings.method_update_map_data_from_image,
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

}