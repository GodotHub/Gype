import * as internal from '__internal__';
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { StringName } from '@js_godot/variant/string_name'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_open;
  method_open_encrypted;
  method_open_encrypted_with_pass;
  method_open_compressed;
  method_get_open_error;
  method_get_file_as_bytes;
  method_get_file_as_string;
  method_resize;
  method_flush;
  method_get_path;
  method_get_path_absolute;
  method_is_open;
  method_seek;
  method_seek_end;
  method_get_position;
  method_get_length;
  method_eof_reached;
  method_get_8;
  method_get_16;
  method_get_32;
  method_get_64;
  method_get_float;
  method_get_double;
  method_get_real;
  method_get_buffer;
  method_get_line;
  method_get_csv_line;
  method_get_as_text;
  method_get_md5;
  method_get_sha256;
  method_is_big_endian;
  method_set_big_endian;
  method_get_error;
  method_get_var;
  method_store_8;
  method_store_16;
  method_store_32;
  method_store_64;
  method_store_float;
  method_store_double;
  method_store_real;
  method_store_buffer;
  method_store_line;
  method_store_csv_line;
  method_store_string;
  method_store_var;
  method_store_pascal_string;
  method_get_pascal_string;
  method_close;
  method_file_exists;
  method_get_modified_time;
  method_get_unix_permissions;
  method_set_unix_permissions;
  method_get_hidden_attribute;
  method_set_hidden_attribute;
  method_set_read_only_attribute;
  method_get_read_only_attribute;
}
export class FileAccess extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("FileAccess");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("open");
      this._bindings.method_open = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1247358404
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("open_encrypted");
      this._bindings.method_open_encrypted = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1482131466
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("open_encrypted_with_pass");
      this._bindings.method_open_encrypted_with_pass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        790283377
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("open_compressed");
      this._bindings.method_open_compressed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3686439335
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_open_error");
      this._bindings.method_get_open_error = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        166280745
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_file_as_bytes");
      this._bindings.method_get_file_as_bytes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        659035735
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_file_as_string");
      this._bindings.method_get_file_as_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1703090593
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("resize");
      this._bindings.method_resize = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844576869
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("flush");
      this._bindings.method_flush = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_path");
      this._bindings.method_get_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_path_absolute");
      this._bindings.method_get_path_absolute = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("is_open");
      this._bindings.method_is_open = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("seek");
      this._bindings.method_seek = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("seek_end");
      this._bindings.method_seek_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1995695955
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_length");
      this._bindings.method_get_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("eof_reached");
      this._bindings.method_eof_reached = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_8");
      this._bindings.method_get_8 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_16");
      this._bindings.method_get_16 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_32");
      this._bindings.method_get_32 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_64");
      this._bindings.method_get_64 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_float");
      this._bindings.method_get_float = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_double");
      this._bindings.method_get_double = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_real");
      this._bindings.method_get_real = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_buffer");
      this._bindings.method_get_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4131300905
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_line");
      this._bindings.method_get_line = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_csv_line");
      this._bindings.method_get_csv_line = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2358116058
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_as_text");
      this._bindings.method_get_as_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1162154673
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_md5");
      this._bindings.method_get_md5 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1703090593
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_sha256");
      this._bindings.method_get_sha256 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1703090593
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("is_big_endian");
      this._bindings.method_is_big_endian = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("set_big_endian");
      this._bindings.method_set_big_endian = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_error");
      this._bindings.method_get_error = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3185525595
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_var");
      this._bindings.method_get_var = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        189129690
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("store_8");
      this._bindings.method_store_8 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("store_16");
      this._bindings.method_store_16 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("store_32");
      this._bindings.method_store_32 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("store_64");
      this._bindings.method_store_64 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("store_float");
      this._bindings.method_store_float = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("store_double");
      this._bindings.method_store_double = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("store_real");
      this._bindings.method_store_real = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("store_buffer");
      this._bindings.method_store_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2971499966
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("store_line");
      this._bindings.method_store_line = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("store_csv_line");
      this._bindings.method_store_csv_line = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2173791505
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("store_string");
      this._bindings.method_store_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("store_var");
      this._bindings.method_store_var = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        738511890
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("store_pascal_string");
      this._bindings.method_store_pascal_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_pascal_string");
      this._bindings.method_get_pascal_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2841200299
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("close");
      this._bindings.method_close = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("file_exists");
      this._bindings.method_file_exists = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2323990056
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_modified_time");
      this._bindings.method_get_modified_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1597066294
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_unix_permissions");
      this._bindings.method_get_unix_permissions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        524341837
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("set_unix_permissions");
      this._bindings.method_set_unix_permissions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        846038644
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_hidden_attribute");
      this._bindings.method_get_hidden_attribute = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2323990056
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("set_hidden_attribute");
      this._bindings.method_set_hidden_attribute = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2892558115
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("set_read_only_attribute");
      this._bindings.method_set_read_only_attribute = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2892558115
      );
    }
    {
      let classname = new StringName("FileAccess");
      let methodname = new StringName("get_read_only_attribute");
      this._bindings.method_get_read_only_attribute = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2323990056
      );
    }
  }
  
  open(_path, _flags) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_open,
      this._owner,
			Variant.INT,
      _path, _flags
    );
    
  }
  open_encrypted(_path, _mode_flags, _key) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_open_encrypted,
      this._owner,
			Variant.INT,
      _path, _mode_flags, _key
    );
    
  }
  open_encrypted_with_pass(_path, _mode_flags, _pass) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_open_encrypted_with_pass,
      this._owner,
			Variant.INT,
      _path, _mode_flags, _pass
    );
    
  }
  open_compressed(_path, _mode_flags, _compression_mode) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_open_compressed,
      this._owner,
			Variant.INT,
      _path, _mode_flags, _compression_mode
    );
    
  }
  get_open_error() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_open_error,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_file_as_bytes(_path) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_file_as_bytes,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _path
    );
    
  }
  get_file_as_string(_path) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_file_as_string,
      this._owner,
			Variant.Type.STRING,
    
      _path
    );
    
  }
  resize(_length) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_resize,
      this._owner,
			Variant.INT,
      _length
    );
    
  }
  flush() {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_flush,
      this._owner,
      
    );
    
  }
  get_path() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_path,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_path_absolute() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_path_absolute,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_open() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_is_open,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  seek(_position) {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_seek,
      this._owner,
      _position
    );
    
  }
  seek_end(_position) {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_seek_end,
      this._owner,
      _position
    );
    
  }
  get_position() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_position,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_length() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_length,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  eof_reached() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_eof_reached,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_8() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_8,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_16() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_16,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_32() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_32,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_64() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_64,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_float() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_float,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_double() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_double,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_real() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_real,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_buffer(_length) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_buffer,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _length
    );
    
  }
  get_line() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_line,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_csv_line(_delim) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_csv_line,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _delim
    );
    
  }
  get_as_text(_skip_cr) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_as_text,
      this._owner,
			Variant.Type.STRING,
    
      _skip_cr
    );
    
  }
  get_md5(_path) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_md5,
      this._owner,
			Variant.Type.STRING,
    
      _path
    );
    
  }
  get_sha256(_path) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_sha256,
      this._owner,
			Variant.Type.STRING,
    
      _path
    );
    
  }
  is_big_endian() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_is_big_endian,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_big_endian(_big_endian) {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_set_big_endian,
      this._owner,
      _big_endian
    );
    
  }
  get_error() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_error,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_var(_allow_objects) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_var,
      this._owner,
			Variant.Type.VARIANT,
    
      _allow_objects
    );
    
  }
  store_8(_value) {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_store_8,
      this._owner,
      _value
    );
    
  }
  store_16(_value) {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_store_16,
      this._owner,
      _value
    );
    
  }
  store_32(_value) {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_store_32,
      this._owner,
      _value
    );
    
  }
  store_64(_value) {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_store_64,
      this._owner,
      _value
    );
    
  }
  store_float(_value) {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_store_float,
      this._owner,
      _value
    );
    
  }
  store_double(_value) {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_store_double,
      this._owner,
      _value
    );
    
  }
  store_real(_value) {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_store_real,
      this._owner,
      _value
    );
    
  }
  store_buffer(_buffer) {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_store_buffer,
      this._owner,
      _buffer
    );
    
  }
  store_line(_line) {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_store_line,
      this._owner,
      _line
    );
    
  }
  store_csv_line(_values, _delim) {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_store_csv_line,
      this._owner,
      _values, _delim
    );
    
  }
  store_string(_string) {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_store_string,
      this._owner,
      _string
    );
    
  }
  store_var(_value, _full_objects) {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_store_var,
      this._owner,
      _value, _full_objects
    );
    
  }
  store_pascal_string(_string) {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_store_pascal_string,
      this._owner,
      _string
    );
    
  }
  get_pascal_string() {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_pascal_string,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  close() {
    return _call_native_mb_no_ret(
      FileAccess._bindings.method_close,
      this._owner,
      
    );
    
  }
  file_exists(_path) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_file_exists,
      this._owner,
			Variant.Type.BOOL,
      _path
    );
    
  }
  get_modified_time(_file) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_modified_time,
      this._owner,
			Variant.Type.INT,
      _file
    );
    
  }
  get_unix_permissions(_file) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_unix_permissions,
      this._owner,
			Variant.INT,
      _file
    );
    
  }
  set_unix_permissions(_file, _permissions) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_set_unix_permissions,
      this._owner,
			Variant.INT,
      _file, _permissions
    );
    
  }
  get_hidden_attribute(_file) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_hidden_attribute,
      this._owner,
			Variant.Type.BOOL,
      _file
    );
    
  }
  set_hidden_attribute(_file, _hidden) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_set_hidden_attribute,
      this._owner,
			Variant.INT,
      _file, _hidden
    );
    
  }
  set_read_only_attribute(_file, _ro) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_set_read_only_attribute,
      this._owner,
			Variant.INT,
      _file, _ro
    );
    
  }
  get_read_only_attribute(_file) {
    return _call_native_mb_ret(
      FileAccess._bindings.method_get_read_only_attribute,
      this._owner,
			Variant.Type.BOOL,
      _file
    );
    
  }
  
get big_endian () {
  return this.is_big_endian();
}
set big_endian (new_value) {
  this.set_big_endian(new_value);
}

  static ModeFlags = {
    READ: 1,
    WRITE: 2,
    READ_WRITE: 3,
    WRITE_READ: 7,
  }
  static CompressionMode = {
    COMPRESSION_FASTLZ: 0,
    COMPRESSION_DEFLATE: 1,
    COMPRESSION_ZSTD: 2,
    COMPRESSION_GZIP: 3,
    COMPRESSION_BROTLI: 4,
  }
  static UnixPermissionFlags = {
    UNIX_READ_OWNER: 256,
    UNIX_WRITE_OWNER: 128,
    UNIX_EXECUTE_OWNER: 64,
    UNIX_READ_GROUP: 32,
    UNIX_WRITE_GROUP: 16,
    UNIX_EXECUTE_GROUP: 8,
    UNIX_READ_OTHER: 4,
    UNIX_WRITE_OTHER: 2,
    UNIX_EXECUTE_OTHER: 1,
    UNIX_SET_USER_ID: 2048,
    UNIX_SET_GROUP_ID: 1024,
    UNIX_RESTRICTED_DELETE: 512,
  }

  static {
    this._init_bindings();
  }
}