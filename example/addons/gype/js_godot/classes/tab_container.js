import * as internal from '__internal__';
import { Container } from '@js_godot/classes/container'
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
  method_get_tab_count;
  method_set_current_tab;
  method_get_current_tab;
  method_get_previous_tab;
  method_select_previous_available;
  method_select_next_available;
  method_get_current_tab_control;
  method_get_tab_bar;
  method_get_tab_control;
  method_set_tab_alignment;
  method_get_tab_alignment;
  method_set_tabs_position;
  method_get_tabs_position;
  method_set_clip_tabs;
  method_get_clip_tabs;
  method_set_tabs_visible;
  method_are_tabs_visible;
  method_set_all_tabs_in_front;
  method_is_all_tabs_in_front;
  method_set_tab_title;
  method_get_tab_title;
  method_set_tab_tooltip;
  method_get_tab_tooltip;
  method_set_tab_icon;
  method_get_tab_icon;
  method_set_tab_icon_max_width;
  method_get_tab_icon_max_width;
  method_set_tab_disabled;
  method_is_tab_disabled;
  method_set_tab_hidden;
  method_is_tab_hidden;
  method_set_tab_metadata;
  method_get_tab_metadata;
  method_set_tab_button_icon;
  method_get_tab_button_icon;
  method_get_tab_idx_at_point;
  method_get_tab_idx_from_control;
  method_set_popup;
  method_get_popup;
  method_set_drag_to_rearrange_enabled;
  method_get_drag_to_rearrange_enabled;
  method_set_tabs_rearrange_group;
  method_get_tabs_rearrange_group;
  method_set_use_hidden_tabs_for_min_size;
  method_get_use_hidden_tabs_for_min_size;
  method_set_tab_focus_mode;
  method_get_tab_focus_mode;
  method_set_deselect_enabled;
  method_get_deselect_enabled;
}
@GodotClass
export class TabContainer extends Container{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TabContainer");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_tab_count() {
    if (!this._bindings.method_get_tab_count) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_tab_count");
      this._bindings.method_get_tab_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_current_tab() {
    if (!this._bindings.method_set_current_tab) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_current_tab");
      this._bindings.method_set_current_tab = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_current_tab() {
    if (!this._bindings.method_get_current_tab) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_current_tab");
      this._bindings.method_get_current_tab = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_previous_tab() {
    if (!this._bindings.method_get_previous_tab) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_previous_tab");
      this._bindings.method_get_previous_tab = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_select_previous_available() {
    if (!this._bindings.method_select_previous_available) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("select_previous_available");
      this._bindings.method_select_previous_available = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_select_next_available() {
    if (!this._bindings.method_select_next_available) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("select_next_available");
      this._bindings.method_select_next_available = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_get_current_tab_control() {
    if (!this._bindings.method_get_current_tab_control) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_current_tab_control");
      this._bindings.method_get_current_tab_control = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2783021301
      );
    }
  }
  static init_method_get_tab_bar() {
    if (!this._bindings.method_get_tab_bar) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_tab_bar");
      this._bindings.method_get_tab_bar = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1865451809
      );
    }
  }
  static init_method_get_tab_control() {
    if (!this._bindings.method_get_tab_control) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_tab_control");
      this._bindings.method_get_tab_control = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1065994134
      );
    }
  }
  static init_method_set_tab_alignment() {
    if (!this._bindings.method_set_tab_alignment) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_tab_alignment");
      this._bindings.method_set_tab_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2413632353
      );
    }
  }
  static init_method_get_tab_alignment() {
    if (!this._bindings.method_get_tab_alignment) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_tab_alignment");
      this._bindings.method_get_tab_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2178122193
      );
    }
  }
  static init_method_set_tabs_position() {
    if (!this._bindings.method_set_tabs_position) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_tabs_position");
      this._bindings.method_set_tabs_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        256673370
      );
    }
  }
  static init_method_get_tabs_position() {
    if (!this._bindings.method_get_tabs_position) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_tabs_position");
      this._bindings.method_get_tabs_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        919937023
      );
    }
  }
  static init_method_set_clip_tabs() {
    if (!this._bindings.method_set_clip_tabs) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_clip_tabs");
      this._bindings.method_set_clip_tabs = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_clip_tabs() {
    if (!this._bindings.method_get_clip_tabs) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_clip_tabs");
      this._bindings.method_get_clip_tabs = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_tabs_visible() {
    if (!this._bindings.method_set_tabs_visible) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_tabs_visible");
      this._bindings.method_set_tabs_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_are_tabs_visible() {
    if (!this._bindings.method_are_tabs_visible) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("are_tabs_visible");
      this._bindings.method_are_tabs_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_all_tabs_in_front() {
    if (!this._bindings.method_set_all_tabs_in_front) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_all_tabs_in_front");
      this._bindings.method_set_all_tabs_in_front = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_all_tabs_in_front() {
    if (!this._bindings.method_is_all_tabs_in_front) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("is_all_tabs_in_front");
      this._bindings.method_is_all_tabs_in_front = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_tab_title() {
    if (!this._bindings.method_set_tab_title) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_tab_title");
      this._bindings.method_set_tab_title = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_tab_title() {
    if (!this._bindings.method_get_tab_title) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_tab_title");
      this._bindings.method_get_tab_title = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_set_tab_tooltip() {
    if (!this._bindings.method_set_tab_tooltip) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_tab_tooltip");
      this._bindings.method_set_tab_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_tab_tooltip() {
    if (!this._bindings.method_get_tab_tooltip) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_tab_tooltip");
      this._bindings.method_get_tab_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_set_tab_icon() {
    if (!this._bindings.method_set_tab_icon) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_tab_icon");
      this._bindings.method_set_tab_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        666127730
      );
    }
  }
  static init_method_get_tab_icon() {
    if (!this._bindings.method_get_tab_icon) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_tab_icon");
      this._bindings.method_get_tab_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3536238170
      );
    }
  }
  static init_method_set_tab_icon_max_width() {
    if (!this._bindings.method_set_tab_icon_max_width) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_tab_icon_max_width");
      this._bindings.method_set_tab_icon_max_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_tab_icon_max_width() {
    if (!this._bindings.method_get_tab_icon_max_width) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_tab_icon_max_width");
      this._bindings.method_get_tab_icon_max_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_set_tab_disabled() {
    if (!this._bindings.method_set_tab_disabled) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_tab_disabled");
      this._bindings.method_set_tab_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_tab_disabled() {
    if (!this._bindings.method_is_tab_disabled) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("is_tab_disabled");
      this._bindings.method_is_tab_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_tab_hidden() {
    if (!this._bindings.method_set_tab_hidden) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_tab_hidden");
      this._bindings.method_set_tab_hidden = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_tab_hidden() {
    if (!this._bindings.method_is_tab_hidden) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("is_tab_hidden");
      this._bindings.method_is_tab_hidden = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_tab_metadata() {
    if (!this._bindings.method_set_tab_metadata) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_tab_metadata");
      this._bindings.method_set_tab_metadata = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2152698145
      );
    }
  }
  static init_method_get_tab_metadata() {
    if (!this._bindings.method_get_tab_metadata) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_tab_metadata");
      this._bindings.method_get_tab_metadata = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4227898402
      );
    }
  }
  static init_method_set_tab_button_icon() {
    if (!this._bindings.method_set_tab_button_icon) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_tab_button_icon");
      this._bindings.method_set_tab_button_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        666127730
      );
    }
  }
  static init_method_get_tab_button_icon() {
    if (!this._bindings.method_get_tab_button_icon) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_tab_button_icon");
      this._bindings.method_get_tab_button_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3536238170
      );
    }
  }
  static init_method_get_tab_idx_at_point() {
    if (!this._bindings.method_get_tab_idx_at_point) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_tab_idx_at_point");
      this._bindings.method_get_tab_idx_at_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3820158470
      );
    }
  }
  static init_method_get_tab_idx_from_control() {
    if (!this._bindings.method_get_tab_idx_from_control) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_tab_idx_from_control");
      this._bindings.method_get_tab_idx_from_control = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2787397975
      );
    }
  }
  static init_method_set_popup() {
    if (!this._bindings.method_set_popup) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_popup");
      this._bindings.method_set_popup = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }
  static init_method_get_popup() {
    if (!this._bindings.method_get_popup) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_popup");
      this._bindings.method_get_popup = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        111095082
      );
    }
  }
  static init_method_set_drag_to_rearrange_enabled() {
    if (!this._bindings.method_set_drag_to_rearrange_enabled) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_drag_to_rearrange_enabled");
      this._bindings.method_set_drag_to_rearrange_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_drag_to_rearrange_enabled() {
    if (!this._bindings.method_get_drag_to_rearrange_enabled) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_drag_to_rearrange_enabled");
      this._bindings.method_get_drag_to_rearrange_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_tabs_rearrange_group() {
    if (!this._bindings.method_set_tabs_rearrange_group) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_tabs_rearrange_group");
      this._bindings.method_set_tabs_rearrange_group = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_tabs_rearrange_group() {
    if (!this._bindings.method_get_tabs_rearrange_group) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_tabs_rearrange_group");
      this._bindings.method_get_tabs_rearrange_group = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_use_hidden_tabs_for_min_size() {
    if (!this._bindings.method_set_use_hidden_tabs_for_min_size) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_use_hidden_tabs_for_min_size");
      this._bindings.method_set_use_hidden_tabs_for_min_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_use_hidden_tabs_for_min_size() {
    if (!this._bindings.method_get_use_hidden_tabs_for_min_size) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_use_hidden_tabs_for_min_size");
      this._bindings.method_get_use_hidden_tabs_for_min_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_tab_focus_mode() {
    if (!this._bindings.method_set_tab_focus_mode) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_tab_focus_mode");
      this._bindings.method_set_tab_focus_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3232914922
      );
    }
  }
  static init_method_get_tab_focus_mode() {
    if (!this._bindings.method_get_tab_focus_mode) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_tab_focus_mode");
      this._bindings.method_get_tab_focus_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2132829277
      );
    }
  }
  static init_method_set_deselect_enabled() {
    if (!this._bindings.method_set_deselect_enabled) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("set_deselect_enabled");
      this._bindings.method_set_deselect_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_deselect_enabled() {
    if (!this._bindings.method_get_deselect_enabled) {
      let classname = new StringName("TabContainer");
      let methodname = new StringName("get_deselect_enabled");
      this._bindings.method_get_deselect_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  get_tab_count() {
    TabContainer.init_method_get_tab_count();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_tab_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_current_tab(_tab_idx) {
    TabContainer.init_method_set_current_tab();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_current_tab,
      this._owner,
      _tab_idx
    );
    
  }
  get_current_tab() {
    TabContainer.init_method_get_current_tab();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_current_tab,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_previous_tab() {
    TabContainer.init_method_get_previous_tab();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_previous_tab,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  select_previous_available() {
    TabContainer.init_method_select_previous_available();
    return _call_native_mb_ret(
      TabContainer._bindings.method_select_previous_available,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  select_next_available() {
    TabContainer.init_method_select_next_available();
    return _call_native_mb_ret(
      TabContainer._bindings.method_select_next_available,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_current_tab_control() {
    TabContainer.init_method_get_current_tab_control();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_current_tab_control,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_tab_bar() {
    TabContainer.init_method_get_tab_bar();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_tab_bar,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_tab_control(_tab_idx) {
    TabContainer.init_method_get_tab_control();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_tab_control,
      this._owner,
			Variant.Type.OBJECT,
      _tab_idx
    );
    
  }
  set_tab_alignment(_alignment) {
    TabContainer.init_method_set_tab_alignment();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_tab_alignment,
      this._owner,
      _alignment
    );
    
  }
  get_tab_alignment() {
    TabContainer.init_method_get_tab_alignment();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_tab_alignment,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_tabs_position(_tabs_position) {
    TabContainer.init_method_set_tabs_position();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_tabs_position,
      this._owner,
      _tabs_position
    );
    
  }
  get_tabs_position() {
    TabContainer.init_method_get_tabs_position();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_tabs_position,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_clip_tabs(_clip_tabs) {
    TabContainer.init_method_set_clip_tabs();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_clip_tabs,
      this._owner,
      _clip_tabs
    );
    
  }
  get_clip_tabs() {
    TabContainer.init_method_get_clip_tabs();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_clip_tabs,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_tabs_visible(_visible) {
    TabContainer.init_method_set_tabs_visible();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_tabs_visible,
      this._owner,
      _visible
    );
    
  }
  are_tabs_visible() {
    TabContainer.init_method_are_tabs_visible();
    return _call_native_mb_ret(
      TabContainer._bindings.method_are_tabs_visible,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_all_tabs_in_front(_is_front) {
    TabContainer.init_method_set_all_tabs_in_front();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_all_tabs_in_front,
      this._owner,
      _is_front
    );
    
  }
  is_all_tabs_in_front() {
    TabContainer.init_method_is_all_tabs_in_front();
    return _call_native_mb_ret(
      TabContainer._bindings.method_is_all_tabs_in_front,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_tab_title(_tab_idx, _title) {
    TabContainer.init_method_set_tab_title();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_tab_title,
      this._owner,
      _tab_idx, _title
    );
    
  }
  get_tab_title(_tab_idx) {
    TabContainer.init_method_get_tab_title();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_tab_title,
      this._owner,
			Variant.Type.STRING,
    
      _tab_idx
    );
    
  }
  set_tab_tooltip(_tab_idx, _tooltip) {
    TabContainer.init_method_set_tab_tooltip();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_tab_tooltip,
      this._owner,
      _tab_idx, _tooltip
    );
    
  }
  get_tab_tooltip(_tab_idx) {
    TabContainer.init_method_get_tab_tooltip();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_tab_tooltip,
      this._owner,
			Variant.Type.STRING,
    
      _tab_idx
    );
    
  }
  set_tab_icon(_tab_idx, _icon) {
    TabContainer.init_method_set_tab_icon();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_tab_icon,
      this._owner,
      _tab_idx, _icon
    );
    
  }
  get_tab_icon(_tab_idx) {
    TabContainer.init_method_get_tab_icon();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_tab_icon,
      this._owner,
			Variant.Type.OBJECT,
      _tab_idx
    );
    
  }
  set_tab_icon_max_width(_tab_idx, _width) {
    TabContainer.init_method_set_tab_icon_max_width();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_tab_icon_max_width,
      this._owner,
      _tab_idx, _width
    );
    
  }
  get_tab_icon_max_width(_tab_idx) {
    TabContainer.init_method_get_tab_icon_max_width();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_tab_icon_max_width,
      this._owner,
			Variant.Type.INT,
    
      _tab_idx
    );
    
  }
  set_tab_disabled(_tab_idx, _disabled) {
    TabContainer.init_method_set_tab_disabled();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_tab_disabled,
      this._owner,
      _tab_idx, _disabled
    );
    
  }
  is_tab_disabled(_tab_idx) {
    TabContainer.init_method_is_tab_disabled();
    return _call_native_mb_ret(
      TabContainer._bindings.method_is_tab_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      _tab_idx
    );
    
  }
  set_tab_hidden(_tab_idx, _hidden) {
    TabContainer.init_method_set_tab_hidden();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_tab_hidden,
      this._owner,
      _tab_idx, _hidden
    );
    
  }
  is_tab_hidden(_tab_idx) {
    TabContainer.init_method_is_tab_hidden();
    return _call_native_mb_ret(
      TabContainer._bindings.method_is_tab_hidden,
      this._owner,
			Variant.Type.BOOL,
    
      _tab_idx
    );
    
  }
  set_tab_metadata(_tab_idx, _metadata) {
    TabContainer.init_method_set_tab_metadata();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_tab_metadata,
      this._owner,
      _tab_idx, _metadata
    );
    
  }
  get_tab_metadata(_tab_idx) {
    TabContainer.init_method_get_tab_metadata();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_tab_metadata,
      this._owner,
			Variant.Type.VARIANT,
    
      _tab_idx
    );
    
  }
  set_tab_button_icon(_tab_idx, _icon) {
    TabContainer.init_method_set_tab_button_icon();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_tab_button_icon,
      this._owner,
      _tab_idx, _icon
    );
    
  }
  get_tab_button_icon(_tab_idx) {
    TabContainer.init_method_get_tab_button_icon();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_tab_button_icon,
      this._owner,
			Variant.Type.OBJECT,
      _tab_idx
    );
    
  }
  get_tab_idx_at_point(_point) {
    TabContainer.init_method_get_tab_idx_at_point();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_tab_idx_at_point,
      this._owner,
			Variant.Type.INT,
    
      _point
    );
    
  }
  get_tab_idx_from_control(_control) {
    TabContainer.init_method_get_tab_idx_from_control();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_tab_idx_from_control,
      this._owner,
			Variant.Type.INT,
    
      _control
    );
    
  }
  set_popup(_popup) {
    TabContainer.init_method_set_popup();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_popup,
      this._owner,
      _popup
    );
    
  }
  get_popup() {
    TabContainer.init_method_get_popup();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_popup,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_drag_to_rearrange_enabled(_enabled) {
    TabContainer.init_method_set_drag_to_rearrange_enabled();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_drag_to_rearrange_enabled,
      this._owner,
      _enabled
    );
    
  }
  get_drag_to_rearrange_enabled() {
    TabContainer.init_method_get_drag_to_rearrange_enabled();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_drag_to_rearrange_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_tabs_rearrange_group(_group_id) {
    TabContainer.init_method_set_tabs_rearrange_group();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_tabs_rearrange_group,
      this._owner,
      _group_id
    );
    
  }
  get_tabs_rearrange_group() {
    TabContainer.init_method_get_tabs_rearrange_group();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_tabs_rearrange_group,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_use_hidden_tabs_for_min_size(_enabled) {
    TabContainer.init_method_set_use_hidden_tabs_for_min_size();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_use_hidden_tabs_for_min_size,
      this._owner,
      _enabled
    );
    
  }
  get_use_hidden_tabs_for_min_size() {
    TabContainer.init_method_get_use_hidden_tabs_for_min_size();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_use_hidden_tabs_for_min_size,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_tab_focus_mode(_focus_mode) {
    TabContainer.init_method_set_tab_focus_mode();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_tab_focus_mode,
      this._owner,
      _focus_mode
    );
    
  }
  get_tab_focus_mode() {
    TabContainer.init_method_get_tab_focus_mode();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_tab_focus_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_deselect_enabled(_enabled) {
    TabContainer.init_method_set_deselect_enabled();
    return _call_native_mb_no_ret(
      TabContainer._bindings.method_set_deselect_enabled,
      this._owner,
      _enabled
    );
    
  }
  get_deselect_enabled() {
    TabContainer.init_method_get_deselect_enabled();
    return _call_native_mb_ret(
      TabContainer._bindings.method_get_deselect_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get tab_alignment () {
  return this.get_tab_alignment();
}
set tab_alignment (new_value) {
  this.set_tab_alignment(new_value);
}
get current_tab () {
  return this.get_current_tab();
}
set current_tab (new_value) {
  this.set_current_tab(new_value);
}
get tabs_position () {
  return this.get_tabs_position();
}
set tabs_position (new_value) {
  this.set_tabs_position(new_value);
}
get clip_tabs () {
  return this.get_clip_tabs();
}
set clip_tabs (new_value) {
  this.set_clip_tabs(new_value);
}
get tabs_visible () {
  return this.are_tabs_visible();
}
set tabs_visible (new_value) {
  this.set_tabs_visible(new_value);
}
get all_tabs_in_front () {
  return this.is_all_tabs_in_front();
}
set all_tabs_in_front (new_value) {
  this.set_all_tabs_in_front(new_value);
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
get use_hidden_tabs_for_min_size () {
  return this.get_use_hidden_tabs_for_min_size();
}
set use_hidden_tabs_for_min_size (new_value) {
  this.set_use_hidden_tabs_for_min_size(new_value);
}
get tab_focus_mode () {
  return this.get_tab_focus_mode();
}
set tab_focus_mode (new_value) {
  this.set_tab_focus_mode(new_value);
}
get deselect_enabled () {
  return this.get_deselect_enabled();
}
set deselect_enabled (new_value) {
  this.set_deselect_enabled(new_value);
}

  static TabPosition = {
    POSITION_TOP: 0,
    POSITION_BOTTOM: 1,
    POSITION_MAX: 2,
  }
}