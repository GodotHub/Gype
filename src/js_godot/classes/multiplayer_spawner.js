import * as internal from '__internal__';
import { NodePath } from '@js_godot/variant/node_path'
import { Variant } from '@js_godot/variant/variant'
import { Node } from '@js_godot/classes/node'
import { Callable } from '@js_godot/variant/callable'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_add_spawnable_scene;
  method_get_spawnable_scene_count;
  method_get_spawnable_scene;
  method_clear_spawnable_scenes;
  method_spawn;
  method_get_spawn_path;
  method_set_spawn_path;
  method_get_spawn_limit;
  method_set_spawn_limit;
  method_get_spawn_function;
  method_set_spawn_function;
}
export class MultiplayerSpawner extends Node{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MultiplayerSpawner");
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
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("add_spawnable_scene");
      this._bindings.method_add_spawnable_scene = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("get_spawnable_scene_count");
      this._bindings.method_get_spawnable_scene_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("get_spawnable_scene");
      this._bindings.method_get_spawnable_scene = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("clear_spawnable_scenes");
      this._bindings.method_clear_spawnable_scenes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("spawn");
      this._bindings.method_spawn = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1991184589
      );
    }
    {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("get_spawn_path");
      this._bindings.method_get_spawn_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("set_spawn_path");
      this._bindings.method_set_spawn_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("get_spawn_limit");
      this._bindings.method_get_spawn_limit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("set_spawn_limit");
      this._bindings.method_set_spawn_limit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("get_spawn_function");
      this._bindings.method_get_spawn_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1307783378
      );
    }
    {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("set_spawn_function");
      this._bindings.method_set_spawn_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1611583062
      );
    }
  }
  
  add_spawnable_scene(_path) {
    return _call_native_mb_no_ret(
      MultiplayerSpawner._bindings.method_add_spawnable_scene,
      this._owner,
      _path
    );
    
  }
  get_spawnable_scene_count() {
    return _call_native_mb_ret(
      MultiplayerSpawner._bindings.method_get_spawnable_scene_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_spawnable_scene(_index) {
    return _call_native_mb_ret(
      MultiplayerSpawner._bindings.method_get_spawnable_scene,
      this._owner,
			Variant.Type.STRING,
    
      _index
    );
    
  }
  clear_spawnable_scenes() {
    return _call_native_mb_no_ret(
      MultiplayerSpawner._bindings.method_clear_spawnable_scenes,
      this._owner,
      
    );
    
  }
  spawn(_data) {
    return _call_native_mb_ret(
      MultiplayerSpawner._bindings.method_spawn,
      this._owner,
			Variant.INT,
      _data
    );
    
  }
  get_spawn_path() {
    return _call_native_mb_ret(
      MultiplayerSpawner._bindings.method_get_spawn_path,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_spawn_path(_path) {
    return _call_native_mb_no_ret(
      MultiplayerSpawner._bindings.method_set_spawn_path,
      this._owner,
      _path
    );
    
  }
  get_spawn_limit() {
    return _call_native_mb_ret(
      MultiplayerSpawner._bindings.method_get_spawn_limit,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_spawn_limit(_limit) {
    return _call_native_mb_no_ret(
      MultiplayerSpawner._bindings.method_set_spawn_limit,
      this._owner,
      _limit
    );
    
  }
  get_spawn_function() {
    return _call_native_mb_ret(
      MultiplayerSpawner._bindings.method_get_spawn_function,
      this._owner,
			Variant.Type.CALLABLE,
    
      
    );
    
  }
  set_spawn_function(_spawn_function) {
    return _call_native_mb_no_ret(
      MultiplayerSpawner._bindings.method_set_spawn_function,
      this._owner,
      _spawn_function
    );
    
  }
  
get spawn_path () {
  return this.get_spawn_path();
}
set spawn_path (new_value) {
  this.set_spawn_path(new_value);
}
get spawn_limit () {
  return this.get_spawn_limit();
}
set spawn_limit (new_value) {
  this.set_spawn_limit(new_value);
}
get spawn_function () {
  return this.get_spawn_function();
}
set spawn_function (new_value) {
  this.set_spawn_function(new_value);
}


  static {
    this._init_bindings();
  }
}