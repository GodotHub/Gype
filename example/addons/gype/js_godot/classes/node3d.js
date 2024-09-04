import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Transform3D } from '@js_godot/variant/transform3d'
import { Vector3 } from '@js_godot/variant/vector3'
import { StringName } from '@js_godot/variant/string_name'
import { Quaternion } from '@js_godot/variant/quaternion'
import { Basis } from '@js_godot/variant/basis'
import { Node } from '@js_godot/classes/node'
import { NodePath } from '@js_godot/variant/node_path'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_transform;
  method_get_transform;
  method_set_position;
  method_get_position;
  method_set_rotation;
  method_get_rotation;
  method_set_rotation_degrees;
  method_get_rotation_degrees;
  method_set_rotation_order;
  method_get_rotation_order;
  method_set_rotation_edit_mode;
  method_get_rotation_edit_mode;
  method_set_scale;
  method_get_scale;
  method_set_quaternion;
  method_get_quaternion;
  method_set_basis;
  method_get_basis;
  method_set_global_transform;
  method_get_global_transform;
  method_set_global_position;
  method_get_global_position;
  method_set_global_basis;
  method_get_global_basis;
  method_set_global_rotation;
  method_get_global_rotation;
  method_set_global_rotation_degrees;
  method_get_global_rotation_degrees;
  method_get_parent_node_3d;
  method_set_ignore_transform_notification;
  method_set_as_top_level;
  method_is_set_as_top_level;
  method_set_disable_scale;
  method_is_scale_disabled;
  method_get_world_3d;
  method_force_update_transform;
  method_set_visibility_parent;
  method_get_visibility_parent;
  method_update_gizmos;
  method_add_gizmo;
  method_get_gizmos;
  method_clear_gizmos;
  method_set_subgizmo_selection;
  method_clear_subgizmo_selection;
  method_set_visible;
  method_is_visible;
  method_is_visible_in_tree;
  method_show;
  method_hide;
  method_set_notify_local_transform;
  method_is_local_transform_notification_enabled;
  method_set_notify_transform;
  method_is_transform_notification_enabled;
  method_rotate;
  method_global_rotate;
  method_global_scale;
  method_global_translate;
  method_rotate_object_local;
  method_scale_object_local;
  method_translate_object_local;
  method_rotate_x;
  method_rotate_y;
  method_rotate_z;
  method_translate;
  method_orthonormalize;
  method_set_identity;
  method_look_at;
  method_look_at_from_position;
  method_to_local;
  method_to_global;
}
export class Node3D extends Node{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Node3D");
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
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_transform");
      this._bindings.method_set_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2952846383
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_transform");
      this._bindings.method_get_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3229777777
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_position");
      this._bindings.method_set_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_rotation");
      this._bindings.method_set_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_rotation");
      this._bindings.method_get_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_rotation_degrees");
      this._bindings.method_set_rotation_degrees = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_rotation_degrees");
      this._bindings.method_get_rotation_degrees = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_rotation_order");
      this._bindings.method_set_rotation_order = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1820889989
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_rotation_order");
      this._bindings.method_get_rotation_order = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        916939469
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_rotation_edit_mode");
      this._bindings.method_set_rotation_edit_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        141483330
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_rotation_edit_mode");
      this._bindings.method_get_rotation_edit_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1572188370
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_scale");
      this._bindings.method_set_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_scale");
      this._bindings.method_get_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_quaternion");
      this._bindings.method_set_quaternion = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1727505552
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_quaternion");
      this._bindings.method_get_quaternion = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1222331677
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_basis");
      this._bindings.method_set_basis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1055510324
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_basis");
      this._bindings.method_get_basis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2716978435
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_global_transform");
      this._bindings.method_set_global_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2952846383
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_global_transform");
      this._bindings.method_get_global_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3229777777
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_global_position");
      this._bindings.method_set_global_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_global_position");
      this._bindings.method_get_global_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_global_basis");
      this._bindings.method_set_global_basis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1055510324
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_global_basis");
      this._bindings.method_get_global_basis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2716978435
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_global_rotation");
      this._bindings.method_set_global_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_global_rotation");
      this._bindings.method_get_global_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_global_rotation_degrees");
      this._bindings.method_set_global_rotation_degrees = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_global_rotation_degrees");
      this._bindings.method_get_global_rotation_degrees = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_parent_node_3d");
      this._bindings.method_get_parent_node_3d = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        151077316
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_ignore_transform_notification");
      this._bindings.method_set_ignore_transform_notification = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_as_top_level");
      this._bindings.method_set_as_top_level = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("is_set_as_top_level");
      this._bindings.method_is_set_as_top_level = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_disable_scale");
      this._bindings.method_set_disable_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("is_scale_disabled");
      this._bindings.method_is_scale_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_world_3d");
      this._bindings.method_get_world_3d = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        317588385
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("force_update_transform");
      this._bindings.method_force_update_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_visibility_parent");
      this._bindings.method_set_visibility_parent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_visibility_parent");
      this._bindings.method_get_visibility_parent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("update_gizmos");
      this._bindings.method_update_gizmos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("add_gizmo");
      this._bindings.method_add_gizmo = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1544533845
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("get_gizmos");
      this._bindings.method_get_gizmos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("clear_gizmos");
      this._bindings.method_clear_gizmos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_subgizmo_selection");
      this._bindings.method_set_subgizmo_selection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3317607635
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("clear_subgizmo_selection");
      this._bindings.method_clear_subgizmo_selection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_visible");
      this._bindings.method_set_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("is_visible");
      this._bindings.method_is_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("is_visible_in_tree");
      this._bindings.method_is_visible_in_tree = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("show");
      this._bindings.method_show = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("hide");
      this._bindings.method_hide = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_notify_local_transform");
      this._bindings.method_set_notify_local_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("is_local_transform_notification_enabled");
      this._bindings.method_is_local_transform_notification_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_notify_transform");
      this._bindings.method_set_notify_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("is_transform_notification_enabled");
      this._bindings.method_is_transform_notification_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("rotate");
      this._bindings.method_rotate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3436291937
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("global_rotate");
      this._bindings.method_global_rotate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3436291937
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("global_scale");
      this._bindings.method_global_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("global_translate");
      this._bindings.method_global_translate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("rotate_object_local");
      this._bindings.method_rotate_object_local = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3436291937
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("scale_object_local");
      this._bindings.method_scale_object_local = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("translate_object_local");
      this._bindings.method_translate_object_local = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("rotate_x");
      this._bindings.method_rotate_x = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("rotate_y");
      this._bindings.method_rotate_y = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("rotate_z");
      this._bindings.method_rotate_z = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("translate");
      this._bindings.method_translate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("orthonormalize");
      this._bindings.method_orthonormalize = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("set_identity");
      this._bindings.method_set_identity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("look_at");
      this._bindings.method_look_at = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2882425029
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("look_at_from_position");
      this._bindings.method_look_at_from_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2086826090
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("to_local");
      this._bindings.method_to_local = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        192990374
      );
    }
    {
      let classname = new StringName("Node3D");
      let methodname = new StringName("to_global");
      this._bindings.method_to_global = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        192990374
      );
    }
  }
  set_transform(_local) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_transform,
      this._owner,
      _local
    );
    
  }
  get_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  set_position(_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_position,
      this._owner,
      _position
    );
    
  }
  get_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_position,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_rotation(_euler_radians) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rotation,
      this._owner,
      _euler_radians
    );
    
  }
  get_rotation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rotation,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_rotation_degrees(_euler_degrees) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rotation_degrees,
      this._owner,
      _euler_degrees
    );
    
  }
  get_rotation_degrees() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rotation_degrees,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_rotation_order(_order) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rotation_order,
      this._owner,
      _order
    );
    
  }
  get_rotation_order() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rotation_order,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_rotation_edit_mode(_edit_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rotation_edit_mode,
      this._owner,
      _edit_mode
    );
    
  }
  get_rotation_edit_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rotation_edit_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_scale(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scale,
      this._owner,
      _scale
    );
    
  }
  get_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scale,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_quaternion(_quaternion) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_quaternion,
      this._owner,
      _quaternion
    );
    
  }
  get_quaternion() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_quaternion,
      this._owner,
			Variant.Type.QUATERNION,
    
      
    );
    
  }
  set_basis(_basis) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_basis,
      this._owner,
      _basis
    );
    
  }
  get_basis() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_basis,
      this._owner,
			Variant.Type.BASIS,
    
      
    );
    
  }
  set_global_transform(_global) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_global_transform,
      this._owner,
      _global
    );
    
  }
  get_global_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_global_transform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  set_global_position(_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_global_position,
      this._owner,
      _position
    );
    
  }
  get_global_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_global_position,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_global_basis(_basis) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_global_basis,
      this._owner,
      _basis
    );
    
  }
  get_global_basis() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_global_basis,
      this._owner,
			Variant.Type.BASIS,
    
      
    );
    
  }
  set_global_rotation(_euler_radians) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_global_rotation,
      this._owner,
      _euler_radians
    );
    
  }
  get_global_rotation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_global_rotation,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_global_rotation_degrees(_euler_degrees) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_global_rotation_degrees,
      this._owner,
      _euler_degrees
    );
    
  }
  get_global_rotation_degrees() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_global_rotation_degrees,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_parent_node_3d() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_parent_node_3d,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_ignore_transform_notification(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ignore_transform_notification,
      this._owner,
      _enabled
    );
    
  }
  set_as_top_level(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_as_top_level,
      this._owner,
      _enable
    );
    
  }
  is_set_as_top_level() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_set_as_top_level,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_disable_scale(_disable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_disable_scale,
      this._owner,
      _disable
    );
    
  }
  is_scale_disabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_scale_disabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_world_3d() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_world_3d,
      this._owner,
			Variant.INT,
      
    );
    
  }
  force_update_transform() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_force_update_transform,
      this._owner,
      
    );
    
  }
  set_visibility_parent(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility_parent,
      this._owner,
      _path
    );
    
  }
  get_visibility_parent() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visibility_parent,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  update_gizmos() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_update_gizmos,
      this._owner,
      
    );
    
  }
  add_gizmo(_gizmo) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_gizmo,
      this._owner,
      _gizmo
    );
    
  }
  get_gizmos() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gizmos,
      this._owner,
			Variant.INT,
      
    );
    
  }
  clear_gizmos() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_gizmos,
      this._owner,
      
    );
    
  }
  set_subgizmo_selection(_gizmo, _id, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_subgizmo_selection,
      this._owner,
      _gizmo, _id, _transform
    );
    
  }
  clear_subgizmo_selection() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_subgizmo_selection,
      this._owner,
      
    );
    
  }
  set_visible(_visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visible,
      this._owner,
      _visible
    );
    
  }
  is_visible() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_visible,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_visible_in_tree() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_visible_in_tree,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  show() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_show,
      this._owner,
      
    );
    
  }
  hide() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_hide,
      this._owner,
      
    );
    
  }
  set_notify_local_transform(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_notify_local_transform,
      this._owner,
      _enable
    );
    
  }
  is_local_transform_notification_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_local_transform_notification_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_notify_transform(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_notify_transform,
      this._owner,
      _enable
    );
    
  }
  is_transform_notification_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_transform_notification_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  rotate(_axis, _angle) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_rotate,
      this._owner,
      _axis, _angle
    );
    
  }
  global_rotate(_axis, _angle) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_global_rotate,
      this._owner,
      _axis, _angle
    );
    
  }
  global_scale(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_global_scale,
      this._owner,
      _scale
    );
    
  }
  global_translate(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_global_translate,
      this._owner,
      _offset
    );
    
  }
  rotate_object_local(_axis, _angle) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_rotate_object_local,
      this._owner,
      _axis, _angle
    );
    
  }
  scale_object_local(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_scale_object_local,
      this._owner,
      _scale
    );
    
  }
  translate_object_local(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_translate_object_local,
      this._owner,
      _offset
    );
    
  }
  rotate_x(_angle) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_rotate_x,
      this._owner,
      _angle
    );
    
  }
  rotate_y(_angle) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_rotate_y,
      this._owner,
      _angle
    );
    
  }
  rotate_z(_angle) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_rotate_z,
      this._owner,
      _angle
    );
    
  }
  translate(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_translate,
      this._owner,
      _offset
    );
    
  }
  orthonormalize() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_orthonormalize,
      this._owner,
      
    );
    
  }
  set_identity() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_identity,
      this._owner,
      
    );
    
  }
  look_at(_target, _up, _use_model_front) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_look_at,
      this._owner,
      _target, _up, _use_model_front
    );
    
  }
  look_at_from_position(_position, _target, _up, _use_model_front) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_look_at_from_position,
      this._owner,
      _position, _target, _up, _use_model_front
    );
    
  }
  to_local(_global_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_to_local,
      this._owner,
			Variant.Type.VECTOR3,
    
      _global_point
    );
    
  }
  to_global(_local_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_to_global,
      this._owner,
			Variant.Type.VECTOR3,
    
      _local_point
    );
    
  }
  
