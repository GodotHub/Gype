import * as internal from '__internal__';
import { GDArray } from 'src/js_godot/variant/gd_array'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { GDString } from 'src/js_godot/variant/gd_string'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorDebuggerSession");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorDebuggerSession");
      let methodname = new StringName("send_message");
      this._bindings.method_send_message = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        85656714
      );
    }
    {
      let classname = new StringName("EditorDebuggerSession");
      let methodname = new StringName("toggle_profiler");
      this._bindings.method_toggle_profiler = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1198443697
      );
    }
    {
      let classname = new StringName("EditorDebuggerSession");
      let methodname = new StringName("is_breaked");
      this._bindings.method_is_breaked = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("EditorDebuggerSession");
      let methodname = new StringName("is_debuggable");
      this._bindings.method_is_debuggable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("EditorDebuggerSession");
      let methodname = new StringName("is_active");
      this._bindings.method_is_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("EditorDebuggerSession");
      let methodname = new StringName("add_session_tab");
      this._bindings.method_add_session_tab = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1496901182
      );
    }
    {
      let classname = new StringName("EditorDebuggerSession");
      let methodname = new StringName("remove_session_tab");
      this._bindings.method_remove_session_tab = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1496901182
      );
    }
    {
      let classname = new StringName("EditorDebuggerSession");
      let methodname = new StringName("set_breakpoint");
      this._bindings.method_set_breakpoint = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4108344793
      );
    }
  }
  send_message(_message, _data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_send_message,
      this._owner,
      _message, _data
    );
  }
  toggle_profiler(_profiler, _enable, _data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_toggle_profiler,
      this._owner,
      _profiler, _enable, _data
    );
  }
  is_breaked() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_breaked,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  is_debuggable() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_debuggable,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  is_active() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_active,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  add_session_tab(_control) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_session_tab,
      this._owner,
      _control
    );
  }
  remove_session_tab(_control) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_session_tab,
      this._owner,
      _control
    );
  }
  set_breakpoint(_path, _line, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_breakpoint,
      this._owner,
      _path, _line, _enabled
    );
  }
}