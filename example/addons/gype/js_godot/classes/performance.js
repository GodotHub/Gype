import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Callable } from '@js_godot/variant/callable'
import { GodotObject } from '@js_godot/classes/godot_object'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_monitor;
  method_add_custom_monitor;
  method_remove_custom_monitor;
  method_has_custom_monitor;
  method_get_custom_monitor;
  method_get_monitor_modification_time;
  method_get_custom_monitor_names;
}class _Performance extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Performance");
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
      let classname = new StringName("Performance");
      let methodname = new StringName("get_monitor");
      this._bindings.method_get_monitor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1943275655
      );
    }
    {
      let classname = new StringName("Performance");
      let methodname = new StringName("add_custom_monitor");
      this._bindings.method_add_custom_monitor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4099036814
      );
    }
    {
      let classname = new StringName("Performance");
      let methodname = new StringName("remove_custom_monitor");
      this._bindings.method_remove_custom_monitor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Performance");
      let methodname = new StringName("has_custom_monitor");
      this._bindings.method_has_custom_monitor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2041966384
      );
    }
    {
      let classname = new StringName("Performance");
      let methodname = new StringName("get_custom_monitor");
      this._bindings.method_get_custom_monitor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2138907829
      );
    }
    {
      let classname = new StringName("Performance");
      let methodname = new StringName("get_monitor_modification_time");
      this._bindings.method_get_monitor_modification_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("Performance");
      let methodname = new StringName("get_custom_monitor_names");
      this._bindings.method_get_custom_monitor_names = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2915620761
      );
    }
  }
  get_monitor(_monitor) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_monitor,
      this._owner,
			Variant.Type.FLOAT,
      _monitor
    );
    
  }
  add_custom_monitor(_id, _callable, _arguments) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_custom_monitor,
      this._owner,
      _id, _callable, _arguments
    );
    
  }
  remove_custom_monitor(_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_custom_monitor,
      this._owner,
      _id
    );
    
  }
  has_custom_monitor(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_custom_monitor,
      this._owner,
			Variant.Type.BOOL,
      _id
    );
    
  }
  get_custom_monitor(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_custom_monitor,
      this._owner,
			Variant.Type.VARIANT,
    
      _id
    );
    
  }
  get_monitor_modification_time() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_monitor_modification_time,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_custom_monitor_names() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_custom_monitor_names,
      this._owner,
			Variant.INT,
      
    );
    
  }
  

  static Monitor = {
    TIME_FPS: 0,
    TIME_PROCESS: 1,
    TIME_PHYSICS_PROCESS: 2,
    TIME_NAVIGATION_PROCESS: 3,
    MEMORY_STATIC: 4,
    MEMORY_STATIC_MAX: 5,
    MEMORY_MESSAGE_BUFFER_MAX: 6,
    OBJECT_COUNT: 7,
    OBJECT_RESOURCE_COUNT: 8,
    OBJECT_NODE_COUNT: 9,
    OBJECT_ORPHAN_NODE_COUNT: 10,
    RENDER_TOTAL_OBJECTS_IN_FRAME: 11,
    RENDER_TOTAL_PRIMITIVES_IN_FRAME: 12,
    RENDER_TOTAL_DRAW_CALLS_IN_FRAME: 13,
    RENDER_VIDEO_MEM_USED: 14,
    RENDER_TEXTURE_MEM_USED: 15,
    RENDER_BUFFER_MEM_USED: 16,
    PHYSICS_2D_ACTIVE_OBJECTS: 17,
    PHYSICS_2D_COLLISION_PAIRS: 18,
    PHYSICS_2D_ISLAND_COUNT: 19,
    PHYSICS_3D_ACTIVE_OBJECTS: 20,
    PHYSICS_3D_COLLISION_PAIRS: 21,
    PHYSICS_3D_ISLAND_COUNT: 22,
    AUDIO_OUTPUT_LATENCY: 23,
    NAVIGATION_ACTIVE_MAPS: 24,
    NAVIGATION_REGION_COUNT: 25,
    NAVIGATION_AGENT_COUNT: 26,
    NAVIGATION_LINK_COUNT: 27,
    NAVIGATION_POLYGON_COUNT: 28,
    NAVIGATION_EDGE_COUNT: 29,
    NAVIGATION_EDGE_MERGE_COUNT: 30,
    NAVIGATION_EDGE_CONNECTION_COUNT: 31,
    NAVIGATION_EDGE_FREE_COUNT: 32,
    MONITOR_MAX: 33,
  }

  static {
    this._init_bindings();
  }
}
export const Performance = new _Performance();