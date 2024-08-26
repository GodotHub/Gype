import * as internal from '__internal__';
import { Node3D } from 'src/js_godot/classesnode3d'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { RID } from 'src/js_godot/variant/rid'
import { Quaternion } from 'src/js_godot/variant/quaternion'
class _MethodBindings {
    method_add_bone;
    method_find_bone;
    method_get_bone_name;
    method_set_bone_name;
    method_get_concatenated_bone_names;
    method_get_bone_parent;
    method_set_bone_parent;
    method_get_bone_count;
    method_get_version;
    method_unparent_bone_and_rest;
    method_get_bone_children;
    method_get_parentless_bones;
    method_get_bone_rest;
    method_set_bone_rest;
    method_get_bone_global_rest;
    method_create_skin_from_rest_transforms;
    method_register_skin;
    method_localize_rests;
    method_clear_bones;
    method_get_bone_pose;
    method_set_bone_pose;
    method_set_bone_pose_position;
    method_set_bone_pose_rotation;
    method_set_bone_pose_scale;
    method_get_bone_pose_position;
    method_get_bone_pose_rotation;
    method_get_bone_pose_scale;
    method_reset_bone_pose;
    method_reset_bone_poses;
    method_is_bone_enabled;
    method_set_bone_enabled;
    method_get_bone_global_pose;
    method_set_bone_global_pose;
    method_force_update_all_bone_transforms;
    method_force_update_bone_child_transform;
    method_set_motion_scale;
    method_get_motion_scale;
    method_set_show_rest_only;
    method_is_show_rest_only;
    method_set_modifier_callback_mode_process;
    method_get_modifier_callback_mode_process;
    method_clear_bones_global_pose_override;
    method_set_bone_global_pose_override;
    method_get_bone_global_pose_override;
    method_get_bone_global_pose_no_override;
    method_set_animate_physical_bones;
    method_get_animate_physical_bones;
    method_physical_bones_stop_simulation;
    method_physical_bones_start_simulation;
    method_physical_bones_add_collision_exception;
    method_physical_bones_remove_collision_exception;
}


