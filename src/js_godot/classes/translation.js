import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { StringName } from 'src/js_godot/variant/string_name'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__get_plural_message;
    method__get_message;
    method_set_locale;
    method_get_locale;
    method_add_message;
    method_add_plural_message;
    method_get_message;
    method_get_plural_message;
    method_erase_message;
    method_get_message_list;
    method_get_translated_message_list;
    method_get_message_count;
}


export class Translation extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Translation");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Translation");
      let methodname = new StringName("_get_plural_message");
      this._bindings.method__get_plural_message = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("Translation");
      let methodname = new StringName("_get_message");
      this._bindings.method__get_message = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("Translation");
      let methodname = new StringName("set_locale");
      this._bindings.method_set_locale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("Translation");
      let methodname = new StringName("get_locale");
      this._bindings.method_get_locale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("Translation");
      let methodname = new StringName("add_message");
      this._bindings.method_add_message = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        971803314
      );
    }
    {
      let classname = new StringName("Translation");
      let methodname = new StringName("add_plural_message");
      this._bindings.method_add_plural_message = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        360316719
      );
    }
    {
      let classname = new StringName("Translation");
      let methodname = new StringName("get_message");
      this._bindings.method_get_message = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        58037827
      );
    }
    {
      let classname = new StringName("Translation");
      let methodname = new StringName("get_plural_message");
      this._bindings.method_get_plural_message = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1333931916
      );
    }
    {
      let classname = new StringName("Translation");
      let methodname = new StringName("erase_message");
      this._bindings.method_erase_message = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3919944288
      );
    }
    {
      let classname = new StringName("Translation");
      let methodname = new StringName("get_message_list");
      this._bindings.method_get_message_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("Translation");
      let methodname = new StringName("get_translated_message_list");
      this._bindings.method_get_translated_message_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("Translation");
      let methodname = new StringName("get_message_count");
      this._bindings.method_get_message_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  _get_plural_message(_src_message, _src_plural_message, _n, _context) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_plural_message,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _src_message, _src_plural_message, _n, _context
    );
  }
  _get_message(_src_message, _context) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_message,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _src_message, _context
    );
  }
  set_locale(_locale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_locale,
      this._owner,
      _locale
    );
  }
  get_locale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_locale,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  add_message(_src_message, _xlated_message, _context) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_message,
      this._owner,
      _src_message, _xlated_message, _context
    );
  }
  add_plural_message(_src_message, _xlated_messages, _context) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_plural_message,
      this._owner,
      _src_message, _xlated_messages, _context
    );
  }
  get_message(_src_message, _context) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_message,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _src_message, _context
    );
  }
  get_plural_message(_src_message, _src_plural_message, _n, _context) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_plural_message,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _src_message, _src_plural_message, _n, _context
    );
  }
  erase_message(_src_message, _context) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_erase_message,
      this._owner,
      _src_message, _context
    );
  }
  get_message_list() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_message_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  get_translated_message_list() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_translated_message_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  get_message_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_message_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
}