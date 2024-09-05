import * as internal from '__internal__';
import { Node2D } from '@js_godot/classes/node2d'
import { StringName } from '@js_godot/variant/string_name'
import { RID } from '@js_godot/variant/rid'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_rid;
  method_set_navigation_polygon;
  method_get_navigation_polygon;
  method_set_enabled;
  method_is_enabled;
  method_set_navigation_map;
  method_get_navigation_map;
  method_set_use_edge_connections;
  method_get_use_edge_connections;
  method_set_navigation_layers;
  method_get_navigation_layers;
  method_set_navigation_layer_value;
  method_get_navigation_layer_value;
  method_get_region_rid;
  method_set_enter_cost;
  method_get_enter_cost;
  method_set_travel_cost;
  method_get_travel_cost;
  method_bake_navigation_polygon;
  method_is_baking;
}
export class NavigationRegion2D extends Node2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationRegion2D");
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
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("get_rid");
      this._bindings.method_get_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("set_navigation_polygon");
      this._bindings.method_set_navigation_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1515040758
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("get_navigation_polygon");
      this._bindings.method_get_navigation_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1046532237
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("set_enabled");
      this._bindings.method_set_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("is_enabled");
      this._bindings.method_is_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("set_navigation_map");
      this._bindings.method_set_navigation_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("get_navigation_map");
      this._bindings.method_get_navigation_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("set_use_edge_connections");
      this._bindings.method_set_use_edge_connections = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("get_use_edge_connections");
      this._bindings.method_get_use_edge_connections = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("set_navigation_layers");
      this._bindings.method_set_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("get_navigation_layers");
      this._bindings.method_get_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("set_navigation_layer_value");
      this._bindings.method_set_navigation_layer_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("get_navigation_layer_value");
      this._bindings.method_get_navigation_layer_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("get_region_rid");
      this._bindings.method_get_region_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("set_enter_cost");
      this._bindings.method_set_enter_cost = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("get_enter_cost");
      this._bindings.method_get_enter_cost = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("set_travel_cost");
      this._bindings.method_set_travel_cost = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("get_travel_cost");
      this._bindings.method_get_travel_cost = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("bake_navigation_polygon");
      this._bindings.method_bake_navigation_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3216645846
      );
    }
    {
      let classname = new StringName("NavigationRegion2D");
      let methodname = new StringName("is_baking");
      this._bindings.method_is_baking = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  
  get_rid() {
    return _call_native_mb_ret(
      NavigationRegion2D._bindings.method_get_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_navigation_polygon(_navigation_polygon) {
    return _call_native_mb_no_ret(
      NavigationRegion2D._bindings.method_set_navigation_polygon,
      this._owner,
      _navigation_polygon
    );
    
  }
  get_navigation_polygon() {
    return _call_native_mb_ret(
      NavigationRegion2D._bindings.method_get_navigation_polygon,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_enabled(_enabled) {
    return _call_native_mb_no_ret(
      NavigationRegion2D._bindings.method_set_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_enabled() {
    return _call_native_mb_ret(
      NavigationRegion2D._bindings.method_is_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_navigation_map(_navigation_map) {
    return _call_native_mb_no_ret(
      NavigationRegion2D._bindings.method_set_navigation_map,
      this._owner,
      _navigation_map
    );
    
  }
  get_navigation_map() {
    return _call_native_mb_ret(
      NavigationRegion2D._bindings.method_get_navigation_map,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_use_edge_connections(_enabled) {
    return _call_native_mb_no_ret(
      NavigationRegion2D._bindings.method_set_use_edge_connections,
      this._owner,
      _enabled
    );
    
  }
  get_use_edge_connections() {
    return _call_native_mb_ret(
      NavigationRegion2D._bindings.method_get_use_edge_connections,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_navigation_layers(_navigation_layers) {
    return _call_native_mb_no_ret(
      NavigationRegion2D._bindings.method_set_navigation_layers,
      this._owner,
      _navigation_layers
    );
    
  }
  get_navigation_layers() {
    return _call_native_mb_ret(
      NavigationRegion2D._bindings.method_get_navigation_layers,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_navigation_layer_value(_layer_number, _value) {
    return _call_native_mb_no_ret(
      NavigationRegion2D._bindings.method_set_navigation_layer_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_navigation_layer_value(_layer_number) {
    return _call_native_mb_ret(
      NavigationRegion2D._bindings.method_get_navigation_layer_value,
      this._owner,
			Variant.Type.BOOL,
      _layer_number
    );
    
  }
  get_region_rid() {
    return _call_native_mb_ret(
      NavigationRegion2D._bindings.method_get_region_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_enter_cost(_enter_cost) {
    return _call_native_mb_no_ret(
      NavigationRegion2D._bindings.method_set_enter_cost,
      this._owner,
      _enter_cost
    );
    
  }
  get_enter_cost() {
    return _call_native_mb_ret(
      NavigationRegion2D._bindings.method_get_enter_cost,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_travel_cost(_travel_cost) {
    return _call_native_mb_no_ret(
      NavigationRegion2D._bindings.method_set_travel_cost,
      this._owner,
      _travel_cost
    );
    
  }
  get_travel_cost() {
    return _call_native_mb_ret(
      NavigationRegion2D._bindings.method_get_travel_cost,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  bake_navigation_polygon(_on_thread) {
    return _call_native_mb_no_ret(
      NavigationRegion2D._bindings.method_bake_navigation_polygon,
      this._owner,
      _on_thread
    );
    
  }
  is_baking() {
    return _call_native_mb_ret(
      NavigationRegion2D._bindings.method_is_baking,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  
get navigation_polygon () {
  return this.get_navigation_polygon();
}
set navigation_polygon (new_value) {
  this.set_navigation_polygon(new_value);
}
get enabled () {
  return this.is_enabled();
}
set enabled (new_value) {
  this.set_enabled(new_value);
}
get use_edge_connections () {
  return this.get_use_edge_connections();
}
set use_edge_connections (new_value) {
  this.set_use_edge_connections(new_value);
}
get navigation_layers () {
  return this.get_navigation_layers();
}
set navigation_layers (new_value) {
  this.set_navigation_layers(new_value);
}
get enter_cost () {
  return this.get_enter_cost();
}
set enter_cost (new_value) {
  this.set_enter_cost(new_value);
}
get travel_cost () {
  return this.get_travel_cost();
}
set travel_cost (new_value) {
  this.set_travel_cost(new_value);
}


  static {
    this._init_bindings();
  }
}