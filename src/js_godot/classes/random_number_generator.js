import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
import { PackedFloat32Array } from 'src/js_godot/variant/packed_float32_array'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RandomNumberGenerator");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("set_seed");
      this._bindings.method_set_seed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("get_seed");
      this._bindings.method_get_seed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("set_state");
      this._bindings.method_set_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("get_state");
      this._bindings.method_get_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("randi");
      this._bindings.method_randi = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("randf");
      this._bindings.method_randf = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        191475506
      );
    }
    {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("randfn");
      this._bindings.method_randfn = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        837325100
      );
    }
    {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("randf_range");
      this._bindings.method_randf_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4269894367
      );
    }
    {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("randi_range");
      this._bindings.method_randi_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        50157827
      );
    }
    {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("rand_weighted");
      this._bindings.method_rand_weighted = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4189642986
      );
    }
    {
      let classname = new StringName("RandomNumberGenerator");
      let methodname = new StringName("randomize");
      this._bindings.method_randomize = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
  }
  set_seed(_seed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_seed,
      this._owner,
      _seed
    );
  }
  get_seed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_seed,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_state(_state) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_state,
      this._owner,
      _state
    );
  }
  get_state() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_state,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  randi() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_randi,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  randf() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_randf,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  randfn(_mean, _deviation) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_randfn,
      this._owner,
			Variant.Type.FLOAT,
      _mean, _deviation
    );
  }
  randf_range(_from, _to) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_randf_range,
      this._owner,
			Variant.Type.FLOAT,
      _from, _to
    );
  }
  randi_range(_from, _to) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_randi_range,
      this._owner,
			Variant.Type.INT,
      _from, _to
    );
  }
  rand_weighted(_weights) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_rand_weighted,
      this._owner,
			Variant.Type.INT,
      _weights
    );
  }
  randomize() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_randomize,
      this._owner,
      
    );
  }
}