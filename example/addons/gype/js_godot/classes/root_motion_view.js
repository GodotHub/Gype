import * as internal from '__internal__';
import { VisualInstance3D } from '@js_godot/classes/visual_instance3d'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_animation_path;
  method_get_animation_path;
  method_set_color;
  method_get_color;
  method_set_cell_size;
  method_get_cell_size;
  method_set_radius;
  method_get_radius;
  method_set_zero_y;
  method_get_zero_y;
}
export class RootMotionView extends VisualInstance3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RootMotionView");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_animation_path() {
    if (!this.#_bindings.method_set_animation_path) {
      let classname = new StringName("RootMotionView");
      let methodname = new StringName("set_animation_path");
      this.#_bindings.method_set_animation_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_animation_path() {
    if (!this.#_bindings.method_get_animation_path) {
      let classname = new StringName("RootMotionView");
      let methodname = new StringName("get_animation_path");
      this.#_bindings.method_get_animation_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_color() {
    if (!this.#_bindings.method_set_color) {
      let classname = new StringName("RootMotionView");
      let methodname = new StringName("set_color");
      this.#_bindings.method_set_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_color() {
    if (!this.#_bindings.method_get_color) {
      let classname = new StringName("RootMotionView");
      let methodname = new StringName("get_color");
      this.#_bindings.method_get_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_cell_size() {
    if (!this.#_bindings.method_set_cell_size) {
      let classname = new StringName("RootMotionView");
      let methodname = new StringName("set_cell_size");
      this.#_bindings.method_set_cell_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_cell_size() {
    if (!this.#_bindings.method_get_cell_size) {
      let classname = new StringName("RootMotionView");
      let methodname = new StringName("get_cell_size");
      this.#_bindings.method_get_cell_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_radius() {
    if (!this.#_bindings.method_set_radius) {
      let classname = new StringName("RootMotionView");
      let methodname = new StringName("set_radius");
      this.#_bindings.method_set_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_radius() {
    if (!this.#_bindings.method_get_radius) {
      let classname = new StringName("RootMotionView");
      let methodname = new StringName("get_radius");
      this.#_bindings.method_get_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_zero_y() {
    if (!this.#_bindings.method_set_zero_y) {
      let classname = new StringName("RootMotionView");
      let methodname = new StringName("set_zero_y");
      this.#_bindings.method_set_zero_y = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_zero_y() {
    if (!this.#_bindings.method_get_zero_y) {
      let classname = new StringName("RootMotionView");
      let methodname = new StringName("get_zero_y");
      this.#_bindings.method_get_zero_y = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_animation_path(_path) {
    RootMotionView.init_method_set_animation_path();
    return _call_native_mb_no_ret(
      RootMotionView.#_bindings.method_set_animation_path,
      this._owner,
      _path
    );
    
  }
  get_animation_path() {
    RootMotionView.init_method_get_animation_path();
    return _call_native_mb_ret(
      RootMotionView.#_bindings.method_get_animation_path,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_color(_color) {
    RootMotionView.init_method_set_color();
    return _call_native_mb_no_ret(
      RootMotionView.#_bindings.method_set_color,
      this._owner,
      _color
    );
    
  }
  get_color() {
    RootMotionView.init_method_get_color();
    return _call_native_mb_ret(
      RootMotionView.#_bindings.method_get_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_cell_size(_size) {
    RootMotionView.init_method_set_cell_size();
    return _call_native_mb_no_ret(
      RootMotionView.#_bindings.method_set_cell_size,
      this._owner,
      _size
    );
    
  }
  get_cell_size() {
    RootMotionView.init_method_get_cell_size();
    return _call_native_mb_ret(
      RootMotionView.#_bindings.method_get_cell_size,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_radius(_size) {
    RootMotionView.init_method_set_radius();
    return _call_native_mb_no_ret(
      RootMotionView.#_bindings.method_set_radius,
      this._owner,
      _size
    );
    
  }
  get_radius() {
    RootMotionView.init_method_get_radius();
    return _call_native_mb_ret(
      RootMotionView.#_bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_zero_y(_enable) {
    RootMotionView.init_method_set_zero_y();
    return _call_native_mb_no_ret(
      RootMotionView.#_bindings.method_set_zero_y,
      this._owner,
      _enable
    );
    
  }
  get_zero_y() {
    RootMotionView.init_method_get_zero_y();
    return _call_native_mb_ret(
      RootMotionView.#_bindings.method_get_zero_y,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get animation_path () {
  return this.get_animation_path();
}
set animation_path (new_value) {
  this.set_animation_path(new_value);
}
get color () {
  return this.get_color();
}
set color (new_value) {
  this.set_color(new_value);
}
get cell_size () {
  return this.get_cell_size();
}
set cell_size (new_value) {
  this.set_cell_size(new_value);
}
get radius () {
  return this.get_radius();
}
set radius (new_value) {
  this.set_radius(new_value);
}
get zero_y () {
  return this.get_zero_y();
}
set zero_y (new_value) {
  this.set_zero_y(new_value);
}

}