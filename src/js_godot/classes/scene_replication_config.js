import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_properties;
  method_add_property;
  method_has_property;
  method_remove_property;
  method_property_get_index;
  method_property_get_spawn;
  method_property_set_spawn;
  method_property_get_replication_mode;
  method_property_set_replication_mode;
  method_property_get_sync;
  method_property_set_sync;
  method_property_get_watch;
  method_property_set_watch;
}
export class SceneReplicationConfig extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("SceneReplicationConfig");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_properties() {
    if (!this.#_bindings.method_get_properties) {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("get_properties");
      this.#_bindings.method_get_properties = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_add_property() {
    if (!this.#_bindings.method_add_property) {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("add_property");
      this.#_bindings.method_add_property = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4094619021
      );
    }
  }
  static init_method_has_property() {
    if (!this.#_bindings.method_has_property) {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("has_property");
      this.#_bindings.method_has_property = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        861721659
      );
    }
  }
  static init_method_remove_property() {
    if (!this.#_bindings.method_remove_property) {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("remove_property");
      this.#_bindings.method_remove_property = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_property_get_index() {
    if (!this.#_bindings.method_property_get_index) {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_get_index");
      this.#_bindings.method_property_get_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1382022557
      );
    }
  }
  static init_method_property_get_spawn() {
    if (!this.#_bindings.method_property_get_spawn) {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_get_spawn");
      this.#_bindings.method_property_get_spawn = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3456846888
      );
    }
  }
  static init_method_property_set_spawn() {
    if (!this.#_bindings.method_property_set_spawn) {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_set_spawn");
      this.#_bindings.method_property_set_spawn = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3868023870
      );
    }
  }
  static init_method_property_get_replication_mode() {
    if (!this.#_bindings.method_property_get_replication_mode) {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_get_replication_mode");
      this.#_bindings.method_property_get_replication_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2870606336
      );
    }
  }
  static init_method_property_set_replication_mode() {
    if (!this.#_bindings.method_property_set_replication_mode) {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_set_replication_mode");
      this.#_bindings.method_property_set_replication_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3200083865
      );
    }
  }
  static init_method_property_get_sync() {
    if (!this.#_bindings.method_property_get_sync) {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_get_sync");
      this.#_bindings.method_property_get_sync = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3456846888
      );
    }
  }
  static init_method_property_set_sync() {
    if (!this.#_bindings.method_property_set_sync) {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_set_sync");
      this.#_bindings.method_property_set_sync = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3868023870
      );
    }
  }
  static init_method_property_get_watch() {
    if (!this.#_bindings.method_property_get_watch) {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_get_watch");
      this.#_bindings.method_property_get_watch = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3456846888
      );
    }
  }
  static init_method_property_set_watch() {
    if (!this.#_bindings.method_property_set_watch) {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_set_watch");
      this.#_bindings.method_property_set_watch = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3868023870
      );
    }
  }

  
  
  get_properties() {
    SceneReplicationConfig.init_method_get_properties();
    return _call_native_mb_ret(
      SceneReplicationConfig.#_bindings.method_get_properties,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  add_property(_path, _index) {
    SceneReplicationConfig.init_method_add_property();
    return _call_native_mb_no_ret(
      SceneReplicationConfig.#_bindings.method_add_property,
      this._owner,
      _path, _index
    );
    
  }
  has_property(_path) {
    SceneReplicationConfig.init_method_has_property();
    return _call_native_mb_ret(
      SceneReplicationConfig.#_bindings.method_has_property,
      this._owner,
			Variant.Type.BOOL,
    
      _path
    );
    
  }
  remove_property(_path) {
    SceneReplicationConfig.init_method_remove_property();
    return _call_native_mb_no_ret(
      SceneReplicationConfig.#_bindings.method_remove_property,
      this._owner,
      _path
    );
    
  }
  property_get_index(_path) {
    SceneReplicationConfig.init_method_property_get_index();
    return _call_native_mb_ret(
      SceneReplicationConfig.#_bindings.method_property_get_index,
      this._owner,
			Variant.Type.INT,
    
      _path
    );
    
  }
  property_get_spawn(_path) {
    SceneReplicationConfig.init_method_property_get_spawn();
    return _call_native_mb_ret(
      SceneReplicationConfig.#_bindings.method_property_get_spawn,
      this._owner,
			Variant.Type.BOOL,
    
      _path
    );
    
  }
  property_set_spawn(_path, _enabled) {
    SceneReplicationConfig.init_method_property_set_spawn();
    return _call_native_mb_no_ret(
      SceneReplicationConfig.#_bindings.method_property_set_spawn,
      this._owner,
      _path, _enabled
    );
    
  }
  property_get_replication_mode(_path) {
    SceneReplicationConfig.init_method_property_get_replication_mode();
    return _call_native_mb_ret(
      SceneReplicationConfig.#_bindings.method_property_get_replication_mode,
      this._owner,
			Variant.Type.INT,
    
      _path
    );
    
  }
  property_set_replication_mode(_path, _mode) {
    SceneReplicationConfig.init_method_property_set_replication_mode();
    return _call_native_mb_no_ret(
      SceneReplicationConfig.#_bindings.method_property_set_replication_mode,
      this._owner,
      _path, _mode
    );
    
  }
  property_get_sync(_path) {
    SceneReplicationConfig.init_method_property_get_sync();
    return _call_native_mb_ret(
      SceneReplicationConfig.#_bindings.method_property_get_sync,
      this._owner,
			Variant.Type.BOOL,
    
      _path
    );
    
  }
  property_set_sync(_path, _enabled) {
    SceneReplicationConfig.init_method_property_set_sync();
    return _call_native_mb_no_ret(
      SceneReplicationConfig.#_bindings.method_property_set_sync,
      this._owner,
      _path, _enabled
    );
    
  }
  property_get_watch(_path) {
    SceneReplicationConfig.init_method_property_get_watch();
    return _call_native_mb_ret(
      SceneReplicationConfig.#_bindings.method_property_get_watch,
      this._owner,
			Variant.Type.BOOL,
    
      _path
    );
    
  }
  property_set_watch(_path, _enabled) {
    SceneReplicationConfig.init_method_property_set_watch();
    return _call_native_mb_no_ret(
      SceneReplicationConfig.#_bindings.method_property_set_watch,
      this._owner,
      _path, _enabled
    );
    
  }
  

  static ReplicationMode = {
    REPLICATION_MODE_NEVER: 0,
    REPLICATION_MODE_ALWAYS: 1,
    REPLICATION_MODE_ON_CHANGE: 2,
  }
}