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
  method_set_shape;
  method_get_shape;
  method_set_shape_rid;
  method_get_shape_rid;
  method_set_transform;
  method_get_transform;
  method_set_motion;
  method_get_motion;
  method_set_margin;
  method_get_margin;
  method_set_collision_mask;
  method_get_collision_mask;
  method_set_exclude;
  method_get_exclude;
  method_set_collide_with_bodies;
  method_is_collide_with_bodies_enabled;
  method_set_collide_with_areas;
  method_is_collide_with_areas_enabled;
}
@GodotClass
export class PhysicsShapeQueryParameters3D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsShapeQueryParameters3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_shape() {
    if (!this._bindings.method_set_shape) {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("set_shape");
      this._bindings.method_set_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        968641751
      );
    }
  }
  static init_method_get_shape() {
    if (!this._bindings.method_get_shape) {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("get_shape");
      this._bindings.method_get_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        121922552
      );
    }
  }
  static init_method_set_shape_rid() {
    if (!this._bindings.method_set_shape_rid) {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("set_shape_rid");
      this._bindings.method_set_shape_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }
  static init_method_get_shape_rid() {
    if (!this._bindings.method_get_shape_rid) {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("get_shape_rid");
      this._bindings.method_get_shape_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_set_transform() {
    if (!this._bindings.method_set_transform) {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("set_transform");
      this._bindings.method_set_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2952846383
      );
    }
  }
  static init_method_get_transform() {
    if (!this._bindings.method_get_transform) {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("get_transform");
      this._bindings.method_get_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3229777777
      );
    }
  }
  static init_method_set_motion() {
    if (!this._bindings.method_set_motion) {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("set_motion");
      this._bindings.method_set_motion = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_motion() {
    if (!this._bindings.method_get_motion) {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("get_motion");
      this._bindings.method_get_motion = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_margin() {
    if (!this._bindings.method_set_margin) {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("set_margin");
      this._bindings.method_set_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_margin() {
    if (!this._bindings.method_get_margin) {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("get_margin");
      this._bindings.method_get_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_collision_mask() {
    if (!this._bindings.method_set_collision_mask) {
      let classname = new StringName("PhysicsShapeQueryParameters3D");
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
      let classname = new StringName("PhysicsShapeQueryParameters3D");
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
      let classname = new StringName("PhysicsShapeQueryParameters3D");
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
      let classname = new StringName("PhysicsShapeQueryParameters3D");
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
      let classname = new StringName("PhysicsShapeQueryParameters3D");
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
      let classname = new StringName("PhysicsShapeQueryParameters3D");
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
      let classname = new StringName("PhysicsShapeQueryParameters3D");
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
      let classname = new StringName("PhysicsShapeQueryParameters3D");
      let methodname = new StringName("is_collide_with_areas_enabled");
      this._bindings.method_is_collide_with_areas_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_shape(_shape) {
    PhysicsShapeQueryParameters3D.init_method_set_shape();
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters3D._bindings.method_set_shape,
      this._owner,
      _shape
    );
    
  }
  get_shape() {
    PhysicsShapeQueryParameters3D.init_method_get_shape();
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters3D._bindings.method_get_shape,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_shape_rid(_shape) {
    PhysicsShapeQueryParameters3D.init_method_set_shape_rid();
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters3D._bindings.method_set_shape_rid,
      this._owner,
      _shape
    );
    
  }
  get_shape_rid() {
    PhysicsShapeQueryParameters3D.init_method_get_shape_rid();
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters3D._bindings.method_get_shape_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_transform(_transform) {
    PhysicsShapeQueryParameters3D.init_method_set_transform();
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters3D._bindings.method_set_transform,
      this._owner,
      _transform
    );
    
  }
  get_transform() {
    PhysicsShapeQueryParameters3D.init_method_get_transform();
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters3D._bindings.method_get_transform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  set_motion(_motion) {
    PhysicsShapeQueryParameters3D.init_method_set_motion();
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters3D._bindings.method_set_motion,
      this._owner,
      _motion
    );
    
  }
  get_motion() {
    PhysicsShapeQueryParameters3D.init_method_get_motion();
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters3D._bindings.method_get_motion,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_margin(_margin) {
    PhysicsShapeQueryParameters3D.init_method_set_margin();
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters3D._bindings.method_set_margin,
      this._owner,
      _margin
    );
    
  }
  get_margin() {
    PhysicsShapeQueryParameters3D.init_method_get_margin();
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters3D._bindings.method_get_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_collision_mask(_collision_mask) {
    PhysicsShapeQueryParameters3D.init_method_set_collision_mask();
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters3D._bindings.method_set_collision_mask,
      this._owner,
      _collision_mask
    );
    
  }
  get_collision_mask() {
    PhysicsShapeQueryParameters3D.init_method_get_collision_mask();
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters3D._bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_exclude(_exclude) {
    PhysicsShapeQueryParameters3D.init_method_set_exclude();
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters3D._bindings.method_set_exclude,
      this._owner,
      _exclude
    );
    
  }
  get_exclude() {
    PhysicsShapeQueryParameters3D.init_method_get_exclude();
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters3D._bindings.method_get_exclude,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_collide_with_bodies(_enable) {
    PhysicsShapeQueryParameters3D.init_method_set_collide_with_bodies();
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters3D._bindings.method_set_collide_with_bodies,
      this._owner,
      _enable
    );
    
  }
  is_collide_with_bodies_enabled() {
    PhysicsShapeQueryParameters3D.init_method_is_collide_with_bodies_enabled();
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters3D._bindings.method_is_collide_with_bodies_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_collide_with_areas(_enable) {
    PhysicsShapeQueryParameters3D.init_method_set_collide_with_areas();
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters3D._bindings.method_set_collide_with_areas,
      this._owner,
      _enable
    );
    
  }
  is_collide_with_areas_enabled() {
    PhysicsShapeQueryParameters3D.init_method_is_collide_with_areas_enabled();
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters3D._bindings.method_is_collide_with_areas_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
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
get margin () {
  return this.get_margin();
}
set margin (new_value) {
  this.set_margin(new_value);
}
get motion () {
  return this.get_motion();
}
set motion (new_value) {
  this.set_motion(new_value);
}
get shape () {
  return this.get_shape();
}
set shape (new_value) {
  this.set_shape(new_value);
}
get shape_rid () {
  return this.get_shape_rid();
}
set shape_rid (new_value) {
  this.set_shape_rid(new_value);
}
get transform () {
  return this.get_transform();
}
set transform (new_value) {
  this.set_transform(new_value);
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