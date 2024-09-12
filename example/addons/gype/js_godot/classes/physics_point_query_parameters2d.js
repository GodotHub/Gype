import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_position;
  method_get_position;
  method_set_canvas_instance_id;
  method_get_canvas_instance_id;
  method_set_collision_mask;
  method_get_collision_mask;
  method_set_exclude;
  method_get_exclude;
  method_set_collide_with_bodies;
  method_is_collide_with_bodies_enabled;
  method_set_collide_with_areas;
  method_is_collide_with_areas_enabled;
}
export class PhysicsPointQueryParameters2D extends RefCounted{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsPointQueryParameters2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_position() {
    if (!this.#_bindings.method_set_position) {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("set_position");
      this.#_bindings.method_set_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_position() {
    if (!this.#_bindings.method_get_position) {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("get_position");
      this.#_bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_canvas_instance_id() {
    if (!this.#_bindings.method_set_canvas_instance_id) {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("set_canvas_instance_id");
      this.#_bindings.method_set_canvas_instance_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_canvas_instance_id() {
    if (!this.#_bindings.method_get_canvas_instance_id) {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("get_canvas_instance_id");
      this.#_bindings.method_get_canvas_instance_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_collision_mask() {
    if (!this.#_bindings.method_set_collision_mask) {
      let classname = new StringName("PhysicsPointQueryParameters2D");
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
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("get_collision_mask");
      this.#_bindings.method_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_exclude() {
    if (!this.#_bindings.method_set_exclude) {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("set_exclude");
      this.#_bindings.method_set_exclude = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_exclude() {
    if (!this.#_bindings.method_get_exclude) {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("get_exclude");
      this.#_bindings.method_get_exclude = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_collide_with_bodies() {
    if (!this.#_bindings.method_set_collide_with_bodies) {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("set_collide_with_bodies");
      this.#_bindings.method_set_collide_with_bodies = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_collide_with_bodies_enabled() {
    if (!this.#_bindings.method_is_collide_with_bodies_enabled) {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("is_collide_with_bodies_enabled");
      this.#_bindings.method_is_collide_with_bodies_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_collide_with_areas() {
    if (!this.#_bindings.method_set_collide_with_areas) {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("set_collide_with_areas");
      this.#_bindings.method_set_collide_with_areas = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_collide_with_areas_enabled() {
    if (!this.#_bindings.method_is_collide_with_areas_enabled) {
      let classname = new StringName("PhysicsPointQueryParameters2D");
      let methodname = new StringName("is_collide_with_areas_enabled");
      this.#_bindings.method_is_collide_with_areas_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_position(_position) {
    PhysicsPointQueryParameters2D.init_method_set_position();
    return _call_native_mb_no_ret(
      PhysicsPointQueryParameters2D.#_bindings.method_set_position,
      this._owner,
      _position
    );
    
  }
  get_position() {
    PhysicsPointQueryParameters2D.init_method_get_position();
    return _call_native_mb_ret(
      PhysicsPointQueryParameters2D.#_bindings.method_get_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_canvas_instance_id(_canvas_instance_id) {
    PhysicsPointQueryParameters2D.init_method_set_canvas_instance_id();
    return _call_native_mb_no_ret(
      PhysicsPointQueryParameters2D.#_bindings.method_set_canvas_instance_id,
      this._owner,
      _canvas_instance_id
    );
    
  }
  get_canvas_instance_id() {
    PhysicsPointQueryParameters2D.init_method_get_canvas_instance_id();
    return _call_native_mb_ret(
      PhysicsPointQueryParameters2D.#_bindings.method_get_canvas_instance_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_collision_mask(_collision_mask) {
    PhysicsPointQueryParameters2D.init_method_set_collision_mask();
    return _call_native_mb_no_ret(
      PhysicsPointQueryParameters2D.#_bindings.method_set_collision_mask,
      this._owner,
      _collision_mask
    );
    
  }
  get_collision_mask() {
    PhysicsPointQueryParameters2D.init_method_get_collision_mask();
    return _call_native_mb_ret(
      PhysicsPointQueryParameters2D.#_bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_exclude(_exclude) {
    PhysicsPointQueryParameters2D.init_method_set_exclude();
    return _call_native_mb_no_ret(
      PhysicsPointQueryParameters2D.#_bindings.method_set_exclude,
      this._owner,
      _exclude
    );
    
  }
  get_exclude() {
    PhysicsPointQueryParameters2D.init_method_get_exclude();
    return _call_native_mb_ret(
      PhysicsPointQueryParameters2D.#_bindings.method_get_exclude,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_collide_with_bodies(_enable) {
    PhysicsPointQueryParameters2D.init_method_set_collide_with_bodies();
    return _call_native_mb_no_ret(
      PhysicsPointQueryParameters2D.#_bindings.method_set_collide_with_bodies,
      this._owner,
      _enable
    );
    
  }
  is_collide_with_bodies_enabled() {
    PhysicsPointQueryParameters2D.init_method_is_collide_with_bodies_enabled();
    return _call_native_mb_ret(
      PhysicsPointQueryParameters2D.#_bindings.method_is_collide_with_bodies_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_collide_with_areas(_enable) {
    PhysicsPointQueryParameters2D.init_method_set_collide_with_areas();
    return _call_native_mb_no_ret(
      PhysicsPointQueryParameters2D.#_bindings.method_set_collide_with_areas,
      this._owner,
      _enable
    );
    
  }
  is_collide_with_areas_enabled() {
    PhysicsPointQueryParameters2D.init_method_is_collide_with_areas_enabled();
    return _call_native_mb_ret(
      PhysicsPointQueryParameters2D.#_bindings.method_is_collide_with_areas_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get position () {
  return this.get_position();
}
set position (new_value) {
  this.set_position(new_value);
}
get canvas_instance_id () {
  return this.get_canvas_instance_id();
}
set canvas_instance_id (new_value) {
  this.set_canvas_instance_id(new_value);
}
get collision_mask () {
  return this.get_collision_mask();
}
set collision_mask (new_value) {
  this.set_collision_mask(new_value);
}
get exclude () {
  return this.get_exclude();
}
set exclude (new_value) {
  this.set_exclude(new_value);
}
get collide_with_bodies () {
  return this.is_collide_with_bodies_enabled();
}
set collide_with_bodies (new_value) {
  this.set_collide_with_bodies(new_value);
}
get collide_with_areas () {
  return this.is_collide_with_areas_enabled();
}
set collide_with_areas (new_value) {
  this.set_collide_with_areas(new_value);
}

}