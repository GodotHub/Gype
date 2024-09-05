import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { Variant } from '@js_godot/variant/variant'
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_put_data;
  method_put_partial_data;
  method_get_data;
  method_get_partial_data;
  method_get_available_bytes;
  method_set_big_endian;
  method_is_big_endian_enabled;
  method_put_8;
  method_put_u8;
  method_put_16;
  method_put_u16;
  method_put_32;
  method_put_u32;
  method_put_64;
  method_put_u64;
  method_put_float;
  method_put_double;
  method_put_string;
  method_put_utf8_string;
  method_put_var;
  method_get_8;
  method_get_u8;
  method_get_16;
  method_get_u16;
  method_get_32;
  method_get_u32;
  method_get_64;
  method_get_u64;
  method_get_float;
  method_get_double;
  method_get_string;
  method_get_utf8_string;
  method_get_var;
}
export class StreamPeer extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("StreamPeer");
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
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("put_data");
      this._bindings.method_put_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        680677267
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("put_partial_data");
      this._bindings.method_put_partial_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2934048347
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("get_data");
      this._bindings.method_get_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1171824711
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("get_partial_data");
      this._bindings.method_get_partial_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1171824711
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("get_available_bytes");
      this._bindings.method_get_available_bytes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("set_big_endian");
      this._bindings.method_set_big_endian = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("is_big_endian_enabled");
      this._bindings.method_is_big_endian_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("put_8");
      this._bindings.method_put_8 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("put_u8");
      this._bindings.method_put_u8 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("put_16");
      this._bindings.method_put_16 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("put_u16");
      this._bindings.method_put_u16 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("put_32");
      this._bindings.method_put_32 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("put_u32");
      this._bindings.method_put_u32 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("put_64");
      this._bindings.method_put_64 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("put_u64");
      this._bindings.method_put_u64 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("put_float");
      this._bindings.method_put_float = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("put_double");
      this._bindings.method_put_double = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("put_string");
      this._bindings.method_put_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("put_utf8_string");
      this._bindings.method_put_utf8_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("put_var");
      this._bindings.method_put_var = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        738511890
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("get_8");
      this._bindings.method_get_8 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("get_u8");
      this._bindings.method_get_u8 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("get_16");
      this._bindings.method_get_16 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("get_u16");
      this._bindings.method_get_u16 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("get_32");
      this._bindings.method_get_32 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("get_u32");
      this._bindings.method_get_u32 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("get_64");
      this._bindings.method_get_64 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("get_u64");
      this._bindings.method_get_u64 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("get_float");
      this._bindings.method_get_float = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        191475506
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("get_double");
      this._bindings.method_get_double = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        191475506
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("get_string");
      this._bindings.method_get_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2309358862
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("get_utf8_string");
      this._bindings.method_get_utf8_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2309358862
      );
    }
    {
      let classname = new StringName("StreamPeer");
      let methodname = new StringName("get_var");
      this._bindings.method_get_var = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3442865206
      );
    }
  }
  
  put_data(_data) {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_put_data,
      this._owner,
			Variant.INT,
      _data
    );
    
  }
  put_partial_data(_data) {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_put_partial_data,
      this._owner,
			Variant.Type.ARRAY,
    
      _data
    );
    
  }
  get_data(_bytes) {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_get_data,
      this._owner,
			Variant.Type.ARRAY,
    
      _bytes
    );
    
  }
  get_partial_data(_bytes) {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_get_partial_data,
      this._owner,
			Variant.Type.ARRAY,
    
      _bytes
    );
    
  }
  get_available_bytes() {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_get_available_bytes,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_big_endian(_enable) {
    return _call_native_mb_no_ret(
      StreamPeer._bindings.method_set_big_endian,
      this._owner,
      _enable
    );
    
  }
  is_big_endian_enabled() {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_is_big_endian_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  put_8(_value) {
    return _call_native_mb_no_ret(
      StreamPeer._bindings.method_put_8,
      this._owner,
      _value
    );
    
  }
  put_u8(_value) {
    return _call_native_mb_no_ret(
      StreamPeer._bindings.method_put_u8,
      this._owner,
      _value
    );
    
  }
  put_16(_value) {
    return _call_native_mb_no_ret(
      StreamPeer._bindings.method_put_16,
      this._owner,
      _value
    );
    
  }
  put_u16(_value) {
    return _call_native_mb_no_ret(
      StreamPeer._bindings.method_put_u16,
      this._owner,
      _value
    );
    
  }
  put_32(_value) {
    return _call_native_mb_no_ret(
      StreamPeer._bindings.method_put_32,
      this._owner,
      _value
    );
    
  }
  put_u32(_value) {
    return _call_native_mb_no_ret(
      StreamPeer._bindings.method_put_u32,
      this._owner,
      _value
    );
    
  }
  put_64(_value) {
    return _call_native_mb_no_ret(
      StreamPeer._bindings.method_put_64,
      this._owner,
      _value
    );
    
  }
  put_u64(_value) {
    return _call_native_mb_no_ret(
      StreamPeer._bindings.method_put_u64,
      this._owner,
      _value
    );
    
  }
  put_float(_value) {
    return _call_native_mb_no_ret(
      StreamPeer._bindings.method_put_float,
      this._owner,
      _value
    );
    
  }
  put_double(_value) {
    return _call_native_mb_no_ret(
      StreamPeer._bindings.method_put_double,
      this._owner,
      _value
    );
    
  }
  put_string(_value) {
    return _call_native_mb_no_ret(
      StreamPeer._bindings.method_put_string,
      this._owner,
      _value
    );
    
  }
  put_utf8_string(_value) {
    return _call_native_mb_no_ret(
      StreamPeer._bindings.method_put_utf8_string,
      this._owner,
      _value
    );
    
  }
  put_var(_value, _full_objects) {
    return _call_native_mb_no_ret(
      StreamPeer._bindings.method_put_var,
      this._owner,
      _value, _full_objects
    );
    
  }
  get_8() {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_get_8,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_u8() {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_get_u8,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_16() {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_get_16,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_u16() {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_get_u16,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_32() {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_get_32,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_u32() {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_get_u32,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_64() {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_get_64,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_u64() {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_get_u64,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_float() {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_get_float,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_double() {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_get_double,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_string(_bytes) {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_get_string,
      this._owner,
			Variant.Type.STRING,
    
      _bytes
    );
    
  }
  get_utf8_string(_bytes) {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_get_utf8_string,
      this._owner,
			Variant.Type.STRING,
    
      _bytes
    );
    
  }
  get_var(_allow_objects) {
    return _call_native_mb_ret(
      StreamPeer._bindings.method_get_var,
      this._owner,
			Variant.Type.VARIANT,
    
      _allow_objects
    );
    
  }
  
get big_endian () {
  return this.is_big_endian_enabled();
}
set big_endian (new_value) {
  this.set_big_endian(new_value);
}


  static {
    this._init_bindings();
  }
}