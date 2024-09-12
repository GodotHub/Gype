import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_create_from_string;
  method_clear;
  method_compile;
  method_search;
  method_search_all;
  method_sub;
  method_is_valid;
  method_get_pattern;
  method_get_group_count;
  method_get_names;
}
export class RegEx extends RefCounted{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RegEx");
    } else {
      super(godot_object);
    }
  }
  static init_method_create_from_string() {
    if (!this.#_bindings.method_create_from_string) {
      let classname = new StringName("RegEx");
      let methodname = new StringName("create_from_string");
      this.#_bindings.method_create_from_string = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2150300909
      );
    }
  }
  static init_method_clear() {
    if (!this.#_bindings.method_clear) {
      let classname = new StringName("RegEx");
      let methodname = new StringName("clear");
      this.#_bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_compile() {
    if (!this.#_bindings.method_compile) {
      let classname = new StringName("RegEx");
      let methodname = new StringName("compile");
      this.#_bindings.method_compile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166001499
      );
    }
  }
  static init_method_search() {
    if (!this.#_bindings.method_search) {
      let classname = new StringName("RegEx");
      let methodname = new StringName("search");
      this.#_bindings.method_search = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3365977994
      );
    }
  }
  static init_method_search_all() {
    if (!this.#_bindings.method_search_all) {
      let classname = new StringName("RegEx");
      let methodname = new StringName("search_all");
      this.#_bindings.method_search_all = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        849021363
      );
    }
  }
  static init_method_sub() {
    if (!this.#_bindings.method_sub) {
      let classname = new StringName("RegEx");
      let methodname = new StringName("sub");
      this.#_bindings.method_sub = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        54019702
      );
    }
  }
  static init_method_is_valid() {
    if (!this.#_bindings.method_is_valid) {
      let classname = new StringName("RegEx");
      let methodname = new StringName("is_valid");
      this.#_bindings.method_is_valid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_pattern() {
    if (!this.#_bindings.method_get_pattern) {
      let classname = new StringName("RegEx");
      let methodname = new StringName("get_pattern");
      this.#_bindings.method_get_pattern = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_group_count() {
    if (!this.#_bindings.method_get_group_count) {
      let classname = new StringName("RegEx");
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
      let classname = new StringName("RegEx");
      let methodname = new StringName("get_names");
      this.#_bindings.method_get_names = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }

  
  
  create_from_string(_pattern) {
    RegEx.init_method_create_from_string();
    return _call_native_mb_ret(
      RegEx.#_bindings.method_create_from_string,
      this._owner,
			Variant.Type.OBJECT,
      _pattern
    );
    
  }
  clear() {
    RegEx.init_method_clear();
    return _call_native_mb_no_ret(
      RegEx.#_bindings.method_clear,
      this._owner,
      
    );
    
  }
  compile(_pattern) {
    RegEx.init_method_compile();
    return _call_native_mb_ret(
      RegEx.#_bindings.method_compile,
      this._owner,
			Variant.Type.INT,
    
      _pattern
    );
    
  }
  search(_subject, _offset, _end) {
    RegEx.init_method_search();
    return _call_native_mb_ret(
      RegEx.#_bindings.method_search,
      this._owner,
			Variant.Type.OBJECT,
      _subject, _offset, _end
    );
    
  }
  search_all(_subject, _offset, _end) {
    RegEx.init_method_search_all();
    return _call_native_mb_ret(
      RegEx.#_bindings.method_search_all,
      this._owner,
			Variant.Type.ARRAY,
      _subject, _offset, _end
    );
    
  }
  sub(_subject, _replacement, _all, _offset, _end) {
    RegEx.init_method_sub();
    return _call_native_mb_ret(
      RegEx.#_bindings.method_sub,
      this._owner,
			Variant.Type.STRING,
    
      _subject, _replacement, _all, _offset, _end
    );
    
  }
  is_valid() {
    RegEx.init_method_is_valid();
    return _call_native_mb_ret(
      RegEx.#_bindings.method_is_valid,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_pattern() {
    RegEx.init_method_get_pattern();
    return _call_native_mb_ret(
      RegEx.#_bindings.method_get_pattern,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_group_count() {
    RegEx.init_method_get_group_count();
    return _call_native_mb_ret(
      RegEx.#_bindings.method_get_group_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_names() {
    RegEx.init_method_get_names();
    return _call_native_mb_ret(
      RegEx.#_bindings.method_get_names,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  

}