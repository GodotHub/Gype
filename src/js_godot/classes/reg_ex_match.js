import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_subject;
  method_get_group_count;
  method_get_names;
  method_get_strings;
  method_get_string;
  method_get_start;
  method_get_end;
}
export class RegExMatch extends RefCounted{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RegExMatch");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_subject() {
    if (!this.#_bindings.method_get_subject) {
      let classname = new StringName("RegExMatch");
      let methodname = new StringName("get_subject");
      this.#_bindings.method_get_subject = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_group_count() {
    if (!this.#_bindings.method_get_group_count) {
      let classname = new StringName("RegExMatch");
      let methodname = new StringName("get_group_count");
      this.#_bindings.method_get_group_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_names() {
    if (!this.#_bindings.method_get_names) {
      let classname = new StringName("RegExMatch");
      let methodname = new StringName("get_names");
      this.#_bindings.method_get_names = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3102165223
      );
    }
  }
  static init_method_get_strings() {
    if (!this.#_bindings.method_get_strings) {
      let classname = new StringName("RegExMatch");
      let methodname = new StringName("get_strings");
      this.#_bindings.method_get_strings = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_get_string() {
    if (!this.#_bindings.method_get_string) {
      let classname = new StringName("RegExMatch");
      let methodname = new StringName("get_string");
      this.#_bindings.method_get_string = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        687115856
      );
    }
  }
  static init_method_get_start() {
    if (!this.#_bindings.method_get_start) {
      let classname = new StringName("RegExMatch");
      let methodname = new StringName("get_start");
      this.#_bindings.method_get_start = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        490464691
      );
    }
  }
  static init_method_get_end() {
    if (!this.#_bindings.method_get_end) {
      let classname = new StringName("RegExMatch");
      let methodname = new StringName("get_end");
      this.#_bindings.method_get_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        490464691
      );
    }
  }

  
  
  get_subject() {
    RegExMatch.init_method_get_subject();
    return _call_native_mb_ret(
      RegExMatch.#_bindings.method_get_subject,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_group_count() {
    RegExMatch.init_method_get_group_count();
    return _call_native_mb_ret(
      RegExMatch.#_bindings.method_get_group_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_names() {
    RegExMatch.init_method_get_names();
    return _call_native_mb_ret(
      RegExMatch.#_bindings.method_get_names,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  get_strings() {
    RegExMatch.init_method_get_strings();
    return _call_native_mb_ret(
      RegExMatch.#_bindings.method_get_strings,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_string(_name) {
    RegExMatch.init_method_get_string();
    return _call_native_mb_ret(
      RegExMatch.#_bindings.method_get_string,
      this._owner,
			Variant.Type.STRING,
    
      _name
    );
    
  }
  get_start(_name) {
    RegExMatch.init_method_get_start();
    return _call_native_mb_ret(
      RegExMatch.#_bindings.method_get_start,
      this._owner,
			Variant.Type.INT,
    
      _name
    );
    
  }
  get_end(_name) {
    RegExMatch.init_method_get_end();
    return _call_native_mb_ret(
      RegExMatch.#_bindings.method_get_end,
      this._owner,
			Variant.Type.INT,
    
      _name
    );
    
  }
  
get subject () {
  return this.get_subject();
}
get names () {
  return this.get_names();
}
get strings () {
  return this.get_strings();
}

}