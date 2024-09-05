import * as internal from '__internal__';
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import { StringName } from '@js_godot/variant/string_name'
import { Dictionary } from '@js_godot/variant/dictionary'
import { GDString } from '@js_godot/variant/gd_string'
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

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorSettings");
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
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("has_setting");
      this._bindings.method_has_setting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3927539163
      );
    }
    {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("set_setting");
      this._bindings.method_set_setting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        402577236
      );
    }
    {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("get_setting");
      this._bindings.method_get_setting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1868160156
      );
    }
    {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("erase");
      this._bindings.method_erase = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("set_initial_value");
      this._bindings.method_set_initial_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1529169264
      );
    }
    {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("add_property_info");
      this._bindings.method_add_property_info = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155329257
      );
    }
    {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("set_project_metadata");
      this._bindings.method_set_project_metadata = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2504492430
      );
    }
    {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("get_project_metadata");
      this._bindings.method_get_project_metadata = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        89809366
      );
    }
    {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("set_favorites");
      this._bindings.method_set_favorites = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4015028928
      );
    }
    {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("get_favorites");
      this._bindings.method_get_favorites = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("set_recent_dirs");
      this._bindings.method_set_recent_dirs = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4015028928
      );
    }
    {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("get_recent_dirs");
      this._bindings.method_get_recent_dirs = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("set_builtin_action_override");
      this._bindings.method_set_builtin_action_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1209351045
      );
    }
    {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("check_changed_settings_in_group");
      this._bindings.method_check_changed_settings_in_group = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3927539163
      );
    }
    {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("get_changed_settings");
      this._bindings.method_get_changed_settings = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("EditorSettings");
      let methodname = new StringName("mark_setting_changed");
      this._bindings.method_mark_setting_changed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
  }
  
  has_setting(_name) {
    return _call_native_mb_ret(
      EditorSettings._bindings.method_has_setting,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  set_setting(_name, _value) {
    return _call_native_mb_no_ret(
      EditorSettings._bindings.method_set_setting,
      this._owner,
      _name, _value
    );
    
  }
  get_setting(_name) {
    return _call_native_mb_ret(
      EditorSettings._bindings.method_get_setting,
      this._owner,
			Variant.Type.VARIANT,
    
      _name
    );
    
  }
  erase(_property) {
    return _call_native_mb_no_ret(
      EditorSettings._bindings.method_erase,
      this._owner,
      _property
    );
    
  }
  set_initial_value(_name, _value, _update_current) {
    return _call_native_mb_no_ret(
      EditorSettings._bindings.method_set_initial_value,
      this._owner,
      _name, _value, _update_current
    );
    
  }
  add_property_info(_info) {
    return _call_native_mb_no_ret(
      EditorSettings._bindings.method_add_property_info,
      this._owner,
      _info
    );
    
  }
  set_project_metadata(_section, _key, _data) {
    return _call_native_mb_no_ret(
      EditorSettings._bindings.method_set_project_metadata,
      this._owner,
      _section, _key, _data
    );
    
  }
  get_project_metadata(_section, _key, _default) {
    return _call_native_mb_ret(
      EditorSettings._bindings.method_get_project_metadata,
      this._owner,
			Variant.Type.VARIANT,
    
      _section, _key, _default
    );
    
  }
  set_favorites(_dirs) {
    return _call_native_mb_no_ret(
      EditorSettings._bindings.method_set_favorites,
      this._owner,
      _dirs
    );
    
  }
  get_favorites() {
    return _call_native_mb_ret(
      EditorSettings._bindings.method_get_favorites,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_recent_dirs(_dirs) {
    return _call_native_mb_no_ret(
      EditorSettings._bindings.method_set_recent_dirs,
      this._owner,
      _dirs
    );
    
  }
  get_recent_dirs() {
    return _call_native_mb_ret(
      EditorSettings._bindings.method_get_recent_dirs,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_builtin_action_override(_name, _actions_list) {
    return _call_native_mb_no_ret(
      EditorSettings._bindings.method_set_builtin_action_override,
      this._owner,
      _name, _actions_list
    );
    
  }
  check_changed_settings_in_group(_setting_prefix) {
    return _call_native_mb_ret(
      EditorSettings._bindings.method_check_changed_settings_in_group,
      this._owner,
			Variant.Type.BOOL,
      _setting_prefix
    );
    
  }
  get_changed_settings() {
    return _call_native_mb_ret(
      EditorSettings._bindings.method_get_changed_settings,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  mark_setting_changed(_setting) {
    return _call_native_mb_no_ret(
      EditorSettings._bindings.method_mark_setting_changed,
      this._owner,
      _setting
    );
    
  }
  


  static {
    this._init_bindings();
  }
}