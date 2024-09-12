import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_stringify;
  method_parse_string;
  method_parse;
  method_get_data;
  method_set_data;
  method_get_parsed_text;
  method_get_error_line;
  method_get_error_message;
}
export class JSON extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("JSON");
    } else {
      super(godot_object);
    }
  }
  static init_method_stringify() {
    if (!this.#_bindings.method_stringify) {
      let classname = new StringName("JSON");
      let methodname = new StringName("stringify");
      this.#_bindings.method_stringify = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        462733549
      );
    }
  }
  static init_method_parse_string() {
    if (!this.#_bindings.method_parse_string) {
      let classname = new StringName("JSON");
      let methodname = new StringName("parse_string");
      this.#_bindings.method_parse_string = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        309047738
      );
    }
  }
  static init_method_parse() {
    if (!this.#_bindings.method_parse) {
      let classname = new StringName("JSON");
      let methodname = new StringName("parse");
      this.#_bindings.method_parse = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        885841341
      );
    }
  }
  static init_method_get_data() {
    if (!this.#_bindings.method_get_data) {
      let classname = new StringName("JSON");
      let methodname = new StringName("get_data");
      this.#_bindings.method_get_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1214101251
      );
    }
  }
  static init_method_set_data() {
    if (!this.#_bindings.method_set_data) {
      let classname = new StringName("JSON");
      let methodname = new StringName("set_data");
      this.#_bindings.method_set_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1114965689
      );
    }
  }
  static init_method_get_parsed_text() {
    if (!this.#_bindings.method_get_parsed_text) {
      let classname = new StringName("JSON");
      let methodname = new StringName("get_parsed_text");
      this.#_bindings.method_get_parsed_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_error_line() {
    if (!this.#_bindings.method_get_error_line) {
      let classname = new StringName("JSON");
      let methodname = new StringName("get_error_line");
      this.#_bindings.method_get_error_line = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_error_message() {
    if (!this.#_bindings.method_get_error_message) {
      let classname = new StringName("JSON");
      let methodname = new StringName("get_error_message");
      this.#_bindings.method_get_error_message = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }

  
  
  stringify(_data, _indent, _sort_keys, _full_precision) {
    JSON.init_method_stringify();
    return _call_native_mb_ret(
      JSON.#_bindings.method_stringify,
      this._owner,
			Variant.Type.STRING,
    
      _data, _indent, _sort_keys, _full_precision
    );
    
  }
  parse_string(_json_string) {
    JSON.init_method_parse_string();
    return _call_native_mb_ret(
      JSON.#_bindings.method_parse_string,
      this._owner,
			Variant.Type.VARIANT,
    
      _json_string
    );
    
  }
  parse(_json_text, _keep_text) {
    JSON.init_method_parse();
    return _call_native_mb_ret(
      JSON.#_bindings.method_parse,
      this._owner,
			Variant.Type.INT,
    
      _json_text, _keep_text
    );
    
  }
  get_data() {
    JSON.init_method_get_data();
    return _call_native_mb_ret(
      JSON.#_bindings.method_get_data,
      this._owner,
			Variant.Type.VARIANT,
    
      
    );
    
  }
  set_data(_data) {
    JSON.init_method_set_data();
    return _call_native_mb_no_ret(
      JSON.#_bindings.method_set_data,
      this._owner,
      _data
    );
    
  }
  get_parsed_text() {
    JSON.init_method_get_parsed_text();
    return _call_native_mb_ret(
      JSON.#_bindings.method_get_parsed_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_error_line() {
    JSON.init_method_get_error_line();
    return _call_native_mb_ret(
      JSON.#_bindings.method_get_error_line,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_error_message() {
    JSON.init_method_get_error_message();
    return _call_native_mb_ret(
      JSON.#_bindings.method_get_error_message,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  
get data () {
  return this.get_data();
}
set data (new_value) {
  this.set_data(new_value);
}

}