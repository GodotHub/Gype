import * as internal from '__internal__';
import { GodotObject } from '@js_godot/classes/godot_object'
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
  method_id_to_text;
  method_text_to_id;
  method_create_id;
  method_has_id;
  method_add_id;
  method_set_id;
  method_get_id_path;
  method_remove_id;
}class _ResourceUID extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ResourceUID");
    } else {
      super(godot_object);
    }
  }
  static init_method_id_to_text() {
    if (!this._bindings.method_id_to_text) {
      let classname = new StringName("ResourceUID");
      let methodname = new StringName("id_to_text");
      this._bindings.method_id_to_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_text_to_id() {
    if (!this._bindings.method_text_to_id) {
      let classname = new StringName("ResourceUID");
      let methodname = new StringName("text_to_id");
      this._bindings.method_text_to_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1321353865
      );
    }
  }
  static init_method_create_id() {
    if (!this._bindings.method_create_id) {
      let classname = new StringName("ResourceUID");
      let methodname = new StringName("create_id");
      this._bindings.method_create_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_has_id() {
    if (!this._bindings.method_has_id) {
      let classname = new StringName("ResourceUID");
      let methodname = new StringName("has_id");
      this._bindings.method_has_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_add_id() {
    if (!this._bindings.method_add_id) {
      let classname = new StringName("ResourceUID");
      let methodname = new StringName("add_id");
      this._bindings.method_add_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_set_id() {
    if (!this._bindings.method_set_id) {
      let classname = new StringName("ResourceUID");
      let methodname = new StringName("set_id");
      this._bindings.method_set_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_id_path() {
    if (!this._bindings.method_get_id_path) {
      let classname = new StringName("ResourceUID");
      let methodname = new StringName("get_id_path");
      this._bindings.method_get_id_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_remove_id() {
    if (!this._bindings.method_remove_id) {
      let classname = new StringName("ResourceUID");
      let methodname = new StringName("remove_id");
      this._bindings.method_remove_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }

  
  
  id_to_text(_id) {
    ResourceUID.init_method_id_to_text();
    return _call_native_mb_ret(
      _ResourceUID._bindings.method_id_to_text,
      this._owner,
			Variant.Type.STRING,
    
      _id
    );
    
  }
  text_to_id(_text_id) {
    ResourceUID.init_method_text_to_id();
    return _call_native_mb_ret(
      _ResourceUID._bindings.method_text_to_id,
      this._owner,
			Variant.Type.INT,
    
      _text_id
    );
    
  }
  create_id() {
    ResourceUID.init_method_create_id();
    return _call_native_mb_ret(
      _ResourceUID._bindings.method_create_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  has_id(_id) {
    ResourceUID.init_method_has_id();
    return _call_native_mb_ret(
      _ResourceUID._bindings.method_has_id,
      this._owner,
			Variant.Type.BOOL,
    
      _id
    );
    
  }
  add_id(_id, _path) {
    ResourceUID.init_method_add_id();
    return _call_native_mb_no_ret(
      _ResourceUID._bindings.method_add_id,
      this._owner,
      _id, _path
    );
    
  }
  set_id(_id, _path) {
    ResourceUID.init_method_set_id();
    return _call_native_mb_no_ret(
      _ResourceUID._bindings.method_set_id,
      this._owner,
      _id, _path
    );
    
  }
  get_id_path(_id) {
    ResourceUID.init_method_get_id_path();
    return _call_native_mb_ret(
      _ResourceUID._bindings.method_get_id_path,
      this._owner,
			Variant.Type.STRING,
    
      _id
    );
    
  }
  remove_id(_id) {
    ResourceUID.init_method_remove_id();
    return _call_native_mb_no_ret(
      _ResourceUID._bindings.method_remove_id,
      this._owner,
      _id
    );
    
  }
  

}
export const ResourceUID = (function () {
  let _instance;
  function create_instance() {
    return new _ResourceUID();
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