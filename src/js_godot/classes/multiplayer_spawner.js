import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node } from '@js_godot/classes/node'
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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MultiplayerSpawner");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_spawnable_scene() {
    if (!this.#_bindings.method_add_spawnable_scene) {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("add_spawnable_scene");
      this.#_bindings.method_add_spawnable_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_spawnable_scene_count() {
    if (!this.#_bindings.method_get_spawnable_scene_count) {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("get_spawnable_scene_count");
      this.#_bindings.method_get_spawnable_scene_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_spawnable_scene() {
    if (!this.#_bindings.method_get_spawnable_scene) {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("get_spawnable_scene");
      this.#_bindings.method_get_spawnable_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_clear_spawnable_scenes() {
    if (!this.#_bindings.method_clear_spawnable_scenes) {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("clear_spawnable_scenes");
      this.#_bindings.method_clear_spawnable_scenes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_spawn() {
    if (!this.#_bindings.method_spawn) {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("spawn");
      this.#_bindings.method_spawn = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1991184589
      );
    }
  }
  static init_method_get_spawn_path() {
    if (!this.#_bindings.method_get_spawn_path) {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("get_spawn_path");
      this.#_bindings.method_get_spawn_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_spawn_path() {
    if (!this.#_bindings.method_set_spawn_path) {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("set_spawn_path");
      this.#_bindings.method_set_spawn_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_spawn_limit() {
    if (!this.#_bindings.method_get_spawn_limit) {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("get_spawn_limit");
      this.#_bindings.method_get_spawn_limit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_spawn_limit() {
    if (!this.#_bindings.method_set_spawn_limit) {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("set_spawn_limit");
      this.#_bindings.method_set_spawn_limit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_spawn_function() {
    if (!this.#_bindings.method_get_spawn_function) {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("get_spawn_function");
      this.#_bindings.method_get_spawn_function = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1307783378
      );
    }
  }
  static init_method_set_spawn_function() {
    if (!this.#_bindings.method_set_spawn_function) {
      let classname = new StringName("MultiplayerSpawner");
      let methodname = new StringName("set_spawn_function");
      this.#_bindings.method_set_spawn_function = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1611583062
      );
    }
  }

  
  
  add_spawnable_scene(_path) {
    MultiplayerSpawner.init_method_add_spawnable_scene();
    return _call_native_mb_no_ret(
      MultiplayerSpawner.#_bindings.method_add_spawnable_scene,
      this._owner,
      _path
    );
    
  }
  get_spawnable_scene_count() {
    MultiplayerSpawner.init_method_get_spawnable_scene_count();
    return _call_native_mb_ret(
      MultiplayerSpawner.#_bindings.method_get_spawnable_scene_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_spawnable_scene(_index) {
    MultiplayerSpawner.init_method_get_spawnable_scene();
    return _call_native_mb_ret(
      MultiplayerSpawner.#_bindings.method_get_spawnable_scene,
      this._owner,
			Variant.Type.STRING,
    
      _index
    );
    
  }
  clear_spawnable_scenes() {
    MultiplayerSpawner.init_method_clear_spawnable_scenes();
    return _call_native_mb_no_ret(
      MultiplayerSpawner.#_bindings.method_clear_spawnable_scenes,
      this._owner,
      
    );
    
  }
  spawn(_data) {
    MultiplayerSpawner.init_method_spawn();
    return _call_native_mb_ret(
      MultiplayerSpawner.#_bindings.method_spawn,
      this._owner,
			Variant.Type.OBJECT,
      _data
    );
    
  }
  get_spawn_path() {
    MultiplayerSpawner.init_method_get_spawn_path();
    return _call_native_mb_ret(
      MultiplayerSpawner.#_bindings.method_get_spawn_path,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_spawn_path(_path) {
    MultiplayerSpawner.init_method_set_spawn_path();
    return _call_native_mb_no_ret(
      MultiplayerSpawner.#_bindings.method_set_spawn_path,
      this._owner,
      _path
    );
    
  }
  get_spawn_limit() {
    MultiplayerSpawner.init_method_get_spawn_limit();
    return _call_native_mb_ret(
      MultiplayerSpawner.#_bindings.method_get_spawn_limit,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_spawn_limit(_limit) {
    MultiplayerSpawner.init_method_set_spawn_limit();
    return _call_native_mb_no_ret(
      MultiplayerSpawner.#_bindings.method_set_spawn_limit,
      this._owner,
      _limit
    );
    
  }
  get_spawn_function() {
    MultiplayerSpawner.init_method_get_spawn_function();
    return _call_native_mb_ret(
      MultiplayerSpawner.#_bindings.method_get_spawn_function,
      this._owner,
			Variant.Type.CALLABLE,
    
      
    );
    
  }
  set_spawn_function(_spawn_function) {
    MultiplayerSpawner.init_method_set_spawn_function();
    return _call_native_mb_no_ret(
      MultiplayerSpawner.#_bindings.method_set_spawn_function,
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

}