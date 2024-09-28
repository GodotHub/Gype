import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_get_rid;
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
  method_set_pickable;
  method_is_pickable;
  method_create_shape_owner;
  method_remove_shape_owner;
  method_get_shape_owners;
  method_shape_owner_set_transform;
  method_shape_owner_get_transform;
  method_shape_owner_get_owner;
  method_shape_owner_set_disabled;
  method_is_shape_owner_disabled;
  method_shape_owner_set_one_way_collision;
  method_is_shape_owner_one_way_collision_enabled;
  method_shape_owner_set_one_way_collision_margin;
  method_get_shape_owner_one_way_collision_margin;
  method_shape_owner_add_shape;
  method_shape_owner_get_shape_count;
  method_shape_owner_get_shape;
  method_shape_owner_get_shape_index;
  method_shape_owner_remove_shape;
  method_shape_owner_clear_shapes;
  method_shape_find_owner;
}
@GodotClass
export class CollisionObject2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CollisionObject2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_rid() {
    if (!this._bindings.method_get_rid) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("get_rid");
      this._bindings.method_get_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_set_collision_layer() {
    if (!this._bindings.method_set_collision_layer) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("set_collision_layer");
      this._bindings.method_set_collision_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_collision_layer() {
    if (!this._bindings.method_get_collision_layer) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("get_collision_layer");
      this._bindings.method_get_collision_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_collision_mask() {
    if (!this._bindings.method_set_collision_mask) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("set_collision_mask");
      this._bindings.method_set_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_collision_mask() {
    if (!this._bindings.method_get_collision_mask) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("get_collision_mask");
      this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_collision_layer_value() {
    if (!this._bindings.method_set_collision_layer_value) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("set_collision_layer_value");
      this._bindings.method_set_collision_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_collision_layer_value() {
    if (!this._bindings.method_get_collision_layer_value) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("get_collision_layer_value");
      this._bindings.method_get_collision_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_collision_mask_value() {
    if (!this._bindings.method_set_collision_mask_value) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("set_collision_mask_value");
      this._bindings.method_set_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_collision_mask_value() {
    if (!this._bindings.method_get_collision_mask_value) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("get_collision_mask_value");
      this._bindings.method_get_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_collision_priority() {
    if (!this._bindings.method_set_collision_priority) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("set_collision_priority");
      this._bindings.method_set_collision_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_collision_priority() {
    if (!this._bindings.method_get_collision_priority) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("get_collision_priority");
      this._bindings.method_get_collision_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_disable_mode() {
    if (!this._bindings.method_set_disable_mode) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("set_disable_mode");
      this._bindings.method_set_disable_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1919204045
      );
    }
  }
  static init_method_get_disable_mode() {
    if (!this._bindings.method_get_disable_mode) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("get_disable_mode");
      this._bindings.method_get_disable_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3172846349
      );
    }
  }
  static init_method_set_pickable() {
    if (!this._bindings.method_set_pickable) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("set_pickable");
      this._bindings.method_set_pickable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_pickable() {
    if (!this._bindings.method_is_pickable) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("is_pickable");
      this._bindings.method_is_pickable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_create_shape_owner() {
    if (!this._bindings.method_create_shape_owner) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("create_shape_owner");
      this._bindings.method_create_shape_owner = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3429307534
      );
    }
  }
  static init_method_remove_shape_owner() {
    if (!this._bindings.method_remove_shape_owner) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("remove_shape_owner");
      this._bindings.method_remove_shape_owner = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_shape_owners() {
    if (!this._bindings.method_get_shape_owners) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("get_shape_owners");
      this._bindings.method_get_shape_owners = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        969006518
      );
    }
  }
  static init_method_shape_owner_set_transform() {
    if (!this._bindings.method_shape_owner_set_transform) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("shape_owner_set_transform");
      this._bindings.method_shape_owner_set_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        30160968
      );
    }
  }
  static init_method_shape_owner_get_transform() {
    if (!this._bindings.method_shape_owner_get_transform) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("shape_owner_get_transform");
      this._bindings.method_shape_owner_get_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3836996910
      );
    }
  }
  static init_method_shape_owner_get_owner() {
    if (!this._bindings.method_shape_owner_get_owner) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("shape_owner_get_owner");
      this._bindings.method_shape_owner_get_owner = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3332903315
      );
    }
  }
  static init_method_shape_owner_set_disabled() {
    if (!this._bindings.method_shape_owner_set_disabled) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("shape_owner_set_disabled");
      this._bindings.method_shape_owner_set_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_shape_owner_disabled() {
    if (!this._bindings.method_is_shape_owner_disabled) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("is_shape_owner_disabled");
      this._bindings.method_is_shape_owner_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_shape_owner_set_one_way_collision() {
    if (!this._bindings.method_shape_owner_set_one_way_collision) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("shape_owner_set_one_way_collision");
      this._bindings.method_shape_owner_set_one_way_collision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_shape_owner_one_way_collision_enabled() {
    if (!this._bindings.method_is_shape_owner_one_way_collision_enabled) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("is_shape_owner_one_way_collision_enabled");
      this._bindings.method_is_shape_owner_one_way_collision_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_shape_owner_set_one_way_collision_margin() {
    if (!this._bindings.method_shape_owner_set_one_way_collision_margin) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("shape_owner_set_one_way_collision_margin");
      this._bindings.method_shape_owner_set_one_way_collision_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_get_shape_owner_one_way_collision_margin() {
    if (!this._bindings.method_get_shape_owner_one_way_collision_margin) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("get_shape_owner_one_way_collision_margin");
      this._bindings.method_get_shape_owner_one_way_collision_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_shape_owner_add_shape() {
    if (!this._bindings.method_shape_owner_add_shape) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("shape_owner_add_shape");
      this._bindings.method_shape_owner_add_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2077425081
      );
    }
  }
  static init_method_shape_owner_get_shape_count() {
    if (!this._bindings.method_shape_owner_get_shape_count) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("shape_owner_get_shape_count");
      this._bindings.method_shape_owner_get_shape_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_shape_owner_get_shape() {
    if (!this._bindings.method_shape_owner_get_shape) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("shape_owner_get_shape");
      this._bindings.method_shape_owner_get_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3106725749
      );
    }
  }
  static init_method_shape_owner_get_shape_index() {
    if (!this._bindings.method_shape_owner_get_shape_index) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("shape_owner_get_shape_index");
      this._bindings.method_shape_owner_get_shape_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3175239445
      );
    }
  }
  static init_method_shape_owner_remove_shape() {
    if (!this._bindings.method_shape_owner_remove_shape) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("shape_owner_remove_shape");
      this._bindings.method_shape_owner_remove_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_shape_owner_clear_shapes() {
    if (!this._bindings.method_shape_owner_clear_shapes) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("shape_owner_clear_shapes");
      this._bindings.method_shape_owner_clear_shapes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_shape_find_owner() {
    if (!this._bindings.method_shape_find_owner) {
      let classname = new StringName("CollisionObject2D");
      let methodname = new StringName("shape_find_owner");
      this._bindings.method_shape_find_owner = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }

  
  
  _input_event(_viewport, _event, _shape_idx) {
  }
  _mouse_enter() {
  }
  _mouse_exit() {
  }
  _mouse_shape_enter(_shape_idx) {
  }
  _mouse_shape_exit(_shape_idx) {
  }
  get_rid() {
    CollisionObject2D.init_method_get_rid();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_get_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_collision_layer(_layer) {
    CollisionObject2D.init_method_set_collision_layer();
    return _call_native_mb_no_ret(
      CollisionObject2D._bindings.method_set_collision_layer,
      this._owner,
      _layer
    );
    
  }
  get_collision_layer() {
    CollisionObject2D.init_method_get_collision_layer();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_get_collision_layer,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_collision_mask(_mask) {
    CollisionObject2D.init_method_set_collision_mask();
    return _call_native_mb_no_ret(
      CollisionObject2D._bindings.method_set_collision_mask,
      this._owner,
      _mask
    );
    
  }
  get_collision_mask() {
    CollisionObject2D.init_method_get_collision_mask();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_collision_layer_value(_layer_number, _value) {
    CollisionObject2D.init_method_set_collision_layer_value();
    return _call_native_mb_no_ret(
      CollisionObject2D._bindings.method_set_collision_layer_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_collision_layer_value(_layer_number) {
    CollisionObject2D.init_method_get_collision_layer_value();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_get_collision_layer_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
    );
    
  }
  set_collision_mask_value(_layer_number, _value) {
    CollisionObject2D.init_method_set_collision_mask_value();
    return _call_native_mb_no_ret(
      CollisionObject2D._bindings.method_set_collision_mask_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_collision_mask_value(_layer_number) {
    CollisionObject2D.init_method_get_collision_mask_value();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_get_collision_mask_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
    );
    
  }
  set_collision_priority(_priority) {
    CollisionObject2D.init_method_set_collision_priority();
    return _call_native_mb_no_ret(
      CollisionObject2D._bindings.method_set_collision_priority,
      this._owner,
      _priority
    );
    
  }
  get_collision_priority() {
    CollisionObject2D.init_method_get_collision_priority();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_get_collision_priority,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_disable_mode(_mode) {
    CollisionObject2D.init_method_set_disable_mode();
    return _call_native_mb_no_ret(
      CollisionObject2D._bindings.method_set_disable_mode,
      this._owner,
      _mode
    );
    
  }
  get_disable_mode() {
    CollisionObject2D.init_method_get_disable_mode();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_get_disable_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_pickable(_enabled) {
    CollisionObject2D.init_method_set_pickable();
    return _call_native_mb_no_ret(
      CollisionObject2D._bindings.method_set_pickable,
      this._owner,
      _enabled
    );
    
  }
  is_pickable() {
    CollisionObject2D.init_method_is_pickable();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_is_pickable,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  create_shape_owner(_owner) {
    CollisionObject2D.init_method_create_shape_owner();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_create_shape_owner,
      this._owner,
			Variant.Type.INT,
    
      _owner
    );
    
  }
  remove_shape_owner(_owner_id) {
    CollisionObject2D.init_method_remove_shape_owner();
    return _call_native_mb_no_ret(
      CollisionObject2D._bindings.method_remove_shape_owner,
      this._owner,
      _owner_id
    );
    
  }
  get_shape_owners() {
    CollisionObject2D.init_method_get_shape_owners();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_get_shape_owners,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  shape_owner_set_transform(_owner_id, _transform) {
    CollisionObject2D.init_method_shape_owner_set_transform();
    return _call_native_mb_no_ret(
      CollisionObject2D._bindings.method_shape_owner_set_transform,
      this._owner,
      _owner_id, _transform
    );
    
  }
  shape_owner_get_transform(_owner_id) {
    CollisionObject2D.init_method_shape_owner_get_transform();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_shape_owner_get_transform,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      _owner_id
    );
    
  }
  shape_owner_get_owner(_owner_id) {
    CollisionObject2D.init_method_shape_owner_get_owner();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_shape_owner_get_owner,
      this._owner,
			Variant.Type.OBJECT,
      _owner_id
    );
    
  }
  shape_owner_set_disabled(_owner_id, _disabled) {
    CollisionObject2D.init_method_shape_owner_set_disabled();
    return _call_native_mb_no_ret(
      CollisionObject2D._bindings.method_shape_owner_set_disabled,
      this._owner,
      _owner_id, _disabled
    );
    
  }
  is_shape_owner_disabled(_owner_id) {
    CollisionObject2D.init_method_is_shape_owner_disabled();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_is_shape_owner_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      _owner_id
    );
    
  }
  shape_owner_set_one_way_collision(_owner_id, _enable) {
    CollisionObject2D.init_method_shape_owner_set_one_way_collision();
    return _call_native_mb_no_ret(
      CollisionObject2D._bindings.method_shape_owner_set_one_way_collision,
      this._owner,
      _owner_id, _enable
    );
    
  }
  is_shape_owner_one_way_collision_enabled(_owner_id) {
    CollisionObject2D.init_method_is_shape_owner_one_way_collision_enabled();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_is_shape_owner_one_way_collision_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      _owner_id
    );
    
  }
  shape_owner_set_one_way_collision_margin(_owner_id, _margin) {
    CollisionObject2D.init_method_shape_owner_set_one_way_collision_margin();
    return _call_native_mb_no_ret(
      CollisionObject2D._bindings.method_shape_owner_set_one_way_collision_margin,
      this._owner,
      _owner_id, _margin
    );
    
  }
  get_shape_owner_one_way_collision_margin(_owner_id) {
    CollisionObject2D.init_method_get_shape_owner_one_way_collision_margin();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_get_shape_owner_one_way_collision_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      _owner_id
    );
    
  }
  shape_owner_add_shape(_owner_id, _shape) {
    CollisionObject2D.init_method_shape_owner_add_shape();
    return _call_native_mb_no_ret(
      CollisionObject2D._bindings.method_shape_owner_add_shape,
      this._owner,
      _owner_id, _shape
    );
    
  }
  shape_owner_get_shape_count(_owner_id) {
    CollisionObject2D.init_method_shape_owner_get_shape_count();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_shape_owner_get_shape_count,
      this._owner,
			Variant.Type.INT,
    
      _owner_id
    );
    
  }
  shape_owner_get_shape(_owner_id, _shape_id) {
    CollisionObject2D.init_method_shape_owner_get_shape();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_shape_owner_get_shape,
      this._owner,
			Variant.Type.OBJECT,
      _owner_id, _shape_id
    );
    
  }
  shape_owner_get_shape_index(_owner_id, _shape_id) {
    CollisionObject2D.init_method_shape_owner_get_shape_index();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_shape_owner_get_shape_index,
      this._owner,
			Variant.Type.INT,
    
      _owner_id, _shape_id
    );
    
  }
  shape_owner_remove_shape(_owner_id, _shape_id) {
    CollisionObject2D.init_method_shape_owner_remove_shape();
    return _call_native_mb_no_ret(
      CollisionObject2D._bindings.method_shape_owner_remove_shape,
      this._owner,
      _owner_id, _shape_id
    );
    
  }
  shape_owner_clear_shapes(_owner_id) {
    CollisionObject2D.init_method_shape_owner_clear_shapes();
    return _call_native_mb_no_ret(
      CollisionObject2D._bindings.method_shape_owner_clear_shapes,
      this._owner,
      _owner_id
    );
    
  }
  shape_find_owner(_shape_index) {
    CollisionObject2D.init_method_shape_find_owner();
    return _call_native_mb_ret(
      CollisionObject2D._bindings.method_shape_find_owner,
      this._owner,
			Variant.Type.INT,
    
      _shape_index
    );
    
  }
  
get disable_mode () {
  return this.get_disable_mode();
}
set disable_mode (new_value) {
  this.set_disable_mode(new_value);
}
get collision_layer () {
  return this.get_collision_layer();
}
set collision_layer (new_value) {
  this.set_collision_layer(new_value);
}
get collision_mask () {
  return this.get_collision_mask();
}
set collision_mask (new_value) {
  this.set_collision_mask(new_value);
}
get collision_priority () {
  return this.get_collision_priority();
}
set collision_priority (new_value) {
  this.set_collision_priority(new_value);
}
get input_pickable () {
  return this.is_pickable();
}
set input_pickable (new_value) {
  this.set_pickable(new_value);
}

  static DisableMode = {
    DISABLE_MODE_REMOVE: 0,
    DISABLE_MODE_MAKE_STATIC: 1,
    DISABLE_MODE_KEEP_ACTIVE: 2,
  }
}