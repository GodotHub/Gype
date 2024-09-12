import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GeometryInstance3D } from '@js_godot/classes/geometry_instance3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_is_root_shape;
  method_set_operation;
  method_get_operation;
  method_set_snap;
  method_get_snap;
  method_set_use_collision;
  method_is_using_collision;
  method_set_collision_layer;
  method_get_collision_layer;
  method_set_collision_mask;
  method_get_collision_mask;
  method_set_collision_mask_value;
  method_get_collision_mask_value;
  method_set_collision_layer_value;
  method_get_collision_layer_value;
  method_set_collision_priority;
  method_get_collision_priority;
  method_set_calculate_tangents;
  method_is_calculating_tangents;
  method_get_meshes;
}
export class CSGShape3D extends GeometryInstance3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CSGShape3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_is_root_shape() {
    if (!this.#_bindings.method_is_root_shape) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("is_root_shape");
      this.#_bindings.method_is_root_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_operation() {
    if (!this.#_bindings.method_set_operation) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("set_operation");
      this.#_bindings.method_set_operation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        811425055
      );
    }
  }
  static init_method_get_operation() {
    if (!this.#_bindings.method_get_operation) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("get_operation");
      this.#_bindings.method_get_operation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2662425879
      );
    }
  }
  static init_method_set_snap() {
    if (!this.#_bindings.method_set_snap) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("set_snap");
      this.#_bindings.method_set_snap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_snap() {
    if (!this.#_bindings.method_get_snap) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("get_snap");
      this.#_bindings.method_get_snap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_use_collision() {
    if (!this.#_bindings.method_set_use_collision) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("set_use_collision");
      this.#_bindings.method_set_use_collision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_collision() {
    if (!this.#_bindings.method_is_using_collision) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("is_using_collision");
      this.#_bindings.method_is_using_collision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_collision_layer() {
    if (!this.#_bindings.method_set_collision_layer) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("set_collision_layer");
      this.#_bindings.method_set_collision_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_collision_layer() {
    if (!this.#_bindings.method_get_collision_layer) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("get_collision_layer");
      this.#_bindings.method_get_collision_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_collision_mask() {
    if (!this.#_bindings.method_set_collision_mask) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("set_collision_mask");
      this.#_bindings.method_set_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_collision_mask() {
    if (!this.#_bindings.method_get_collision_mask) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("get_collision_mask");
      this.#_bindings.method_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_collision_mask_value() {
    if (!this.#_bindings.method_set_collision_mask_value) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("set_collision_mask_value");
      this.#_bindings.method_set_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_collision_mask_value() {
    if (!this.#_bindings.method_get_collision_mask_value) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("get_collision_mask_value");
      this.#_bindings.method_get_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_collision_layer_value() {
    if (!this.#_bindings.method_set_collision_layer_value) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("set_collision_layer_value");
      this.#_bindings.method_set_collision_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_collision_layer_value() {
    if (!this.#_bindings.method_get_collision_layer_value) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("get_collision_layer_value");
      this.#_bindings.method_get_collision_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_collision_priority() {
    if (!this.#_bindings.method_set_collision_priority) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("set_collision_priority");
      this.#_bindings.method_set_collision_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_collision_priority() {
    if (!this.#_bindings.method_get_collision_priority) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("get_collision_priority");
      this.#_bindings.method_get_collision_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_calculate_tangents() {
    if (!this.#_bindings.method_set_calculate_tangents) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("set_calculate_tangents");
      this.#_bindings.method_set_calculate_tangents = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_calculating_tangents() {
    if (!this.#_bindings.method_is_calculating_tangents) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("is_calculating_tangents");
      this.#_bindings.method_is_calculating_tangents = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_meshes() {
    if (!this.#_bindings.method_get_meshes) {
      let classname = new StringName("CSGShape3D");
      let methodname = new StringName("get_meshes");
      this.#_bindings.method_get_meshes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }

  
  
  is_root_shape() {
    CSGShape3D.init_method_is_root_shape();
    return _call_native_mb_ret(
      CSGShape3D.#_bindings.method_is_root_shape,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_operation(_operation) {
    CSGShape3D.init_method_set_operation();
    return _call_native_mb_no_ret(
      CSGShape3D.#_bindings.method_set_operation,
      this._owner,
      _operation
    );
    
  }
  get_operation() {
    CSGShape3D.init_method_get_operation();
    return _call_native_mb_ret(
      CSGShape3D.#_bindings.method_get_operation,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_snap(_snap) {
    CSGShape3D.init_method_set_snap();
    return _call_native_mb_no_ret(
      CSGShape3D.#_bindings.method_set_snap,
      this._owner,
      _snap
    );
    
  }
  get_snap() {
    CSGShape3D.init_method_get_snap();
    return _call_native_mb_ret(
      CSGShape3D.#_bindings.method_get_snap,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_use_collision(_operation) {
    CSGShape3D.init_method_set_use_collision();
    return _call_native_mb_no_ret(
      CSGShape3D.#_bindings.method_set_use_collision,
      this._owner,
      _operation
    );
    
  }
  is_using_collision() {
    CSGShape3D.init_method_is_using_collision();
    return _call_native_mb_ret(
      CSGShape3D.#_bindings.method_is_using_collision,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_collision_layer(_layer) {
    CSGShape3D.init_method_set_collision_layer();
    return _call_native_mb_no_ret(
      CSGShape3D.#_bindings.method_set_collision_layer,
      this._owner,
      _layer
    );
    
  }
  get_collision_layer() {
    CSGShape3D.init_method_get_collision_layer();
    return _call_native_mb_ret(
      CSGShape3D.#_bindings.method_get_collision_layer,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_collision_mask(_mask) {
    CSGShape3D.init_method_set_collision_mask();
    return _call_native_mb_no_ret(
      CSGShape3D.#_bindings.method_set_collision_mask,
      this._owner,
      _mask
    );
    
  }
  get_collision_mask() {
    CSGShape3D.init_method_get_collision_mask();
    return _call_native_mb_ret(
      CSGShape3D.#_bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_collision_mask_value(_layer_number, _value) {
    CSGShape3D.init_method_set_collision_mask_value();
    return _call_native_mb_no_ret(
      CSGShape3D.#_bindings.method_set_collision_mask_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_collision_mask_value(_layer_number) {
    CSGShape3D.init_method_get_collision_mask_value();
    return _call_native_mb_ret(
      CSGShape3D.#_bindings.method_get_collision_mask_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
    );
    
  }
  set_collision_layer_value(_layer_number, _value) {
    CSGShape3D.init_method_set_collision_layer_value();
    return _call_native_mb_no_ret(
      CSGShape3D.#_bindings.method_set_collision_layer_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_collision_layer_value(_layer_number) {
    CSGShape3D.init_method_get_collision_layer_value();
    return _call_native_mb_ret(
      CSGShape3D.#_bindings.method_get_collision_layer_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
    );
    
  }
  set_collision_priority(_priority) {
    CSGShape3D.init_method_set_collision_priority();
    return _call_native_mb_no_ret(
      CSGShape3D.#_bindings.method_set_collision_priority,
      this._owner,
      _priority
    );
    
  }
  get_collision_priority() {
    CSGShape3D.init_method_get_collision_priority();
    return _call_native_mb_ret(
      CSGShape3D.#_bindings.method_get_collision_priority,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_calculate_tangents(_enabled) {
    CSGShape3D.init_method_set_calculate_tangents();
    return _call_native_mb_no_ret(
      CSGShape3D.#_bindings.method_set_calculate_tangents,
      this._owner,
      _enabled
    );
    
  }
  is_calculating_tangents() {
    CSGShape3D.init_method_is_calculating_tangents();
    return _call_native_mb_ret(
      CSGShape3D.#_bindings.method_is_calculating_tangents,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_meshes() {
    CSGShape3D.init_method_get_meshes();
    return _call_native_mb_ret(
      CSGShape3D.#_bindings.method_get_meshes,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  
get operation () {
  return this.get_operation();
}
set operation (new_value) {
  this.set_operation(new_value);
}
get snap () {
  return this.get_snap();
}
set snap (new_value) {
  this.set_snap(new_value);
}
get calculate_tangents () {
  return this.is_calculating_tangents();
}
set calculate_tangents (new_value) {
  this.set_calculate_tangents(new_value);
}
get use_collision () {
  return this.is_using_collision();
}
set use_collision (new_value) {
  this.set_use_collision(new_value);
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

  static Operation = {
    OPERATION_UNION: 0,
    OPERATION_INTERSECTION: 1,
    OPERATION_SUBTRACTION: 2,
  }
}