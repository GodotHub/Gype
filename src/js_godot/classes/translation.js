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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Translation");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_locale() {
    if (!this.#_bindings.method_set_locale) {
      let classname = new StringName("Translation");
      let methodname = new StringName("set_locale");
      this.#_bindings.method_set_locale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_locale() {
    if (!this.#_bindings.method_get_locale) {
      let classname = new StringName("Translation");
      let methodname = new StringName("get_locale");
      this.#_bindings.method_get_locale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_add_message() {
    if (!this.#_bindings.method_add_message) {
      let classname = new StringName("Translation");
      let methodname = new StringName("add_message");
      this.#_bindings.method_add_message = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        971803314
      );
    }
  }
  static init_method_add_plural_message() {
    if (!this.#_bindings.method_add_plural_message) {
      let classname = new StringName("Translation");
      let methodname = new StringName("add_plural_message");
      this.#_bindings.method_add_plural_message = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        360316719
      );
    }
  }
  static init_method_get_message() {
    if (!this.#_bindings.method_get_message) {
      let classname = new StringName("Translation");
      let methodname = new StringName("get_message");
      this.#_bindings.method_get_message = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        58037827
      );
    }
  }
  static init_method_get_plural_message() {
    if (!this.#_bindings.method_get_plural_message) {
      let classname = new StringName("Translation");
      let methodname = new StringName("get_plural_message");
      this.#_bindings.method_get_plural_message = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1333931916
      );
    }
  }
  static init_method_erase_message() {
    if (!this.#_bindings.method_erase_message) {
      let classname = new StringName("Translation");
      let methodname = new StringName("erase_message");
      this.#_bindings.method_erase_message = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3919944288
      );
    }
  }
  static init_method_get_message_list() {
    if (!this.#_bindings.method_get_message_list) {
      let classname = new StringName("Translation");
      let methodname = new StringName("get_message_list");
      this.#_bindings.method_get_message_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_get_translated_message_list() {
    if (!this.#_bindings.method_get_translated_message_list) {
      let classname = new StringName("Translation");
      let methodname = new StringName("get_translated_message_list");
      this.#_bindings.method_get_translated_message_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_get_message_count() {
    if (!this.#_bindings.method_get_message_count) {
      let classname = new StringName("Translation");
      let methodname = new StringName("get_message_count");
      this.#_bindings.method_get_message_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  _get_plural_message(_src_message, _src_plural_message, _n, _context) {
  }
  _get_message(_src_message, _context) {
  }
  set_locale(_locale) {
    Translation.init_method_set_locale();
    return _call_native_mb_no_ret(
      Translation.#_bindings.method_set_locale,
      this._owner,
      _locale
    );
    
  }
  get_locale() {
    Translation.init_method_get_locale();
    return _call_native_mb_ret(
      Translation.#_bindings.method_get_locale,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  add_message(_src_message, _xlated_message, _context) {
    Translation.init_method_add_message();
    return _call_native_mb_no_ret(
      Translation.#_bindings.method_add_message,
      this._owner,
      _src_message, _xlated_message, _context
    );
    
  }
  add_plural_message(_src_message, _xlated_messages, _context) {
    Translation.init_method_add_plural_message();
    return _call_native_mb_no_ret(
      Translation.#_bindings.method_add_plural_message,
      this._owner,
      _src_message, _xlated_messages, _context
    );
    
  }
  get_message(_src_message, _context) {
    Translation.init_method_get_message();
    return _call_native_mb_ret(
      Translation.#_bindings.method_get_message,
      this._owner,
			Variant.Type.STRING_NAME,
    
      _src_message, _context
    );
    
  }
  get_plural_message(_src_message, _src_plural_message, _n, _context) {
    Translation.init_method_get_plural_message();
    return _call_native_mb_ret(
      Translation.#_bindings.method_get_plural_message,
      this._owner,
			Variant.Type.STRING_NAME,
    
      _src_message, _src_plural_message, _n, _context
    );
    
  }
  erase_message(_src_message, _context) {
    Translation.init_method_erase_message();
    return _call_native_mb_no_ret(
      Translation.#_bindings.method_erase_message,
      this._owner,
      _src_message, _context
    );
    
  }
  get_message_list() {
    Translation.init_method_get_message_list();
    return _call_native_mb_ret(
      Translation.#_bindings.method_get_message_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_translated_message_list() {
    Translation.init_method_get_translated_message_list();
    return _call_native_mb_ret(
      Translation.#_bindings.method_get_translated_message_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_message_count() {
    Translation.init_method_get_message_count();
    return _call_native_mb_ret(
      Translation.#_bindings.method_get_message_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get messages () {
  return this._get_messages();
}
set messages (new_value) {
  this._set_messages(new_value);
}
get locale () {
  return this.get_locale();
}
set locale (new_value) {
  this.set_locale(new_value);
}

}