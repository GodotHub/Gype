import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_setup;
  method_take_connection;
}
export class DTLSServer extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("DTLSServer");
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
      let classname = new StringName("DTLSServer");
      let methodname = new StringName("setup");
      this._bindings.method_setup = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1262296096
      );
    }
    {
      let classname = new StringName("DTLSServer");
      let methodname = new StringName("take_connection");
      this._bindings.method_take_connection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3946580474
      );
    }
  }
  
  setup(_server_options) {
    return _call_native_mb_ret(
      DTLSServer._bindings.method_setup,
      this._owner,
			Variant.INT,
      _server_options
    );
    
  }
  take_connection(_udp_peer) {
    return _call_native_mb_ret(
      DTLSServer._bindings.method_take_connection,
      this._owner,
			Variant.INT,
      _udp_peer
    );
    
  }
  


  static {
    this._init_bindings();
  }
}