import * as internal from '__internal__';
import { GDArray } from 'src/js_godot/variant/gd_array'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__setup_session;
    method__has_capture;
    method__capture;
    method__goto_script_line;
    method__breakpoints_cleared_in_tree;
    method__breakpoint_set_in_tree;
    method_get_session;
    method_get_sessions;
}


export class EditorDebuggerPlugin extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorDebuggerPlugin");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorDebuggerPlugin");
      let methodname = new StringName("_setup_session");
      this._bindings.method__setup_session = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorDebuggerPlugin");
      let methodname = new StringName("_has_capture");
      this._bindings.method__has_capture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorDebuggerPlugin");
      let methodname = new StringName("_capture");
      this._bindings.method__capture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorDebuggerPlugin");
      let methodname = new StringName("_goto_script_line");
      this._bindings.method__goto_script_line = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorDebuggerPlugin");
      let methodname = new StringName("_breakpoints_cleared_in_tree");
      this._bindings.method__breakpoints_cleared_in_tree = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorDebuggerPlugin");
      let methodname = new StringName("_breakpoint_set_in_tree");
      this._bindings.method__breakpoint_set_in_tree = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorDebuggerPlugin");
      let methodname = new StringName("get_session");
      this._bindings.method_get_session = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3061968499
      );
    }
    {
      let classname = new StringName("EditorDebuggerPlugin");
      let methodname = new StringName("get_sessions");
      this._bindings.method_get_sessions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2915620761
      );
    }
  }
  _setup_session(_session_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__setup_session,
      this._owner,
      _session_id
    );
  }
  _has_capture(_capture) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__has_capture,
      this._owner,
			Variant.Type.BOOL,
      _capture
    );
  }
  _capture(_message, _data, _session_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__capture,
      this._owner,
			Variant.Type.BOOL,
      _message, _data, _session_id
    );
  }
  _goto_script_line(_script, _line) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__goto_script_line,
      this._owner,
      _script, _line
    );
  }
  _breakpoints_cleared_in_tree() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__breakpoints_cleared_in_tree,
      this._owner,
      
    );
  }
  _breakpoint_set_in_tree(_script, _line, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__breakpoint_set_in_tree,
      this._owner,
      _script, _line, _enabled
    );
  }
  get_session(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_session,
      this._owner,
			Variant.INT,
      _id
    );
  }
  get_sessions() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sessions,
      this._owner,
			Variant.Type.ARRAY
    ,
      
    );
  }
}