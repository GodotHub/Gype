import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { GodotObject } from '@js_godot/classes/godot_object'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_save;
  method_get_recognized_extensions;
  method_add_resource_format_saver;
  method_remove_resource_format_saver;
}class _ResourceSaver extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ResourceSaver");
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
      let classname = new StringName("ResourceSaver");
      let methodname = new StringName("save");
      this._bindings.method_save = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2983274697
      );
    }
    {
      let classname = new StringName("ResourceSaver");
      let methodname = new StringName("get_recognized_extensions");
      this._bindings.method_get_recognized_extensions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4223597960
      );
    }
    {
      let classname = new StringName("ResourceSaver");
      let methodname = new StringName("add_resource_format_saver");
      this._bindings.method_add_resource_format_saver = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        362894272
      );
    }
    {
      let classname = new StringName("ResourceSaver");
      let methodname = new StringName("remove_resource_format_saver");
      this._bindings.method_remove_resource_format_saver = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3373026878
      );
    }
  }
  save(_resource, _path, _flags) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_save,
      this._owner,
			Variant.INT,
      _resource, _path, _flags
    );
    
  }
  get_recognized_extensions(_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_recognized_extensions,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _type
    );
    
  }
  add_resource_format_saver(_format_saver, _at_front) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_resource_format_saver,
      this._owner,
      _format_saver, _at_front
    );
    
  }
  remove_resource_format_saver(_format_saver) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_resource_format_saver,
      this._owner,
      _format_saver
    );
    
  }
  

  static SaverFlags = {
    FLAG_NONE: 0,
    FLAG_RELATIVE_PATHS: 1,
    FLAG_BUNDLE_RESOURCES: 2,
    FLAG_CHANGE_PATH: 4,
    FLAG_OMIT_EDITOR_PROPERTIES: 8,
    FLAG_SAVE_BIG_ENDIAN: 16,
    FLAG_COMPRESS: 32,
    FLAG_REPLACE_SUBRESOURCE_PATHS: 64,
  }

  static {
    this._init_bindings();
  }
}
export const ResourceSaver = new _ResourceSaver();