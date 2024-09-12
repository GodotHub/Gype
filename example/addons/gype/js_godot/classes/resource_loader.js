import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_load_threaded_request;
  method_load_threaded_get_status;
  method_load_threaded_get;
  method_load;
  method_get_recognized_extensions_for_type;
  method_add_resource_format_loader;
  method_remove_resource_format_loader;
  method_set_abort_on_missing_resources;
  method_get_dependencies;
  method_has_cached;
  method_exists;
  method_get_resource_uid;
}class _ResourceLoader extends GodotObject{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ResourceLoader");
    } else {
      super(godot_object);
    }
  }
  static init_method_load_threaded_request() {
    if (!this.#_bindings.method_load_threaded_request) {
      let classname = new StringName("ResourceLoader");
      let methodname = new StringName("load_threaded_request");
      this.#_bindings.method_load_threaded_request = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3614384323
      );
    }
  }
  static init_method_load_threaded_get_status() {
    if (!this.#_bindings.method_load_threaded_get_status) {
      let classname = new StringName("ResourceLoader");
      let methodname = new StringName("load_threaded_get_status");
      this.#_bindings.method_load_threaded_get_status = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4137685479
      );
    }
  }
  static init_method_load_threaded_get() {
    if (!this.#_bindings.method_load_threaded_get) {
      let classname = new StringName("ResourceLoader");
      let methodname = new StringName("load_threaded_get");
      this.#_bindings.method_load_threaded_get = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1748875256
      );
    }
  }
  static init_method_load() {
    if (!this.#_bindings.method_load) {
      let classname = new StringName("ResourceLoader");
      let methodname = new StringName("load");
      this.#_bindings.method_load = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3358495409
      );
    }
  }
  static init_method_get_recognized_extensions_for_type() {
    if (!this.#_bindings.method_get_recognized_extensions_for_type) {
      let classname = new StringName("ResourceLoader");
      let methodname = new StringName("get_recognized_extensions_for_type");
      this.#_bindings.method_get_recognized_extensions_for_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3538744774
      );
    }
  }
  static init_method_add_resource_format_loader() {
    if (!this.#_bindings.method_add_resource_format_loader) {
      let classname = new StringName("ResourceLoader");
      let methodname = new StringName("add_resource_format_loader");
      this.#_bindings.method_add_resource_format_loader = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2896595483
      );
    }
  }
  static init_method_remove_resource_format_loader() {
    if (!this.#_bindings.method_remove_resource_format_loader) {
      let classname = new StringName("ResourceLoader");
      let methodname = new StringName("remove_resource_format_loader");
      this.#_bindings.method_remove_resource_format_loader = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        405397102
      );
    }
  }
  static init_method_set_abort_on_missing_resources() {
    if (!this.#_bindings.method_set_abort_on_missing_resources) {
      let classname = new StringName("ResourceLoader");
      let methodname = new StringName("set_abort_on_missing_resources");
      this.#_bindings.method_set_abort_on_missing_resources = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_dependencies() {
    if (!this.#_bindings.method_get_dependencies) {
      let classname = new StringName("ResourceLoader");
      let methodname = new StringName("get_dependencies");
      this.#_bindings.method_get_dependencies = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3538744774
      );
    }
  }
  static init_method_has_cached() {
    if (!this.#_bindings.method_has_cached) {
      let classname = new StringName("ResourceLoader");
      let methodname = new StringName("has_cached");
      this.#_bindings.method_has_cached = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2323990056
      );
    }
  }
  static init_method_exists() {
    if (!this.#_bindings.method_exists) {
      let classname = new StringName("ResourceLoader");
      let methodname = new StringName("exists");
      this.#_bindings.method_exists = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4185558881
      );
    }
  }
  static init_method_get_resource_uid() {
    if (!this.#_bindings.method_get_resource_uid) {
      let classname = new StringName("ResourceLoader");
      let methodname = new StringName("get_resource_uid");
      this.#_bindings.method_get_resource_uid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1597066294
      );
    }
  }

  
  
  load_threaded_request(_path, _type_hint, _use_sub_threads, _cache_mode) {
    ResourceLoader.init_method_load_threaded_request();
    return _call_native_mb_ret(
      _ResourceLoader.#_bindings.method_load_threaded_request,
      this._owner,
			Variant.Type.INT,
    
      _path, _type_hint, _use_sub_threads, _cache_mode
    );
    
  }
  load_threaded_get_status(_path, _progress) {
    ResourceLoader.init_method_load_threaded_get_status();
    return _call_native_mb_ret(
      _ResourceLoader.#_bindings.method_load_threaded_get_status,
      this._owner,
			Variant.Type.INT,
    
      _path, _progress
    );
    
  }
  load_threaded_get(_path) {
    ResourceLoader.init_method_load_threaded_get();
    return _call_native_mb_ret(
      _ResourceLoader.#_bindings.method_load_threaded_get,
      this._owner,
			Variant.Type.OBJECT,
      _path
    );
    
  }
  load(_path, _type_hint, _cache_mode) {
    ResourceLoader.init_method_load();
    return _call_native_mb_ret(
      _ResourceLoader.#_bindings.method_load,
      this._owner,
			Variant.Type.OBJECT,
      _path, _type_hint, _cache_mode
    );
    
  }
  get_recognized_extensions_for_type(_type) {
    ResourceLoader.init_method_get_recognized_extensions_for_type();
    return _call_native_mb_ret(
      _ResourceLoader.#_bindings.method_get_recognized_extensions_for_type,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _type
    );
    
  }
  add_resource_format_loader(_format_loader, _at_front) {
    ResourceLoader.init_method_add_resource_format_loader();
    return _call_native_mb_no_ret(
      _ResourceLoader.#_bindings.method_add_resource_format_loader,
      this._owner,
      _format_loader, _at_front
    );
    
  }
  remove_resource_format_loader(_format_loader) {
    ResourceLoader.init_method_remove_resource_format_loader();
    return _call_native_mb_no_ret(
      _ResourceLoader.#_bindings.method_remove_resource_format_loader,
      this._owner,
      _format_loader
    );
    
  }
  set_abort_on_missing_resources(_abort) {
    ResourceLoader.init_method_set_abort_on_missing_resources();
    return _call_native_mb_no_ret(
      _ResourceLoader.#_bindings.method_set_abort_on_missing_resources,
      this._owner,
      _abort
    );
    
  }
  get_dependencies(_path) {
    ResourceLoader.init_method_get_dependencies();
    return _call_native_mb_ret(
      _ResourceLoader.#_bindings.method_get_dependencies,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _path
    );
    
  }
  has_cached(_path) {
    ResourceLoader.init_method_has_cached();
    return _call_native_mb_ret(
      _ResourceLoader.#_bindings.method_has_cached,
      this._owner,
			Variant.Type.BOOL,
    
      _path
    );
    
  }
  exists(_path, _type_hint) {
    ResourceLoader.init_method_exists();
    return _call_native_mb_ret(
      _ResourceLoader.#_bindings.method_exists,
      this._owner,
			Variant.Type.BOOL,
    
      _path, _type_hint
    );
    
  }
  get_resource_uid(_path) {
    ResourceLoader.init_method_get_resource_uid();
    return _call_native_mb_ret(
      _ResourceLoader.#_bindings.method_get_resource_uid,
      this._owner,
			Variant.Type.INT,
    
      _path
    );
    
  }
  

  static ThreadLoadStatus = {
    THREAD_LOAD_INVALID_RESOURCE: 0,
    THREAD_LOAD_IN_PROGRESS: 1,
    THREAD_LOAD_FAILED: 2,
    THREAD_LOAD_LOADED: 3,
  }
  static CacheMode = {
    CACHE_MODE_IGNORE: 0,
    CACHE_MODE_REUSE: 1,
    CACHE_MODE_REPLACE: 2,
    CACHE_MODE_IGNORE_DEEP: 3,
    CACHE_MODE_REPLACE_DEEP: 4,
  }
}
export const ResourceLoader = (function () {
  let _instance;
  function create_instance() {
    return new _ResourceLoader();
  }
  return {
    instance: function () {
      if (!_instance) {
        _instance = create_instance();
      }
      return _instance;
    },
  };
})();