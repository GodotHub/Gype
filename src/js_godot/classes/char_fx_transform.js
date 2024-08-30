import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { StringName } from 'src/js_godot/variant/string_name'
import { Transform2D } from 'src/js_godot/variant/transform2d'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { RID } from 'src/js_godot/variant/rid'
import { Color } from 'src/js_godot/variant/color'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_transform;
    method_set_transform;
    method_get_range;
    method_set_range;
    method_get_elapsed_time;
    method_set_elapsed_time;
    method_is_visible;
    method_set_visibility;
    method_is_outline;
    method_set_outline;
    method_get_offset;
    method_set_offset;
    method_get_color;
    method_set_color;
    method_get_environment;
    method_set_environment;
    method_get_glyph_index;
    method_set_glyph_index;
    method_get_relative_index;
    method_set_relative_index;
    method_get_glyph_count;
    method_set_glyph_count;
    method_get_glyph_flags;
    method_set_glyph_flags;
    method_get_font;
    method_set_font;
}


export class CharFXTransform extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CharFXTransform");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("get_transform");
        this._bindings.method_get_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3761352769
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("set_transform");
        this._bindings.method_set_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2761652528
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("get_range");
        this._bindings.method_get_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2741790807
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("set_range");
        this._bindings.method_set_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1130785943
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("get_elapsed_time");
        this._bindings.method_get_elapsed_time = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          191475506
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("set_elapsed_time");
        this._bindings.method_set_elapsed_time = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("is_visible");
        this._bindings.method_is_visible = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2240911060
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("set_visibility");
        this._bindings.method_set_visibility = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("is_outline");
        this._bindings.method_is_outline = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2240911060
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("set_outline");
        this._bindings.method_set_outline = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("get_offset");
        this._bindings.method_get_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1497962370
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("set_offset");
        this._bindings.method_set_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("get_color");
        this._bindings.method_get_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3200896285
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("set_color");
        this._bindings.method_set_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("get_environment");
        this._bindings.method_get_environment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2382534195
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("set_environment");
        this._bindings.method_set_environment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155329257
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("get_glyph_index");
        this._bindings.method_get_glyph_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("set_glyph_index");
        this._bindings.method_set_glyph_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("get_relative_index");
        this._bindings.method_get_relative_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("set_relative_index");
        this._bindings.method_set_relative_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("get_glyph_count");
        this._bindings.method_get_glyph_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("set_glyph_count");
        this._bindings.method_set_glyph_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("get_glyph_flags");
        this._bindings.method_get_glyph_flags = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("set_glyph_flags");
        this._bindings.method_set_glyph_flags = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("get_font");
        this._bindings.method_get_font = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2944877500
        );
      }
      {
        let classname = new StringName("CharFXTransform");
        let methodname = new StringName("set_font");
        this._bindings.method_set_font = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
  }
  get_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transform,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      
    );
    
  }
  set_transform(_transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_transform,
      this._owner,
      _transform
    );
    
  }
  get_range() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_range,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
    
  }
  set_range(_range) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_range,
      this._owner,
      _range
    );
    
  }
  get_elapsed_time() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_elapsed_time,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_elapsed_time(_time) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_elapsed_time,
      this._owner,
      _time
    );
    
  }
  is_visible() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_visible,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_visibility(_visibility) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility,
      this._owner,
      _visibility
    );
    
  }
  is_outline() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_outline,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_outline(_outline) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_outline,
      this._owner,
      _outline
    );
    
  }
  get_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  set_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_offset,
      this._owner,
      _offset
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
  set_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_color,
      this._owner,
      _color
    );
    
  }
  get_environment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_environment,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
    
  }
  set_environment(_environment) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_environment,
      this._owner,
      _environment
    );
    
  }
  get_glyph_index() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glyph_index,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_glyph_index(_glyph_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glyph_index,
      this._owner,
      _glyph_index
    );
    
  }
  get_relative_index() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_relative_index,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_relative_index(_relative_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_relative_index,
      this._owner,
      _relative_index
    );
    
  }
  get_glyph_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glyph_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_glyph_count(_glyph_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glyph_count,
      this._owner,
      _glyph_count
    );
    
  }
  get_glyph_flags() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glyph_flags,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_glyph_flags(_glyph_flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glyph_flags,
      this._owner,
      _glyph_flags
    );
    
  }
  get_font() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_font,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  set_font(_font) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_font,
      this._owner,
      _font
    );
    
  }
}