import * as internal from '__internal__';
import { Variant } from 'src/js_godot/variant/variant'
import { Resource } from 'src/js_godot/classes/resource'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("JSON");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("JSON");
        let methodname = new StringName("stringify");
        this._bindings.method_stringify = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          462733549
        );
      }
      {
        let classname = new StringName("JSON");
        let methodname = new StringName("parse_string");
        this._bindings.method_parse_string = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          309047738
        );
      }
      {
        let classname = new StringName("JSON");
        let methodname = new StringName("parse");
        this._bindings.method_parse = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          885841341
        );
      }
      {
        let classname = new StringName("JSON");
        let methodname = new StringName("get_data");
        this._bindings.method_get_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1214101251
        );
      }
      {
        let classname = new StringName("JSON");
        let methodname = new StringName("set_data");
        this._bindings.method_set_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1114965689
        );
      }
      {
        let classname = new StringName("JSON");
        let methodname = new StringName("get_parsed_text");
        this._bindings.method_get_parsed_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("JSON");
        let methodname = new StringName("get_error_line");
        this._bindings.method_get_error_line = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("JSON");
        let methodname = new StringName("get_error_message");
        this._bindings.method_get_error_message = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
  }
  stringify(_data, _indent, _sort_keys, _full_precision) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_stringify,
      this._owner,
			Variant.Type.STRING
    ,
      _data, _indent, _sort_keys, _full_precision
    );
    
  }
  parse_string(_json_string) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_parse_string,
      this._owner,
			Variant.Type.VARIANT
    ,
      _json_string
    );
    
  }
  parse(_json_text, _keep_text) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_parse,
      this._owner,
			Variant.INT,
      _json_text, _keep_text
    );
    
  }
  get_data() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_data,
      this._owner,
			Variant.Type.VARIANT
    ,
      
    );
    
  }
  set_data(_data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_data,
      this._owner,
      _data
    );
    
  }
  get_parsed_text() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_parsed_text,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  get_error_line() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_error_line,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_error_message() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_error_message,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
}