import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { Variant } from 'src/js_godot/variant/variant'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { Dictionary } from 'src/js_godot/variant/dictionary'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RegExMatch");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("RegExMatch");
      let methodname = new StringName("get_subject");
      this._bindings.method_get_subject = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("RegExMatch");
      let methodname = new StringName("get_group_count");
      this._bindings.method_get_group_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RegExMatch");
      let methodname = new StringName("get_names");
      this._bindings.method_get_names = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3102165223
      );
    }
    {
      let classname = new StringName("RegExMatch");
      let methodname = new StringName("get_strings");
      this._bindings.method_get_strings = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("RegExMatch");
      let methodname = new StringName("get_string");
      this._bindings.method_get_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        687115856
      );
    }
    {
      let classname = new StringName("RegExMatch");
      let methodname = new StringName("get_start");
      this._bindings.method_get_start = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        490464691
      );
    }
    {
      let classname = new StringName("RegExMatch");
      let methodname = new StringName("get_end");
      this._bindings.method_get_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        490464691
      );
    }
  }
  get_subject() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_subject,
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
			Variant.Type.DICTIONARY
    ,
      
    );
  }
  get_strings() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_strings,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  get_string(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_string,
      this._owner,
			Variant.Type.STRING
    ,
      _name
    );
  }
  get_start(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_start,
      this._owner,
			Variant.Type.INT,
      _name
    );
  }
  get_end(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_end,
      this._owner,
			Variant.Type.INT,
      _name
    );
  }
}