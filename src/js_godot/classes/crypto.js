import * as internal from '__internal__';
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_generate_random_bytes;
    method_generate_rsa;
    method_generate_self_signed_certificate;
    method_sign;
    method_verify;
    method_encrypt;
    method_decrypt;
    method_hmac_digest;
    method_constant_time_compare;
}


export class Crypto extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Crypto");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Crypto");
      let methodname = new StringName("generate_random_bytes");
      this._bindings.method_generate_random_bytes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        47165747
      );
    }
    {
      let classname = new StringName("Crypto");
      let methodname = new StringName("generate_rsa");
      this._bindings.method_generate_rsa = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1237515462
      );
    }
    {
      let classname = new StringName("Crypto");
      let methodname = new StringName("generate_self_signed_certificate");
      this._bindings.method_generate_self_signed_certificate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        492266173
      );
    }
    {
      let classname = new StringName("Crypto");
      let methodname = new StringName("sign");
      this._bindings.method_sign = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1673662703
      );
    }
    {
      let classname = new StringName("Crypto");
      let methodname = new StringName("verify");
      this._bindings.method_verify = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2805902225
      );
    }
    {
      let classname = new StringName("Crypto");
      let methodname = new StringName("encrypt");
      this._bindings.method_encrypt = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2361793670
      );
    }
    {
      let classname = new StringName("Crypto");
      let methodname = new StringName("decrypt");
      this._bindings.method_decrypt = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2361793670
      );
    }
    {
      let classname = new StringName("Crypto");
      let methodname = new StringName("hmac_digest");
      this._bindings.method_hmac_digest = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2368951203
      );
    }
    {
      let classname = new StringName("Crypto");
      let methodname = new StringName("constant_time_compare");
      this._bindings.method_constant_time_compare = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1024142237
      );
    }
  }
  generate_random_bytes(_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_generate_random_bytes,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY
    ,
      _size
    );
  }
  generate_rsa(_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_generate_rsa,
      this._owner,
			Variant.INT,
      _size
    );
  }
  generate_self_signed_certificate(_key, _issuer_name, _not_before, _not_after) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_generate_self_signed_certificate,
      this._owner,
			Variant.INT,
      _key, _issuer_name, _not_before, _not_after
    );
  }
  sign(_hash_type, _hash, _key) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_sign,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY
    ,
      _hash_type, _hash, _key
    );
  }
  verify(_hash_type, _hash, _signature, _key) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_verify,
      this._owner,
			Variant.Type.BOOL,
      _hash_type, _hash, _signature, _key
    );
  }
  encrypt(_key, _plaintext) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_encrypt,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY
    ,
      _key, _plaintext
    );
  }
  decrypt(_key, _ciphertext) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_decrypt,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY
    ,
      _key, _ciphertext
    );
  }
  hmac_digest(_hash_type, _key, _msg) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_hmac_digest,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY
    ,
      _hash_type, _key, _msg
    );
  }
  constant_time_compare(_trusted, _received) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_constant_time_compare,
      this._owner,
			Variant.Type.BOOL,
      _trusted, _received
    );
  }
}