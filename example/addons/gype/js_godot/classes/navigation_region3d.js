import * as internal from '__internal__';
import { Node3D } from '@js_godot/classes/node3d'
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
  method_get_rid;
  method_set_navigation_mesh;
  method_get_navigation_mesh;
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
  method_bake_navigation_mesh;
  method_is_baking;
}
@GodotClass
export class NavigationRegion3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationRegion3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_rid() {
    if (!this._bindings.method_get_rid) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("get_rid");
      this._bindings.method_get_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_set_navigation_mesh() {
    if (!this._bindings.method_set_navigation_mesh) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("set_navigation_mesh");
      this._bindings.method_set_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2923361153
      );
    }
  }
  static init_method_get_navigation_mesh() {
    if (!this._bindings.method_get_navigation_mesh) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("get_navigation_mesh");
      this._bindings.method_get_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1468720886
      );
    }
  }
  static init_method_set_enabled() {
    if (!this._bindings.method_set_enabled) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("set_enabled");
      this._bindings.method_set_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_enabled() {
    if (!this._bindings.method_is_enabled) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("is_enabled");
      this._bindings.method_is_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_navigation_map() {
    if (!this._bindings.method_set_navigation_map) {
      let classname = new StringName("NavigationRegion3D");
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
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("get_navigation_map");
      this._bindings.method_get_navigation_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_set_use_edge_connections() {
    if (!this._bindings.method_set_use_edge_connections) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("set_use_edge_connections");
      this._bindings.method_set_use_edge_connections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_use_edge_connections() {
    if (!this._bindings.method_get_use_edge_connections) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("get_use_edge_connections");
      this._bindings.method_get_use_edge_connections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_navigation_layers() {
    if (!this._bindings.method_set_navigation_layers) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("set_navigation_layers");
      this._bindings.method_set_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_navigation_layers() {
    if (!this._bindings.method_get_navigation_layers) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("get_navigation_layers");
      this._bindings.method_get_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_navigation_layer_value() {
    if (!this._bindings.method_set_navigation_layer_value) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("set_navigation_layer_value");
      this._bindings.method_set_navigation_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_navigation_layer_value() {
    if (!this._bindings.method_get_navigation_layer_value) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("get_navigation_layer_value");
      this._bindings.method_get_navigation_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_get_region_rid() {
    if (!this._bindings.method_get_region_rid) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("get_region_rid");
      this._bindings.method_get_region_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_set_enter_cost() {
    if (!this._bindings.method_set_enter_cost) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("set_enter_cost");
      this._bindings.method_set_enter_cost = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_enter_cost() {
    if (!this._bindings.method_get_enter_cost) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("get_enter_cost");
      this._bindings.method_get_enter_cost = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_travel_cost() {
    if (!this._bindings.method_set_travel_cost) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("set_travel_cost");
      this._bindings.method_set_travel_cost = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_travel_cost() {
    if (!this._bindings.method_get_travel_cost) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("get_travel_cost");
      this._bindings.method_get_travel_cost = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_bake_navigation_mesh() {
    if (!this._bindings.method_bake_navigation_mesh) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("bake_navigation_mesh");
      this._bindings.method_bake_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3216645846
      );
    }
  }
  static init_method_is_baking() {
    if (!this._bindings.method_is_baking) {
      let classname = new StringName("NavigationRegion3D");
      let methodname = new StringName("is_baking");
      this._bindings.method_is_baking = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  get_rid() {
    NavigationRegion3D.init_method_get_rid();
    return _call_native_mb_ret(
      NavigationRegion3D._bindings.method_get_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_navigation_mesh(_navigation_mesh) {
    NavigationRegion3D.init_method_set_navigation_mesh();
    return _call_native_mb_no_ret(
      NavigationRegion3D._bindings.method_set_navigation_mesh,
      this._owner,
      _navigation_mesh
    );
    
  }
  get_navigation_mesh() {
    NavigationRegion3D.init_method_get_navigation_mesh();
    return _call_native_mb_ret(
      NavigationRegion3D._bindings.method_get_navigation_mesh,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_enabled(_enabled) {
    NavigationRegion3D.init_method_set_enabled();
    return _call_native_mb_no_ret(
      NavigationRegion3D._bindings.method_set_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_enabled() {
    NavigationRegion3D.init_method_is_enabled();
    return _call_native_mb_ret(
      NavigationRegion3D._bindings.method_is_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_navigation_map(_navigation_map) {
    NavigationRegion3D.init_method_set_navigation_map();
    return _call_native_mb_no_ret(
      NavigationRegion3D._bindings.method_set_navigation_map,
      this._owner,
      _navigation_map
    );
    
  }
  get_navigation_map() {
    NavigationRegion3D.init_method_get_navigation_map();
    return _call_native_mb_ret(
      NavigationRegion3D._bindings.method_get_navigation_map,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_use_edge_connections(_enabled) {
    NavigationRegion3D.init_method_set_use_edge_connections();
    return _call_native_mb_no_ret(
      NavigationRegion3D._bindings.method_set_use_edge_connections,
      this._owner,
      _enabled
    );
    
  }
  get_use_edge_connections() {
    NavigationRegion3D.init_method_get_use_edge_connections();
    return _call_native_mb_ret(
      NavigationRegion3D._bindings.method_get_use_edge_connections,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_navigation_layers(_navigation_layers) {
    NavigationRegion3D.init_method_set_navigation_layers();
    return _call_native_mb_no_ret(
      NavigationRegion3D._bindings.method_set_navigation_layers,
      this._owner,
      _navigation_layers
    );
    
  }
  get_navigation_layers() {
    NavigationRegion3D.init_method_get_navigation_layers();
    return _call_native_mb_ret(
      NavigationRegion3D._bindings.method_get_navigation_layers,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_navigation_layer_value(_layer_number, _value) {
    NavigationRegion3D.init_method_set_navigation_layer_value();
    return _call_native_mb_no_ret(
      NavigationRegion3D._bindings.method_set_navigation_layer_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_navigation_layer_value(_layer_number) {
    NavigationRegion3D.init_method_get_navigation_layer_value();
    return _call_native_mb_ret(
      NavigationRegion3D._bindings.method_get_navigation_layer_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
    );
    
  }
  get_region_rid() {
    NavigationRegion3D.init_method_get_region_rid();
    return _call_native_mb_ret(
      NavigationRegion3D._bindings.method_get_region_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_enter_cost(_enter_cost) {
    NavigationRegion3D.init_method_set_enter_cost();
    return _call_native_mb_no_ret(
      NavigationRegion3D._bindings.method_set_enter_cost,
      this._owner,
      _enter_cost
    );
    
  }
  get_enter_cost() {
    NavigationRegion3D.init_method_get_enter_cost();
    return _call_native_mb_ret(
      NavigationRegion3D._bindings.method_get_enter_cost,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_travel_cost(_travel_cost) {
    NavigationRegion3D.init_method_set_travel_cost();
    return _call_native_mb_no_ret(
      NavigationRegion3D._bindings.method_set_travel_cost,
      this._owner,
      _travel_cost
    );
    
  }
  get_travel_cost() {
    NavigationRegion3D.init_method_get_travel_cost();
    return _call_native_mb_ret(
      NavigationRegion3D._bindings.method_get_travel_cost,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  bake_navigation_mesh(_on_thread) {
    NavigationRegion3D.init_method_bake_navigation_mesh();
    return _call_native_mb_no_ret(
      NavigationRegion3D._bindings.method_bake_navigation_mesh,
      this._owner,
      _on_thread
    );
    
  }
  is_baking() {
    NavigationRegion3D.init_method_is_baking();
    return _call_native_mb_ret(
      NavigationRegion3D._bindings.method_is_baking,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get navigation_mesh () {
  return this.get_navigation_mesh();
}
set navigation_mesh (new_value) {
  this.set_navigation_mesh(new_value);
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

}