import * as internal from '__internal__';
import { Node2D } from 'src/js_godot/classesnode2d'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { RID } from 'src/js_godot/variant/rid'
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


export class NavigationObstacle2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationObstacle2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_rid");
      this._bindings.method_get_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_avoidance_enabled");
      this._bindings.method_set_avoidance_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_avoidance_enabled");
      this._bindings.method_get_avoidance_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_navigation_map");
      this._bindings.method_set_navigation_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_navigation_map");
      this._bindings.method_get_navigation_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_radius");
      this._bindings.method_set_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_radius");
      this._bindings.method_get_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_velocity");
      this._bindings.method_set_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_velocity");
      this._bindings.method_get_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_vertices");
      this._bindings.method_set_vertices = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1509147220
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_vertices");
      this._bindings.method_get_vertices = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2961356807
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_avoidance_layers");
      this._bindings.method_set_avoidance_layers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_avoidance_layers");
      this._bindings.method_get_avoidance_layers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_avoidance_layer_value");
      this._bindings.method_set_avoidance_layer_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_avoidance_layer_value");
      this._bindings.method_get_avoidance_layer_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_affect_navigation_mesh");
      this._bindings.method_set_affect_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("get_affect_navigation_mesh");
      this._bindings.method_get_affect_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("NavigationObstacle2D");
      let methodname = new StringName("set_carve_navigation_mesh");
      this._bindings.method_set_carve_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rid,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  set_avoidance_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_avoidance_enabled,
      this._owner,
      _enabled
    );
  }
  get_avoidance_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_avoidance_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_navigation_map(_navigation_map) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_navigation_map,
      this._owner,
      _navigation_map
    );
  }
  get_navigation_map() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_navigation_map,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  set_radius(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_radius,
      this._owner,
      _radius
    );
  }
  get_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_velocity(_velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_velocity,
      this._owner,
      _velocity
    );
  }
  get_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_velocity,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_vertices(_vertices) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertices,
      this._owner,
      _vertices
    );
  }
  get_vertices() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertices,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      
    );
  }
  set_avoidance_layers(_layers) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_avoidance_layers,
      this._owner,
      _layers
    );
  }
  get_avoidance_layers() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_avoidance_layers,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_avoidance_layer_value(_layer_number, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_avoidance_layer_value,
      this._owner,
      _layer_number, _value
    );
  }
  get_avoidance_layer_value(_layer_number) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_avoidance_layer_value,
      this._owner,
			Variant.Type.BOOL,
      _layer_number
    );
  }
  set_affect_navigation_mesh(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_affect_navigation_mesh,
      this._owner,
      _enabled
    );
  }
  get_affect_navigation_mesh() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_affect_navigation_mesh,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_carve_navigation_mesh(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_carve_navigation_mesh,
      this._owner,
      _enabled
    );
  }
  get_carve_navigation_mesh() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_carve_navigation_mesh,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}