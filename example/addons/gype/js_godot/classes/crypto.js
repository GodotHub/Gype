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
@GodotClass
export class Crypto extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Crypto");
    } else {
      super(godot_object);
    }
  }
  static init_method_generate_random_bytes() {
    if (!this._bindings.method_generate_random_bytes) {
      let classname = new StringName("Crypto");
      let methodname = new StringName("generate_random_bytes");
      this._bindings.method_generate_random_bytes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        47165747
      );
    }
  }
  static init_method_generate_rsa() {
    if (!this._bindings.method_generate_rsa) {
      let classname = new StringName("Crypto");
      let methodname = new StringName("generate_rsa");
      this._bindings.method_generate_rsa = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1237515462
      );
    }
  }
  static init_method_generate_self_signed_certificate() {
    if (!this._bindings.method_generate_self_signed_certificate) {
      let classname = new StringName("Crypto");
      let methodname = new StringName("generate_self_signed_certificate");
      this._bindings.method_generate_self_signed_certificate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        492266173
      );
    }
  }
  static init_method_sign() {
    if (!this._bindings.method_sign) {
      let classname = new StringName("Crypto");
      let methodname = new StringName("sign");
      this._bindings.method_sign = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1673662703
      );
    }
  }
  static init_method_verify() {
    if (!this._bindings.method_verify) {
      let classname = new StringName("Crypto");
      let methodname = new StringName("verify");
      this._bindings.method_verify = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2805902225
      );
    }
  }
  static init_method_encrypt() {
    if (!this._bindings.method_encrypt) {
      let classname = new StringName("Crypto");
      let methodname = new StringName("encrypt");
      this._bindings.method_encrypt = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2361793670
      );
    }
  }
  static init_method_decrypt() {
    if (!this._bindings.method_decrypt) {
      let classname = new StringName("Crypto");
      let methodname = new StringName("decrypt");
      this._bindings.method_decrypt = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2361793670
      );
    }
  }
  static init_method_hmac_digest() {
    if (!this._bindings.method_hmac_digest) {
      let classname = new StringName("Crypto");
      let methodname = new StringName("hmac_digest");
      this._bindings.method_hmac_digest = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2368951203
      );
    }
  }
  static init_method_constant_time_compare() {
    if (!this._bindings.method_constant_time_compare) {
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
    Crypto.init_method_generate_random_bytes();
    return _call_native_mb_ret(
      Crypto._bindings.method_generate_random_bytes,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _size
    );
    
  }
  generate_rsa(_size) {
    Crypto.init_method_generate_rsa();
    return _call_native_mb_ret(
      Crypto._bindings.method_generate_rsa,
      this._owner,
			Variant.Type.OBJECT,
      _size
    );
    
  }
  generate_self_signed_certificate(_key, _issuer_name, _not_before, _not_after) {
    Crypto.init_method_generate_self_signed_certificate();
    return _call_native_mb_ret(
      Crypto._bindings.method_generate_self_signed_certificate,
      this._owner,
			Variant.Type.OBJECT,
      _key, _issuer_name, _not_before, _not_after
    );
    
  }
  sign(_hash_type, _hash, _key) {
    Crypto.init_method_sign();
    return _call_native_mb_ret(
      Crypto._bindings.method_sign,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _hash_type, _hash, _key
    );
    
  }
  verify(_hash_type, _hash, _signature, _key) {
    Crypto.init_method_verify();
    return _call_native_mb_ret(
      Crypto._bindings.method_verify,
      this._owner,
			Variant.Type.BOOL,
    
      _hash_type, _hash, _signature, _key
    );
    
  }
  encrypt(_key, _plaintext) {
    Crypto.init_method_encrypt();
    return _call_native_mb_ret(
      Crypto._bindings.method_encrypt,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _key, _plaintext
    );
    
  }
  decrypt(_key, _ciphertext) {
    Crypto.init_method_decrypt();
    return _call_native_mb_ret(
      Crypto._bindings.method_decrypt,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _key, _ciphertext
    );
    
  }
  hmac_digest(_hash_type, _key, _msg) {
    Crypto.init_method_hmac_digest();
    return _call_native_mb_ret(
      Crypto._bindings.method_hmac_digest,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _hash_type, _key, _msg
    );
    
  }
  constant_time_compare(_trusted, _received) {
    Crypto.init_method_constant_time_compare();
    return _call_native_mb_ret(
      Crypto._bindings.method_constant_time_compare,
      this._owner,
			Variant.Type.BOOL,
    
      _trusted, _received
    );
    
  }
  

}