import * as internal from '__internal__';
import { Vector2 } from '@js_godot/variant/vector2'
import { RID } from '@js_godot/variant/rid'
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { Variant } from '@js_godot/variant/variant'
import { Transform2D } from '@js_godot/variant/transform2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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
export class PhysicsShapeQueryParameters2D extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsShapeQueryParameters2D");
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
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("set_shape");
      this._bindings.method_set_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        968641751
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("get_shape");
      this._bindings.method_get_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        121922552
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("set_shape_rid");
      this._bindings.method_set_shape_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("get_shape_rid");
      this._bindings.method_get_shape_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("set_transform");
      this._bindings.method_set_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2761652528
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("get_transform");
      this._bindings.method_get_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3814499831
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("set_motion");
      this._bindings.method_set_motion = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("get_motion");
      this._bindings.method_get_motion = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("set_margin");
      this._bindings.method_set_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("get_margin");
      this._bindings.method_get_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("set_collision_mask");
      this._bindings.method_set_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("get_collision_mask");
      this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("set_exclude");
      this._bindings.method_set_exclude = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("get_exclude");
      this._bindings.method_get_exclude = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("set_collide_with_bodies");
      this._bindings.method_set_collide_with_bodies = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("is_collide_with_bodies_enabled");
      this._bindings.method_is_collide_with_bodies_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("set_collide_with_areas");
      this._bindings.method_set_collide_with_areas = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PhysicsShapeQueryParameters2D");
      let methodname = new StringName("is_collide_with_areas_enabled");
      this._bindings.method_is_collide_with_areas_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  
  set_shape(_shape) {
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters2D._bindings.method_set_shape,
      this._owner,
      _shape
    );
    
  }
  get_shape() {
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters2D._bindings.method_get_shape,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_shape_rid(_shape) {
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters2D._bindings.method_set_shape_rid,
      this._owner,
      _shape
    );
    
  }
  get_shape_rid() {
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters2D._bindings.method_get_shape_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_transform(_transform) {
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters2D._bindings.method_set_transform,
      this._owner,
      _transform
    );
    
  }
  get_transform() {
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters2D._bindings.method_get_transform,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      
    );
    
  }
  set_motion(_motion) {
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters2D._bindings.method_set_motion,
      this._owner,
      _motion
    );
    
  }
  get_motion() {
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters2D._bindings.method_get_motion,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_margin(_margin) {
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters2D._bindings.method_set_margin,
      this._owner,
      _margin
    );
    
  }
  get_margin() {
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters2D._bindings.method_get_margin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_collision_mask(_collision_mask) {
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters2D._bindings.method_set_collision_mask,
      this._owner,
      _collision_mask
    );
    
  }
  get_collision_mask() {
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters2D._bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_exclude(_exclude) {
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters2D._bindings.method_set_exclude,
      this._owner,
      _exclude
    );
    
  }
  get_exclude() {
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters2D._bindings.method_get_exclude,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_collide_with_bodies(_enable) {
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters2D._bindings.method_set_collide_with_bodies,
      this._owner,
      _enable
    );
    
  }
  is_collide_with_bodies_enabled() {
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters2D._bindings.method_is_collide_with_bodies_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_collide_with_areas(_enable) {
    return _call_native_mb_no_ret(
      PhysicsShapeQueryParameters2D._bindings.method_set_collide_with_areas,
      this._owner,
      _enable
    );
    
  }
  is_collide_with_areas_enabled() {
    return _call_native_mb_ret(
      PhysicsShapeQueryParameters2D._bindings.method_is_collide_with_areas_enabled,
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


  static {
    this._init_bindings();
  }
}