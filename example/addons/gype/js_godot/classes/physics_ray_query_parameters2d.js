import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_create;
  method_set_from;
  method_get_from;
  method_set_to;
  method_get_to;
  method_set_collision_mask;
  method_get_collision_mask;
  method_set_exclude;
  method_get_exclude;
  method_set_collide_with_bodies;
  method_is_collide_with_bodies_enabled;
  method_set_collide_with_areas;
  method_is_collide_with_areas_enabled;
  method_set_hit_from_inside;
  method_is_hit_from_inside_enabled;
}
@GodotClass
export class PhysicsRayQueryParameters2D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsRayQueryParameters2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_create() {
    if (!this._bindings.method_create) {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("create");
      this._bindings.method_create = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3196569324
      );
    }
  }
  static init_method_set_from() {
    if (!this._bindings.method_set_from) {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("set_from");
      this._bindings.method_set_from = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_from() {
    if (!this._bindings.method_get_from) {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("get_from");
      this._bindings.method_get_from = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_to() {
    if (!this._bindings.method_set_to) {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("set_to");
      this._bindings.method_set_to = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_to() {
    if (!this._bindings.method_get_to) {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("get_to");
      this._bindings.method_get_to = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_collision_mask() {
    if (!this._bindings.method_set_collision_mask) {
      let classname = new StringName("PhysicsRayQueryParameters2D");
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
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("get_collision_mask");
      this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_exclude() {
    if (!this._bindings.method_set_exclude) {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("set_exclude");
      this._bindings.method_set_exclude = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_exclude() {
    if (!this._bindings.method_get_exclude) {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("get_exclude");
      this._bindings.method_get_exclude = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_collide_with_bodies() {
    if (!this._bindings.method_set_collide_with_bodies) {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("set_collide_with_bodies");
      this._bindings.method_set_collide_with_bodies = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_collide_with_bodies_enabled() {
    if (!this._bindings.method_is_collide_with_bodies_enabled) {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("is_collide_with_bodies_enabled");
      this._bindings.method_is_collide_with_bodies_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_collide_with_areas() {
    if (!this._bindings.method_set_collide_with_areas) {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("set_collide_with_areas");
      this._bindings.method_set_collide_with_areas = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_collide_with_areas_enabled() {
    if (!this._bindings.method_is_collide_with_areas_enabled) {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("is_collide_with_areas_enabled");
      this._bindings.method_is_collide_with_areas_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_hit_from_inside() {
    if (!this._bindings.method_set_hit_from_inside) {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("set_hit_from_inside");
      this._bindings.method_set_hit_from_inside = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_hit_from_inside_enabled() {
    if (!this._bindings.method_is_hit_from_inside_enabled) {
      let classname = new StringName("PhysicsRayQueryParameters2D");
      let methodname = new StringName("is_hit_from_inside_enabled");
      this._bindings.method_is_hit_from_inside_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  create(_from, _to, _collision_mask, _exclude) {
    PhysicsRayQueryParameters2D.init_method_create();
    return _call_native_mb_ret(
      PhysicsRayQueryParameters2D._bindings.method_create,
      this._owner,
			Variant.Type.OBJECT,
      _from, _to, _collision_mask, _exclude
    );
    
  }
  set_from(_from) {
    PhysicsRayQueryParameters2D.init_method_set_from();
    return _call_native_mb_no_ret(
      PhysicsRayQueryParameters2D._bindings.method_set_from,
      this._owner,
      _from
    );
    
  }
  get_from() {
    PhysicsRayQueryParameters2D.init_method_get_from();
    return _call_native_mb_ret(
      PhysicsRayQueryParameters2D._bindings.method_get_from,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_to(_to) {
    PhysicsRayQueryParameters2D.init_method_set_to();
    return _call_native_mb_no_ret(
      PhysicsRayQueryParameters2D._bindings.method_set_to,
      this._owner,
      _to
    );
    
  }
  get_to() {
    PhysicsRayQueryParameters2D.init_method_get_to();
    return _call_native_mb_ret(
      PhysicsRayQueryParameters2D._bindings.method_get_to,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_collision_mask(_collision_mask) {
    PhysicsRayQueryParameters2D.init_method_set_collision_mask();
    return _call_native_mb_no_ret(
      PhysicsRayQueryParameters2D._bindings.method_set_collision_mask,
      this._owner,
      _collision_mask
    );
    
  }
  get_collision_mask() {
    PhysicsRayQueryParameters2D.init_method_get_collision_mask();
    return _call_native_mb_ret(
      PhysicsRayQueryParameters2D._bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_exclude(_exclude) {
    PhysicsRayQueryParameters2D.init_method_set_exclude();
    return _call_native_mb_no_ret(
      PhysicsRayQueryParameters2D._bindings.method_set_exclude,
      this._owner,
      _exclude
    );
    
  }
  get_exclude() {
    PhysicsRayQueryParameters2D.init_method_get_exclude();
    return _call_native_mb_ret(
      PhysicsRayQueryParameters2D._bindings.method_get_exclude,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_collide_with_bodies(_enable) {
    PhysicsRayQueryParameters2D.init_method_set_collide_with_bodies();
    return _call_native_mb_no_ret(
      PhysicsRayQueryParameters2D._bindings.method_set_collide_with_bodies,
      this._owner,
      _enable
    );
    
  }
  is_collide_with_bodies_enabled() {
    PhysicsRayQueryParameters2D.init_method_is_collide_with_bodies_enabled();
    return _call_native_mb_ret(
      PhysicsRayQueryParameters2D._bindings.method_is_collide_with_bodies_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_collide_with_areas(_enable) {
    PhysicsRayQueryParameters2D.init_method_set_collide_with_areas();
    return _call_native_mb_no_ret(
      PhysicsRayQueryParameters2D._bindings.method_set_collide_with_areas,
      this._owner,
      _enable
    );
    
  }
  is_collide_with_areas_enabled() {
    PhysicsRayQueryParameters2D.init_method_is_collide_with_areas_enabled();
    return _call_native_mb_ret(
      PhysicsRayQueryParameters2D._bindings.method_is_collide_with_areas_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_hit_from_inside(_enable) {
    PhysicsRayQueryParameters2D.init_method_set_hit_from_inside();
    return _call_native_mb_no_ret(
      PhysicsRayQueryParameters2D._bindings.method_set_hit_from_inside,
      this._owner,
      _enable
    );
    
  }
  is_hit_from_inside_enabled() {
    PhysicsRayQueryParameters2D.init_method_is_hit_from_inside_enabled();
    return _call_native_mb_ret(
      PhysicsRayQueryParameters2D._bindings.method_is_hit_from_inside_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get from () {
  return this.get_from();
}
set from (new_value) {
  this.set_from(new_value);
}
get to () {
  return this.get_to();
}
set to (new_value) {
  this.set_to(new_value);
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
get hit_from_inside () {
  return this.is_hit_from_inside_enabled();
}
set hit_from_inside (new_value) {
  this.set_hit_from_inside(new_value);
}

}