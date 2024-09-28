import * as internal from '__internal__';
import { Control } from '@js_godot/classes/control'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

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
@GodotClass
export class Label extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Label");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_horizontal_alignment() {
    if (!this._bindings.method_set_horizontal_alignment) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_horizontal_alignment");
      this._bindings.method_set_horizontal_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2312603777
      );
    }
  }
  static init_method_get_horizontal_alignment() {
    if (!this._bindings.method_get_horizontal_alignment) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_horizontal_alignment");
      this._bindings.method_get_horizontal_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        341400642
      );
    }
  }
  static init_method_set_vertical_alignment() {
    if (!this._bindings.method_set_vertical_alignment) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_vertical_alignment");
      this._bindings.method_set_vertical_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1796458609
      );
    }
  }
  static init_method_get_vertical_alignment() {
    if (!this._bindings.method_get_vertical_alignment) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_vertical_alignment");
      this._bindings.method_get_vertical_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3274884059
      );
    }
  }
  static init_method_set_text() {
    if (!this._bindings.method_set_text) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_text");
      this._bindings.method_set_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_text() {
    if (!this._bindings.method_get_text) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_text");
      this._bindings.method_get_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_label_settings() {
    if (!this._bindings.method_set_label_settings) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_label_settings");
      this._bindings.method_set_label_settings = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1030653839
      );
    }
  }
  static init_method_get_label_settings() {
    if (!this._bindings.method_get_label_settings) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_label_settings");
      this._bindings.method_get_label_settings = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        826676056
      );
    }
  }
  static init_method_set_text_direction() {
    if (!this._bindings.method_set_text_direction) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_text_direction");
      this._bindings.method_set_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        119160795
      );
    }
  }
  static init_method_get_text_direction() {
    if (!this._bindings.method_get_text_direction) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_text_direction");
      this._bindings.method_get_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        797257663
      );
    }
  }
  static init_method_set_language() {
    if (!this._bindings.method_set_language) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_language");
      this._bindings.method_set_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_language() {
    if (!this._bindings.method_get_language) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_language");
      this._bindings.method_get_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_autowrap_mode() {
    if (!this._bindings.method_set_autowrap_mode) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_autowrap_mode");
      this._bindings.method_set_autowrap_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3289138044
      );
    }
  }
  static init_method_get_autowrap_mode() {
    if (!this._bindings.method_get_autowrap_mode) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_autowrap_mode");
      this._bindings.method_get_autowrap_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1549071663
      );
    }
  }
  static init_method_set_justification_flags() {
    if (!this._bindings.method_set_justification_flags) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_justification_flags");
      this._bindings.method_set_justification_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2877345813
      );
    }
  }
  static init_method_get_justification_flags() {
    if (!this._bindings.method_get_justification_flags) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_justification_flags");
      this._bindings.method_get_justification_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1583363614
      );
    }
  }
  static init_method_set_clip_text() {
    if (!this._bindings.method_set_clip_text) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_clip_text");
      this._bindings.method_set_clip_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_clipping_text() {
    if (!this._bindings.method_is_clipping_text) {
      let classname = new StringName("Label");
      let methodname = new StringName("is_clipping_text");
      this._bindings.method_is_clipping_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_tab_stops() {
    if (!this._bindings.method_set_tab_stops) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_tab_stops");
      this._bindings.method_set_tab_stops = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2899603908
      );
    }
  }
  static init_method_get_tab_stops() {
    if (!this._bindings.method_get_tab_stops) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_tab_stops");
      this._bindings.method_get_tab_stops = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        675695659
      );
    }
  }
  static init_method_set_text_overrun_behavior() {
    if (!this._bindings.method_set_text_overrun_behavior) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_text_overrun_behavior");
      this._bindings.method_set_text_overrun_behavior = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1008890932
      );
    }
  }
  static init_method_get_text_overrun_behavior() {
    if (!this._bindings.method_get_text_overrun_behavior) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_text_overrun_behavior");
      this._bindings.method_get_text_overrun_behavior = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3779142101
      );
    }
  }
  static init_method_set_ellipsis_char() {
    if (!this._bindings.method_set_ellipsis_char) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_ellipsis_char");
      this._bindings.method_set_ellipsis_char = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_ellipsis_char() {
    if (!this._bindings.method_get_ellipsis_char) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_ellipsis_char");
      this._bindings.method_get_ellipsis_char = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_uppercase() {
    if (!this._bindings.method_set_uppercase) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_uppercase");
      this._bindings.method_set_uppercase = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_uppercase() {
    if (!this._bindings.method_is_uppercase) {
      let classname = new StringName("Label");
      let methodname = new StringName("is_uppercase");
      this._bindings.method_is_uppercase = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_line_height() {
    if (!this._bindings.method_get_line_height) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_line_height");
      this._bindings.method_get_line_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        181039630
      );
    }
  }
  static init_method_get_line_count() {
    if (!this._bindings.method_get_line_count) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_line_count");
      this._bindings.method_get_line_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_visible_line_count() {
    if (!this._bindings.method_get_visible_line_count) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_visible_line_count");
      this._bindings.method_get_visible_line_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_total_character_count() {
    if (!this._bindings.method_get_total_character_count) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_total_character_count");
      this._bindings.method_get_total_character_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_visible_characters() {
    if (!this._bindings.method_set_visible_characters) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_visible_characters");
      this._bindings.method_set_visible_characters = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_visible_characters() {
    if (!this._bindings.method_get_visible_characters) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_visible_characters");
      this._bindings.method_get_visible_characters = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_visible_characters_behavior() {
    if (!this._bindings.method_get_visible_characters_behavior) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_visible_characters_behavior");
      this._bindings.method_get_visible_characters_behavior = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        258789322
      );
    }
  }
  static init_method_set_visible_characters_behavior() {
    if (!this._bindings.method_set_visible_characters_behavior) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_visible_characters_behavior");
      this._bindings.method_set_visible_characters_behavior = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3383839701
      );
    }
  }
  static init_method_set_visible_ratio() {
    if (!this._bindings.method_set_visible_ratio) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_visible_ratio");
      this._bindings.method_set_visible_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_visible_ratio() {
    if (!this._bindings.method_get_visible_ratio) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_visible_ratio");
      this._bindings.method_get_visible_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_lines_skipped() {
    if (!this._bindings.method_set_lines_skipped) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_lines_skipped");
      this._bindings.method_set_lines_skipped = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_lines_skipped() {
    if (!this._bindings.method_get_lines_skipped) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_lines_skipped");
      this._bindings.method_get_lines_skipped = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_max_lines_visible() {
    if (!this._bindings.method_set_max_lines_visible) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_max_lines_visible");
      this._bindings.method_set_max_lines_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_max_lines_visible() {
    if (!this._bindings.method_get_max_lines_visible) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_max_lines_visible");
      this._bindings.method_get_max_lines_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_structured_text_bidi_override() {
    if (!this._bindings.method_set_structured_text_bidi_override) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_structured_text_bidi_override");
      this._bindings.method_set_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        55961453
      );
    }
  }
  static init_method_get_structured_text_bidi_override() {
    if (!this._bindings.method_get_structured_text_bidi_override) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_structured_text_bidi_override");
      this._bindings.method_get_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3385126229
      );
    }
  }
  static init_method_set_structured_text_bidi_override_options() {
    if (!this._bindings.method_set_structured_text_bidi_override_options) {
      let classname = new StringName("Label");
      let methodname = new StringName("set_structured_text_bidi_override_options");
      this._bindings.method_set_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_structured_text_bidi_override_options() {
    if (!this._bindings.method_get_structured_text_bidi_override_options) {
      let classname = new StringName("Label");
      let methodname = new StringName("get_structured_text_bidi_override_options");
      this._bindings.method_get_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_get_character_bounds() {
    if (!this._bindings.method_get_character_bounds) {
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
    Label.init_method_set_horizontal_alignment();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_horizontal_alignment,
      this._owner,
      _alignment
    );
    
  }
  get_horizontal_alignment() {
    Label.init_method_get_horizontal_alignment();
    return _call_native_mb_ret(
      Label._bindings.method_get_horizontal_alignment,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_vertical_alignment(_alignment) {
    Label.init_method_set_vertical_alignment();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_vertical_alignment,
      this._owner,
      _alignment
    );
    
  }
  get_vertical_alignment() {
    Label.init_method_get_vertical_alignment();
    return _call_native_mb_ret(
      Label._bindings.method_get_vertical_alignment,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_text(_text) {
    Label.init_method_set_text();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_text,
      this._owner,
      _text
    );
    
  }
  get_text() {
    Label.init_method_get_text();
    return _call_native_mb_ret(
      Label._bindings.method_get_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_label_settings(_settings) {
    Label.init_method_set_label_settings();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_label_settings,
      this._owner,
      _settings
    );
    
  }
  get_label_settings() {
    Label.init_method_get_label_settings();
    return _call_native_mb_ret(
      Label._bindings.method_get_label_settings,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_text_direction(_direction) {
    Label.init_method_set_text_direction();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_text_direction,
      this._owner,
      _direction
    );
    
  }
  get_text_direction() {
    Label.init_method_get_text_direction();
    return _call_native_mb_ret(
      Label._bindings.method_get_text_direction,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_language(_language) {
    Label.init_method_set_language();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_language,
      this._owner,
      _language
    );
    
  }
  get_language() {
    Label.init_method_get_language();
    return _call_native_mb_ret(
      Label._bindings.method_get_language,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_autowrap_mode(_autowrap_mode) {
    Label.init_method_set_autowrap_mode();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_autowrap_mode,
      this._owner,
      _autowrap_mode
    );
    
  }
  get_autowrap_mode() {
    Label.init_method_get_autowrap_mode();
    return _call_native_mb_ret(
      Label._bindings.method_get_autowrap_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_justification_flags(_justification_flags) {
    Label.init_method_set_justification_flags();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_justification_flags,
      this._owner,
      _justification_flags
    );
    
  }
  get_justification_flags() {
    Label.init_method_get_justification_flags();
    return _call_native_mb_ret(
      Label._bindings.method_get_justification_flags,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_clip_text(_enable) {
    Label.init_method_set_clip_text();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_clip_text,
      this._owner,
      _enable
    );
    
  }
  is_clipping_text() {
    Label.init_method_is_clipping_text();
    return _call_native_mb_ret(
      Label._bindings.method_is_clipping_text,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_tab_stops(_tab_stops) {
    Label.init_method_set_tab_stops();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_tab_stops,
      this._owner,
      _tab_stops
    );
    
  }
  get_tab_stops() {
    Label.init_method_get_tab_stops();
    return _call_native_mb_ret(
      Label._bindings.method_get_tab_stops,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY,
    
      
    );
    
  }
  set_text_overrun_behavior(_overrun_behavior) {
    Label.init_method_set_text_overrun_behavior();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_text_overrun_behavior,
      this._owner,
      _overrun_behavior
    );
    
  }
  get_text_overrun_behavior() {
    Label.init_method_get_text_overrun_behavior();
    return _call_native_mb_ret(
      Label._bindings.method_get_text_overrun_behavior,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_ellipsis_char(_char) {
    Label.init_method_set_ellipsis_char();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_ellipsis_char,
      this._owner,
      _char
    );
    
  }
  get_ellipsis_char() {
    Label.init_method_get_ellipsis_char();
    return _call_native_mb_ret(
      Label._bindings.method_get_ellipsis_char,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_uppercase(_enable) {
    Label.init_method_set_uppercase();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_uppercase,
      this._owner,
      _enable
    );
    
  }
  is_uppercase() {
    Label.init_method_is_uppercase();
    return _call_native_mb_ret(
      Label._bindings.method_is_uppercase,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_line_height(_line) {
    Label.init_method_get_line_height();
    return _call_native_mb_ret(
      Label._bindings.method_get_line_height,
      this._owner,
			Variant.Type.INT,
    
      _line
    );
    
  }
  get_line_count() {
    Label.init_method_get_line_count();
    return _call_native_mb_ret(
      Label._bindings.method_get_line_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_visible_line_count() {
    Label.init_method_get_visible_line_count();
    return _call_native_mb_ret(
      Label._bindings.method_get_visible_line_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_total_character_count() {
    Label.init_method_get_total_character_count();
    return _call_native_mb_ret(
      Label._bindings.method_get_total_character_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_visible_characters(_amount) {
    Label.init_method_set_visible_characters();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_visible_characters,
      this._owner,
      _amount
    );
    
  }
  get_visible_characters() {
    Label.init_method_get_visible_characters();
    return _call_native_mb_ret(
      Label._bindings.method_get_visible_characters,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_visible_characters_behavior() {
    Label.init_method_get_visible_characters_behavior();
    return _call_native_mb_ret(
      Label._bindings.method_get_visible_characters_behavior,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_visible_characters_behavior(_behavior) {
    Label.init_method_set_visible_characters_behavior();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_visible_characters_behavior,
      this._owner,
      _behavior
    );
    
  }
  set_visible_ratio(_ratio) {
    Label.init_method_set_visible_ratio();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_visible_ratio,
      this._owner,
      _ratio
    );
    
  }
  get_visible_ratio() {
    Label.init_method_get_visible_ratio();
    return _call_native_mb_ret(
      Label._bindings.method_get_visible_ratio,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_lines_skipped(_lines_skipped) {
    Label.init_method_set_lines_skipped();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_lines_skipped,
      this._owner,
      _lines_skipped
    );
    
  }
  get_lines_skipped() {
    Label.init_method_get_lines_skipped();
    return _call_native_mb_ret(
      Label._bindings.method_get_lines_skipped,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_max_lines_visible(_lines_visible) {
    Label.init_method_set_max_lines_visible();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_max_lines_visible,
      this._owner,
      _lines_visible
    );
    
  }
  get_max_lines_visible() {
    Label.init_method_get_max_lines_visible();
    return _call_native_mb_ret(
      Label._bindings.method_get_max_lines_visible,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_structured_text_bidi_override(_parser) {
    Label.init_method_set_structured_text_bidi_override();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_structured_text_bidi_override,
      this._owner,
      _parser
    );
    
  }
  get_structured_text_bidi_override() {
    Label.init_method_get_structured_text_bidi_override();
    return _call_native_mb_ret(
      Label._bindings.method_get_structured_text_bidi_override,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_structured_text_bidi_override_options(_args) {
    Label.init_method_set_structured_text_bidi_override_options();
    return _call_native_mb_no_ret(
      Label._bindings.method_set_structured_text_bidi_override_options,
      this._owner,
      _args
    );
    
  }
  get_structured_text_bidi_override_options() {
    Label.init_method_get_structured_text_bidi_override_options();
    return _call_native_mb_ret(
      Label._bindings.method_get_structured_text_bidi_override_options,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  get_character_bounds(_pos) {
    Label.init_method_get_character_bounds();
    return _call_native_mb_ret(
      Label._bindings.method_get_character_bounds,
      this._owner,
			Variant.Type.RECT2,
    
      _pos
    );
    
  }
  
get text () {
  return this.get_text();
}
set text (new_value) {
  this.set_text(new_value);
}
get label_settings () {
  return this.get_label_settings();
}
set label_settings (new_value) {
  this.set_label_settings(new_value);
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
get clip_text () {
  return this.is_clipping_text();
}
set clip_text (new_value) {
  this.set_clip_text(new_value);
}
get text_overrun_behavior () {
  return this.get_text_overrun_behavior();
}
set text_overrun_behavior (new_value) {
  this.set_text_overrun_behavior(new_value);
}
get ellipsis_char () {
  return this.get_ellipsis_char();
}
set ellipsis_char (new_value) {
  this.set_ellipsis_char(new_value);
}
get uppercase () {
  return this.is_uppercase();
}
set uppercase (new_value) {
  this.set_uppercase(new_value);
}
get tab_stops () {
  return this.get_tab_stops();
}
set tab_stops (new_value) {
  this.set_tab_stops(new_value);
}
get lines_skipped () {
  return this.get_lines_skipped();
}
set lines_skipped (new_value) {
  this.set_lines_skipped(new_value);
}
get max_lines_visible () {
  return this.get_max_lines_visible();
}
set max_lines_visible (new_value) {
  this.set_max_lines_visible(new_value);
}
get visible_characters () {
  return this.get_visible_characters();
}
set visible_characters (new_value) {
  this.set_visible_characters(new_value);
}
get visible_characters_behavior () {
  return this.get_visible_characters_behavior();
}
set visible_characters_behavior (new_value) {
  this.set_visible_characters_behavior(new_value);
}
get visible_ratio () {
  return this.get_visible_ratio();
}
set visible_ratio (new_value) {
  this.set_visible_ratio(new_value);
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