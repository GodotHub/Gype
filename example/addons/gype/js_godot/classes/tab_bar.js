import * as internal from '__internal__';
import { Control } from '@js_godot/classes/control'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { Vector2 } from '@js_godot/variant/vector2'
import { Rect2 } from '@js_godot/variant/rect2'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_tab_count;
  method_get_tab_count;
  method_set_current_tab;
  method_get_current_tab;
  method_get_previous_tab;
  method_select_previous_available;
  method_select_next_available;
  method_set_tab_title;
  method_get_tab_title;
  method_set_tab_tooltip;
  method_get_tab_tooltip;
  method_set_tab_text_direction;
  method_get_tab_text_direction;
  method_set_tab_language;
  method_get_tab_language;
  method_set_tab_icon;
  method_get_tab_icon;
  method_set_tab_icon_max_width;
  method_get_tab_icon_max_width;
  method_set_tab_button_icon;
  method_get_tab_button_icon;
  method_set_tab_disabled;
  method_is_tab_disabled;
  method_set_tab_hidden;
  method_is_tab_hidden;
  method_set_tab_metadata;
  method_get_tab_metadata;
  method_remove_tab;
  method_add_tab;
  method_get_tab_idx_at_point;
  method_set_tab_alignment;
  method_get_tab_alignment;
  method_set_clip_tabs;
  method_get_clip_tabs;
  method_get_tab_offset;
  method_get_offset_buttons_visible;
  method_ensure_tab_visible;
  method_get_tab_rect;
  method_move_tab;
  method_set_tab_close_display_policy;
  method_get_tab_close_display_policy;
  method_set_max_tab_width;
  method_get_max_tab_width;
  method_set_scrolling_enabled;
  method_get_scrolling_enabled;
  method_set_drag_to_rearrange_enabled;
  method_get_drag_to_rearrange_enabled;
  method_set_tabs_rearrange_group;
  method_get_tabs_rearrange_group;
  method_set_scroll_to_selected;
  method_get_scroll_to_selected;
  method_set_select_with_rmb;
  method_get_select_with_rmb;
  method_set_deselect_enabled;
  method_get_deselect_enabled;
  method_clear_tabs;
}
export class TabBar extends Control{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("TabBar");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_tab_count");
      this._bindings.method_set_tab_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_tab_count");
      this._bindings.method_get_tab_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_current_tab");
      this._bindings.method_set_current_tab = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_current_tab");
      this._bindings.method_get_current_tab = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_previous_tab");
      this._bindings.method_get_previous_tab = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("select_previous_available");
      this._bindings.method_select_previous_available = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("select_next_available");
      this._bindings.method_select_next_available = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_tab_title");
      this._bindings.method_set_tab_title = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_tab_title");
      this._bindings.method_get_tab_title = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_tab_tooltip");
      this._bindings.method_set_tab_tooltip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_tab_tooltip");
      this._bindings.method_get_tab_tooltip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_tab_text_direction");
      this._bindings.method_set_tab_text_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1707680378
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_tab_text_direction");
      this._bindings.method_get_tab_text_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4235602388
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_tab_language");
      this._bindings.method_set_tab_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_tab_language");
      this._bindings.method_get_tab_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_tab_icon");
      this._bindings.method_set_tab_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        666127730
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_tab_icon");
      this._bindings.method_get_tab_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3536238170
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_tab_icon_max_width");
      this._bindings.method_set_tab_icon_max_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_tab_icon_max_width");
      this._bindings.method_get_tab_icon_max_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_tab_button_icon");
      this._bindings.method_set_tab_button_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        666127730
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_tab_button_icon");
      this._bindings.method_get_tab_button_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3536238170
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_tab_disabled");
      this._bindings.method_set_tab_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("is_tab_disabled");
      this._bindings.method_is_tab_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_tab_hidden");
      this._bindings.method_set_tab_hidden = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("is_tab_hidden");
      this._bindings.method_is_tab_hidden = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_tab_metadata");
      this._bindings.method_set_tab_metadata = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2152698145
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_tab_metadata");
      this._bindings.method_get_tab_metadata = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4227898402
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("remove_tab");
      this._bindings.method_remove_tab = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("add_tab");
      this._bindings.method_add_tab = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1465444425
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_tab_idx_at_point");
      this._bindings.method_get_tab_idx_at_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3820158470
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_tab_alignment");
      this._bindings.method_set_tab_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2413632353
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_tab_alignment");
      this._bindings.method_get_tab_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2178122193
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_clip_tabs");
      this._bindings.method_set_clip_tabs = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_clip_tabs");
      this._bindings.method_get_clip_tabs = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_tab_offset");
      this._bindings.method_get_tab_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_offset_buttons_visible");
      this._bindings.method_get_offset_buttons_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("ensure_tab_visible");
      this._bindings.method_ensure_tab_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_tab_rect");
      this._bindings.method_get_tab_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3327874267
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("move_tab");
      this._bindings.method_move_tab = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_tab_close_display_policy");
      this._bindings.method_set_tab_close_display_policy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2212906737
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_tab_close_display_policy");
      this._bindings.method_get_tab_close_display_policy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2956568028
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_max_tab_width");
      this._bindings.method_set_max_tab_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_max_tab_width");
      this._bindings.method_get_max_tab_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_scrolling_enabled");
      this._bindings.method_set_scrolling_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_scrolling_enabled");
      this._bindings.method_get_scrolling_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_drag_to_rearrange_enabled");
      this._bindings.method_set_drag_to_rearrange_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_drag_to_rearrange_enabled");
      this._bindings.method_get_drag_to_rearrange_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_tabs_rearrange_group");
      this._bindings.method_set_tabs_rearrange_group = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_tabs_rearrange_group");
      this._bindings.method_get_tabs_rearrange_group = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_scroll_to_selected");
      this._bindings.method_set_scroll_to_selected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_scroll_to_selected");
      this._bindings.method_get_scroll_to_selected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_select_with_rmb");
      this._bindings.method_set_select_with_rmb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_select_with_rmb");
      this._bindings.method_get_select_with_rmb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("set_deselect_enabled");
      this._bindings.method_set_deselect_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("get_deselect_enabled");
      this._bindings.method_get_deselect_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TabBar");
      let methodname = new StringName("clear_tabs");
      this._bindings.method_clear_tabs = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
  }
  set_tab_count(_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tab_count,
      this._owner,
      _count
    );
    
  }
  get_tab_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tab_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_current_tab(_tab_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_current_tab,
      this._owner,
      _tab_idx
    );
    
  }
  get_current_tab() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_current_tab,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_previous_tab() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_previous_tab,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  select_previous_available() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_select_previous_available,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  select_next_available() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_select_next_available,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_tab_title(_tab_idx, _title) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tab_title,
      this._owner,
      _tab_idx, _title
    );
    
  }
  get_tab_title(_tab_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tab_title,
      this._owner,
			Variant.Type.STRING,
    
      _tab_idx
    );
    
  }
  set_tab_tooltip(_tab_idx, _tooltip) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tab_tooltip,
      this._owner,
      _tab_idx, _tooltip
    );
    
  }
  get_tab_tooltip(_tab_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tab_tooltip,
      this._owner,
			Variant.Type.STRING,
    
      _tab_idx
    );
    
  }
  set_tab_text_direction(_tab_idx, _direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tab_text_direction,
      this._owner,
      _tab_idx, _direction
    );
    
  }
  get_tab_text_direction(_tab_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tab_text_direction,
      this._owner,
			Variant.INT,
      _tab_idx
    );
    
  }
  set_tab_language(_tab_idx, _language) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tab_language,
      this._owner,
      _tab_idx, _language
    );
    
  }
  get_tab_language(_tab_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tab_language,
      this._owner,
			Variant.Type.STRING,
    
      _tab_idx
    );
    
  }
  set_tab_icon(_tab_idx, _icon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tab_icon,
      this._owner,
      _tab_idx, _icon
    );
    
  }
  get_tab_icon(_tab_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tab_icon,
      this._owner,
			Variant.INT,
      _tab_idx
    );
    
  }
  set_tab_icon_max_width(_tab_idx, _width) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tab_icon_max_width,
      this._owner,
      _tab_idx, _width
    );
    
  }
  get_tab_icon_max_width(_tab_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tab_icon_max_width,
      this._owner,
			Variant.Type.INT,
      _tab_idx
    );
    
  }
  set_tab_button_icon(_tab_idx, _icon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tab_button_icon,
      this._owner,
      _tab_idx, _icon
    );
    
  }
  get_tab_button_icon(_tab_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tab_button_icon,
      this._owner,
			Variant.INT,
      _tab_idx
    );
    
  }
  set_tab_disabled(_tab_idx, _disabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tab_disabled,
      this._owner,
      _tab_idx, _disabled
    );
    
  }
  is_tab_disabled(_tab_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_tab_disabled,
      this._owner,
			Variant.Type.BOOL,
      _tab_idx
    );
    
  }
  set_tab_hidden(_tab_idx, _hidden) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tab_hidden,
      this._owner,
      _tab_idx, _hidden
    );
    
  }
  is_tab_hidden(_tab_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_tab_hidden,
      this._owner,
			Variant.Type.BOOL,
      _tab_idx
    );
    
  }
  set_tab_metadata(_tab_idx, _metadata) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tab_metadata,
      this._owner,
      _tab_idx, _metadata
    );
    
  }
  get_tab_metadata(_tab_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tab_metadata,
      this._owner,
			Variant.Type.VARIANT,
    
      _tab_idx
    );
    
  }
  remove_tab(_tab_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_tab,
      this._owner,
      _tab_idx
    );
    
  }
  add_tab(_title, _icon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_tab,
      this._owner,
      _title, _icon
    );
    
  }
  get_tab_idx_at_point(_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tab_idx_at_point,
      this._owner,
			Variant.Type.INT,
      _point
    );
    
  }
  set_tab_alignment(_alignment) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tab_alignment,
      this._owner,
      _alignment
    );
    
  }
  get_tab_alignment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tab_alignment,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_clip_tabs(_clip_tabs) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_clip_tabs,
      this._owner,
      _clip_tabs
    );
    
  }
  get_clip_tabs() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_clip_tabs,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_tab_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tab_offset,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_offset_buttons_visible() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_offset_buttons_visible,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  ensure_tab_visible(_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_ensure_tab_visible,
      this._owner,
      _idx
    );
    
  }
  get_tab_rect(_tab_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tab_rect,
      this._owner,
			Variant.Type.RECT2,
    
      _tab_idx
    );
    
  }
  move_tab(_from, _to) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_move_tab,
      this._owner,
      _from, _to
    );
    
  }
  set_tab_close_display_policy(_policy) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tab_close_display_policy,
      this._owner,
      _policy
    );
    
  }
  get_tab_close_display_policy() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tab_close_display_policy,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_max_tab_width(_width) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_tab_width,
      this._owner,
      _width
    );
    
  }
  get_max_tab_width() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_tab_width,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_scrolling_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scrolling_enabled,
      this._owner,
      _enabled
    );
    
  }
  get_scrolling_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scrolling_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_drag_to_rearrange_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_drag_to_rearrange_enabled,
      this._owner,
      _enabled
    );
    
  }
  get_drag_to_rearrange_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_drag_to_rearrange_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_tabs_rearrange_group(_group_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tabs_rearrange_group,
      this._owner,
      _group_id
    );
    
  }
  get_tabs_rearrange_group() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tabs_rearrange_group,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_scroll_to_selected(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scroll_to_selected,
      this._owner,
      _enabled
    );
    
  }
  get_scroll_to_selected() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scroll_to_selected,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_select_with_rmb(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_select_with_rmb,
      this._owner,
      _enabled
    );
    
  }
  get_select_with_rmb() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_select_with_rmb,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_deselect_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_deselect_enabled,
      this._owner,
      _enabled
    );
    
  }
  get_deselect_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_deselect_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  clear_tabs() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_tabs,
      this._owner,
      
    );
    
  }
  
