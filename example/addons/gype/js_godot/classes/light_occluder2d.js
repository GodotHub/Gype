import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_occluder_polygon;
  method_get_occluder_polygon;
  method_set_occluder_light_mask;
  method_get_occluder_light_mask;
  method_set_as_sdf_collision;
  method_is_set_as_sdf_collision;
}
export class LightOccluder2D extends Node2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("LightOccluder2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_occluder_polygon() {
    if (!this.#_bindings.method_set_occluder_polygon) {
      let classname = new StringName("LightOccluder2D");
      let methodname = new StringName("set_occluder_polygon");
      this.#_bindings.method_set_occluder_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3258315893
      );
    }
  }
  static init_method_get_occluder_polygon() {
    if (!this.#_bindings.method_get_occluder_polygon) {
      let classname = new StringName("LightOccluder2D");
      let methodname = new StringName("get_occluder_polygon");
      this.#_bindings.method_get_occluder_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3962317075
      );
    }
  }
  static init_method_set_occluder_light_mask() {
    if (!this.#_bindings.method_set_occluder_light_mask) {
      let classname = new StringName("LightOccluder2D");
      let methodname = new StringName("set_occluder_light_mask");
      this.#_bindings.method_set_occluder_light_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_occluder_light_mask() {
    if (!this.#_bindings.method_get_occluder_light_mask) {
      let classname = new StringName("LightOccluder2D");
      let methodname = new StringName("get_occluder_light_mask");
      this.#_bindings.method_get_occluder_light_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_as_sdf_collision() {
    if (!this.#_bindings.method_set_as_sdf_collision) {
      let classname = new StringName("LightOccluder2D");
      let methodname = new StringName("set_as_sdf_collision");
      this.#_bindings.method_set_as_sdf_collision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_set_as_sdf_collision() {
    if (!this.#_bindings.method_is_set_as_sdf_collision) {
      let classname = new StringName("LightOccluder2D");
      let methodname = new StringName("is_set_as_sdf_collision");
      this.#_bindings.method_is_set_as_sdf_collision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_occluder_polygon(_polygon) {
    LightOccluder2D.init_method_set_occluder_polygon();
    return _call_native_mb_no_ret(
      LightOccluder2D.#_bindings.method_set_occluder_polygon,
      this._owner,
      _polygon
    );
    
  }
  get_occluder_polygon() {
    LightOccluder2D.init_method_get_occluder_polygon();
    return _call_native_mb_ret(
      LightOccluder2D.#_bindings.method_get_occluder_polygon,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_occluder_light_mask(_mask) {
    LightOccluder2D.init_method_set_occluder_light_mask();
    return _call_native_mb_no_ret(
      LightOccluder2D.#_bindings.method_set_occluder_light_mask,
      this._owner,
      _mask
    );
    
  }
  get_occluder_light_mask() {
    LightOccluder2D.init_method_get_occluder_light_mask();
    return _call_native_mb_ret(
      LightOccluder2D.#_bindings.method_get_occluder_light_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_as_sdf_collision(_enable) {
    LightOccluder2D.init_method_set_as_sdf_collision();
    return _call_native_mb_no_ret(
      LightOccluder2D.#_bindings.method_set_as_sdf_collision,
      this._owner,
      _enable
    );
    
  }
  is_set_as_sdf_collision() {
    LightOccluder2D.init_method_is_set_as_sdf_collision();
    return _call_native_mb_ret(
      LightOccluder2D.#_bindings.method_is_set_as_sdf_collision,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get occluder () {
  return this.get_occluder_polygon();
}
set occluder (new_value) {
  this.set_occluder_polygon(new_value);
}
get sdf_collision () {
  return this.is_set_as_sdf_collision();
}
set sdf_collision (new_value) {
  this.set_as_sdf_collision(new_value);
}
get occluder_light_mask () {
  return this.get_occluder_light_mask();
}
set occluder_light_mask (new_value) {
  this.set_occluder_light_mask(new_value);
}

}