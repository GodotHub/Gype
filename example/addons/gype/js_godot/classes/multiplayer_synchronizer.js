import * as internal from '__internal__';
import { Node } from '@js_godot/classes/node'
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
  method_set_root_path;
  method_get_root_path;
  method_set_replication_interval;
  method_get_replication_interval;
  method_set_delta_interval;
  method_get_delta_interval;
  method_set_replication_config;
  method_get_replication_config;
  method_set_visibility_update_mode;
  method_get_visibility_update_mode;
  method_update_visibility;
  method_set_visibility_public;
  method_is_visibility_public;
  method_add_visibility_filter;
  method_remove_visibility_filter;
  method_set_visibility_for;
  method_get_visibility_for;
}
@GodotClass
export class MultiplayerSynchronizer extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MultiplayerSynchronizer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_root_path() {
    if (!this._bindings.method_set_root_path) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("set_root_path");
      this._bindings.method_set_root_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_root_path() {
    if (!this._bindings.method_get_root_path) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("get_root_path");
      this._bindings.method_get_root_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_replication_interval() {
    if (!this._bindings.method_set_replication_interval) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("set_replication_interval");
      this._bindings.method_set_replication_interval = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_replication_interval() {
    if (!this._bindings.method_get_replication_interval) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("get_replication_interval");
      this._bindings.method_get_replication_interval = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_delta_interval() {
    if (!this._bindings.method_set_delta_interval) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("set_delta_interval");
      this._bindings.method_set_delta_interval = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_delta_interval() {
    if (!this._bindings.method_get_delta_interval) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("get_delta_interval");
      this._bindings.method_get_delta_interval = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_replication_config() {
    if (!this._bindings.method_set_replication_config) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("set_replication_config");
      this._bindings.method_set_replication_config = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3889206742
      );
    }
  }
  static init_method_get_replication_config() {
    if (!this._bindings.method_get_replication_config) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("get_replication_config");
      this._bindings.method_get_replication_config = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3200254614
      );
    }
  }
  static init_method_set_visibility_update_mode() {
    if (!this._bindings.method_set_visibility_update_mode) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("set_visibility_update_mode");
      this._bindings.method_set_visibility_update_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3494860300
      );
    }
  }
  static init_method_get_visibility_update_mode() {
    if (!this._bindings.method_get_visibility_update_mode) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("get_visibility_update_mode");
      this._bindings.method_get_visibility_update_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3352241418
      );
    }
  }
  static init_method_update_visibility() {
    if (!this._bindings.method_update_visibility) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("update_visibility");
      this._bindings.method_update_visibility = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1995695955
      );
    }
  }
  static init_method_set_visibility_public() {
    if (!this._bindings.method_set_visibility_public) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("set_visibility_public");
      this._bindings.method_set_visibility_public = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_visibility_public() {
    if (!this._bindings.method_is_visibility_public) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("is_visibility_public");
      this._bindings.method_is_visibility_public = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_add_visibility_filter() {
    if (!this._bindings.method_add_visibility_filter) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("add_visibility_filter");
      this._bindings.method_add_visibility_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1611583062
      );
    }
  }
  static init_method_remove_visibility_filter() {
    if (!this._bindings.method_remove_visibility_filter) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("remove_visibility_filter");
      this._bindings.method_remove_visibility_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1611583062
      );
    }
  }
  static init_method_set_visibility_for() {
    if (!this._bindings.method_set_visibility_for) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("set_visibility_for");
      this._bindings.method_set_visibility_for = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_visibility_for() {
    if (!this._bindings.method_get_visibility_for) {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("get_visibility_for");
      this._bindings.method_get_visibility_for = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }

  
  
  set_root_path(_path) {
    MultiplayerSynchronizer.init_method_set_root_path();
    return _call_native_mb_no_ret(
      MultiplayerSynchronizer._bindings.method_set_root_path,
      this._owner,
      _path
    );
    
  }
  get_root_path() {
    MultiplayerSynchronizer.init_method_get_root_path();
    return _call_native_mb_ret(
      MultiplayerSynchronizer._bindings.method_get_root_path,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_replication_interval(_milliseconds) {
    MultiplayerSynchronizer.init_method_set_replication_interval();
    return _call_native_mb_no_ret(
      MultiplayerSynchronizer._bindings.method_set_replication_interval,
      this._owner,
      _milliseconds
    );
    
  }
  get_replication_interval() {
    MultiplayerSynchronizer.init_method_get_replication_interval();
    return _call_native_mb_ret(
      MultiplayerSynchronizer._bindings.method_get_replication_interval,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_delta_interval(_milliseconds) {
    MultiplayerSynchronizer.init_method_set_delta_interval();
    return _call_native_mb_no_ret(
      MultiplayerSynchronizer._bindings.method_set_delta_interval,
      this._owner,
      _milliseconds
    );
    
  }
  get_delta_interval() {
    MultiplayerSynchronizer.init_method_get_delta_interval();
    return _call_native_mb_ret(
      MultiplayerSynchronizer._bindings.method_get_delta_interval,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_replication_config(_config) {
    MultiplayerSynchronizer.init_method_set_replication_config();
    return _call_native_mb_no_ret(
      MultiplayerSynchronizer._bindings.method_set_replication_config,
      this._owner,
      _config
    );
    
  }
  get_replication_config() {
    MultiplayerSynchronizer.init_method_get_replication_config();
    return _call_native_mb_ret(
      MultiplayerSynchronizer._bindings.method_get_replication_config,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_visibility_update_mode(_mode) {
    MultiplayerSynchronizer.init_method_set_visibility_update_mode();
    return _call_native_mb_no_ret(
      MultiplayerSynchronizer._bindings.method_set_visibility_update_mode,
      this._owner,
      _mode
    );
    
  }
  get_visibility_update_mode() {
    MultiplayerSynchronizer.init_method_get_visibility_update_mode();
    return _call_native_mb_ret(
      MultiplayerSynchronizer._bindings.method_get_visibility_update_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  update_visibility(_for_peer) {
    MultiplayerSynchronizer.init_method_update_visibility();
    return _call_native_mb_no_ret(
      MultiplayerSynchronizer._bindings.method_update_visibility,
      this._owner,
      _for_peer
    );
    
  }
  set_visibility_public(_visible) {
    MultiplayerSynchronizer.init_method_set_visibility_public();
    return _call_native_mb_no_ret(
      MultiplayerSynchronizer._bindings.method_set_visibility_public,
      this._owner,
      _visible
    );
    
  }
  is_visibility_public() {
    MultiplayerSynchronizer.init_method_is_visibility_public();
    return _call_native_mb_ret(
      MultiplayerSynchronizer._bindings.method_is_visibility_public,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  add_visibility_filter(_filter) {
    MultiplayerSynchronizer.init_method_add_visibility_filter();
    return _call_native_mb_no_ret(
      MultiplayerSynchronizer._bindings.method_add_visibility_filter,
      this._owner,
      _filter
    );
    
  }
  remove_visibility_filter(_filter) {
    MultiplayerSynchronizer.init_method_remove_visibility_filter();
    return _call_native_mb_no_ret(
      MultiplayerSynchronizer._bindings.method_remove_visibility_filter,
      this._owner,
      _filter
    );
    
  }
  set_visibility_for(_peer, _visible) {
    MultiplayerSynchronizer.init_method_set_visibility_for();
    return _call_native_mb_no_ret(
      MultiplayerSynchronizer._bindings.method_set_visibility_for,
      this._owner,
      _peer, _visible
    );
    
  }
  get_visibility_for(_peer) {
    MultiplayerSynchronizer.init_method_get_visibility_for();
    return _call_native_mb_ret(
      MultiplayerSynchronizer._bindings.method_get_visibility_for,
      this._owner,
			Variant.Type.BOOL,
    
      _peer
    );
    
  }
  
get root_path () {
  return this.get_root_path();
}
set root_path (new_value) {
  this.set_root_path(new_value);
}
get replication_interval () {
  return this.get_replication_interval();
}
set replication_interval (new_value) {
  this.set_replication_interval(new_value);
}
get delta_interval () {
  return this.get_delta_interval();
}
set delta_interval (new_value) {
  this.set_delta_interval(new_value);
}
get replication_config () {
  return this.get_replication_config();
}
set replication_config (new_value) {
  this.set_replication_config(new_value);
}
get visibility_update_mode () {
  return this.get_visibility_update_mode();
}
set visibility_update_mode (new_value) {
  this.set_visibility_update_mode(new_value);
}
get public_visibility () {
  return this.is_visibility_public();
}
set public_visibility (new_value) {
  this.set_visibility_public(new_value);
}

  static VisibilityUpdateMode = {
    VISIBILITY_PROCESS_IDLE: 0,
    VISIBILITY_PROCESS_PHYSICS: 1,
    VISIBILITY_PROCESS_NONE: 2,
  }
}