import * as internal from '__internal__';
import { Vector2 } from '@js_godot/variant/vector2'
import { StringName } from '@js_godot/variant/string_name'
import { RID } from '@js_godot/variant/rid'
import { Variant } from '@js_godot/variant/variant'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_rid;
  method_set_enabled;
  method_is_enabled;
  method_set_bidirectional;
  method_is_bidirectional;
  method_set_navigation_layers;
  method_get_navigation_layers;
  method_set_navigation_layer_value;
  method_get_navigation_layer_value;
  method_set_start_position;
  method_get_start_position;
  method_set_end_position;
  method_get_end_position;
  method_set_global_start_position;
  method_get_global_start_position;
  method_set_global_end_position;
  method_get_global_end_position;
  method_set_enter_cost;
  method_get_enter_cost;
  method_set_travel_cost;
  method_get_travel_cost;
}
export class NavigationLink2D extends Node2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationLink2D");
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
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("get_rid");
      this._bindings.method_get_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("set_enabled");
      this._bindings.method_set_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("is_enabled");
      this._bindings.method_is_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("set_bidirectional");
      this._bindings.method_set_bidirectional = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("is_bidirectional");
      this._bindings.method_is_bidirectional = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("set_navigation_layers");
      this._bindings.method_set_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("get_navigation_layers");
      this._bindings.method_get_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("set_navigation_layer_value");
      this._bindings.method_set_navigation_layer_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("get_navigation_layer_value");
      this._bindings.method_get_navigation_layer_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("set_start_position");
      this._bindings.method_set_start_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("get_start_position");
      this._bindings.method_get_start_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("set_end_position");
      this._bindings.method_set_end_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("get_end_position");
      this._bindings.method_get_end_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("set_global_start_position");
      this._bindings.method_set_global_start_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("get_global_start_position");
      this._bindings.method_get_global_start_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("set_global_end_position");
      this._bindings.method_set_global_end_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("get_global_end_position");
      this._bindings.method_get_global_end_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("set_enter_cost");
      this._bindings.method_set_enter_cost = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("get_enter_cost");
      this._bindings.method_get_enter_cost = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("set_travel_cost");
      this._bindings.method_set_travel_cost = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationLink2D");
      let methodname = new StringName("get_travel_cost");
      this._bindings.method_get_travel_cost = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  
  get_rid() {
    return _call_native_mb_ret(
      NavigationLink2D._bindings.method_get_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_enabled(_enabled) {
    return _call_native_mb_no_ret(
      NavigationLink2D._bindings.method_set_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_enabled() {
    return _call_native_mb_ret(
      NavigationLink2D._bindings.method_is_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_bidirectional(_bidirectional) {
    return _call_native_mb_no_ret(
      NavigationLink2D._bindings.method_set_bidirectional,
      this._owner,
      _bidirectional
    );
    
  }
  is_bidirectional() {
    return _call_native_mb_ret(
      NavigationLink2D._bindings.method_is_bidirectional,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_navigation_layers(_navigation_layers) {
    return _call_native_mb_no_ret(
      NavigationLink2D._bindings.method_set_navigation_layers,
      this._owner,
      _navigation_layers
    );
    
  }
  get_navigation_layers() {
    return _call_native_mb_ret(
      NavigationLink2D._bindings.method_get_navigation_layers,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_navigation_layer_value(_layer_number, _value) {
    return _call_native_mb_no_ret(
      NavigationLink2D._bindings.method_set_navigation_layer_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_navigation_layer_value(_layer_number) {
    return _call_native_mb_ret(
      NavigationLink2D._bindings.method_get_navigation_layer_value,
      this._owner,
			Variant.Type.BOOL,
      _layer_number
    );
    
  }
  set_start_position(_position) {
    return _call_native_mb_no_ret(
      NavigationLink2D._bindings.method_set_start_position,
      this._owner,
      _position
    );
    
  }
  get_start_position() {
    return _call_native_mb_ret(
      NavigationLink2D._bindings.method_get_start_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_end_position(_position) {
    return _call_native_mb_no_ret(
      NavigationLink2D._bindings.method_set_end_position,
      this._owner,
      _position
    );
    
  }
  get_end_position() {
    return _call_native_mb_ret(
      NavigationLink2D._bindings.method_get_end_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_global_start_position(_position) {
    return _call_native_mb_no_ret(
      NavigationLink2D._bindings.method_set_global_start_position,
      this._owner,
      _position
    );
    
  }
  get_global_start_position() {
    return _call_native_mb_ret(
      NavigationLink2D._bindings.method_get_global_start_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_global_end_position(_position) {
    return _call_native_mb_no_ret(
      NavigationLink2D._bindings.method_set_global_end_position,
      this._owner,
      _position
    );
    
  }
  get_global_end_position() {
    return _call_native_mb_ret(
      NavigationLink2D._bindings.method_get_global_end_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_enter_cost(_enter_cost) {
    return _call_native_mb_no_ret(
      NavigationLink2D._bindings.method_set_enter_cost,
      this._owner,
      _enter_cost
    );
    
  }
  get_enter_cost() {
    return _call_native_mb_ret(
      NavigationLink2D._bindings.method_get_enter_cost,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_travel_cost(_travel_cost) {
    return _call_native_mb_no_ret(
      NavigationLink2D._bindings.method_set_travel_cost,
      this._owner,
      _travel_cost
    );
    
  }
  get_travel_cost() {
    return _call_native_mb_ret(
      NavigationLink2D._bindings.method_get_travel_cost,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  
get enabled () {
  return this.is_enabled();
}
set enabled (new_value) {
  this.set_enabled(new_value);
}
get bidirectional () {
  return this.is_bidirectional();
}
set bidirectional (new_value) {
  this.set_bidirectional(new_value);
}
get navigation_layers () {
  return this.get_navigation_layers();
}
set navigation_layers (new_value) {
  this.set_navigation_layers(new_value);
}
get start_position () {
  return this.get_start_position();
}
set start_position (new_value) {
  this.set_start_position(new_value);
}
get end_position () {
  return this.get_end_position();
}
set end_position (new_value) {
  this.set_end_position(new_value);
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