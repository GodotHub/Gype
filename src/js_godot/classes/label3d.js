import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import { GeometryInstance3D } from 'src/js_godot/classes/geometry_instance3d'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Color } from 'src/js_godot/variant/color'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_horizontal_alignment;
    method_get_horizontal_alignment;
    method_set_vertical_alignment;
    method_get_vertical_alignment;
    method_set_modulate;
    method_get_modulate;
    method_set_outline_modulate;
    method_get_outline_modulate;
    method_set_text;
    method_get_text;
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
    method_set_render_priority;
    method_get_render_priority;
    method_set_outline_render_priority;
    method_get_outline_render_priority;
    method_set_font;
    method_get_font;
    method_set_font_size;
    method_get_font_size;
    method_set_outline_size;
    method_get_outline_size;
    method_set_line_spacing;
    method_get_line_spacing;
    method_set_autowrap_mode;
    method_get_autowrap_mode;
    method_set_justification_flags;
    method_get_justification_flags;
    method_set_width;
    method_get_width;
    method_set_pixel_size;
    method_get_pixel_size;
    method_set_offset;
    method_get_offset;
    method_set_draw_flag;
    method_get_draw_flag;
    method_set_billboard_mode;
    method_get_billboard_mode;
    method_set_alpha_cut_mode;
    method_get_alpha_cut_mode;
    method_set_alpha_scissor_threshold;
    method_get_alpha_scissor_threshold;
    method_set_alpha_hash_scale;
    method_get_alpha_hash_scale;
    method_set_alpha_antialiasing;
    method_get_alpha_antialiasing;
    method_set_alpha_antialiasing_edge;
    method_get_alpha_antialiasing_edge;
    method_set_texture_filter;
    method_get_texture_filter;
    method_generate_triangle_mesh;
}


