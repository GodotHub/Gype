import * as internal from '__internal__';
import { Node3D } from 'src/js_godot/classesnode3d'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { RID } from 'src/js_godot/variant/rid'
class _MethodBindings {
    method__input_event;
    method__mouse_enter;
    method__mouse_exit;
    method_set_collision_layer;
    method_get_collision_layer;
    method_set_collision_mask;
    method_get_collision_mask;
    method_set_collision_layer_value;
    method_get_collision_layer_value;
    method_set_collision_mask_value;
    method_get_collision_mask_value;
    method_set_collision_priority;
    method_get_collision_priority;
    method_set_disable_mode;
    method_get_disable_mode;
    method_set_ray_pickable;
    method_is_ray_pickable;
    method_set_capture_input_on_drag;
    method_get_capture_input_on_drag;
    method_get_rid;
    method_create_shape_owner;
    method_remove_shape_owner;
    method_get_shape_owners;
    method_shape_owner_set_transform;
    method_shape_owner_get_transform;
    method_shape_owner_get_owner;
    method_shape_owner_set_disabled;
    method_is_shape_owner_disabled;
    method_shape_owner_add_shape;
    method_shape_owner_get_shape_count;
    method_shape_owner_get_shape;
    method_shape_owner_get_shape_index;
    method_shape_owner_remove_shape;
    method_shape_owner_clear_shapes;
    method_shape_find_owner;
}


