import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classes/godot_object'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { Variant } from 'src/js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_has_setting;
    method_set_setting;
    method_get_setting;
    method_get_setting_with_override;
    method_get_global_class_list;
    method_set_order;
    method_get_order;
    method_set_initial_value;
    method_set_as_basic;
    method_set_as_internal;
    method_add_property_info;
    method_set_restart_if_changed;
    method_clear;
    method_localize_path;
    method_globalize_path;
    method_save;
    method_load_resource_pack;
    method_save_custom;
}

export const ProjectSettings = new _ProjectSettings();

class _ProjectSettings extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ProjectSettings");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("has_setting");
        this._bindings.method_has_setting = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3927539163
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("set_setting");
        this._bindings.method_set_setting = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          402577236
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("get_setting");
        this._bindings.method_get_setting = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          223050753
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("get_setting_with_override");
        this._bindings.method_get_setting_with_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2760726917
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("get_global_class_list");
        this._bindings.method_get_global_class_list = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2915620761
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("set_order");
        this._bindings.method_set_order = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2956805083
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("get_order");
        this._bindings.method_get_order = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1321353865
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("set_initial_value");
        this._bindings.method_set_initial_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          402577236
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("set_as_basic");
        this._bindings.method_set_as_basic = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2678287736
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("set_as_internal");
        this._bindings.method_set_as_internal = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2678287736
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("add_property_info");
        this._bindings.method_add_property_info = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155329257
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("set_restart_if_changed");
        this._bindings.method_set_restart_if_changed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2678287736
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("clear");
        this._bindings.method_clear = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("localize_path");
        this._bindings.method_localize_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3135753539
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("globalize_path");
        this._bindings.method_globalize_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3135753539
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("save");
        this._bindings.method_save = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166280745
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("load_resource_pack");
        this._bindings.method_load_resource_pack = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          708980503
        );
      }
      {
        let classname = new StringName("ProjectSettings");
        let methodname = new StringName("save_custom");
        this._bindings.method_save_custom = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166001499
        );
      }
  }
  has_setting(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_setting,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  set_setting(_name, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_setting,
      this._owner,
      _name, _value
    );
    
  }
  get_setting(_name, _default_value) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_setting,
      this._owner,
			Variant.Type.VARIANT
    ,
      _name, _default_value
    );
    
  }
  get_setting_with_override(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_setting_with_override,
      this._owner,
			Variant.Type.VARIANT
    ,
      _name
    );
    
  }
  get_global_class_list() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_global_class_list,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_order(_name, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_order,
      this._owner,
      _name, _position
    );
    
  }
  get_order(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_order,
      this._owner,
			Variant.Type.INT,
      _name
    );
    
  }
  set_initial_value(_name, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_initial_value,
      this._owner,
      _name, _value
    );
    
  }
  set_as_basic(_name, _basic) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_as_basic,
      this._owner,
      _name, _basic
    );
    
  }
  set_as_internal(_name, _internal) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_as_internal,
      this._owner,
      _name, _internal
    );
    
  }
  add_property_info(_hint) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_property_info,
      this._owner,
      _hint
    );
    
  }
  set_restart_if_changed(_name, _restart) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_restart_if_changed,
      this._owner,
      _name, _restart
    );
    
  }
  clear(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      _name
    );
    
  }
  localize_path(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_localize_path,
      this._owner,
			Variant.Type.STRING
    ,
      _path
    );
    
  }
  globalize_path(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_globalize_path,
      this._owner,
			Variant.Type.STRING
    ,
      _path
    );
    
  }
  save() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_save,
      this._owner,
			Variant.INT,
      
    );
    
  }
  load_resource_pack(_pack, _replace_files, _offset) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_resource_pack,
      this._owner,
			Variant.Type.BOOL,
      _pack, _replace_files, _offset
    );
    
  }
  save_custom(_file) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_save_custom,
      this._owner,
			Variant.INT,
      _file
    );
    
  }
}