export class Label3D extends GeometryInstance3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Label3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_horizontal_alignment");
        this._bindings.method_set_horizontal_alignment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2312603777
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_horizontal_alignment");
        this._bindings.method_get_horizontal_alignment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          341400642
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_vertical_alignment");
        this._bindings.method_set_vertical_alignment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1796458609
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_vertical_alignment");
        this._bindings.method_get_vertical_alignment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3274884059
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_modulate");
        this._bindings.method_set_modulate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_modulate");
        this._bindings.method_get_modulate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_outline_modulate");
        this._bindings.method_set_outline_modulate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_outline_modulate");
        this._bindings.method_get_outline_modulate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_text");
        this._bindings.method_set_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_text");
        this._bindings.method_get_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_text_direction");
        this._bindings.method_set_text_direction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1418190634
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_text_direction");
        this._bindings.method_get_text_direction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2516697328
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_language");
        this._bindings.method_set_language = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_language");
        this._bindings.method_get_language = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_structured_text_bidi_override");
        this._bindings.method_set_structured_text_bidi_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          55961453
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_structured_text_bidi_override");
        this._bindings.method_get_structured_text_bidi_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3385126229
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_structured_text_bidi_override_options");
        this._bindings.method_set_structured_text_bidi_override_options = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          381264803
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_structured_text_bidi_override_options");
        this._bindings.method_get_structured_text_bidi_override_options = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_uppercase");
        this._bindings.method_set_uppercase = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("is_uppercase");
        this._bindings.method_is_uppercase = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_render_priority");
        this._bindings.method_set_render_priority = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_render_priority");
        this._bindings.method_get_render_priority = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_outline_render_priority");
        this._bindings.method_set_outline_render_priority = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_outline_render_priority");
        this._bindings.method_get_outline_render_priority = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_font");
        this._bindings.method_set_font = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1262170328
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_font");
        this._bindings.method_get_font = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3229501585
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_font_size");
        this._bindings.method_set_font_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_font_size");
        this._bindings.method_get_font_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_outline_size");
        this._bindings.method_set_outline_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_outline_size");
        this._bindings.method_get_outline_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_line_spacing");
        this._bindings.method_set_line_spacing = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_line_spacing");
        this._bindings.method_get_line_spacing = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_autowrap_mode");
        this._bindings.method_set_autowrap_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3289138044
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_autowrap_mode");
        this._bindings.method_get_autowrap_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1549071663
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_justification_flags");
        this._bindings.method_set_justification_flags = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2877345813
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_justification_flags");
        this._bindings.method_get_justification_flags = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1583363614
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_width");
        this._bindings.method_set_width = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_width");
        this._bindings.method_get_width = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_pixel_size");
        this._bindings.method_set_pixel_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_pixel_size");
        this._bindings.method_get_pixel_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_offset");
        this._bindings.method_set_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_offset");
        this._bindings.method_get_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_draw_flag");
        this._bindings.method_set_draw_flag = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1285833066
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_draw_flag");
        this._bindings.method_get_draw_flag = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          259226453
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_billboard_mode");
        this._bindings.method_set_billboard_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4202036497
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_billboard_mode");
        this._bindings.method_get_billboard_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1283840139
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_alpha_cut_mode");
        this._bindings.method_set_alpha_cut_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2549142916
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_alpha_cut_mode");
        this._bindings.method_get_alpha_cut_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          219468601
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_alpha_scissor_threshold");
        this._bindings.method_set_alpha_scissor_threshold = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_alpha_scissor_threshold");
        this._bindings.method_get_alpha_scissor_threshold = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_alpha_hash_scale");
        this._bindings.method_set_alpha_hash_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_alpha_hash_scale");
        this._bindings.method_get_alpha_hash_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_alpha_antialiasing");
        this._bindings.method_set_alpha_antialiasing = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3212649852
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_alpha_antialiasing");
        this._bindings.method_get_alpha_antialiasing = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2889939400
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_alpha_antialiasing_edge");
        this._bindings.method_set_alpha_antialiasing_edge = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_alpha_antialiasing_edge");
        this._bindings.method_get_alpha_antialiasing_edge = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("set_texture_filter");
        this._bindings.method_set_texture_filter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          22904437
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("get_texture_filter");
        this._bindings.method_get_texture_filter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3289213076
        );
      }
      {
        let classname = new StringName("Label3D");
        let methodname = new StringName("generate_triangle_mesh");
        this._bindings.method_generate_triangle_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3476533166
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
  set_modulate(_modulate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_modulate,
      this._owner,
      _modulate
    );
    
  }
  get_modulate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_modulate,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_outline_modulate(_modulate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_outline_modulate,
      this._owner,
      _modulate
    );
    
  }
  get_outline_modulate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_outline_modulate,
      this._owner,
			Variant.Type.COLOR
    ,
      
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
  set_render_priority(_priority) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_render_priority,
      this._owner,
      _priority
    );
    
  }
  get_render_priority() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_render_priority,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_outline_render_priority(_priority) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_outline_render_priority,
      this._owner,
      _priority
    );
    
  }
  get_outline_render_priority() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_outline_render_priority,
      this._owner,
			Variant.Type.INT,
      
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
  set_outline_size(_outline_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_outline_size,
      this._owner,
      _outline_size
    );
    
  }
  get_outline_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_outline_size,
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
  set_draw_flag(_flag, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_draw_flag,
      this._owner,
      _flag, _enabled
    );
    
  }
  get_draw_flag(_flag) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_draw_flag,
      this._owner,
			Variant.Type.BOOL,
      _flag
    );
    
  }
  set_billboard_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_billboard_mode,
      this._owner,
      _mode
    );
    
  }
  get_billboard_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_billboard_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_alpha_cut_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alpha_cut_mode,
      this._owner,
      _mode
    );
    
  }
  get_alpha_cut_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alpha_cut_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_alpha_scissor_threshold(_threshold) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alpha_scissor_threshold,
      this._owner,
      _threshold
    );
    
  }
  get_alpha_scissor_threshold() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alpha_scissor_threshold,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_alpha_hash_scale(_threshold) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alpha_hash_scale,
      this._owner,
      _threshold
    );
    
  }
  get_alpha_hash_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alpha_hash_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_alpha_antialiasing(_alpha_aa) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alpha_antialiasing,
      this._owner,
      _alpha_aa
    );
    
  }
  get_alpha_antialiasing() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alpha_antialiasing,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_alpha_antialiasing_edge(_edge) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alpha_antialiasing_edge,
      this._owner,
      _edge
    );
    
  }
  get_alpha_antialiasing_edge() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alpha_antialiasing_edge,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_texture_filter(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_filter,
      this._owner,
      _mode
    );
    
  }
  get_texture_filter() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_filter,
      this._owner,
			Variant.INT,
      
    );
    
  }
  generate_triangle_mesh() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_generate_triangle_mesh,
      this._owner,
			Variant.INT,
      
    );
    
  }
  static DrawFlags = {
    FLAG_SHADED: 0,
    FLAG_DOUBLE_SIDED: 1,
    FLAG_DISABLE_DEPTH_TEST: 2,
    FLAG_FIXED_SIZE: 3,
    FLAG_MAX: 4,
  }
  static AlphaCutMode = {
    ALPHA_CUT_DISABLED: 0,
    ALPHA_CUT_DISCARD: 1,
    ALPHA_CUT_OPAQUE_PREPASS: 2,
    ALPHA_CUT_HASH: 3,
  }
}