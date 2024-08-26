import * as internal from '__internal__';
import { GDArray } from 'src/js_godot/variant/gd_array'
import { PrimitiveMesh } from 'src/js_godot/classesprimitive_mesh'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_set_horizontal_alignment;
    method_get_horizontal_alignment;
    method_set_vertical_alignment;
    method_get_vertical_alignment;
    method_set_text;
    method_get_text;
    method_set_font;
    method_get_font;
    method_set_font_size;
    method_get_font_size;
    method_set_line_spacing;
    method_get_line_spacing;
    method_set_autowrap_mode;
    method_get_autowrap_mode;
    method_set_justification_flags;
    method_get_justification_flags;
    method_set_depth;
    method_get_depth;
    method_set_width;
    method_get_width;
    method_set_pixel_size;
    method_get_pixel_size;
    method_set_offset;
    method_get_offset;
    method_set_curve_step;
    method_get_curve_step;
    method_set_text_direction;
    method_get_text_direction;
    method_set_language;
    method_get_language;
    method_set_structured_text_bidi_override;
    method_get_structured_text_bidi_override;
    method_set_structured_text_bidi_override_options;
    method_get_structured_text_bidi_override_options;
    method_set_uppercase;
    method_is_uppercase;
}


export class TextMesh extends PrimitiveMesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TextMesh");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_horizontal_alignment");
      this._bindings.method_set_horizontal_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2312603777
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_horizontal_alignment");
      this._bindings.method_get_horizontal_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        341400642
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_vertical_alignment");
      this._bindings.method_set_vertical_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1796458609
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_vertical_alignment");
      this._bindings.method_get_vertical_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3274884059
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_text");
      this._bindings.method_set_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_text");
      this._bindings.method_get_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_font");
      this._bindings.method_set_font = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1262170328
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_font");
      this._bindings.method_get_font = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3229501585
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_font_size");
      this._bindings.method_set_font_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_font_size");
      this._bindings.method_get_font_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_line_spacing");
      this._bindings.method_set_line_spacing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_line_spacing");
      this._bindings.method_get_line_spacing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_autowrap_mode");
      this._bindings.method_set_autowrap_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3289138044
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_autowrap_mode");
      this._bindings.method_get_autowrap_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1549071663
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_justification_flags");
      this._bindings.method_set_justification_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2877345813
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_justification_flags");
      this._bindings.method_get_justification_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1583363614
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_depth");
      this._bindings.method_set_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_depth");
      this._bindings.method_get_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_width");
      this._bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_width");
      this._bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_pixel_size");
      this._bindings.method_set_pixel_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_pixel_size");
      this._bindings.method_get_pixel_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_offset");
      this._bindings.method_set_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_offset");
      this._bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_curve_step");
      this._bindings.method_set_curve_step = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_curve_step");
      this._bindings.method_get_curve_step = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_text_direction");
      this._bindings.method_set_text_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1418190634
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_text_direction");
      this._bindings.method_get_text_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2516697328
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_language");
      this._bindings.method_set_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_language");
      this._bindings.method_get_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_structured_text_bidi_override");
      this._bindings.method_set_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        55961453
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_structured_text_bidi_override");
      this._bindings.method_get_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3385126229
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_structured_text_bidi_override_options");
      this._bindings.method_set_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_structured_text_bidi_override_options");
      this._bindings.method_get_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_uppercase");
      this._bindings.method_set_uppercase = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("is_uppercase");
      this._bindings.method_is_uppercase = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_horizontal_alignment(_alignment) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_horizontal_alignment,
      this._owner,
      _alignment
    );
  }
  get_horizontal_alignment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_horizontal_alignment,
      this._owner,
			Variant.INT,
      
    );
  }
  set_vertical_alignment(_alignment) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertical_alignment,
      this._owner,
      _alignment
    );
  }
  get_vertical_alignment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertical_alignment,
      this._owner,
			Variant.INT,
      
    );
  }
  set_text(_text) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_text,
      this._owner,
      _text
    );
  }
  get_text() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_text,
      this._owner,
			Variant.Type.STRING
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
  get_font() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_font,
      this._owner,
			Variant.INT,
      
    );
  }
  set_font_size(_font_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_font_size,
      this._owner,
      _font_size
    );
  }
  get_font_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_font_size,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_line_spacing(_line_spacing) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_line_spacing,
      this._owner,
      _line_spacing
    );
  }
  get_line_spacing() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_spacing,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_autowrap_mode(_autowrap_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_autowrap_mode,
      this._owner,
      _autowrap_mode
    );
  }
  get_autowrap_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_autowrap_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_justification_flags(_justification_flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_justification_flags,
      this._owner,
      _justification_flags
    );
  }
  get_justification_flags() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_justification_flags,
      this._owner,
			Variant.INT,
      
    );
  }
  set_depth(_depth) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth,
      this._owner,
      _depth
    );
  }
  get_depth() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_width(_width) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_width,
      this._owner,
      _width
    );
  }
  get_width() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_width,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_pixel_size(_pixel_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pixel_size,
      this._owner,
      _pixel_size
    );
  }
  get_pixel_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pixel_size,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_offset,
      this._owner,
      _offset
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
  set_curve_step(_curve_step) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_curve_step,
      this._owner,
      _curve_step
    );
  }
  get_curve_step() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_curve_step,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_text_direction(_direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_text_direction,
      this._owner,
      _direction
    );
  }
  get_text_direction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_text_direction,
      this._owner,
			Variant.INT,
      
    );
  }
  set_language(_language) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_language,
      this._owner,
      _language
    );
  }
  get_language() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_language,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_structured_text_bidi_override(_parser) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_structured_text_bidi_override,
      this._owner,
      _parser
    );
  }
  get_structured_text_bidi_override() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_structured_text_bidi_override,
      this._owner,
			Variant.INT,
      
    );
  }
  set_structured_text_bidi_override_options(_args) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_structured_text_bidi_override_options,
      this._owner,
      _args
    );
  }
  get_structured_text_bidi_override_options() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_structured_text_bidi_override_options,
      this._owner,
			Variant.Type.ARRAY
    ,
      
    );
  }
  set_uppercase(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_uppercase,
      this._owner,
      _enable
    );
  }
  is_uppercase() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_uppercase,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}