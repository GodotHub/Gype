import * as internal from '__internal__';
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Variant } from 'src/js_godot/variant/variant'
import { StringName } from 'src/js_godot/variant/string_name'
import { MultiplayerAPI } from 'src/js_godot/classesmultiplayer_api'
class _MethodBindings {
    method__poll;
    method__set_multiplayer_peer;
    method__get_multiplayer_peer;
    method__get_unique_id;
    method__get_peer_ids;
    method__rpc;
    method__get_remote_sender_id;
    method__object_configuration_add;
    method__object_configuration_remove;
}


export class MultiplayerAPIExtension extends MultiplayerAPI{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MultiplayerAPIExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("MultiplayerAPIExtension");
      let methodname = new StringName("_poll");
      this._bindings.method__poll = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerAPIExtension");
      let methodname = new StringName("_set_multiplayer_peer");
      this._bindings.method__set_multiplayer_peer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerAPIExtension");
      let methodname = new StringName("_get_multiplayer_peer");
      this._bindings.method__get_multiplayer_peer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerAPIExtension");
      let methodname = new StringName("_get_unique_id");
      this._bindings.method__get_unique_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerAPIExtension");
      let methodname = new StringName("_get_peer_ids");
      this._bindings.method__get_peer_ids = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerAPIExtension");
      let methodname = new StringName("_rpc");
      this._bindings.method__rpc = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerAPIExtension");
      let methodname = new StringName("_get_remote_sender_id");
      this._bindings.method__get_remote_sender_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerAPIExtension");
      let methodname = new StringName("_object_configuration_add");
      this._bindings.method__object_configuration_add = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MultiplayerAPIExtension");
      let methodname = new StringName("_object_configuration_remove");
      this._bindings.method__object_configuration_remove = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _poll() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__poll,
      this._owner,
			Variant.INT,
      
    );
  }
  _set_multiplayer_peer(_multiplayer_peer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_multiplayer_peer,
      this._owner,
      _multiplayer_peer
    );
  }
  _get_multiplayer_peer() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_multiplayer_peer,
      this._owner,
			Variant.INT,
      
    );
  }
  _get_unique_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_unique_id,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_peer_ids() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_peer_ids,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
  }
  _rpc(_peer, _object, _method, _args) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__rpc,
      this._owner,
			Variant.INT,
      _peer, _object, _method, _args
    );
  }
  _get_remote_sender_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_remote_sender_id,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _object_configuration_add(_object, _configuration) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__object_configuration_add,
      this._owner,
			Variant.INT,
      _object, _configuration
    );
  }
  _object_configuration_remove(_object, _configuration) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__object_configuration_remove,
      this._owner,
			Variant.INT,
      _object, _configuration
    );
  }
}