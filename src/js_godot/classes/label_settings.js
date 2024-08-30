import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { Resource } from 'src/js_godot/classes/resource'
import { Color } from 'src/js_godot/variant/color'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_line_spacing;
    method_get_line_spacing;
    method_set_font;
    method_get_font;
    method_set_font_size;
    method_get_font_size;
    method_set_font_color;
    method_get_font_color;
    method_set_outline_size;
    method_get_outline_size;
    method_set_outline_color;
    method_get_outline_color;
    method_set_shadow_size;
    method_get_shadow_size;
    method_set_shadow_color;
    method_get_shadow_color;
    method_set_shadow_offset;
    method_get_shadow_offset;
}


export class LabelSettings extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("LabelSettings");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("set_line_spacing");
        this._bindings.method_set_line_spacing = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("get_line_spacing");
        this._bindings.method_get_line_spacing = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("set_font");
        this._bindings.method_set_font = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1262170328
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("get_font");
        this._bindings.method_get_font = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3229501585
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("set_font_size");
        this._bindings.method_set_font_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("get_font_size");
        this._bindings.method_get_font_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("set_font_color");
        this._bindings.method_set_font_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("get_font_color");
        this._bindings.method_get_font_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("set_outline_size");
        this._bindings.method_set_outline_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("get_outline_size");
        this._bindings.method_get_outline_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("set_outline_color");
        this._bindings.method_set_outline_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("get_outline_color");
        this._bindings.method_get_outline_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("set_shadow_size");
        this._bindings.method_set_shadow_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("get_shadow_size");
        this._bindings.method_get_shadow_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("set_shadow_color");
        this._bindings.method_set_shadow_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("get_shadow_color");
        this._bindings.method_get_shadow_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("set_shadow_offset");
        this._bindings.method_set_shadow_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("LabelSettings");
        let methodname = new StringName("get_shadow_offset");
        this._bindings.method_get_shadow_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
  }
  set_line_spacing(_spacing) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_line_spacing,
      this._owner,
      _spacing
    );
    
  }
  get_line_spacing() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_spacing,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_font(_font) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_font,
      this._owner,
      _font
    );
    
  }
  get_font() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_font,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_font_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_font_size,
      this._owner,
      _size
    );
    
  }
  get_font_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_font_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_font_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_font_color,
      this._owner,
      _color
    );
    
  }
  get_font_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_font_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_outline_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_outline_size,
      this._owner,
      _size
    );
    
  }
  get_outline_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_outline_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_outline_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_outline_color,
      this._owner,
      _color
    );
    
  }
  get_outline_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_outline_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_shadow_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shadow_size,
      this._owner,
      _size
    );
    
  }
  get_shadow_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shadow_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_shadow_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shadow_color,
      this._owner,
      _color
    );
    
  }
  get_shadow_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shadow_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_shadow_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shadow_offset,
      this._owner,
      _offset
    );
    
  }
  get_shadow_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shadow_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
}