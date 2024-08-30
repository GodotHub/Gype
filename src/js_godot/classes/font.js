import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { Resource } from 'src/js_godot/classes/resource'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import { Transform2D } from 'src/js_godot/variant/transform2d'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { RID } from 'src/js_godot/variant/rid'
import { Color } from 'src/js_godot/variant/color'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_fallbacks;
    method_get_fallbacks;
    method_find_variation;
    method_get_rids;
    method_get_height;
    method_get_ascent;
    method_get_descent;
    method_get_underline_position;
    method_get_underline_thickness;
    method_get_font_name;
    method_get_font_style_name;
    method_get_ot_name_strings;
    method_get_font_style;
    method_get_font_weight;
    method_get_font_stretch;
    method_get_spacing;
    method_get_opentype_features;
    method_set_cache_capacity;
    method_get_string_size;
    method_get_multiline_string_size;
    method_draw_string;
    method_draw_multiline_string;
    method_draw_string_outline;
    method_draw_multiline_string_outline;
    method_get_char_size;
    method_draw_char;
    method_draw_char_outline;
    method_has_char;
    method_get_supported_chars;
    method_is_language_supported;
    method_is_script_supported;
    method_get_supported_feature_list;
    method_get_supported_variation_list;
    method_get_face_count;
}


