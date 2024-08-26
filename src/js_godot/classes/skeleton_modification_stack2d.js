import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
class _MethodBindings {
    method_setup;
    method_execute;
    method_enable_all_modifications;
    method_get_modification;
    method_add_modification;
    method_delete_modification;
    method_set_modification;
    method_set_modification_count;
    method_get_modification_count;
    method_get_is_setup;
    method_set_enabled;
    method_get_enabled;
    method_set_strength;
    method_get_strength;
    method_get_skeleton;
}


export class SkeletonModificationStack2D extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonModificationStack2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("SkeletonModificationStack2D");
      let methodname = new StringName("setup");
      this._bindings.method_setup = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("SkeletonModificationStack2D");
      let methodname = new StringName("execute");
      this._bindings.method_execute = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1005356550
      );
    }
    {
      let classname = new StringName("SkeletonModificationStack2D");
      let methodname = new StringName("enable_all_modifications");
      this._bindings.method_enable_all_modifications = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SkeletonModificationStack2D");
      let methodname = new StringName("get_modification");
      this._bindings.method_get_modification = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2570274329
      );
    }
    {
      let classname = new StringName("SkeletonModificationStack2D");
      let methodname = new StringName("add_modification");
      this._bindings.method_add_modification = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        354162120
      );
    }
    {
      let classname = new StringName("SkeletonModificationStack2D");
      let methodname = new StringName("delete_modification");
      this._bindings.method_delete_modification = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("SkeletonModificationStack2D");
      let methodname = new StringName("set_modification");
      this._bindings.method_set_modification = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1098262544
      );
    }
    {
      let classname = new StringName("SkeletonModificationStack2D");
      let methodname = new StringName("set_modification_count");
      this._bindings.method_set_modification_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("SkeletonModificationStack2D");
      let methodname = new StringName("get_modification_count");
      this._bindings.method_get_modification_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("SkeletonModificationStack2D");
      let methodname = new StringName("get_is_setup");
      this._bindings.method_get_is_setup = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("SkeletonModificationStack2D");
      let methodname = new StringName("set_enabled");
      this._bindings.method_set_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SkeletonModificationStack2D");
      let methodname = new StringName("get_enabled");
      this._bindings.method_get_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("SkeletonModificationStack2D");
      let methodname = new StringName("set_strength");
      this._bindings.method_set_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("SkeletonModificationStack2D");
      let methodname = new StringName("get_strength");
      this._bindings.method_get_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("SkeletonModificationStack2D");
      let methodname = new StringName("get_skeleton");
      this._bindings.method_get_skeleton = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1697361217
      );
    }
  }
  setup() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_setup,
      this._owner,
      
    );
  }
  execute(_delta, _execution_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_execute,
      this._owner,
      _delta, _execution_mode
    );
  }
  enable_all_modifications(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_enable_all_modifications,
      this._owner,
      _enabled
    );
  }
  get_modification(_mod_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_modification,
      this._owner,
			Variant.INT,
      _mod_idx
    );
  }
  add_modification(_modification) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_modification,
      this._owner,
      _modification
    );
  }
  delete_modification(_mod_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_delete_modification,
      this._owner,
      _mod_idx
    );
  }
  set_modification(_mod_idx, _modification) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_modification,
      this._owner,
      _mod_idx, _modification
    );
  }
  set_modification_count(_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_modification_count,
      this._owner,
      _count
    );
  }
  get_modification_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_modification_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_is_setup() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_is_setup,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enabled,
      this._owner,
      _enabled
    );
  }
  get_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_strength(_strength) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_strength,
      this._owner,
      _strength
    );
  }
  get_strength() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_strength,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  get_skeleton() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_skeleton,
      this._owner,
			Variant.INT,
      
    );
  }
}