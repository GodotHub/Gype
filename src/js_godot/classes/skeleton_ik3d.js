import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { StringName } from 'src/js_godot/variant/string_name'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { SkeletonModifier3D } from 'src/js_godot/classesskeleton_modifier3d'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonIK3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_root_bone");
      this._bindings.method_set_root_bone = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_root_bone");
      this._bindings.method_get_root_bone = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_tip_bone");
      this._bindings.method_set_tip_bone = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_tip_bone");
      this._bindings.method_get_tip_bone = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_target_transform");
      this._bindings.method_set_target_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2952846383
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_target_transform");
      this._bindings.method_get_target_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3229777777
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_target_node");
      this._bindings.method_set_target_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_target_node");
      this._bindings.method_get_target_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        277076166
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_override_tip_basis");
      this._bindings.method_set_override_tip_basis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("is_override_tip_basis");
      this._bindings.method_is_override_tip_basis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_use_magnet");
      this._bindings.method_set_use_magnet = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("is_using_magnet");
      this._bindings.method_is_using_magnet = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_magnet_position");
      this._bindings.method_set_magnet_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_magnet_position");
      this._bindings.method_get_magnet_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_parent_skeleton");
      this._bindings.method_get_parent_skeleton = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1488626673
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("is_running");
      this._bindings.method_is_running = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_min_distance");
      this._bindings.method_set_min_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_min_distance");
      this._bindings.method_get_min_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_max_iterations");
      this._bindings.method_set_max_iterations = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_max_iterations");
      this._bindings.method_get_max_iterations = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("start");
      this._bindings.method_start = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        107499316
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("stop");
      this._bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("set_interpolation");
      this._bindings.method_set_interpolation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("SkeletonIK3D");
      let methodname = new StringName("get_interpolation");
      this._bindings.method_get_interpolation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_root_bone(_root_bone) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_root_bone,
      this._owner,
      _root_bone
    );
  }
  get_root_bone() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_root_bone,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
  }
  set_tip_bone(_tip_bone) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tip_bone,
      this._owner,
      _tip_bone
    );
  }
  get_tip_bone() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tip_bone,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
  }
  set_target_transform(_target) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_target_transform,
      this._owner,
      _target
    );
  }
  get_target_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_target_transform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      
    );
  }
  set_target_node(_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_target_node,
      this._owner,
      _node
    );
  }
  get_target_node() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_target_node,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
  }
  set_override_tip_basis(_override) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_override_tip_basis,
      this._owner,
      _override
    );
  }
  is_override_tip_basis() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_override_tip_basis,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_use_magnet(_use) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_magnet,
      this._owner,
      _use
    );
  }
  is_using_magnet() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_using_magnet,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_magnet_position(_local_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_magnet_position,
      this._owner,
      _local_position
    );
  }
  get_magnet_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_magnet_position,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  get_parent_skeleton() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_parent_skeleton,
      this._owner,
			Variant.INT,
      
    );
  }
  is_running() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_running,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_min_distance(_min_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_min_distance,
      this._owner,
      _min_distance
    );
  }
  get_min_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_min_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_max_iterations(_iterations) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_iterations,
      this._owner,
      _iterations
    );
  }
  get_max_iterations() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_iterations,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  start(_one_time) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_start,
      this._owner,
      _one_time
    );
  }
  stop() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_stop,
      this._owner,
      
    );
  }
  set_interpolation(_interpolation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_interpolation,
      this._owner,
      _interpolation
    );
  }
  get_interpolation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_interpolation,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
}