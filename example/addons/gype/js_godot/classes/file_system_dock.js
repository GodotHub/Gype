import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { VBoxContainer } from '@js_godot/classes/v_box_container'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_navigate_to_path;
  method_add_resource_tooltip_plugin;
  method_remove_resource_tooltip_plugin;
}
export class FileSystemDock extends VBoxContainer{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("FileSystemDock");
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
      let classname = new StringName("FileSystemDock");
      let methodname = new StringName("navigate_to_path");
      this._bindings.method_navigate_to_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("FileSystemDock");
      let methodname = new StringName("add_resource_tooltip_plugin");
      this._bindings.method_add_resource_tooltip_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2258356838
      );
    }
    {
      let classname = new StringName("FileSystemDock");
      let methodname = new StringName("remove_resource_tooltip_plugin");
      this._bindings.method_remove_resource_tooltip_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2258356838
      );
    }
  }
  
  navigate_to_path(_path) {
    return _call_native_mb_no_ret(
      FileSystemDock._bindings.method_navigate_to_path,
      this._owner,
      _path
    );
    
  }
  add_resource_tooltip_plugin(_plugin) {
    return _call_native_mb_no_ret(
      FileSystemDock._bindings.method_add_resource_tooltip_plugin,
      this._owner,
      _plugin
    );
    
  }
  remove_resource_tooltip_plugin(_plugin) {
    return _call_native_mb_no_ret(
      FileSystemDock._bindings.method_remove_resource_tooltip_plugin,
      this._owner,
      _plugin
    );
    
  }
  


  static {
    this._init_bindings();
  }
}