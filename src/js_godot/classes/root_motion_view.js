import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { StringName } from 'src/js_godot/variant/string_name'
import { VisualInstance3D } from 'src/js_godot/classes/visual_instance3d'
import { Color } from 'src/js_godot/variant/color'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RootMotionView");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("RootMotionView");
        let methodname = new StringName("set_animation_path");
        this._bindings.method_set_animation_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1348162250
        );
      }
      {
        let classname = new StringName("RootMotionView");
        let methodname = new StringName("get_animation_path");
        this._bindings.method_get_animation_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4075236667
        );
      }
      {
        let classname = new StringName("RootMotionView");
        let methodname = new StringName("set_color");
        this._bindings.method_set_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("RootMotionView");
        let methodname = new StringName("get_color");
        this._bindings.method_get_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("RootMotionView");
        let methodname = new StringName("set_cell_size");
        this._bindings.method_set_cell_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("RootMotionView");
        let methodname = new StringName("get_cell_size");
        this._bindings.method_get_cell_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("RootMotionView");
        let methodname = new StringName("set_radius");
        this._bindings.method_set_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("RootMotionView");
        let methodname = new StringName("get_radius");
        this._bindings.method_get_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("RootMotionView");
        let methodname = new StringName("set_zero_y");
        this._bindings.method_set_zero_y = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RootMotionView");
        let methodname = new StringName("get_zero_y");
        this._bindings.method_get_zero_y = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_animation_path(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_animation_path,
      this._owner,
      _path
    );
    
  }
  get_animation_path() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_animation_path,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
    
  }
  set_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_color,
      this._owner,
      _color
    );
    
  }
  get_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_cell_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cell_size,
      this._owner,
      _size
    );
    
  }
  get_cell_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cell_size,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_radius(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_radius,
      this._owner,
      _size
    );
    
  }
  get_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_zero_y(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_zero_y,
      this._owner,
      _enable
    );
    
  }
  get_zero_y() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_zero_y,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}