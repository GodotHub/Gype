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
  method_get_from;
  method_set_from;
  method_get_motion;
  method_set_motion;
  method_get_margin;
  method_set_margin;
  method_is_collide_separation_ray_enabled;
  method_set_collide_separation_ray_enabled;
  method_get_exclude_bodies;
  method_set_exclude_bodies;
  method_get_exclude_objects;
  method_set_exclude_objects;
  method_is_recovery_as_collision_enabled;
  method_set_recovery_as_collision_enabled;
}
@GodotClass
export class PhysicsTestMotionParameters2D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsTestMotionParameters2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_from() {
    if (!this._bindings.method_get_from) {
      let classname = new StringName("PhysicsTestMotionParameters2D");
      let methodname = new StringName("get_from");
      this._bindings.method_get_from = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814499831
      );
    }
  }
  static init_method_set_from() {
    if (!this._bindings.method_set_from) {
      let classname = new StringName("PhysicsTestMotionParameters2D");
      let methodname = new StringName("set_from");
      this._bindings.method_set_from = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2761652528
      );
    }
  }
  static init_method_get_motion() {
    if (!this._bindings.method_get_motion) {
      let classname = new StringName("PhysicsTestMotionParameters2D");
      let methodname = new StringName("get_motion");
      this._bindings.method_get_motion = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_motion() {
    if (!this._bindings.method_set_motion) {
      let classname = new StringName("PhysicsTestMotionParameters2D");
      let methodname = new StringName("set_motion");
      this._bindings.method_set_motion = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_margin() {
    if (!this._bindings.method_get_margin) {
      let classname = new StringName("PhysicsTestMotionParameters2D");
      let methodname = new StringName("get_margin");
      this._bindings.method_get_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_margin() {
    if (!this._bindings.method_set_margin) {
      let classname = new StringName("PhysicsTestMotionParameters2D");
      let methodname = new StringName("set_margin");
      this._bindings.method_set_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_is_collide_separation_ray_enabled() {
    if (!this._bindings.method_is_collide_separation_ray_enabled) {
      let classname = new StringName("PhysicsTestMotionParameters2D");
      let methodname = new StringName("is_collide_separation_ray_enabled");
      this._bindings.method_is_collide_separation_ray_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_collide_separation_ray_enabled() {
    if (!this._bindings.method_set_collide_separation_ray_enabled) {
      let classname = new StringName("PhysicsTestMotionParameters2D");
      let methodname = new StringName("set_collide_separation_ray_enabled");
      this._bindings.method_set_collide_separation_ray_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_exclude_bodies() {
    if (!this._bindings.method_get_exclude_bodies) {
      let classname = new StringName("PhysicsTestMotionParameters2D");
      let methodname = new StringName("get_exclude_bodies");
      this._bindings.method_get_exclude_bodies = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_exclude_bodies() {
    if (!this._bindings.method_set_exclude_bodies) {
      let classname = new StringName("PhysicsTestMotionParameters2D");
      let methodname = new StringName("set_exclude_bodies");
      this._bindings.method_set_exclude_bodies = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_exclude_objects() {
    if (!this._bindings.method_get_exclude_objects) {
      let classname = new StringName("PhysicsTestMotionParameters2D");
      let methodname = new StringName("get_exclude_objects");
      this._bindings.method_get_exclude_objects = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_exclude_objects() {
    if (!this._bindings.method_set_exclude_objects) {
      let classname = new StringName("PhysicsTestMotionParameters2D");
      let methodname = new StringName("set_exclude_objects");
      this._bindings.method_set_exclude_objects = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_is_recovery_as_collision_enabled() {
    if (!this._bindings.method_is_recovery_as_collision_enabled) {
      let classname = new StringName("PhysicsTestMotionParameters2D");
      let methodname = new StringName("is_recovery_as_collision_enabled");
      this._bindings.method_is_recovery_as_collision_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_recovery_as_collision_enabled() {
    if (!this._bindings.method_set_recovery_as_collision_enabled) {
      let classname = new StringName("PhysicsTestMotionParameters2D");
      let methodname = new StringName("set_recovery_as_collision_enabled");
      this._bindings.method_set_recovery_as_collision_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }

  
  
  get_from() {
    PhysicsTestMotionParameters2D.init_method_get_from();
    return _call_native_mb_ret(
      PhysicsTestMotionParameters2D._bindings.method_get_from,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      
    );
    
  }
  set_from(_from) {
    PhysicsTestMotionParameters2D.init_method_set_from();
    return _call_native_mb_no_ret(
      PhysicsTestMotionParameters2D._bindings.method_set_from,
      this._owner,
      _from
    );
    
  }
  get_motion() {
    PhysicsTestMotionParameters2D.init_method_get_motion();
    return _call_native_mb_ret(
      PhysicsTestMotionParameters2D._bindings.method_get_motion,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_motion(_motion) {
    PhysicsTestMotionParameters2D.init_method_set_motion();
    return _call_native_mb_no_ret(
      PhysicsTestMotionParameters2D._bindings.method_set_motion,
      this._owner,
      _motion
    );
    
  }
  get_margin() {
    PhysicsTestMotionParameters2D.init_method_get_margin();
    return _call_native_mb_ret(
      PhysicsTestMotionParameters2D._bindings.method_get_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_margin(_margin) {
    PhysicsTestMotionParameters2D.init_method_set_margin();
    return _call_native_mb_no_ret(
      PhysicsTestMotionParameters2D._bindings.method_set_margin,
      this._owner,
      _margin
    );
    
  }
  is_collide_separation_ray_enabled() {
    PhysicsTestMotionParameters2D.init_method_is_collide_separation_ray_enabled();
    return _call_native_mb_ret(
      PhysicsTestMotionParameters2D._bindings.method_is_collide_separation_ray_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_collide_separation_ray_enabled(_enabled) {
    PhysicsTestMotionParameters2D.init_method_set_collide_separation_ray_enabled();
    return _call_native_mb_no_ret(
      PhysicsTestMotionParameters2D._bindings.method_set_collide_separation_ray_enabled,
      this._owner,
      _enabled
    );
    
  }
  get_exclude_bodies() {
    PhysicsTestMotionParameters2D.init_method_get_exclude_bodies();
    return _call_native_mb_ret(
      PhysicsTestMotionParameters2D._bindings.method_get_exclude_bodies,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_exclude_bodies(_exclude_list) {
    PhysicsTestMotionParameters2D.init_method_set_exclude_bodies();
    return _call_native_mb_no_ret(
      PhysicsTestMotionParameters2D._bindings.method_set_exclude_bodies,
      this._owner,
      _exclude_list
    );
    
  }
  get_exclude_objects() {
    PhysicsTestMotionParameters2D.init_method_get_exclude_objects();
    return _call_native_mb_ret(
      PhysicsTestMotionParameters2D._bindings.method_get_exclude_objects,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_exclude_objects(_exclude_list) {
    PhysicsTestMotionParameters2D.init_method_set_exclude_objects();
    return _call_native_mb_no_ret(
      PhysicsTestMotionParameters2D._bindings.method_set_exclude_objects,
      this._owner,
      _exclude_list
    );
    
  }
  is_recovery_as_collision_enabled() {
    PhysicsTestMotionParameters2D.init_method_is_recovery_as_collision_enabled();
    return _call_native_mb_ret(
      PhysicsTestMotionParameters2D._bindings.method_is_recovery_as_collision_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_recovery_as_collision_enabled(_enabled) {
    PhysicsTestMotionParameters2D.init_method_set_recovery_as_collision_enabled();
    return _call_native_mb_no_ret(
      PhysicsTestMotionParameters2D._bindings.method_set_recovery_as_collision_enabled,
      this._owner,
      _enabled
    );
    
  }
  
get from () {
  return this.get_from();
}
set from (new_value) {
  this.set_from(new_value);
}
get motion () {
  return this.get_motion();
}
set motion (new_value) {
  this.set_motion(new_value);
}
get margin () {
  return this.get_margin();
}
set margin (new_value) {
  this.set_margin(new_value);
}
get collide_separation_ray () {
  return this.is_collide_separation_ray_enabled();
}
set collide_separation_ray (new_value) {
  this.set_collide_separation_ray_enabled(new_value);
}
get exclude_bodies () {
  return this.get_exclude_bodies();
}
set exclude_bodies (new_value) {
  this.set_exclude_bodies(new_value);
}
get exclude_objects () {
  return this.get_exclude_objects();
}
set exclude_objects (new_value) {
  this.set_exclude_objects(new_value);
}
get recovery_as_collision () {
  return this.is_recovery_as_collision_enabled();
}
set recovery_as_collision (new_value) {
  this.set_recovery_as_collision_enabled(new_value);
}

}