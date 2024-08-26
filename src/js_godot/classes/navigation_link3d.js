import * as internal from '__internal__';
import { Node3D } from 'src/js_godot/classesnode3d'
import { RID } from 'src/js_godot/variant/rid'
import { Vector3 } from 'src/js_godot/variant/vector3'
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


export class NavigationLink3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationLink3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("get_rid");
      this._bindings.method_get_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("set_enabled");
      this._bindings.method_set_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("is_enabled");
      this._bindings.method_is_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("set_bidirectional");
      this._bindings.method_set_bidirectional = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("is_bidirectional");
      this._bindings.method_is_bidirectional = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("set_navigation_layers");
      this._bindings.method_set_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("get_navigation_layers");
      this._bindings.method_get_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("set_navigation_layer_value");
      this._bindings.method_set_navigation_layer_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("get_navigation_layer_value");
      this._bindings.method_get_navigation_layer_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("set_start_position");
      this._bindings.method_set_start_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("get_start_position");
      this._bindings.method_get_start_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("set_end_position");
      this._bindings.method_set_end_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("get_end_position");
      this._bindings.method_get_end_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("set_global_start_position");
      this._bindings.method_set_global_start_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("get_global_start_position");
      this._bindings.method_get_global_start_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("set_global_end_position");
      this._bindings.method_set_global_end_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("get_global_end_position");
      this._bindings.method_get_global_end_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("set_enter_cost");
      this._bindings.method_set_enter_cost = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("get_enter_cost");
      this._bindings.method_get_enter_cost = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
      let methodname = new StringName("set_travel_cost");
      this._bindings.method_set_travel_cost = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationLink3D");
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
      ClassDB._bindings.method_get_rid,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  set_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enabled,
      this._owner,
      _enabled
    );
  }
  is_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_bidirectional(_bidirectional) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bidirectional,
      this._owner,
      _bidirectional
    );
  }
  is_bidirectional() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_bidirectional,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_navigation_layers(_navigation_layers) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_navigation_layers,
      this._owner,
      _navigation_layers
    );
  }
  get_navigation_layers() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_navigation_layers,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_navigation_layer_value(_layer_number, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_navigation_layer_value,
      this._owner,
      _layer_number, _value
    );
  }
  get_navigation_layer_value(_layer_number) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_navigation_layer_value,
      this._owner,
			Variant.Type.BOOL,
      _layer_number
    );
  }
  set_start_position(_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_start_position,
      this._owner,
      _position
    );
  }
  get_start_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_start_position,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_end_position(_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_end_position,
      this._owner,
      _position
    );
  }
  get_end_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_end_position,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_global_start_position(_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_global_start_position,
      this._owner,
      _position
    );
  }
  get_global_start_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_global_start_position,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_global_end_position(_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_global_end_position,
      this._owner,
      _position
    );
  }
  get_global_end_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_global_end_position,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_enter_cost(_enter_cost) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enter_cost,
      this._owner,
      _enter_cost
    );
  }
  get_enter_cost() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_enter_cost,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_travel_cost(_travel_cost) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_travel_cost,
      this._owner,
      _travel_cost
    );
  }
  get_travel_cost() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_travel_cost,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
}