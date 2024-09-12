import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_seed;
  method_get_seed;
  method_set_state;
  method_get_state;
  method_randi;
  method_randf;
  method_randfn;
  method_randf_range;
  method_randi_range;
  method_rand_weighted;
  method_randomize;
}
export class RandomNumberGenerator extends RefCounted{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RandomNumberGenerator");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_seed() {
    if (!this.#_bindings.method_set_seed) {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("set_seed");
      this.#_bindings.method_set_seed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_seed() {
    if (!this.#_bindings.method_get_seed) {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("get_seed");
      this.#_bindings.method_get_seed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_state() {
    if (!this.#_bindings.method_set_state) {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("set_state");
      this.#_bindings.method_set_state = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_state() {
    if (!this.#_bindings.method_get_state) {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("get_state");
      this.#_bindings.method_get_state = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_randi() {
    if (!this.#_bindings.method_randi) {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("randi");
      this.#_bindings.method_randi = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_randf() {
    if (!this.#_bindings.method_randf) {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("randf");
      this.#_bindings.method_randf = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_randfn() {
    if (!this.#_bindings.method_randfn) {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("randfn");
      this.#_bindings.method_randfn = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        837325100
      );
    }
  }
  static init_method_randf_range() {
    if (!this.#_bindings.method_randf_range) {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("randf_range");
      this.#_bindings.method_randf_range = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4269894367
      );
    }
  }
  static init_method_randi_range() {
    if (!this.#_bindings.method_randi_range) {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("randi_range");
      this.#_bindings.method_randi_range = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        50157827
      );
    }
  }
  static init_method_rand_weighted() {
    if (!this.#_bindings.method_rand_weighted) {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("rand_weighted");
      this.#_bindings.method_rand_weighted = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4189642986
      );
    }
  }
  static init_method_randomize() {
    if (!this.#_bindings.method_randomize) {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("randomize");
      this.#_bindings.method_randomize = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  set_seed(_seed) {
    RandomNumberGenerator.init_method_set_seed();
    return _call_native_mb_no_ret(
      RandomNumberGenerator.#_bindings.method_set_seed,
      this._owner,
      _seed
    );
    
  }
  get_seed() {
    RandomNumberGenerator.init_method_get_seed();
    return _call_native_mb_ret(
      RandomNumberGenerator.#_bindings.method_get_seed,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_state(_state) {
    RandomNumberGenerator.init_method_set_state();
    return _call_native_mb_no_ret(
      RandomNumberGenerator.#_bindings.method_set_state,
      this._owner,
      _state
    );
    
  }
  get_state() {
    RandomNumberGenerator.init_method_get_state();
    return _call_native_mb_ret(
      RandomNumberGenerator.#_bindings.method_get_state,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  randi() {
    RandomNumberGenerator.init_method_randi();
    return _call_native_mb_ret(
      RandomNumberGenerator.#_bindings.method_randi,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  randf() {
    RandomNumberGenerator.init_method_randf();
    return _call_native_mb_ret(
      RandomNumberGenerator.#_bindings.method_randf,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  randfn(_mean, _deviation) {
    RandomNumberGenerator.init_method_randfn();
    return _call_native_mb_ret(
      RandomNumberGenerator.#_bindings.method_randfn,
      this._owner,
			Variant.Type.FLOAT,
    
      _mean, _deviation
    );
    
  }
  randf_range(_from, _to) {
    RandomNumberGenerator.init_method_randf_range();
    return _call_native_mb_ret(
      RandomNumberGenerator.#_bindings.method_randf_range,
      this._owner,
			Variant.Type.FLOAT,
    
      _from, _to
    );
    
  }
  randi_range(_from, _to) {
    RandomNumberGenerator.init_method_randi_range();
    return _call_native_mb_ret(
      RandomNumberGenerator.#_bindings.method_randi_range,
      this._owner,
			Variant.Type.INT,
    
      _from, _to
    );
    
  }
  rand_weighted(_weights) {
    RandomNumberGenerator.init_method_rand_weighted();
    return _call_native_mb_ret(
      RandomNumberGenerator.#_bindings.method_rand_weighted,
      this._owner,
			Variant.Type.INT,
    
      _weights
    );
    
  }
  randomize() {
    RandomNumberGenerator.init_method_randomize();
    return _call_native_mb_no_ret(
      RandomNumberGenerator.#_bindings.method_randomize,
      this._owner,
      
    );
    
  }
  
get seed () {
  return this.get_seed();
}
set seed (new_value) {
  this.set_seed(new_value);
}
get state () {
  return this.get_state();
}
set state (new_value) {
  this.set_state(new_value);
}

}