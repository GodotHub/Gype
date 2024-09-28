import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
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
  method_set_value;
  method_get_value;
  method_has_section;
  method_has_section_key;
  method_get_sections;
  method_get_section_keys;
  method_erase_section;
  method_erase_section_key;
  method_load;
  method_parse;
  method_save;
  method_encode_to_text;
  method_load_encrypted;
  method_load_encrypted_pass;
  method_save_encrypted;
  method_save_encrypted_pass;
  method_clear;
}
@GodotClass
export class ConfigFile extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ConfigFile");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_value() {
    if (!this._bindings.method_set_value) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("set_value");
      this._bindings.method_set_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2504492430
      );
    }
  }
  static init_method_get_value() {
    if (!this._bindings.method_get_value) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("get_value");
      this._bindings.method_get_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        89809366
      );
    }
  }
  static init_method_has_section() {
    if (!this._bindings.method_has_section) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("has_section");
      this._bindings.method_has_section = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3927539163
      );
    }
  }
  static init_method_has_section_key() {
    if (!this._bindings.method_has_section_key) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("has_section_key");
      this._bindings.method_has_section_key = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        820780508
      );
    }
  }
  static init_method_get_sections() {
    if (!this._bindings.method_get_sections) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("get_sections");
      this._bindings.method_get_sections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_get_section_keys() {
    if (!this._bindings.method_get_section_keys) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("get_section_keys");
      this._bindings.method_get_section_keys = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4291131558
      );
    }
  }
  static init_method_erase_section() {
    if (!this._bindings.method_erase_section) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("erase_section");
      this._bindings.method_erase_section = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_erase_section_key() {
    if (!this._bindings.method_erase_section_key) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("erase_section_key");
      this._bindings.method_erase_section_key = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3186203200
      );
    }
  }
  static init_method_load() {
    if (!this._bindings.method_load) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("load");
      this._bindings.method_load = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166001499
      );
    }
  }
  static init_method_parse() {
    if (!this._bindings.method_parse) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("parse");
      this._bindings.method_parse = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166001499
      );
    }
  }
  static init_method_save() {
    if (!this._bindings.method_save) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("save");
      this._bindings.method_save = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166001499
      );
    }
  }
  static init_method_encode_to_text() {
    if (!this._bindings.method_encode_to_text) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("encode_to_text");
      this._bindings.method_encode_to_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_load_encrypted() {
    if (!this._bindings.method_load_encrypted) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("load_encrypted");
      this._bindings.method_load_encrypted = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        887037711
      );
    }
  }
  static init_method_load_encrypted_pass() {
    if (!this._bindings.method_load_encrypted_pass) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("load_encrypted_pass");
      this._bindings.method_load_encrypted_pass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        852856452
      );
    }
  }
  static init_method_save_encrypted() {
    if (!this._bindings.method_save_encrypted) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("save_encrypted");
      this._bindings.method_save_encrypted = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        887037711
      );
    }
  }
  static init_method_save_encrypted_pass() {
    if (!this._bindings.method_save_encrypted_pass) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("save_encrypted_pass");
      this._bindings.method_save_encrypted_pass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        852856452
      );
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("ConfigFile");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  set_value(_section, _key, _value) {
    ConfigFile.init_method_set_value();
    return _call_native_mb_no_ret(
      ConfigFile._bindings.method_set_value,
      this._owner,
      _section, _key, _value
    );
    
  }
  get_value(_section, _key, _default) {
    ConfigFile.init_method_get_value();
    return _call_native_mb_ret(
      ConfigFile._bindings.method_get_value,
      this._owner,
			Variant.Type.VARIANT,
    
      _section, _key, _default
    );
    
  }
  has_section(_section) {
    ConfigFile.init_method_has_section();
    return _call_native_mb_ret(
      ConfigFile._bindings.method_has_section,
      this._owner,
			Variant.Type.BOOL,
    
      _section
    );
    
  }
  has_section_key(_section, _key) {
    ConfigFile.init_method_has_section_key();
    return _call_native_mb_ret(
      ConfigFile._bindings.method_has_section_key,
      this._owner,
			Variant.Type.BOOL,
    
      _section, _key
    );
    
  }
  get_sections() {
    ConfigFile.init_method_get_sections();
    return _call_native_mb_ret(
      ConfigFile._bindings.method_get_sections,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_section_keys(_section) {
    ConfigFile.init_method_get_section_keys();
    return _call_native_mb_ret(
      ConfigFile._bindings.method_get_section_keys,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _section
    );
    
  }
  erase_section(_section) {
    ConfigFile.init_method_erase_section();
    return _call_native_mb_no_ret(
      ConfigFile._bindings.method_erase_section,
      this._owner,
      _section
    );
    
  }
  erase_section_key(_section, _key) {
    ConfigFile.init_method_erase_section_key();
    return _call_native_mb_no_ret(
      ConfigFile._bindings.method_erase_section_key,
      this._owner,
      _section, _key
    );
    
  }
  load(_path) {
    ConfigFile.init_method_load();
    return _call_native_mb_ret(
      ConfigFile._bindings.method_load,
      this._owner,
			Variant.Type.INT,
    
      _path
    );
    
  }
  parse(_data) {
    ConfigFile.init_method_parse();
    return _call_native_mb_ret(
      ConfigFile._bindings.method_parse,
      this._owner,
			Variant.Type.INT,
    
      _data
    );
    
  }
  save(_path) {
    ConfigFile.init_method_save();
    return _call_native_mb_ret(
      ConfigFile._bindings.method_save,
      this._owner,
			Variant.Type.INT,
    
      _path
    );
    
  }
  encode_to_text() {
    ConfigFile.init_method_encode_to_text();
    return _call_native_mb_ret(
      ConfigFile._bindings.method_encode_to_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  load_encrypted(_path, _key) {
    ConfigFile.init_method_load_encrypted();
    return _call_native_mb_ret(
      ConfigFile._bindings.method_load_encrypted,
      this._owner,
			Variant.Type.INT,
    
      _path, _key
    );
    
  }
  load_encrypted_pass(_path, _password) {
    ConfigFile.init_method_load_encrypted_pass();
    return _call_native_mb_ret(
      ConfigFile._bindings.method_load_encrypted_pass,
      this._owner,
			Variant.Type.INT,
    
      _path, _password
    );
    
  }
  save_encrypted(_path, _key) {
    ConfigFile.init_method_save_encrypted();
    return _call_native_mb_ret(
      ConfigFile._bindings.method_save_encrypted,
      this._owner,
			Variant.Type.INT,
    
      _path, _key
    );
    
  }
  save_encrypted_pass(_path, _password) {
    ConfigFile.init_method_save_encrypted_pass();
    return _call_native_mb_ret(
      ConfigFile._bindings.method_save_encrypted_pass,
      this._owner,
			Variant.Type.INT,
    
      _path, _password
    );
    
  }
  clear() {
    ConfigFile.init_method_clear();
    return _call_native_mb_no_ret(
      ConfigFile._bindings.method_clear,
      this._owner,
      
    );
    
  }
  

}