export class Font extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Font");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Font");
        let methodname = new StringName("set_fallbacks");
        this._bindings.method_set_fallbacks = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          381264803
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_fallbacks");
        this._bindings.method_get_fallbacks = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("find_variation");
        this._bindings.method_find_variation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2553855095
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_rids");
        this._bindings.method_get_rids = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_height");
        this._bindings.method_get_height = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          378113874
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_ascent");
        this._bindings.method_get_ascent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          378113874
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_descent");
        this._bindings.method_get_descent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          378113874
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_underline_position");
        this._bindings.method_get_underline_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          378113874
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_underline_thickness");
        this._bindings.method_get_underline_thickness = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          378113874
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_font_name");
        this._bindings.method_get_font_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_font_style_name");
        this._bindings.method_get_font_style_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_ot_name_strings");
        this._bindings.method_get_ot_name_strings = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3102165223
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_font_style");
        this._bindings.method_get_font_style = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2520224254
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_font_weight");
        this._bindings.method_get_font_weight = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_font_stretch");
        this._bindings.method_get_font_stretch = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_spacing");
        this._bindings.method_get_spacing = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1310880908
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_opentype_features");
        this._bindings.method_get_opentype_features = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3102165223
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("set_cache_capacity");
        this._bindings.method_set_cache_capacity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937882851
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_string_size");
        this._bindings.method_get_string_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1868866121
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_multiline_string_size");
        this._bindings.method_get_multiline_string_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          519636710
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("draw_string");
        this._bindings.method_draw_string = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1983721962
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("draw_multiline_string");
        this._bindings.method_draw_multiline_string = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1171506176
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("draw_string_outline");
        this._bindings.method_draw_string_outline = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          623754045
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("draw_multiline_string_outline");
        this._bindings.method_draw_multiline_string_outline = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3206388178
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_char_size");
        this._bindings.method_get_char_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3016396712
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("draw_char");
        this._bindings.method_draw_char = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3815617597
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("draw_char_outline");
        this._bindings.method_draw_char_outline = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          209525354
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("has_char");
        this._bindings.method_has_char = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_supported_chars");
        this._bindings.method_get_supported_chars = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("is_language_supported");
        this._bindings.method_is_language_supported = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3927539163
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("is_script_supported");
        this._bindings.method_is_script_supported = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3927539163
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_supported_feature_list");
        this._bindings.method_get_supported_feature_list = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3102165223
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_supported_variation_list");
        this._bindings.method_get_supported_variation_list = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3102165223
        );
      }
      {
        let classname = new StringName("Font");
        let methodname = new StringName("get_face_count");
        this._bindings.method_get_face_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
  }
  set_fallbacks(_fallbacks) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fallbacks,
      this._owner,
      _fallbacks
    );
    
  }
  get_fallbacks() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fallbacks,
      this._owner,
			Variant.INT,
      
    );
    
  }
  find_variation(_variation_coordinates, _face_index, _strength, _transform, _spacing_top, _spacing_bottom, _spacing_space, _spacing_glyph, _baseline_offset) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_find_variation,
      this._owner,
			Variant.Type.RID
    ,
      _variation_coordinates, _face_index, _strength, _transform, _spacing_top, _spacing_bottom, _spacing_space, _spacing_glyph, _baseline_offset
    );
    
  }
  get_rids() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rids,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_height(_font_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_height,
      this._owner,
			Variant.Type.FLOAT,
      _font_size
    );
    
  }
  get_ascent(_font_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ascent,
      this._owner,
			Variant.Type.FLOAT,
      _font_size
    );
    
  }
  get_descent(_font_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_descent,
      this._owner,
			Variant.Type.FLOAT,
      _font_size
    );
    
  }
  get_underline_position(_font_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_underline_position,
      this._owner,
			Variant.Type.FLOAT,
      _font_size
    );
    
  }
  get_underline_thickness(_font_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_underline_thickness,
      this._owner,
			Variant.Type.FLOAT,
      _font_size
    );
    
  }
  get_font_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_font_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  get_font_style_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_font_style_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  get_ot_name_strings() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ot_name_strings,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
    
  }
  get_font_style() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_font_style,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_font_weight() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_font_weight,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_font_stretch() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_font_stretch,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_spacing(_spacing) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_spacing,
      this._owner,
			Variant.Type.INT,
      _spacing
    );
    
  }
  get_opentype_features() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_opentype_features,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
    
  }
  set_cache_capacity(_single_line, _multi_line) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cache_capacity,
      this._owner,
      _single_line, _multi_line
    );
    
  }
  get_string_size(_text, _alignment, _width, _font_size, _justification_flags, _direction, _orientation) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_string_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _text, _alignment, _width, _font_size, _justification_flags, _direction, _orientation
    );
    
  }
  get_multiline_string_size(_text, _alignment, _width, _font_size, _max_lines, _brk_flags, _justification_flags, _direction, _orientation) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_multiline_string_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _text, _alignment, _width, _font_size, _max_lines, _brk_flags, _justification_flags, _direction, _orientation
    );
    
  }
  draw_string(_canvas_item, _pos, _text, _alignment, _width, _font_size, _modulate, _justification_flags, _direction, _orientation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_string,
      this._owner,
      _canvas_item, _pos, _text, _alignment, _width, _font_size, _modulate, _justification_flags, _direction, _orientation
    );
    
  }
  draw_multiline_string(_canvas_item, _pos, _text, _alignment, _width, _font_size, _max_lines, _modulate, _brk_flags, _justification_flags, _direction, _orientation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_multiline_string,
      this._owner,
      _canvas_item, _pos, _text, _alignment, _width, _font_size, _max_lines, _modulate, _brk_flags, _justification_flags, _direction, _orientation
    );
    
  }
  draw_string_outline(_canvas_item, _pos, _text, _alignment, _width, _font_size, _size, _modulate, _justification_flags, _direction, _orientation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_string_outline,
      this._owner,
      _canvas_item, _pos, _text, _alignment, _width, _font_size, _size, _modulate, _justification_flags, _direction, _orientation
    );
    
  }
  draw_multiline_string_outline(_canvas_item, _pos, _text, _alignment, _width, _font_size, _max_lines, _size, _modulate, _brk_flags, _justification_flags, _direction, _orientation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_multiline_string_outline,
      this._owner,
      _canvas_item, _pos, _text, _alignment, _width, _font_size, _max_lines, _size, _modulate, _brk_flags, _justification_flags, _direction, _orientation
    );
    
  }
  get_char_size(_char, _font_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_char_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _char, _font_size
    );
    
  }
  draw_char(_canvas_item, _pos, _char, _font_size, _modulate) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_draw_char,
      this._owner,
			Variant.Type.FLOAT,
      _canvas_item, _pos, _char, _font_size, _modulate
    );
    
  }
  draw_char_outline(_canvas_item, _pos, _char, _font_size, _size, _modulate) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_draw_char_outline,
      this._owner,
			Variant.Type.FLOAT,
      _canvas_item, _pos, _char, _font_size, _size, _modulate
    );
    
  }
  has_char(_char) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_char,
      this._owner,
			Variant.Type.BOOL,
      _char
    );
    
  }
  get_supported_chars() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_supported_chars,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  is_language_supported(_language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_language_supported,
      this._owner,
			Variant.Type.BOOL,
      _language
    );
    
  }
  is_script_supported(_script) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_script_supported,
      this._owner,
			Variant.Type.BOOL,
      _script
    );
    
  }
  get_supported_feature_list() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_supported_feature_list,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
    
  }
  get_supported_variation_list() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_supported_variation_list,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
    
  }
  get_face_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_face_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
}