import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { Callable } from 'src/js_godot/variant/callable'
import { Node } from 'src/js_godot/classesnode'
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


export class MultiplayerSynchronizer extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MultiplayerSynchronizer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("set_root_path");
      this._bindings.method_set_root_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("get_root_path");
      this._bindings.method_get_root_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("set_replication_interval");
      this._bindings.method_set_replication_interval = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("get_replication_interval");
      this._bindings.method_get_replication_interval = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("set_delta_interval");
      this._bindings.method_set_delta_interval = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("get_delta_interval");
      this._bindings.method_get_delta_interval = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("set_replication_config");
      this._bindings.method_set_replication_config = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3889206742
      );
    }
    {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("get_replication_config");
      this._bindings.method_get_replication_config = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3200254614
      );
    }
    {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("set_visibility_update_mode");
      this._bindings.method_set_visibility_update_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3494860300
      );
    }
    {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("get_visibility_update_mode");
      this._bindings.method_get_visibility_update_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3352241418
      );
    }
    {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("update_visibility");
      this._bindings.method_update_visibility = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1995695955
      );
    }
    {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("set_visibility_public");
      this._bindings.method_set_visibility_public = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("is_visibility_public");
      this._bindings.method_is_visibility_public = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("add_visibility_filter");
      this._bindings.method_add_visibility_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1611583062
      );
    }
    {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("remove_visibility_filter");
      this._bindings.method_remove_visibility_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1611583062
      );
    }
    {
      let classname = new StringName("MultiplayerSynchronizer");
      let methodname = new StringName("set_visibility_for");
      this._bindings.method_set_visibility_for = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_root_path,
      this._owner,
      _path
    );
  }
  get_root_path() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_root_path,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
  }
  set_replication_interval(_milliseconds) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_replication_interval,
      this._owner,
      _milliseconds
    );
  }
  get_replication_interval() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_replication_interval,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_delta_interval(_milliseconds) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_delta_interval,
      this._owner,
      _milliseconds
    );
  }
  get_delta_interval() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_delta_interval,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_replication_config(_config) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_replication_config,
      this._owner,
      _config
    );
  }
  get_replication_config() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_replication_config,
      this._owner,
			Variant.INT,
      
    );
  }
  set_visibility_update_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility_update_mode,
      this._owner,
      _mode
    );
  }
  get_visibility_update_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visibility_update_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  update_visibility(_for_peer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_update_visibility,
      this._owner,
      _for_peer
    );
  }
  set_visibility_public(_visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility_public,
      this._owner,
      _visible
    );
  }
  is_visibility_public() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_visibility_public,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  add_visibility_filter(_filter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_visibility_filter,
      this._owner,
      _filter
    );
  }
  remove_visibility_filter(_filter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_visibility_filter,
      this._owner,
      _filter
    );
  }
  set_visibility_for(_peer, _visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility_for,
      this._owner,
      _peer, _visible
    );
  }
  get_visibility_for(_peer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visibility_for,
      this._owner,
			Variant.Type.BOOL,
      _peer
    );
  }
  static VisibilityUpdateMode = {
    VISIBILITY_PROCESS_IDLE: 0,
    VISIBILITY_PROCESS_PHYSICS: 1,
    VISIBILITY_PROCESS_NONE: 2,
  }
}