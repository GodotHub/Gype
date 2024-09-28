import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
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
  method_setup;
  method_take_connection;
}
@GodotClass
export class DTLSServer extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("DTLSServer");
    } else {
      super(godot_object);
    }
  }
  static init_method_setup() {
    if (!this._bindings.method_setup) {
      let classname = new StringName("DTLSServer");
      let methodname = new StringName("setup");
      this._bindings.method_setup = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1262296096
      );
    }
  }
  static init_method_take_connection() {
    if (!this._bindings.method_take_connection) {
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
    DTLSServer.init_method_setup();
    return _call_native_mb_ret(
      DTLSServer._bindings.method_setup,
      this._owner,
			Variant.Type.INT,
    
      _server_options
    );
    
  }
  take_connection(_udp_peer) {
    DTLSServer.init_method_take_connection();
    return _call_native_mb_ret(
      DTLSServer._bindings.method_take_connection,
      this._owner,
			Variant.Type.OBJECT,
      _udp_peer
    );
    
  }
  

}