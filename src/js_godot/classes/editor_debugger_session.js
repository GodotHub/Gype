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
  method_send_message;
  method_toggle_profiler;
  method_is_breaked;
  method_is_debuggable;
  method_is_active;
  method_add_session_tab;
  method_remove_session_tab;
  method_set_breakpoint;
}
export class EditorDebuggerSession extends RefCounted{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorDebuggerSession");
    } else {
      super(godot_object);
    }
  }
  static init_method_send_message() {
    if (!this.#_bindings.method_send_message) {
      let classname = new StringName("EditorDebuggerSession");
      let methodname = new StringName("send_message");
      this.#_bindings.method_send_message = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        85656714
      );
    }
  }
  static init_method_toggle_profiler() {
    if (!this.#_bindings.method_toggle_profiler) {
      let classname = new StringName("EditorDebuggerSession");
      let methodname = new StringName("toggle_profiler");
      this.#_bindings.method_toggle_profiler = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1198443697
      );
    }
  }
  static init_method_is_breaked() {
    if (!this.#_bindings.method_is_breaked) {
      let classname = new StringName("EditorDebuggerSession");
      let methodname = new StringName("is_breaked");
      this.#_bindings.method_is_breaked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_is_debuggable() {
    if (!this.#_bindings.method_is_debuggable) {
      let classname = new StringName("EditorDebuggerSession");
      let methodname = new StringName("is_debuggable");
      this.#_bindings.method_is_debuggable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_is_active() {
    if (!this.#_bindings.method_is_active) {
      let classname = new StringName("EditorDebuggerSession");
      let methodname = new StringName("is_active");
      this.#_bindings.method_is_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_add_session_tab() {
    if (!this.#_bindings.method_add_session_tab) {
      let classname = new StringName("EditorDebuggerSession");
      let methodname = new StringName("add_session_tab");
      this.#_bindings.method_add_session_tab = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1496901182
      );
    }
  }
  static init_method_remove_session_tab() {
    if (!this.#_bindings.method_remove_session_tab) {
      let classname = new StringName("EditorDebuggerSession");
      let methodname = new StringName("remove_session_tab");
      this.#_bindings.method_remove_session_tab = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1496901182
      );
    }
  }
  static init_method_set_breakpoint() {
    if (!this.#_bindings.method_set_breakpoint) {
      let classname = new StringName("EditorDebuggerSession");
      let methodname = new StringName("set_breakpoint");
      this.#_bindings.method_set_breakpoint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4108344793
      );
    }
  }

  
  
  send_message(_message, _data) {
    EditorDebuggerSession.init_method_send_message();
    return _call_native_mb_no_ret(
      EditorDebuggerSession.#_bindings.method_send_message,
      this._owner,
      _message, _data
    );
    
  }
  toggle_profiler(_profiler, _enable, _data) {
    EditorDebuggerSession.init_method_toggle_profiler();
    return _call_native_mb_no_ret(
      EditorDebuggerSession.#_bindings.method_toggle_profiler,
      this._owner,
      _profiler, _enable, _data
    );
    
  }
  is_breaked() {
    EditorDebuggerSession.init_method_is_breaked();
    return _call_native_mb_ret(
      EditorDebuggerSession.#_bindings.method_is_breaked,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_debuggable() {
    EditorDebuggerSession.init_method_is_debuggable();
    return _call_native_mb_ret(
      EditorDebuggerSession.#_bindings.method_is_debuggable,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_active() {
    EditorDebuggerSession.init_method_is_active();
    return _call_native_mb_ret(
      EditorDebuggerSession.#_bindings.method_is_active,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  add_session_tab(_control) {
    EditorDebuggerSession.init_method_add_session_tab();
    return _call_native_mb_no_ret(
      EditorDebuggerSession.#_bindings.method_add_session_tab,
      this._owner,
      _control
    );
    
  }
  remove_session_tab(_control) {
    EditorDebuggerSession.init_method_remove_session_tab();
    return _call_native_mb_no_ret(
      EditorDebuggerSession.#_bindings.method_remove_session_tab,
      this._owner,
      _control
    );
    
  }
  set_breakpoint(_path, _line, _enabled) {
    EditorDebuggerSession.init_method_set_breakpoint();
    return _call_native_mb_no_ret(
      EditorDebuggerSession.#_bindings.method_set_breakpoint,
      this._owner,
      _path, _line, _enabled
    );
    
  }
  

}