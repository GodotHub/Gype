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
  method_set_avoidance_enabled;
  method_get_avoidance_enabled;
  method_set_navigation_map;
  method_get_navigation_map;
  method_set_radius;
  method_get_radius;
  method_set_velocity;
  method_get_velocity;
  method_set_vertices;
  method_get_vertices;
  method_set_avoidance_layers;
  method_get_avoidance_layers;
  method_set_avoidance_layer_value;
  method_get_avoidance_layer_value;
  method_set_affect_navigation_mesh;
  method_get_affect_navigation_mesh;
  method_set_carve_navigation_mesh;
  method_get_carve_navigation_mesh;
}
@GodotClass
export class NavigationObstacle2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationObstacle2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_rid() {
    if (!this._bindings.method_get_rid) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_rid");
      this._bindings.method_get_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_set_avoidance_enabled() {
    if (!this._bindings.method_set_avoidance_enabled) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_avoidance_enabled");
      this._bindings.method_set_avoidance_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_avoidance_enabled() {
    if (!this._bindings.method_get_avoidance_enabled) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_avoidance_enabled");
      this._bindings.method_get_avoidance_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_navigation_map() {
    if (!this._bindings.method_set_navigation_map) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_navigation_map");
      this._bindings.method_set_navigation_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }
  static init_method_get_navigation_map() {
    if (!this._bindings.method_get_navigation_map) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_navigation_map");
      this._bindings.method_get_navigation_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_set_radius() {
    if (!this._bindings.method_set_radius) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_radius");
      this._bindings.method_set_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_radius() {
    if (!this._bindings.method_get_radius) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_radius");
      this._bindings.method_get_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_velocity() {
    if (!this._bindings.method_set_velocity) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_velocity");
      this._bindings.method_set_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_velocity() {
    if (!this._bindings.method_get_velocity) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_velocity");
      this._bindings.method_get_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_vertices() {
    if (!this._bindings.method_set_vertices) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_vertices");
      this._bindings.method_set_vertices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1509147220
      );
    }
  }
  static init_method_get_vertices() {
    if (!this._bindings.method_get_vertices) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_vertices");
      this._bindings.method_get_vertices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2961356807
      );
    }
  }
  static init_method_set_avoidance_layers() {
    if (!this._bindings.method_set_avoidance_layers) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_avoidance_layers");
      this._bindings.method_set_avoidance_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_avoidance_layers() {
    if (!this._bindings.method_get_avoidance_layers) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_avoidance_layers");
      this._bindings.method_get_avoidance_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_avoidance_layer_value() {
    if (!this._bindings.method_set_avoidance_layer_value) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_avoidance_layer_value");
      this._bindings.method_set_avoidance_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_avoidance_layer_value() {
    if (!this._bindings.method_get_avoidance_layer_value) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_avoidance_layer_value");
      this._bindings.method_get_avoidance_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_affect_navigation_mesh() {
    if (!this._bindings.method_set_affect_navigation_mesh) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_affect_navigation_mesh");
      this._bindings.method_set_affect_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_affect_navigation_mesh() {
    if (!this._bindings.method_get_affect_navigation_mesh) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_affect_navigation_mesh");
      this._bindings.method_get_affect_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_carve_navigation_mesh() {
    if (!this._bindings.method_set_carve_navigation_mesh) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_carve_navigation_mesh");
      this._bindings.method_set_carve_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_carve_navigation_mesh() {
    if (!this._bindings.method_get_carve_navigation_mesh) {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_carve_navigation_mesh");
      this._bindings.method_get_carve_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  get_rid() {
    NavigationObstacle2D.init_method_get_rid();
    return _call_native_mb_ret(
      NavigationObstacle2D._bindings.method_get_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_avoidance_enabled(_enabled) {
    NavigationObstacle2D.init_method_set_avoidance_enabled();
    return _call_native_mb_no_ret(
      NavigationObstacle2D._bindings.method_set_avoidance_enabled,
      this._owner,
      _enabled
    );
    
  }
  get_avoidance_enabled() {
    NavigationObstacle2D.init_method_get_avoidance_enabled();
    return _call_native_mb_ret(
      NavigationObstacle2D._bindings.method_get_avoidance_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_navigation_map(_navigation_map) {
    NavigationObstacle2D.init_method_set_navigation_map();
    return _call_native_mb_no_ret(
      NavigationObstacle2D._bindings.method_set_navigation_map,
      this._owner,
      _navigation_map
    );
    
  }
  get_navigation_map() {
    NavigationObstacle2D.init_method_get_navigation_map();
    return _call_native_mb_ret(
      NavigationObstacle2D._bindings.method_get_navigation_map,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_radius(_radius) {
    NavigationObstacle2D.init_method_set_radius();
    return _call_native_mb_no_ret(
      NavigationObstacle2D._bindings.method_set_radius,
      this._owner,
      _radius
    );
    
  }
  get_radius() {
    NavigationObstacle2D.init_method_get_radius();
    return _call_native_mb_ret(
      NavigationObstacle2D._bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_velocity(_velocity) {
    NavigationObstacle2D.init_method_set_velocity();
    return _call_native_mb_no_ret(
      NavigationObstacle2D._bindings.method_set_velocity,
      this._owner,
      _velocity
    );
    
  }
  get_velocity() {
    NavigationObstacle2D.init_method_get_velocity();
    return _call_native_mb_ret(
      NavigationObstacle2D._bindings.method_get_velocity,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_vertices(_vertices) {
    NavigationObstacle2D.init_method_set_vertices();
    return _call_native_mb_no_ret(
      NavigationObstacle2D._bindings.method_set_vertices,
      this._owner,
      _vertices
    );
    
  }
  get_vertices() {
    NavigationObstacle2D.init_method_get_vertices();
    return _call_native_mb_ret(
      NavigationObstacle2D._bindings.method_get_vertices,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      
    );
    
  }
  set_avoidance_layers(_layers) {
    NavigationObstacle2D.init_method_set_avoidance_layers();
    return _call_native_mb_no_ret(
      NavigationObstacle2D._bindings.method_set_avoidance_layers,
      this._owner,
      _layers
    );
    
  }
  get_avoidance_layers() {
    NavigationObstacle2D.init_method_get_avoidance_layers();
    return _call_native_mb_ret(
      NavigationObstacle2D._bindings.method_get_avoidance_layers,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_avoidance_layer_value(_layer_number, _value) {
    NavigationObstacle2D.init_method_set_avoidance_layer_value();
    return _call_native_mb_no_ret(
      NavigationObstacle2D._bindings.method_set_avoidance_layer_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_avoidance_layer_value(_layer_number) {
    NavigationObstacle2D.init_method_get_avoidance_layer_value();
    return _call_native_mb_ret(
      NavigationObstacle2D._bindings.method_get_avoidance_layer_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
    );
    
  }
  set_affect_navigation_mesh(_enabled) {
    NavigationObstacle2D.init_method_set_affect_navigation_mesh();
    return _call_native_mb_no_ret(
      NavigationObstacle2D._bindings.method_set_affect_navigation_mesh,
      this._owner,
      _enabled
    );
    
  }
  get_affect_navigation_mesh() {
    NavigationObstacle2D.init_method_get_affect_navigation_mesh();
    return _call_native_mb_ret(
      NavigationObstacle2D._bindings.method_get_affect_navigation_mesh,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_carve_navigation_mesh(_enabled) {
    NavigationObstacle2D.init_method_set_carve_navigation_mesh();
    return _call_native_mb_no_ret(
      NavigationObstacle2D._bindings.method_set_carve_navigation_mesh,
      this._owner,
      _enabled
    );
    
  }
  get_carve_navigation_mesh() {
    NavigationObstacle2D.init_method_get_carve_navigation_mesh();
    return _call_native_mb_ret(
      NavigationObstacle2D._bindings.method_get_carve_navigation_mesh,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get radius () {
  return this.get_radius();
}
set radius (new_value) {
  this.set_radius(new_value);
}
get vertices () {
  return this.get_vertices();
}
set vertices (new_value) {
  this.set_vertices(new_value);
}
get affect_navigation_mesh () {
  return this.get_affect_navigation_mesh();
}
set affect_navigation_mesh (new_value) {
  this.set_affect_navigation_mesh(new_value);
}
get carve_navigation_mesh () {
  return this.get_carve_navigation_mesh();
}
set carve_navigation_mesh (new_value) {
  this.set_carve_navigation_mesh(new_value);
}
get avoidance_enabled () {
  return this.get_avoidance_enabled();
}
set avoidance_enabled (new_value) {
  this.set_avoidance_enabled(new_value);
}
get velocity () {
  return this.get_velocity();
}
set velocity (new_value) {
  this.set_velocity(new_value);
}
get avoidance_layers () {
  return this.get_avoidance_layers();
}
set avoidance_layers (new_value) {
  this.set_avoidance_layers(new_value);
}

}