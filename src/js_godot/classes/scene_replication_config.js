import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { NodePath } from 'src/js_godot/variant/node_path'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SceneReplicationConfig");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("get_properties");
      this._bindings.method_get_properties = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("add_property");
      this._bindings.method_add_property = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4094619021
      );
    }
    {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("has_property");
      this._bindings.method_has_property = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        861721659
      );
    }
    {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("remove_property");
      this._bindings.method_remove_property = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_get_index");
      this._bindings.method_property_get_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1382022557
      );
    }
    {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_get_spawn");
      this._bindings.method_property_get_spawn = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3456846888
      );
    }
    {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_set_spawn");
      this._bindings.method_property_set_spawn = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3868023870
      );
    }
    {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_get_replication_mode");
      this._bindings.method_property_get_replication_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2870606336
      );
    }
    {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_set_replication_mode");
      this._bindings.method_property_set_replication_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3200083865
      );
    }
    {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_get_sync");
      this._bindings.method_property_get_sync = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3456846888
      );
    }
    {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_set_sync");
      this._bindings.method_property_set_sync = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3868023870
      );
    }
    {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_get_watch");
      this._bindings.method_property_get_watch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3456846888
      );
    }
    {
      let classname = new StringName("SceneReplicationConfig");
      let methodname = new StringName("property_set_watch");
      this._bindings.method_property_set_watch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3868023870
      );
    }
  }
  get_properties() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_properties,
      this._owner,
			Variant.INT,
      
    );
  }
  add_property(_path, _index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_property,
      this._owner,
      _path, _index
    );
  }
  has_property(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_property,
      this._owner,
			Variant.Type.BOOL,
      _path
    );
  }
  remove_property(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_property,
      this._owner,
      _path
    );
  }
  property_get_index(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_property_get_index,
      this._owner,
			Variant.Type.INT,
      _path
    );
  }
  property_get_spawn(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_property_get_spawn,
      this._owner,
			Variant.Type.BOOL,
      _path
    );
  }
  property_set_spawn(_path, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_property_set_spawn,
      this._owner,
      _path, _enabled
    );
  }
  property_get_replication_mode(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_property_get_replication_mode,
      this._owner,
			Variant.INT,
      _path
    );
  }
  property_set_replication_mode(_path, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_property_set_replication_mode,
      this._owner,
      _path, _mode
    );
  }
  property_get_sync(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_property_get_sync,
      this._owner,
			Variant.Type.BOOL,
      _path
    );
  }
  property_set_sync(_path, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_property_set_sync,
      this._owner,
      _path, _enabled
    );
  }
  property_get_watch(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_property_get_watch,
      this._owner,
			Variant.Type.BOOL,
      _path
    );
  }
  property_set_watch(_path, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_property_set_watch,
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