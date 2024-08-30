import * as internal from '__internal__';
import { GraphElement } from 'src/js_godot/classes/graph_element'
import { StringName } from 'src/js_godot/variant/string_name'
import { GDString } from 'src/js_godot/variant/gd_string'
import { Color } from 'src/js_godot/variant/color'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_title;
    method_get_title;
    method_get_titlebar_hbox;
    method_set_autoshrink_enabled;
    method_is_autoshrink_enabled;
    method_set_autoshrink_margin;
    method_get_autoshrink_margin;
    method_set_drag_margin;
    method_get_drag_margin;
    method_set_tint_color_enabled;
    method_is_tint_color_enabled;
    method_set_tint_color;
    method_get_tint_color;
}


export class GraphFrame extends GraphElement{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GraphFrame");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("GraphFrame");
        let methodname = new StringName("set_title");
        this._bindings.method_set_title = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("GraphFrame");
        let methodname = new StringName("get_title");
        this._bindings.method_get_title = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("GraphFrame");
        let methodname = new StringName("get_titlebar_hbox");
        this._bindings.method_get_titlebar_hbox = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3590609951
        );
      }
      {
        let classname = new StringName("GraphFrame");
        let methodname = new StringName("set_autoshrink_enabled");
        this._bindings.method_set_autoshrink_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("GraphFrame");
        let methodname = new StringName("is_autoshrink_enabled");
        this._bindings.method_is_autoshrink_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("GraphFrame");
        let methodname = new StringName("set_autoshrink_margin");
        this._bindings.method_set_autoshrink_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GraphFrame");
        let methodname = new StringName("get_autoshrink_margin");
        this._bindings.method_get_autoshrink_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("GraphFrame");
        let methodname = new StringName("set_drag_margin");
        this._bindings.method_set_drag_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GraphFrame");
        let methodname = new StringName("get_drag_margin");
        this._bindings.method_get_drag_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("GraphFrame");
        let methodname = new StringName("set_tint_color_enabled");
        this._bindings.method_set_tint_color_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("GraphFrame");
        let methodname = new StringName("is_tint_color_enabled");
        this._bindings.method_is_tint_color_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("GraphFrame");
        let methodname = new StringName("set_tint_color");
        this._bindings.method_set_tint_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("GraphFrame");
        let methodname = new StringName("get_tint_color");
        this._bindings.method_get_tint_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
  }
  set_title(_title) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_title,
      this._owner,
      _title
    );
    
  }
  get_title() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_title,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  get_titlebar_hbox() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_titlebar_hbox,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_autoshrink_enabled(_shrink) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_autoshrink_enabled,
      this._owner,
      _shrink
    );
    
  }
  is_autoshrink_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_autoshrink_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_autoshrink_margin(_autoshrink_margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_autoshrink_margin,
      this._owner,
      _autoshrink_margin
    );
    
  }
  get_autoshrink_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_autoshrink_margin,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_drag_margin(_drag_margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_drag_margin,
      this._owner,
      _drag_margin
    );
    
  }
  get_drag_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_drag_margin,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_tint_color_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tint_color_enabled,
      this._owner,
      _enable
    );
    
  }
  is_tint_color_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_tint_color_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_tint_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tint_color,
      this._owner,
      _color
    );
    
  }
  get_tint_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tint_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
}