import * as internal from '__internal__';
import { PackedFloat32Array } from 'src/js_godot/variant/packed_float32_array'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Rect2 } from 'src/js_godot/variant/rect2'
import { Control } from 'src/js_godot/classes/control'
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
    method_set_text;
    method_get_text;
    method_set_label_settings;
    method_get_label_settings;
    method_set_text_direction;
    method_get_text_direction;
    method_set_language;
    method_get_language;
    method_set_autowrap_mode;
    method_get_autowrap_mode;
    method_set_justification_flags;
    method_get_justification_flags;
    method_set_clip_text;
    method_is_clipping_text;
    method_set_tab_stops;
    method_get_tab_stops;
    method_set_text_overrun_behavior;
    method_get_text_overrun_behavior;
    method_set_ellipsis_char;
    method_get_ellipsis_char;
    method_set_uppercase;
    method_is_uppercase;
    method_get_line_height;
    method_get_line_count;
    method_get_visible_line_count;
    method_get_total_character_count;
    method_set_visible_characters;
    method_get_visible_characters;
    method_get_visible_characters_behavior;
    method_set_visible_characters_behavior;
    method_set_visible_ratio;
    method_get_visible_ratio;
    method_set_lines_skipped;
    method_get_lines_skipped;
    method_set_max_lines_visible;
    method_get_max_lines_visible;
    method_set_structured_text_bidi_override;
    method_get_structured_text_bidi_override;
    method_set_structured_text_bidi_override_options;
    method_get_structured_text_bidi_override_options;
    method_get_character_bounds;
}


export class Label extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Label");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_horizontal_alignment");
        this._bindings.method_set_horizontal_alignment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2312603777
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_horizontal_alignment");
        this._bindings.method_get_horizontal_alignment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          341400642
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_vertical_alignment");
        this._bindings.method_set_vertical_alignment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1796458609
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_vertical_alignment");
        this._bindings.method_get_vertical_alignment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3274884059
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_text");
        this._bindings.method_set_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_text");
        this._bindings.method_get_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_label_settings");
        this._bindings.method_set_label_settings = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1030653839
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_label_settings");
        this._bindings.method_get_label_settings = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          826676056
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_text_direction");
        this._bindings.method_set_text_direction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          119160795
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_text_direction");
        this._bindings.method_get_text_direction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          797257663
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_language");
        this._bindings.method_set_language = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_language");
        this._bindings.method_get_language = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_autowrap_mode");
        this._bindings.method_set_autowrap_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3289138044
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_autowrap_mode");
        this._bindings.method_get_autowrap_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1549071663
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_justification_flags");
        this._bindings.method_set_justification_flags = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2877345813
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_justification_flags");
        this._bindings.method_get_justification_flags = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1583363614
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_clip_text");
        this._bindings.method_set_clip_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("is_clipping_text");
        this._bindings.method_is_clipping_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_tab_stops");
        this._bindings.method_set_tab_stops = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2899603908
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_tab_stops");
        this._bindings.method_get_tab_stops = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          675695659
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_text_overrun_behavior");
        this._bindings.method_set_text_overrun_behavior = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1008890932
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_text_overrun_behavior");
        this._bindings.method_get_text_overrun_behavior = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3779142101
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_ellipsis_char");
        this._bindings.method_set_ellipsis_char = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_ellipsis_char");
        this._bindings.method_get_ellipsis_char = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_uppercase");
        this._bindings.method_set_uppercase = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("is_uppercase");
        this._bindings.method_is_uppercase = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_line_height");
        this._bindings.method_get_line_height = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          181039630
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_line_count");
        this._bindings.method_get_line_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_visible_line_count");
        this._bindings.method_get_visible_line_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_total_character_count");
        this._bindings.method_get_total_character_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_visible_characters");
        this._bindings.method_set_visible_characters = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_visible_characters");
        this._bindings.method_get_visible_characters = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_visible_characters_behavior");
        this._bindings.method_get_visible_characters_behavior = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          258789322
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_visible_characters_behavior");
        this._bindings.method_set_visible_characters_behavior = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3383839701
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_visible_ratio");
        this._bindings.method_set_visible_ratio = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_visible_ratio");
        this._bindings.method_get_visible_ratio = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_lines_skipped");
        this._bindings.method_set_lines_skipped = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_lines_skipped");
        this._bindings.method_get_lines_skipped = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_max_lines_visible");
        this._bindings.method_set_max_lines_visible = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_max_lines_visible");
        this._bindings.method_get_max_lines_visible = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_structured_text_bidi_override");
        this._bindings.method_set_structured_text_bidi_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          55961453
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_structured_text_bidi_override");
        this._bindings.method_get_structured_text_bidi_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3385126229
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("set_structured_text_bidi_override_options");
        this._bindings.method_set_structured_text_bidi_override_options = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          381264803
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_structured_text_bidi_override_options");
        this._bindings.method_get_structured_text_bidi_override_options = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("Label");
        let methodname = new StringName("get_character_bounds");
        this._bindings.method_get_character_bounds = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3327874267
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
  set_label_settings(_settings) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_label_settings,
      this._owner,
      _settings
    );
    
  }
  get_label_settings() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_label_settings,
      this._owner,
			Variant.INT,
      
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
  set_clip_text(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_clip_text,
      this._owner,
      _enable
    );
    
  }
  is_clipping_text() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_clipping_text,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_tab_stops(_tab_stops) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tab_stops,
      this._owner,
      _tab_stops
    );
    
  }
  get_tab_stops() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tab_stops,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY
    ,
      
    );
    
  }
  set_text_overrun_behavior(_overrun_behavior) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_text_overrun_behavior,
      this._owner,
      _overrun_behavior
    );
    
  }
  get_text_overrun_behavior() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_text_overrun_behavior,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_ellipsis_char(_char) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ellipsis_char,
      this._owner,
      _char
    );
    
  }
  get_ellipsis_char() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ellipsis_char,
      this._owner,
			Variant.Type.STRING
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
  get_line_height(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_height,
      this._owner,
			Variant.Type.INT,
      _line
    );
    
  }
  get_line_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_visible_line_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visible_line_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_total_character_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_total_character_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_visible_characters(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visible_characters,
      this._owner,
      _amount
    );
    
  }
  get_visible_characters() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visible_characters,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_visible_characters_behavior() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visible_characters_behavior,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_visible_characters_behavior(_behavior) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visible_characters_behavior,
      this._owner,
      _behavior
    );
    
  }
  set_visible_ratio(_ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visible_ratio,
      this._owner,
      _ratio
    );
    
  }
  get_visible_ratio() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visible_ratio,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_lines_skipped(_lines_skipped) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_lines_skipped,
      this._owner,
      _lines_skipped
    );
    
  }
  get_lines_skipped() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_lines_skipped,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_max_lines_visible(_lines_visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_lines_visible,
      this._owner,
      _lines_visible
    );
    
  }
  get_max_lines_visible() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_lines_visible,
      this._owner,
			Variant.Type.INT,
      
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
  get_character_bounds(_pos) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_character_bounds,
      this._owner,
			Variant.Type.RECT2
    ,
      _pos
    );
    
  }
}