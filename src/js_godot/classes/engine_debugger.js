import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classes/godot_object'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import { Callable } from 'src/js_godot/variant/callable'
import { GDArray } from 'src/js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_is_active;
    method_register_profiler;
    method_unregister_profiler;
    method_is_profiling;
    method_has_profiler;
    method_profiler_add_frame_data;
    method_profiler_enable;
    method_register_message_capture;
    method_unregister_message_capture;
    method_has_capture;
    method_line_poll;
    method_send_message;
    method_debug;
    method_script_debug;
    method_set_lines_left;
    method_get_lines_left;
    method_set_depth;
    method_get_depth;
    method_is_breakpoint;
    method_is_skipping_breakpoints;
    method_insert_breakpoint;
    method_remove_breakpoint;
    method_clear_breakpoints;
}

export const EngineDebugger = new _EngineDebugger();

class _EngineDebugger extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EngineDebugger");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("is_active");
        this._bindings.method_is_active = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2240911060
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("register_profiler");
        this._bindings.method_register_profiler = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3651669560
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("unregister_profiler");
        this._bindings.method_unregister_profiler = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3304788590
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("is_profiling");
        this._bindings.method_is_profiling = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2041966384
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("has_profiler");
        this._bindings.method_has_profiler = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2041966384
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("profiler_add_frame_data");
        this._bindings.method_profiler_add_frame_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1895267858
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("profiler_enable");
        this._bindings.method_profiler_enable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3192561009
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("register_message_capture");
        this._bindings.method_register_message_capture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1874754934
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("unregister_message_capture");
        this._bindings.method_unregister_message_capture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3304788590
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("has_capture");
        this._bindings.method_has_capture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2041966384
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("line_poll");
        this._bindings.method_line_poll = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("send_message");
        this._bindings.method_send_message = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1209351045
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("debug");
        this._bindings.method_debug = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2751962654
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("script_debug");
        this._bindings.method_script_debug = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2442343672
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("set_lines_left");
        this._bindings.method_set_lines_left = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("get_lines_left");
        this._bindings.method_get_lines_left = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("set_depth");
        this._bindings.method_set_depth = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("get_depth");
        this._bindings.method_get_depth = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("is_breakpoint");
        this._bindings.method_is_breakpoint = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          921227809
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("is_skipping_breakpoints");
        this._bindings.method_is_skipping_breakpoints = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("insert_breakpoint");
        this._bindings.method_insert_breakpoint = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3780747571
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("remove_breakpoint");
        this._bindings.method_remove_breakpoint = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3780747571
        );
      }
      {
        let classname = new StringName("EngineDebugger");
        let methodname = new StringName("clear_breakpoints");
        this._bindings.method_clear_breakpoints = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
  }
  is_active() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_active,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  register_profiler(_name, _profiler) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_register_profiler,
      this._owner,
      _name, _profiler
    );
    
  }
  unregister_profiler(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_unregister_profiler,
      this._owner,
      _name
    );
    
  }
  is_profiling(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_profiling,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  has_profiler(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_profiler,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  profiler_add_frame_data(_name, _data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_profiler_add_frame_data,
      this._owner,
      _name, _data
    );
    
  }
  profiler_enable(_name, _enable, _arguments) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_profiler_enable,
      this._owner,
      _name, _enable, _arguments
    );
    
  }
  register_message_capture(_name, _callable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_register_message_capture,
      this._owner,
      _name, _callable
    );
    
  }
  unregister_message_capture(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_unregister_message_capture,
      this._owner,
      _name
    );
    
  }
  has_capture(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_capture,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  line_poll() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_line_poll,
      this._owner,
      
    );
    
  }
  send_message(_message, _data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_send_message,
      this._owner,
      _message, _data
    );
    
  }
  debug(_can_continue, _is_error_breakpoint) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_debug,
      this._owner,
      _can_continue, _is_error_breakpoint
    );
    
  }
  script_debug(_language, _can_continue, _is_error_breakpoint) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_script_debug,
      this._owner,
      _language, _can_continue, _is_error_breakpoint
    );
    
  }
  set_lines_left(_lines) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_lines_left,
      this._owner,
      _lines
    );
    
  }
  get_lines_left() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_lines_left,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_depth(_depth) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth,
      this._owner,
      _depth
    );
    
  }
  get_depth() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  is_breakpoint(_line, _source) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_breakpoint,
      this._owner,
			Variant.Type.BOOL,
      _line, _source
    );
    
  }
  is_skipping_breakpoints() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_skipping_breakpoints,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  insert_breakpoint(_line, _source) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_insert_breakpoint,
      this._owner,
      _line, _source
    );
    
  }
  remove_breakpoint(_line, _source) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_breakpoint,
      this._owner,
      _line, _source
    );
    
  }
  clear_breakpoints() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_breakpoints,
      this._owner,
      
    );
    
  }
}