export class Skeleton3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Skeleton3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("add_bone");
      this._bindings.method_add_bone = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1597066294
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("find_bone");
      this._bindings.method_find_bone = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1321353865
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_bone_name");
      this._bindings.method_get_bone_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("set_bone_name");
      this._bindings.method_set_bone_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_concatenated_bone_names");
      this._bindings.method_get_concatenated_bone_names = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_bone_parent");
      this._bindings.method_get_bone_parent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("set_bone_parent");
      this._bindings.method_set_bone_parent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_bone_count");
      this._bindings.method_get_bone_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_version");
      this._bindings.method_get_version = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("unparent_bone_and_rest");
      this._bindings.method_unparent_bone_and_rest = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_bone_children");
      this._bindings.method_get_bone_children = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1706082319
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_parentless_bones");
      this._bindings.method_get_parentless_bones = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1930428628
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_bone_rest");
      this._bindings.method_get_bone_rest = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1965739696
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("set_bone_rest");
      this._bindings.method_set_bone_rest = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3616898986
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_bone_global_rest");
      this._bindings.method_get_bone_global_rest = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1965739696
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("create_skin_from_rest_transforms");
      this._bindings.method_create_skin_from_rest_transforms = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1032037385
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("register_skin");
      this._bindings.method_register_skin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3405789568
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("localize_rests");
      this._bindings.method_localize_rests = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("clear_bones");
      this._bindings.method_clear_bones = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_bone_pose");
      this._bindings.method_get_bone_pose = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1965739696
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("set_bone_pose");
      this._bindings.method_set_bone_pose = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3616898986
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("set_bone_pose_position");
      this._bindings.method_set_bone_pose_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1530502735
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("set_bone_pose_rotation");
      this._bindings.method_set_bone_pose_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2823819782
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("set_bone_pose_scale");
      this._bindings.method_set_bone_pose_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1530502735
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_bone_pose_position");
      this._bindings.method_get_bone_pose_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        711720468
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_bone_pose_rotation");
      this._bindings.method_get_bone_pose_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        476865136
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_bone_pose_scale");
      this._bindings.method_get_bone_pose_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        711720468
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("reset_bone_pose");
      this._bindings.method_reset_bone_pose = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("reset_bone_poses");
      this._bindings.method_reset_bone_poses = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("is_bone_enabled");
      this._bindings.method_is_bone_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("set_bone_enabled");
      this._bindings.method_set_bone_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        972357352
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_bone_global_pose");
      this._bindings.method_get_bone_global_pose = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1965739696
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("set_bone_global_pose");
      this._bindings.method_set_bone_global_pose = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3616898986
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("force_update_all_bone_transforms");
      this._bindings.method_force_update_all_bone_transforms = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("force_update_bone_child_transform");
      this._bindings.method_force_update_bone_child_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("set_motion_scale");
      this._bindings.method_set_motion_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_motion_scale");
      this._bindings.method_get_motion_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("set_show_rest_only");
      this._bindings.method_set_show_rest_only = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("is_show_rest_only");
      this._bindings.method_is_show_rest_only = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("set_modifier_callback_mode_process");
      this._bindings.method_set_modifier_callback_mode_process = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3916362634
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_modifier_callback_mode_process");
      this._bindings.method_get_modifier_callback_mode_process = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        997182536
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("clear_bones_global_pose_override");
      this._bindings.method_clear_bones_global_pose_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("set_bone_global_pose_override");
      this._bindings.method_set_bone_global_pose_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3483398371
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_bone_global_pose_override");
      this._bindings.method_get_bone_global_pose_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1965739696
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_bone_global_pose_no_override");
      this._bindings.method_get_bone_global_pose_no_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1965739696
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("set_animate_physical_bones");
      this._bindings.method_set_animate_physical_bones = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("get_animate_physical_bones");
      this._bindings.method_get_animate_physical_bones = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("physical_bones_stop_simulation");
      this._bindings.method_physical_bones_stop_simulation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("physical_bones_start_simulation");
      this._bindings.method_physical_bones_start_simulation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2787316981
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("physical_bones_add_collision_exception");
      this._bindings.method_physical_bones_add_collision_exception = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("Skeleton3D");
      let methodname = new StringName("physical_bones_remove_collision_exception");
      this._bindings.method_physical_bones_remove_collision_exception = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
  }
  add_bone(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_add_bone,
      this._owner,
			Variant.Type.INT,
      _name
    );
  }
  find_bone(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_find_bone,
      this._owner,
			Variant.Type.INT,
      _name
    );
  }
  get_bone_name(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_name,
      this._owner,
			Variant.Type.STRING
    ,
      _bone_idx
    );
  }
  set_bone_name(_bone_idx, _name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_name,
      this._owner,
      _bone_idx, _name
    );
  }
  get_concatenated_bone_names() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_concatenated_bone_names,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
  }
  get_bone_parent(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_parent,
      this._owner,
			Variant.Type.INT,
      _bone_idx
    );
  }
  set_bone_parent(_bone_idx, _parent_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_parent,
      this._owner,
      _bone_idx, _parent_idx
    );
  }
  get_bone_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_version() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_version,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  unparent_bone_and_rest(_bone_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_unparent_bone_and_rest,
      this._owner,
      _bone_idx
    );
  }
  get_bone_children(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_children,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _bone_idx
    );
  }
  get_parentless_bones() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_parentless_bones,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
  }
  get_bone_rest(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_rest,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _bone_idx
    );
  }
  set_bone_rest(_bone_idx, _rest) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_rest,
      this._owner,
      _bone_idx, _rest
    );
  }
  get_bone_global_rest(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_global_rest,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _bone_idx
    );
  }
  create_skin_from_rest_transforms() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_skin_from_rest_transforms,
      this._owner,
			Variant.INT,
      
    );
  }
  register_skin(_skin) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_register_skin,
      this._owner,
			Variant.INT,
      _skin
    );
  }
  localize_rests() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_localize_rests,
      this._owner,
      
    );
  }
  clear_bones() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_bones,
      this._owner,
      
    );
  }
  get_bone_pose(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_pose,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _bone_idx
    );
  }
  set_bone_pose(_bone_idx, _pose) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_pose,
      this._owner,
      _bone_idx, _pose
    );
  }
  set_bone_pose_position(_bone_idx, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_pose_position,
      this._owner,
      _bone_idx, _position
    );
  }
  set_bone_pose_rotation(_bone_idx, _rotation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_pose_rotation,
      this._owner,
      _bone_idx, _rotation
    );
  }
  set_bone_pose_scale(_bone_idx, _scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_pose_scale,
      this._owner,
      _bone_idx, _scale
    );
  }
  get_bone_pose_position(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_pose_position,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _bone_idx
    );
  }
  get_bone_pose_rotation(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_pose_rotation,
      this._owner,
			Variant.Type.QUATERNION
    ,
      _bone_idx
    );
  }
  get_bone_pose_scale(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_pose_scale,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _bone_idx
    );
  }
  reset_bone_pose(_bone_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reset_bone_pose,
      this._owner,
      _bone_idx
    );
  }
  reset_bone_poses() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reset_bone_poses,
      this._owner,
      
    );
  }
  is_bone_enabled(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_bone_enabled,
      this._owner,
			Variant.Type.BOOL,
      _bone_idx
    );
  }
  set_bone_enabled(_bone_idx, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_enabled,
      this._owner,
      _bone_idx, _enabled
    );
  }
  get_bone_global_pose(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_global_pose,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _bone_idx
    );
  }
  set_bone_global_pose(_bone_idx, _pose) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_global_pose,
      this._owner,
      _bone_idx, _pose
    );
  }
  force_update_all_bone_transforms() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_force_update_all_bone_transforms,
      this._owner,
      
    );
  }
  force_update_bone_child_transform(_bone_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_force_update_bone_child_transform,
      this._owner,
      _bone_idx
    );
  }
  set_motion_scale(_motion_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_motion_scale,
      this._owner,
      _motion_scale
    );
  }
  get_motion_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_motion_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_show_rest_only(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_show_rest_only,
      this._owner,
      _enabled
    );
  }
  is_show_rest_only() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_show_rest_only,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_modifier_callback_mode_process(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_modifier_callback_mode_process,
      this._owner,
      _mode
    );
  }
  get_modifier_callback_mode_process() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_modifier_callback_mode_process,
      this._owner,
			Variant.INT,
      
    );
  }
  clear_bones_global_pose_override() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_bones_global_pose_override,
      this._owner,
      
    );
  }
  set_bone_global_pose_override(_bone_idx, _pose, _amount, _persistent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_global_pose_override,
      this._owner,
      _bone_idx, _pose, _amount, _persistent
    );
  }
  get_bone_global_pose_override(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_global_pose_override,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _bone_idx
    );
  }
  get_bone_global_pose_no_override(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_global_pose_no_override,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _bone_idx
    );
  }
  set_animate_physical_bones(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_animate_physical_bones,
      this._owner,
      _enabled
    );
  }
  get_animate_physical_bones() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_animate_physical_bones,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  physical_bones_stop_simulation() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_physical_bones_stop_simulation,
      this._owner,
      
    );
  }
  physical_bones_start_simulation(_bones) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_physical_bones_start_simulation,
      this._owner,
      _bones
    );
  }
  physical_bones_add_collision_exception(_exception) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_physical_bones_add_collision_exception,
      this._owner,
      _exception
    );
  }
  physical_bones_remove_collision_exception(_exception) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_physical_bones_remove_collision_exception,
      this._owner,
      _exception
    );
  }
  static ModifierCallbackModeProcess = {
    MODIFIER_CALLBACK_MODE_PROCESS_PHYSICS: 0,
    MODIFIER_CALLBACK_MODE_PROCESS_IDLE: 1,
  }
}