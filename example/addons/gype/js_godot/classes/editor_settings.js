import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_has_setting;
  method_set_setting;
  method_get_setting;
  method_erase;
  method_set_initial_value;
  method_add_property_info;
  method_set_project_metadata;
  method_get_project_metadata;
  method_set_favorites;
  method_get_favorites;
  method_set_recent_dirs;
  method_get_recent_dirs;
  method_set_builtin_action_override;
  method_check_changed_settings_in_group;
  method_get_changed_settings;
  method_mark_setting_changed;
}
export class EditorSettings extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorSettings");
    } else {
      super(godot_object);
    }
  }
  static init_method_has_setting() {
    if (!this.#_bindings.method_has_setting) {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("has_setting");
      this.#_bindings.method_has_setting = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3927539163
      );
    }
  }
  static init_method_set_setting() {
    if (!this.#_bindings.method_set_setting) {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("set_setting");
      this.#_bindings.method_set_setting = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        402577236
      );
    }
  }
  static init_method_get_setting() {
    if (!this.#_bindings.method_get_setting) {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("get_setting");
      this.#_bindings.method_get_setting = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1868160156
      );
    }
  }
  static init_method_erase() {
    if (!this.#_bindings.method_erase) {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("erase");
      this.#_bindings.method_erase = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_set_initial_value() {
    if (!this.#_bindings.method_set_initial_value) {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("set_initial_value");
      this.#_bindings.method_set_initial_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1529169264
      );
    }
  }
  static init_method_add_property_info() {
    if (!this.#_bindings.method_add_property_info) {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("add_property_info");
      this.#_bindings.method_add_property_info = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155329257
      );
    }
  }
  static init_method_set_project_metadata() {
    if (!this.#_bindings.method_set_project_metadata) {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("set_project_metadata");
      this.#_bindings.method_set_project_metadata = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2504492430
      );
    }
  }
  static init_method_get_project_metadata() {
    if (!this.#_bindings.method_get_project_metadata) {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("get_project_metadata");
      this.#_bindings.method_get_project_metadata = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        89809366
      );
    }
  }
  static init_method_set_favorites() {
    if (!this.#_bindings.method_set_favorites) {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("set_favorites");
      this.#_bindings.method_set_favorites = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4015028928
      );
    }
  }
  static init_method_get_favorites() {
    if (!this.#_bindings.method_get_favorites) {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("get_favorites");
      this.#_bindings.method_get_favorites = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_set_recent_dirs() {
    if (!this.#_bindings.method_set_recent_dirs) {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("set_recent_dirs");
      this.#_bindings.method_set_recent_dirs = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4015028928
      );
    }
  }
  static init_method_get_recent_dirs() {
    if (!this.#_bindings.method_get_recent_dirs) {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("get_recent_dirs");
      this.#_bindings.method_get_recent_dirs = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_set_builtin_action_override() {
    if (!this.#_bindings.method_set_builtin_action_override) {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("set_builtin_action_override");
      this.#_bindings.method_set_builtin_action_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1209351045
      );
    }
  }
  static init_method_check_changed_settings_in_group() {
    if (!this.#_bindings.method_check_changed_settings_in_group) {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("check_changed_settings_in_group");
      this.#_bindings.method_check_changed_settings_in_group = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3927539163
      );
    }
  }
  static init_method_get_changed_settings() {
    if (!this.#_bindings.method_get_changed_settings) {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("get_changed_settings");
      this.#_bindings.method_get_changed_settings = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_mark_setting_changed() {
    if (!this.#_bindings.method_mark_setting_changed) {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("mark_setting_changed");
      this.#_bindings.method_mark_setting_changed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }

  
  
  has_setting(_name) {
    EditorSettings.init_method_has_setting();
    return _call_native_mb_ret(
      EditorSettings.#_bindings.method_has_setting,
      this._owner,
			Variant.Type.BOOL,
    
      _name
    );
    
  }
  set_setting(_name, _value) {
    EditorSettings.init_method_set_setting();
    return _call_native_mb_no_ret(
      EditorSettings.#_bindings.method_set_setting,
      this._owner,
      _name, _value
    );
    
  }
  get_setting(_name) {
    EditorSettings.init_method_get_setting();
    return _call_native_mb_ret(
      EditorSettings.#_bindings.method_get_setting,
      this._owner,
			Variant.Type.VARIANT,
    
      _name
    );
    
  }
  erase(_property) {
    EditorSettings.init_method_erase();
    return _call_native_mb_no_ret(
      EditorSettings.#_bindings.method_erase,
      this._owner,
      _property
    );
    
  }
  set_initial_value(_name, _value, _update_current) {
    EditorSettings.init_method_set_initial_value();
    return _call_native_mb_no_ret(
      EditorSettings.#_bindings.method_set_initial_value,
      this._owner,
      _name, _value, _update_current
    );
    
  }
  add_property_info(_info) {
    EditorSettings.init_method_add_property_info();
    return _call_native_mb_no_ret(
      EditorSettings.#_bindings.method_add_property_info,
      this._owner,
      _info
    );
    
  }
  set_project_metadata(_section, _key, _data) {
    EditorSettings.init_method_set_project_metadata();
    return _call_native_mb_no_ret(
      EditorSettings.#_bindings.method_set_project_metadata,
      this._owner,
      _section, _key, _data
    );
    
  }
  get_project_metadata(_section, _key, _default) {
    EditorSettings.init_method_get_project_metadata();
    return _call_native_mb_ret(
      EditorSettings.#_bindings.method_get_project_metadata,
      this._owner,
			Variant.Type.VARIANT,
    
      _section, _key, _default
    );
    
  }
  set_favorites(_dirs) {
    EditorSettings.init_method_set_favorites();
    return _call_native_mb_no_ret(
      EditorSettings.#_bindings.method_set_favorites,
      this._owner,
      _dirs
    );
    
  }
  get_favorites() {
    EditorSettings.init_method_get_favorites();
    return _call_native_mb_ret(
      EditorSettings.#_bindings.method_get_favorites,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_recent_dirs(_dirs) {
    EditorSettings.init_method_set_recent_dirs();
    return _call_native_mb_no_ret(
      EditorSettings.#_bindings.method_set_recent_dirs,
      this._owner,
      _dirs
    );
    
  }
  get_recent_dirs() {
    EditorSettings.init_method_get_recent_dirs();
    return _call_native_mb_ret(
      EditorSettings.#_bindings.method_get_recent_dirs,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_builtin_action_override(_name, _actions_list) {
    EditorSettings.init_method_set_builtin_action_override();
    return _call_native_mb_no_ret(
      EditorSettings.#_bindings.method_set_builtin_action_override,
      this._owner,
      _name, _actions_list
    );
    
  }
  check_changed_settings_in_group(_setting_prefix) {
    EditorSettings.init_method_check_changed_settings_in_group();
    return _call_native_mb_ret(
      EditorSettings.#_bindings.method_check_changed_settings_in_group,
      this._owner,
			Variant.Type.BOOL,
    
      _setting_prefix
    );
    
  }
  get_changed_settings() {
    EditorSettings.init_method_get_changed_settings();
    return _call_native_mb_ret(
      EditorSettings.#_bindings.method_get_changed_settings,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  mark_setting_changed(_setting) {
    EditorSettings.init_method_mark_setting_changed();
    return _call_native_mb_no_ret(
      EditorSettings.#_bindings.method_mark_setting_changed,
      this._owner,
      _setting
    );
    
  }
  

}