import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { SkeletonModifier3D } from '@js_godot/classes/skeleton_modifier3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_root_bone;
  method_get_root_bone;
  method_set_tip_bone;
  method_get_tip_bone;
  method_set_target_transform;
  method_get_target_transform;
  method_set_target_node;
  method_get_target_node;
  method_set_override_tip_basis;
  method_is_override_tip_basis;
  method_set_use_magnet;
  method_is_using_magnet;
  method_set_magnet_position;
  method_get_magnet_position;
  method_get_parent_skeleton;
  method_is_running;
  method_set_min_distance;
  method_get_min_distance;
  method_set_max_iterations;
  method_get_max_iterations;
  method_start;
  method_stop;
  method_set_interpolation;
  method_get_interpolation;
}
export class SkeletonIK3D extends SkeletonModifier3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonIK3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_root_bone() {
    if (!this.#_bindings.method_set_root_bone) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_root_bone");
      this.#_bindings.method_set_root_bone = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_root_bone() {
    if (!this.#_bindings.method_get_root_bone) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_root_bone");
      this.#_bindings.method_get_root_bone = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_set_tip_bone() {
    if (!this.#_bindings.method_set_tip_bone) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_tip_bone");
      this.#_bindings.method_set_tip_bone = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_tip_bone() {
    if (!this.#_bindings.method_get_tip_bone) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_tip_bone");
      this.#_bindings.method_get_tip_bone = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_set_target_transform() {
    if (!this.#_bindings.method_set_target_transform) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_target_transform");
      this.#_bindings.method_set_target_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2952846383
      );
    }
  }
  static init_method_get_target_transform() {
    if (!this.#_bindings.method_get_target_transform) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_target_transform");
      this.#_bindings.method_get_target_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3229777777
      );
    }
  }
  static init_method_set_target_node() {
    if (!this.#_bindings.method_set_target_node) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_target_node");
      this.#_bindings.method_set_target_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_target_node() {
    if (!this.#_bindings.method_get_target_node) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_target_node");
      this.#_bindings.method_get_target_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        277076166
      );
    }
  }
  static init_method_set_override_tip_basis() {
    if (!this.#_bindings.method_set_override_tip_basis) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_override_tip_basis");
      this.#_bindings.method_set_override_tip_basis = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_override_tip_basis() {
    if (!this.#_bindings.method_is_override_tip_basis) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("is_override_tip_basis");
      this.#_bindings.method_is_override_tip_basis = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_use_magnet() {
    if (!this.#_bindings.method_set_use_magnet) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_use_magnet");
      this.#_bindings.method_set_use_magnet = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_magnet() {
    if (!this.#_bindings.method_is_using_magnet) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("is_using_magnet");
      this.#_bindings.method_is_using_magnet = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_magnet_position() {
    if (!this.#_bindings.method_set_magnet_position) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_magnet_position");
      this.#_bindings.method_set_magnet_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_magnet_position() {
    if (!this.#_bindings.method_get_magnet_position) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_magnet_position");
      this.#_bindings.method_get_magnet_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_get_parent_skeleton() {
    if (!this.#_bindings.method_get_parent_skeleton) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_parent_skeleton");
      this.#_bindings.method_get_parent_skeleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1488626673
      );
    }
  }
  static init_method_is_running() {
    if (!this.#_bindings.method_is_running) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("is_running");
      this.#_bindings.method_is_running = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_min_distance() {
    if (!this.#_bindings.method_set_min_distance) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_min_distance");
      this.#_bindings.method_set_min_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_min_distance() {
    if (!this.#_bindings.method_get_min_distance) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_min_distance");
      this.#_bindings.method_get_min_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_max_iterations() {
    if (!this.#_bindings.method_set_max_iterations) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_max_iterations");
      this.#_bindings.method_set_max_iterations = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_max_iterations() {
    if (!this.#_bindings.method_get_max_iterations) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_max_iterations");
      this.#_bindings.method_get_max_iterations = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_start() {
    if (!this.#_bindings.method_start) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("start");
      this.#_bindings.method_start = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        107499316
      );
    }
  }
  static init_method_stop() {
    if (!this.#_bindings.method_stop) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("stop");
      this.#_bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_interpolation() {
    if (!this.#_bindings.method_set_interpolation) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_interpolation");
      this.#_bindings.method_set_interpolation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_interpolation() {
    if (!this.#_bindings.method_get_interpolation) {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_interpolation");
      this.#_bindings.method_get_interpolation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_root_bone(_root_bone) {
    SkeletonIK3D.init_method_set_root_bone();
    return _call_native_mb_no_ret(
      SkeletonIK3D.#_bindings.method_set_root_bone,
      this._owner,
      _root_bone
    );
    
  }
  get_root_bone() {
    SkeletonIK3D.init_method_get_root_bone();
    return _call_native_mb_ret(
      SkeletonIK3D.#_bindings.method_get_root_bone,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_tip_bone(_tip_bone) {
    SkeletonIK3D.init_method_set_tip_bone();
    return _call_native_mb_no_ret(
      SkeletonIK3D.#_bindings.method_set_tip_bone,
      this._owner,
      _tip_bone
    );
    
  }
  get_tip_bone() {
    SkeletonIK3D.init_method_get_tip_bone();
    return _call_native_mb_ret(
      SkeletonIK3D.#_bindings.method_get_tip_bone,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_target_transform(_target) {
    SkeletonIK3D.init_method_set_target_transform();
    return _call_native_mb_no_ret(
      SkeletonIK3D.#_bindings.method_set_target_transform,
      this._owner,
      _target
    );
    
  }
  get_target_transform() {
    SkeletonIK3D.init_method_get_target_transform();
    return _call_native_mb_ret(
      SkeletonIK3D.#_bindings.method_get_target_transform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  set_target_node(_node) {
    SkeletonIK3D.init_method_set_target_node();
    return _call_native_mb_no_ret(
      SkeletonIK3D.#_bindings.method_set_target_node,
      this._owner,
      _node
    );
    
  }
  get_target_node() {
    SkeletonIK3D.init_method_get_target_node();
    return _call_native_mb_ret(
      SkeletonIK3D.#_bindings.method_get_target_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_override_tip_basis(_override) {
    SkeletonIK3D.init_method_set_override_tip_basis();
    return _call_native_mb_no_ret(
      SkeletonIK3D.#_bindings.method_set_override_tip_basis,
      this._owner,
      _override
    );
    
  }
  is_override_tip_basis() {
    SkeletonIK3D.init_method_is_override_tip_basis();
    return _call_native_mb_ret(
      SkeletonIK3D.#_bindings.method_is_override_tip_basis,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_use_magnet(_use) {
    SkeletonIK3D.init_method_set_use_magnet();
    return _call_native_mb_no_ret(
      SkeletonIK3D.#_bindings.method_set_use_magnet,
      this._owner,
      _use
    );
    
  }
  is_using_magnet() {
    SkeletonIK3D.init_method_is_using_magnet();
    return _call_native_mb_ret(
      SkeletonIK3D.#_bindings.method_is_using_magnet,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_magnet_position(_local_position) {
    SkeletonIK3D.init_method_set_magnet_position();
    return _call_native_mb_no_ret(
      SkeletonIK3D.#_bindings.method_set_magnet_position,
      this._owner,
      _local_position
    );
    
  }
  get_magnet_position() {
    SkeletonIK3D.init_method_get_magnet_position();
    return _call_native_mb_ret(
      SkeletonIK3D.#_bindings.method_get_magnet_position,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_parent_skeleton() {
    SkeletonIK3D.init_method_get_parent_skeleton();
    return _call_native_mb_ret(
      SkeletonIK3D.#_bindings.method_get_parent_skeleton,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  is_running() {
    SkeletonIK3D.init_method_is_running();
    return _call_native_mb_ret(
      SkeletonIK3D.#_bindings.method_is_running,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_min_distance(_min_distance) {
    SkeletonIK3D.init_method_set_min_distance();
    return _call_native_mb_no_ret(
      SkeletonIK3D.#_bindings.method_set_min_distance,
      this._owner,
      _min_distance
    );
    
  }
  get_min_distance() {
    SkeletonIK3D.init_method_get_min_distance();
    return _call_native_mb_ret(
      SkeletonIK3D.#_bindings.method_get_min_distance,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_max_iterations(_iterations) {
    SkeletonIK3D.init_method_set_max_iterations();
    return _call_native_mb_no_ret(
      SkeletonIK3D.#_bindings.method_set_max_iterations,
      this._owner,
      _iterations
    );
    
  }
  get_max_iterations() {
    SkeletonIK3D.init_method_get_max_iterations();
    return _call_native_mb_ret(
      SkeletonIK3D.#_bindings.method_get_max_iterations,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  start(_one_time) {
    SkeletonIK3D.init_method_start();
    return _call_native_mb_no_ret(
      SkeletonIK3D.#_bindings.method_start,
      this._owner,
      _one_time
    );
    
  }
  stop() {
    SkeletonIK3D.init_method_stop();
    return _call_native_mb_no_ret(
      SkeletonIK3D.#_bindings.method_stop,
      this._owner,
      
    );
    
  }
  set_interpolation(_interpolation) {
    SkeletonIK3D.init_method_set_interpolation();
    return _call_native_mb_no_ret(
      SkeletonIK3D.#_bindings.method_set_interpolation,
      this._owner,
      _interpolation
    );
    
  }
  get_interpolation() {
    SkeletonIK3D.init_method_get_interpolation();
    return _call_native_mb_ret(
      SkeletonIK3D.#_bindings.method_get_interpolation,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get root_bone () {
  return this.get_root_bone();
}
set root_bone (new_value) {
  this.set_root_bone(new_value);
}
get tip_bone () {
  return this.get_tip_bone();
}
set tip_bone (new_value) {
  this.set_tip_bone(new_value);
}
get target () {
  return this.get_target_transform();
}
set target (new_value) {
  this.set_target_transform(new_value);
}
get override_tip_basis () {
  return this.is_override_tip_basis();
}
set override_tip_basis (new_value) {
  this.set_override_tip_basis(new_value);
}
get use_magnet () {
  return this.is_using_magnet();
}
set use_magnet (new_value) {
  this.set_use_magnet(new_value);
}
get magnet () {
  return this.get_magnet_position();
}
set magnet (new_value) {
  this.set_magnet_position(new_value);
}
get target_node () {
  return this.get_target_node();
}
set target_node (new_value) {
  this.set_target_node(new_value);
}
get min_distance () {
  return this.get_min_distance();
}
set min_distance (new_value) {
  this.set_min_distance(new_value);
}
get max_iterations () {
  return this.get_max_iterations();
}
set max_iterations (new_value) {
  this.set_max_iterations(new_value);
}
get interpolation () {
  return this.get_interpolation();
}
set interpolation (new_value) {
  this.set_interpolation(new_value);
}

}