get current_tab () {
  return this.get_current_tab();
}
set current_tab (new_value) {
  this.set_current_tab(new_value);
}
get tab_alignment () {
  return this.get_tab_alignment();
}
set tab_alignment (new_value) {
  this.set_tab_alignment(new_value);
}
get clip_tabs () {
  return this.get_clip_tabs();
}
set clip_tabs (new_value) {
  this.set_clip_tabs(new_value);
}
get tab_close_display_policy () {
  return this.get_tab_close_display_policy();
}
set tab_close_display_policy (new_value) {
  this.set_tab_close_display_policy(new_value);
}
get max_tab_width () {
  return this.get_max_tab_width();
}
set max_tab_width (new_value) {
  this.set_max_tab_width(new_value);
}
get scrolling_enabled () {
  return this.get_scrolling_enabled();
}
set scrolling_enabled (new_value) {
  this.set_scrolling_enabled(new_value);
}
get drag_to_rearrange_enabled () {
  return this.get_drag_to_rearrange_enabled();
}
set drag_to_rearrange_enabled (new_value) {
  this.set_drag_to_rearrange_enabled(new_value);
}
get tabs_rearrange_group () {
  return this.get_tabs_rearrange_group();
}
set tabs_rearrange_group (new_value) {
  this.set_tabs_rearrange_group(new_value);
}
get scroll_to_selected () {
  return this.get_scroll_to_selected();
}
set scroll_to_selected (new_value) {
  this.set_scroll_to_selected(new_value);
}
get select_with_rmb () {
  return this.get_select_with_rmb();
}
set select_with_rmb (new_value) {
  this.set_select_with_rmb(new_value);
}
get deselect_enabled () {
  return this.get_deselect_enabled();
}
set deselect_enabled (new_value) {
  this.set_deselect_enabled(new_value);
}
get tab_count () {
  return this.get_tab_count();
}
set tab_count (new_value) {
  this.set_tab_count(new_value);
}

  static AlignmentMode = {
    ALIGNMENT_LEFT: 0,
    ALIGNMENT_CENTER: 1,
    ALIGNMENT_RIGHT: 2,
    ALIGNMENT_MAX: 3,
  }
  static CloseButtonDisplayPolicy = {
    CLOSE_BUTTON_SHOW_NEVER: 0,
    CLOSE_BUTTON_SHOW_ACTIVE_ONLY: 1,
    CLOSE_BUTTON_SHOW_ALWAYS: 2,
    CLOSE_BUTTON_MAX: 3,
  }

  static {
    this._init_bindings();
  }
}