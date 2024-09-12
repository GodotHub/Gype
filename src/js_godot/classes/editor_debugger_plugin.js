import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_session;
  method_get_sessions;
}
export class EditorDebuggerPlugin extends RefCounted{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorDebuggerPlugin");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_session() {
    if (!this.#_bindings.method_get_session) {
      let classname = new StringName("EditorDebuggerPlugin");
      let methodname = new StringName("get_session");
      this.#_bindings.method_get_session = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3061968499
      );
    }
  }
  static init_method_get_sessions() {
    if (!this.#_bindings.method_get_sessions) {
      let classname = new StringName("EditorDebuggerPlugin");
      let methodname = new StringName("get_sessions");
      this.#_bindings.method_get_sessions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }

  
  
  _setup_session(_session_id) {
  }
  _has_capture(_capture) {
  }
  _capture(_message, _data, _session_id) {
  }
  _goto_script_line(_script, _line) {
  }
  _breakpoints_cleared_in_tree() {
  }
  _breakpoint_set_in_tree(_script, _line, _enabled) {
  }
  get_session(_id) {
    EditorDebuggerPlugin.init_method_get_session();
    return _call_native_mb_ret(
      EditorDebuggerPlugin.#_bindings.method_get_session,
      this._owner,
			Variant.Type.OBJECT,
      _id
    );
    
  }
  get_sessions() {
    EditorDebuggerPlugin.init_method_get_sessions();
    return _call_native_mb_ret(
      EditorDebuggerPlugin.#_bindings.method_get_sessions,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  

}