get transform () {
  return this.get_transform();
}
set transform (new_value) {
  this.set_transform(new_value);
}
get global_transform () {
  return this.get_global_transform();
}
set global_transform (new_value) {
  this.set_global_transform(new_value);
}
get position () {
  return this.get_position();
}
set position (new_value) {
  this.set_position(new_value);
}
get rotation () {
  return this.get_rotation();
}
set rotation (new_value) {
  this.set_rotation(new_value);
}
get rotation_degrees () {
  return this.get_rotation_degrees();
}
set rotation_degrees (new_value) {
  this.set_rotation_degrees(new_value);
}
get quaternion () {
  return this.get_quaternion();
}
set quaternion (new_value) {
  this.set_quaternion(new_value);
}
get basis () {
  return this.get_basis();
}
set basis (new_value) {
  this.set_basis(new_value);
}
get scale () {
  return this.get_scale();
}
set scale (new_value) {
  this.set_scale(new_value);
}
get rotation_edit_mode () {
  return this.get_rotation_edit_mode();
}
set rotation_edit_mode (new_value) {
  this.set_rotation_edit_mode(new_value);
}
get rotation_order () {
  return this.get_rotation_order();
}
set rotation_order (new_value) {
  this.set_rotation_order(new_value);
}
get top_level () {
  return this.is_set_as_top_level();
}
set top_level (new_value) {
  this.set_as_top_level(new_value);
}
get global_position () {
  return this.get_global_position();
}
set global_position (new_value) {
  this.set_global_position(new_value);
}
get global_basis () {
  return this.get_global_basis();
}
set global_basis (new_value) {
  this.set_global_basis(new_value);
}
get global_rotation () {
  return this.get_global_rotation();
}
set global_rotation (new_value) {
  this.set_global_rotation(new_value);
}
get global_rotation_degrees () {
  return this.get_global_rotation_degrees();
}
set global_rotation_degrees (new_value) {
  this.set_global_rotation_degrees(new_value);
}
get visible () {
  return this.is_visible();
}
set visible (new_value) {
  this.set_visible(new_value);
}
get visibility_parent () {
  return this.get_visibility_parent();
}
set visibility_parent (new_value) {
  this.set_visibility_parent(new_value);
}

  static RotationEditMode = {
    ROTATION_EDIT_MODE_EULER: 0,
    ROTATION_EDIT_MODE_QUATERNION: 1,
    ROTATION_EDIT_MODE_BASIS: 2,
  }

  static {
    this._init_bindings();
  }
}