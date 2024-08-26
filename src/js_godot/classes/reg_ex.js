import * as internal from '__internal__';
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { GDString } from 'src/js_godot/variant/gd_string'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RegEx");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("RegEx");
      let methodname = new StringName("create_from_string");
      this._bindings.method_create_from_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2150300909
      );
    }
    {
      let classname = new StringName("RegEx");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("RegEx");
      let methodname = new StringName("compile");
      this._bindings.method_compile = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        166001499
      );
    }
    {
      let classname = new StringName("RegEx");
      let methodname = new StringName("search");
      this._bindings.method_search = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3365977994
      );
    }
    {
      let classname = new StringName("RegEx");
      let methodname = new StringName("search_all");
      this._bindings.method_search_all = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        849021363
      );
    }
    {
      let classname = new StringName("RegEx");
      let methodname = new StringName("sub");
      this._bindings.method_sub = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        54019702
      );
    }
    {
      let classname = new StringName("RegEx");
      let methodname = new StringName("is_valid");
      this._bindings.method_is_valid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("RegEx");
      let methodname = new StringName("get_pattern");
      this._bindings.method_get_pattern = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("RegEx");
      let methodname = new StringName("get_group_count");
      this._bindings.method_get_group_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RegEx");
      let methodname = new StringName("get_names");
      this._bindings.method_get_names = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
  }
  create_from_string(_pattern) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_from_string,
      this._owner,
			Variant.INT,
      _pattern
    );
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
  }
  compile(_pattern) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_compile,
      this._owner,
			Variant.INT,
      _pattern
    );
  }
  search(_subject, _offset, _end) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_search,
      this._owner,
			Variant.INT,
      _subject, _offset, _end
    );
  }
  search_all(_subject, _offset, _end) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_search_all,
      this._owner,
			Variant.INT,
      _subject, _offset, _end
    );
  }
  sub(_subject, _replacement, _all, _offset, _end) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_sub,
      this._owner,
			Variant.Type.STRING
    ,
      _subject, _replacement, _all, _offset, _end
    );
  }
  is_valid() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_valid,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_pattern() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pattern,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  get_group_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_group_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_names() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_names,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
}