export class CollisionObject3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CollisionObject3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("_input_event");
      this._bindings.method__input_event = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("_mouse_enter");
      this._bindings.method__mouse_enter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("_mouse_exit");
      this._bindings.method__mouse_exit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("set_collision_layer");
      this._bindings.method_set_collision_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("get_collision_layer");
      this._bindings.method_get_collision_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("set_collision_mask");
      this._bindings.method_set_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("get_collision_mask");
      this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("set_collision_layer_value");
      this._bindings.method_set_collision_layer_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("get_collision_layer_value");
      this._bindings.method_get_collision_layer_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("set_collision_mask_value");
      this._bindings.method_set_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("get_collision_mask_value");
      this._bindings.method_get_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("set_collision_priority");
      this._bindings.method_set_collision_priority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("get_collision_priority");
      this._bindings.method_get_collision_priority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("set_disable_mode");
      this._bindings.method_set_disable_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1623620376
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("get_disable_mode");
      this._bindings.method_get_disable_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        410164780
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("set_ray_pickable");
      this._bindings.method_set_ray_pickable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("is_ray_pickable");
      this._bindings.method_is_ray_pickable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("set_capture_input_on_drag");
      this._bindings.method_set_capture_input_on_drag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("get_capture_input_on_drag");
      this._bindings.method_get_capture_input_on_drag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("get_rid");
      this._bindings.method_get_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("create_shape_owner");
      this._bindings.method_create_shape_owner = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3429307534
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("remove_shape_owner");
      this._bindings.method_remove_shape_owner = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("get_shape_owners");
      this._bindings.method_get_shape_owners = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        969006518
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("shape_owner_set_transform");
      this._bindings.method_shape_owner_set_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3616898986
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("shape_owner_get_transform");
      this._bindings.method_shape_owner_get_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1965739696
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("shape_owner_get_owner");
      this._bindings.method_shape_owner_get_owner = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3332903315
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("shape_owner_set_disabled");
      this._bindings.method_shape_owner_set_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("is_shape_owner_disabled");
      this._bindings.method_is_shape_owner_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("shape_owner_add_shape");
      this._bindings.method_shape_owner_add_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2566676345
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("shape_owner_get_shape_count");
      this._bindings.method_shape_owner_get_shape_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("shape_owner_get_shape");
      this._bindings.method_shape_owner_get_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4015519174
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("shape_owner_get_shape_index");
      this._bindings.method_shape_owner_get_shape_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3175239445
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("shape_owner_remove_shape");
      this._bindings.method_shape_owner_remove_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("shape_owner_clear_shapes");
      this._bindings.method_shape_owner_clear_shapes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("CollisionObject3D");
      let methodname = new StringName("shape_find_owner");
      this._bindings.method_shape_find_owner = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
  }
  _input_event(_camera, _event, _event_position, _normal, _shape_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__input_event,
      this._owner,
      _camera, _event, _event_position, _normal, _shape_idx
    );
  }
  _mouse_enter() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__mouse_enter,
      this._owner,
      
    );
  }
  _mouse_exit() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__mouse_exit,
      this._owner,
      
    );
  }
  set_collision_layer(_layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_layer,
      this._owner,
      _layer
    );
  }
  get_collision_layer() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_layer,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_collision_mask(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_mask,
      this._owner,
      _mask
    );
  }
  get_collision_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_collision_layer_value(_layer_number, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_layer_value,
      this._owner,
      _layer_number, _value
    );
  }
  get_collision_layer_value(_layer_number) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_layer_value,
      this._owner,
			Variant.Type.BOOL,
      _layer_number
    );
  }
  set_collision_mask_value(_layer_number, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_mask_value,
      this._owner,
      _layer_number, _value
    );
  }
  get_collision_mask_value(_layer_number) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_mask_value,
      this._owner,
			Variant.Type.BOOL,
      _layer_number
    );
  }
  set_collision_priority(_priority) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_priority,
      this._owner,
      _priority
    );
  }
  get_collision_priority() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_priority,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_disable_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_disable_mode,
      this._owner,
      _mode
    );
  }
  get_disable_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_disable_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_ray_pickable(_ray_pickable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ray_pickable,
      this._owner,
      _ray_pickable
    );
  }
  is_ray_pickable() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_ray_pickable,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_capture_input_on_drag(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_capture_input_on_drag,
      this._owner,
      _enable
    );
  }
  get_capture_input_on_drag() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_capture_input_on_drag,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_rid() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rid,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  create_shape_owner(_owner) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_shape_owner,
      this._owner,
			Variant.Type.INT,
      _owner
    );
  }
  remove_shape_owner(_owner_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_shape_owner,
      this._owner,
      _owner_id
    );
  }
  get_shape_owners() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shape_owners,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
  }
  shape_owner_set_transform(_owner_id, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shape_owner_set_transform,
      this._owner,
      _owner_id, _transform
    );
  }
  shape_owner_get_transform(_owner_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shape_owner_get_transform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _owner_id
    );
  }
  shape_owner_get_owner(_owner_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shape_owner_get_owner,
      this._owner,
			Variant.INT,
      _owner_id
    );
  }
  shape_owner_set_disabled(_owner_id, _disabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shape_owner_set_disabled,
      this._owner,
      _owner_id, _disabled
    );
  }
  is_shape_owner_disabled(_owner_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_shape_owner_disabled,
      this._owner,
			Variant.Type.BOOL,
      _owner_id
    );
  }
  shape_owner_add_shape(_owner_id, _shape) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shape_owner_add_shape,
      this._owner,
      _owner_id, _shape
    );
  }
  shape_owner_get_shape_count(_owner_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shape_owner_get_shape_count,
      this._owner,
			Variant.Type.INT,
      _owner_id
    );
  }
  shape_owner_get_shape(_owner_id, _shape_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shape_owner_get_shape,
      this._owner,
			Variant.INT,
      _owner_id, _shape_id
    );
  }
  shape_owner_get_shape_index(_owner_id, _shape_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shape_owner_get_shape_index,
      this._owner,
			Variant.Type.INT,
      _owner_id, _shape_id
    );
  }
  shape_owner_remove_shape(_owner_id, _shape_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shape_owner_remove_shape,
      this._owner,
      _owner_id, _shape_id
    );
  }
  shape_owner_clear_shapes(_owner_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shape_owner_clear_shapes,
      this._owner,
      _owner_id
    );
  }
  shape_find_owner(_shape_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shape_find_owner,
      this._owner,
			Variant.Type.INT,
      _shape_index
    );
  }
  static DisableMode = {
    DISABLE_MODE_REMOVE: 0,
    DISABLE_MODE_MAKE_STATIC: 1,
    DISABLE_MODE_KEEP_ACTIVE: 2,
  }
}