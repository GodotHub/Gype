import * as internal from '__internal__';
import { RID } from 'src/js_godot/variant/rid'
import { Resource } from 'src/js_godot/classes/resource'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_canvas;
    method_get_space;
    method_get_navigation_map;
    method_get_direct_space_state;
}


export class World2D extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("World2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("World2D");
        let methodname = new StringName("get_canvas");
        this._bindings.method_get_canvas = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2944877500
        );
      }
      {
        let classname = new StringName("World2D");
        let methodname = new StringName("get_space");
        this._bindings.method_get_space = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2944877500
        );
      }
      {
        let classname = new StringName("World2D");
        let methodname = new StringName("get_navigation_map");
        this._bindings.method_get_navigation_map = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2944877500
        );
      }
      {
        let classname = new StringName("World2D");
        let methodname = new StringName("get_direct_space_state");
        this._bindings.method_get_direct_space_state = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2506717822
        );
      }
  }
  get_canvas() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_canvas,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  get_space() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_space,
      this._owner,
			Variant.Type.RID
    ,
      
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
  get_direct_space_state() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_direct_space_state,
      this._owner,
			Variant.INT,
      
    );
    
  }
}