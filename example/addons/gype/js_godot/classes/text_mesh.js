import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { PrimitiveMesh } from '@js_godot/classes/primitive_mesh'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("TextMesh");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_horizontal_alignment() {
    if (!this.#_bindings.method_set_horizontal_alignment) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_horizontal_alignment");
      this.#_bindings.method_set_horizontal_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2312603777
      );
    }
  }
  static init_method_get_horizontal_alignment() {
    if (!this.#_bindings.method_get_horizontal_alignment) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_horizontal_alignment");
      this.#_bindings.method_get_horizontal_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        341400642
      );
    }
  }
  static init_method_set_vertical_alignment() {
    if (!this.#_bindings.method_set_vertical_alignment) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_vertical_alignment");
      this.#_bindings.method_set_vertical_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1796458609
      );
    }
  }
  static init_method_get_vertical_alignment() {
    if (!this.#_bindings.method_get_vertical_alignment) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_vertical_alignment");
      this.#_bindings.method_get_vertical_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3274884059
      );
    }
  }
  static init_method_set_text() {
    if (!this.#_bindings.method_set_text) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_text");
      this.#_bindings.method_set_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_text() {
    if (!this.#_bindings.method_get_text) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_text");
      this.#_bindings.method_get_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_font() {
    if (!this.#_bindings.method_set_font) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_font");
      this.#_bindings.method_set_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1262170328
      );
    }
  }
  static init_method_get_font() {
    if (!this.#_bindings.method_get_font) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_font");
      this.#_bindings.method_get_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3229501585
      );
    }
  }
  static init_method_set_font_size() {
    if (!this.#_bindings.method_set_font_size) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_font_size");
      this.#_bindings.method_set_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_font_size() {
    if (!this.#_bindings.method_get_font_size) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_font_size");
      this.#_bindings.method_get_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_line_spacing() {
    if (!this.#_bindings.method_set_line_spacing) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_line_spacing");
      this.#_bindings.method_set_line_spacing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_line_spacing() {
    if (!this.#_bindings.method_get_line_spacing) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_line_spacing");
      this.#_bindings.method_get_line_spacing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_autowrap_mode() {
    if (!this.#_bindings.method_set_autowrap_mode) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_autowrap_mode");
      this.#_bindings.method_set_autowrap_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3289138044
      );
    }
  }
  static init_method_get_autowrap_mode() {
    if (!this.#_bindings.method_get_autowrap_mode) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_autowrap_mode");
      this.#_bindings.method_get_autowrap_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1549071663
      );
    }
  }
  static init_method_set_justification_flags() {
    if (!this.#_bindings.method_set_justification_flags) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_justification_flags");
      this.#_bindings.method_set_justification_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2877345813
      );
    }
  }
  static init_method_get_justification_flags() {
    if (!this.#_bindings.method_get_justification_flags) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_justification_flags");
      this.#_bindings.method_get_justification_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1583363614
      );
    }
  }
  static init_method_set_depth() {
    if (!this.#_bindings.method_set_depth) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_depth");
      this.#_bindings.method_set_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_depth() {
    if (!this.#_bindings.method_get_depth) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_depth");
      this.#_bindings.method_get_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_width() {
    if (!this.#_bindings.method_set_width) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_width");
      this.#_bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_width() {
    if (!this.#_bindings.method_get_width) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_width");
      this.#_bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_pixel_size() {
    if (!this.#_bindings.method_set_pixel_size) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_pixel_size");
      this.#_bindings.method_set_pixel_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_pixel_size() {
    if (!this.#_bindings.method_get_pixel_size) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_pixel_size");
      this.#_bindings.method_get_pixel_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_offset() {
    if (!this.#_bindings.method_set_offset) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_offset");
      this.#_bindings.method_set_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_offset() {
    if (!this.#_bindings.method_get_offset) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_offset");
      this.#_bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_curve_step() {
    if (!this.#_bindings.method_set_curve_step) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_curve_step");
      this.#_bindings.method_set_curve_step = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_curve_step() {
    if (!this.#_bindings.method_get_curve_step) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_curve_step");
      this.#_bindings.method_get_curve_step = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_text_direction() {
    if (!this.#_bindings.method_set_text_direction) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_text_direction");
      this.#_bindings.method_set_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1418190634
      );
    }
  }
  static init_method_get_text_direction() {
    if (!this.#_bindings.method_get_text_direction) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_text_direction");
      this.#_bindings.method_get_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2516697328
      );
    }
  }
  static init_method_set_language() {
    if (!this.#_bindings.method_set_language) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_language");
      this.#_bindings.method_set_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_language() {
    if (!this.#_bindings.method_get_language) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_language");
      this.#_bindings.method_get_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_structured_text_bidi_override() {
    if (!this.#_bindings.method_set_structured_text_bidi_override) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_structured_text_bidi_override");
      this.#_bindings.method_set_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        55961453
      );
    }
  }
  static init_method_get_structured_text_bidi_override() {
    if (!this.#_bindings.method_get_structured_text_bidi_override) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_structured_text_bidi_override");
      this.#_bindings.method_get_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3385126229
      );
    }
  }
  static init_method_set_structured_text_bidi_override_options() {
    if (!this.#_bindings.method_set_structured_text_bidi_override_options) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_structured_text_bidi_override_options");
      this.#_bindings.method_set_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_structured_text_bidi_override_options() {
    if (!this.#_bindings.method_get_structured_text_bidi_override_options) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("get_structured_text_bidi_override_options");
      this.#_bindings.method_get_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_uppercase() {
    if (!this.#_bindings.method_set_uppercase) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("set_uppercase");
      this.#_bindings.method_set_uppercase = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_uppercase() {
    if (!this.#_bindings.method_is_uppercase) {
      let classname = new StringName("TextMesh");
      let methodname = new StringName("is_uppercase");
      this.#_bindings.method_is_uppercase = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_horizontal_alignment(_alignment) {
    TextMesh.init_method_set_horizontal_alignment();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_horizontal_alignment,
      this._owner,
      _alignment
    );
    
  }
  get_horizontal_alignment() {
    TextMesh.init_method_get_horizontal_alignment();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_horizontal_alignment,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_vertical_alignment(_alignment) {
    TextMesh.init_method_set_vertical_alignment();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_vertical_alignment,
      this._owner,
      _alignment
    );
    
  }
  get_vertical_alignment() {
    TextMesh.init_method_get_vertical_alignment();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_vertical_alignment,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_text(_text) {
    TextMesh.init_method_set_text();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_text,
      this._owner,
      _text
    );
    
  }
  get_text() {
    TextMesh.init_method_get_text();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_font(_font) {
    TextMesh.init_method_set_font();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_font,
      this._owner,
      _font
    );
    
  }
  get_font() {
    TextMesh.init_method_get_font();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_font,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_font_size(_font_size) {
    TextMesh.init_method_set_font_size();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_font_size,
      this._owner,
      _font_size
    );
    
  }
  get_font_size() {
    TextMesh.init_method_get_font_size();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_font_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_line_spacing(_line_spacing) {
    TextMesh.init_method_set_line_spacing();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_line_spacing,
      this._owner,
      _line_spacing
    );
    
  }
  get_line_spacing() {
    TextMesh.init_method_get_line_spacing();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_line_spacing,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_autowrap_mode(_autowrap_mode) {
    TextMesh.init_method_set_autowrap_mode();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_autowrap_mode,
      this._owner,
      _autowrap_mode
    );
    
  }
  get_autowrap_mode() {
    TextMesh.init_method_get_autowrap_mode();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_autowrap_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_justification_flags(_justification_flags) {
    TextMesh.init_method_set_justification_flags();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_justification_flags,
      this._owner,
      _justification_flags
    );
    
  }
  get_justification_flags() {
    TextMesh.init_method_get_justification_flags();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_justification_flags,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_depth(_depth) {
    TextMesh.init_method_set_depth();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_depth,
      this._owner,
      _depth
    );
    
  }
  get_depth() {
    TextMesh.init_method_get_depth();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_depth,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_width(_width) {
    TextMesh.init_method_set_width();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_width,
      this._owner,
      _width
    );
    
  }
  get_width() {
    TextMesh.init_method_get_width();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_width,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_pixel_size(_pixel_size) {
    TextMesh.init_method_set_pixel_size();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_pixel_size,
      this._owner,
      _pixel_size
    );
    
  }
  get_pixel_size() {
    TextMesh.init_method_get_pixel_size();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_pixel_size,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_offset(_offset) {
    TextMesh.init_method_set_offset();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_offset,
      this._owner,
      _offset
    );
    
  }
  get_offset() {
    TextMesh.init_method_get_offset();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_curve_step(_curve_step) {
    TextMesh.init_method_set_curve_step();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_curve_step,
      this._owner,
      _curve_step
    );
    
  }
  get_curve_step() {
    TextMesh.init_method_get_curve_step();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_curve_step,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_text_direction(_direction) {
    TextMesh.init_method_set_text_direction();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_text_direction,
      this._owner,
      _direction
    );
    
  }
  get_text_direction() {
    TextMesh.init_method_get_text_direction();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_text_direction,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_language(_language) {
    TextMesh.init_method_set_language();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_language,
      this._owner,
      _language
    );
    
  }
  get_language() {
    TextMesh.init_method_get_language();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_language,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_structured_text_bidi_override(_parser) {
    TextMesh.init_method_set_structured_text_bidi_override();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_structured_text_bidi_override,
      this._owner,
      _parser
    );
    
  }
  get_structured_text_bidi_override() {
    TextMesh.init_method_get_structured_text_bidi_override();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_structured_text_bidi_override,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_structured_text_bidi_override_options(_args) {
    TextMesh.init_method_set_structured_text_bidi_override_options();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_structured_text_bidi_override_options,
      this._owner,
      _args
    );
    
  }
  get_structured_text_bidi_override_options() {
    TextMesh.init_method_get_structured_text_bidi_override_options();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_get_structured_text_bidi_override_options,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  set_uppercase(_enable) {
    TextMesh.init_method_set_uppercase();
    return _call_native_mb_no_ret(
      TextMesh.#_bindings.method_set_uppercase,
      this._owner,
      _enable
    );
    
  }
  is_uppercase() {
    TextMesh.init_method_is_uppercase();
    return _call_native_mb_ret(
      TextMesh.#_bindings.method_is_uppercase,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get text () {
  return this.get_text();
}
set text (new_value) {
  this.set_text(new_value);
}
get font () {
  return this.get_font();
}
set font (new_value) {
  this.set_font(new_value);
}
get font_size () {
  return this.get_font_size();
}
set font_size (new_value) {
  this.set_font_size(new_value);
}
get horizontal_alignment () {
  return this.get_horizontal_alignment();
}
set horizontal_alignment (new_value) {
  this.set_horizontal_alignment(new_value);
}
get vertical_alignment () {
  return this.get_vertical_alignment();
}
set vertical_alignment (new_value) {
  this.set_vertical_alignment(new_value);
}
get uppercase () {
  return this.is_uppercase();
}
set uppercase (new_value) {
  this.set_uppercase(new_value);
}
get line_spacing () {
  return this.get_line_spacing();
}
set line_spacing (new_value) {
  this.set_line_spacing(new_value);
}
get autowrap_mode () {
  return this.get_autowrap_mode();
}
set autowrap_mode (new_value) {
  this.set_autowrap_mode(new_value);
}
get justification_flags () {
  return this.get_justification_flags();
}
set justification_flags (new_value) {
  this.set_justification_flags(new_value);
}
get pixel_size () {
  return this.get_pixel_size();
}
set pixel_size (new_value) {
  this.set_pixel_size(new_value);
}
get curve_step () {
  return this.get_curve_step();
}
set curve_step (new_value) {
  this.set_curve_step(new_value);
}
get depth () {
  return this.get_depth();
}
set depth (new_value) {
  this.set_depth(new_value);
}
get width () {
  return this.get_width();
}
set width (new_value) {
  this.set_width(new_value);
}
get offset () {
  return this.get_offset();
}
set offset (new_value) {
  this.set_offset(new_value);
}
get text_direction () {
  return this.get_text_direction();
}
set text_direction (new_value) {
  this.set_text_direction(new_value);
}
get language () {
  return this.get_language();
}
set language (new_value) {
  this.set_language(new_value);
}
get structured_text_bidi_override () {
  return this.get_structured_text_bidi_override();
}
set structured_text_bidi_override (new_value) {
  this.set_structured_text_bidi_override(new_value);
}
get structured_text_bidi_override_options () {
  return this.get_structured_text_bidi_override_options();
}
set structured_text_bidi_override_options (new_value) {
  this.set_structured_text_bidi_override_options(new_value);
}

}