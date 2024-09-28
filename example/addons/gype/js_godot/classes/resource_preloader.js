import * as internal from '__internal__';
import { Node } from '@js_godot/classes/node'
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
  method_add_resource;
  method_remove_resource;
  method_rename_resource;
  method_has_resource;
  method_get_resource;
  method_get_resource_list;
}
@GodotClass
export class ResourcePreloader extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ResourcePreloader");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_resource() {
    if (!this._bindings.method_add_resource) {
      let classname = new StringName("ResourcePreloader");
      let methodname = new StringName("add_resource");
      this._bindings.method_add_resource = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1168801743
      );
    }
  }
  static init_method_remove_resource() {
    if (!this._bindings.method_remove_resource) {
      let classname = new StringName("ResourcePreloader");
      let methodname = new StringName("remove_resource");
      this._bindings.method_remove_resource = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_rename_resource() {
    if (!this._bindings.method_rename_resource) {
      let classname = new StringName("ResourcePreloader");
      let methodname = new StringName("rename_resource");
      this._bindings.method_rename_resource = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3740211285
      );
    }
  }
  static init_method_has_resource() {
    if (!this._bindings.method_has_resource) {
      let classname = new StringName("ResourcePreloader");
      let methodname = new StringName("has_resource");
      this._bindings.method_has_resource = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2619796661
      );
    }
  }
  static init_method_get_resource() {
    if (!this._bindings.method_get_resource) {
      let classname = new StringName("ResourcePreloader");
      let methodname = new StringName("get_resource");
      this._bindings.method_get_resource = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3742749261
      );
    }
  }
  static init_method_get_resource_list() {
    if (!this._bindings.method_get_resource_list) {
      let classname = new StringName("ResourcePreloader");
      let methodname = new StringName("get_resource_list");
      this._bindings.method_get_resource_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }

  
  
  add_resource(_name, _resource) {
    ResourcePreloader.init_method_add_resource();
    return _call_native_mb_no_ret(
      ResourcePreloader._bindings.method_add_resource,
      this._owner,
      _name, _resource
    );
    
  }
  remove_resource(_name) {
    ResourcePreloader.init_method_remove_resource();
    return _call_native_mb_no_ret(
      ResourcePreloader._bindings.method_remove_resource,
      this._owner,
      _name
    );
    
  }
  rename_resource(_name, _newname) {
    ResourcePreloader.init_method_rename_resource();
    return _call_native_mb_no_ret(
      ResourcePreloader._bindings.method_rename_resource,
      this._owner,
      _name, _newname
    );
    
  }
  has_resource(_name) {
    ResourcePreloader.init_method_has_resource();
    return _call_native_mb_ret(
      ResourcePreloader._bindings.method_has_resource,
      this._owner,
			Variant.Type.BOOL,
    
      _name
    );
    
  }
  get_resource(_name) {
    ResourcePreloader.init_method_get_resource();
    return _call_native_mb_ret(
      ResourcePreloader._bindings.method_get_resource,
      this._owner,
			Variant.Type.OBJECT,
      _name
    );
    
  }
  get_resource_list() {
    ResourcePreloader.init_method_get_resource_list();
    return _call_native_mb_ret(
      ResourcePreloader._bindings.method_get_resource_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  
get resources () {
  return this._get_resources();
}
set resources (new_value) {
  this._set_resources(new_value);
}

}