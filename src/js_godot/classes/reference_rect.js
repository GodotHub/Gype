import * as internal from '__internal__';
import { Control } from 'src/js_godot/classes/control'
import { StringName } from 'src/js_godot/variant/string_name'
import { Color } from 'src/js_godot/variant/color'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_border_color;
    method_set_border_color;
    method_get_border_width;
    method_set_border_width;
    method_get_editor_only;
    method_set_editor_only;
}


export class ReferenceRect extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ReferenceRect");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("ReferenceRect");
        let methodname = new StringName("get_border_color");
        this._bindings.method_get_border_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("ReferenceRect");
        let methodname = new StringName("set_border_color");
        this._bindings.method_set_border_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("ReferenceRect");
        let methodname = new StringName("get_border_width");
        this._bindings.method_get_border_width = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("ReferenceRect");
        let methodname = new StringName("set_border_width");
        this._bindings.method_set_border_width = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("ReferenceRect");
        let methodname = new StringName("get_editor_only");
        this._bindings.method_get_editor_only = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("ReferenceRect");
        let methodname = new StringName("set_editor_only");
        this._bindings.method_set_editor_only = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
  }
  get_border_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_border_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_border_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_border_color,
      this._owner,
      _color
    );
    
  }
  get_border_width() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_border_width,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_border_width(_width) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_border_width,
      this._owner,
      _width
    );
    
  }
  get_editor_only() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_editor_only,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_editor_only(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_editor_only,
      this._owner,
      _enabled
    );
    
  }
}