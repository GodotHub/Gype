import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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
}class _EngineDebugger extends GodotObject{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EngineDebugger");
    } else {
      super(godot_object);
    }
  }
  static init_method_is_active() {
    if (!this.#_bindings.method_is_active) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("is_active");
      this.#_bindings.method_is_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_register_profiler() {
    if (!this.#_bindings.method_register_profiler) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("register_profiler");
      this.#_bindings.method_register_profiler = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3651669560
      );
    }
  }
  static init_method_unregister_profiler() {
    if (!this.#_bindings.method_unregister_profiler) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("unregister_profiler");
      this.#_bindings.method_unregister_profiler = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_is_profiling() {
    if (!this.#_bindings.method_is_profiling) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("is_profiling");
      this.#_bindings.method_is_profiling = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2041966384
      );
    }
  }
  static init_method_has_profiler() {
    if (!this.#_bindings.method_has_profiler) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("has_profiler");
      this.#_bindings.method_has_profiler = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2041966384
      );
    }
  }
  static init_method_profiler_add_frame_data() {
    if (!this.#_bindings.method_profiler_add_frame_data) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("profiler_add_frame_data");
      this.#_bindings.method_profiler_add_frame_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1895267858
      );
    }
  }
  static init_method_profiler_enable() {
    if (!this.#_bindings.method_profiler_enable) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("profiler_enable");
      this.#_bindings.method_profiler_enable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3192561009
      );
    }
  }
  static init_method_register_message_capture() {
    if (!this.#_bindings.method_register_message_capture) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("register_message_capture");
      this.#_bindings.method_register_message_capture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1874754934
      );
    }
  }
  static init_method_unregister_message_capture() {
    if (!this.#_bindings.method_unregister_message_capture) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("unregister_message_capture");
      this.#_bindings.method_unregister_message_capture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_has_capture() {
    if (!this.#_bindings.method_has_capture) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("has_capture");
      this.#_bindings.method_has_capture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2041966384
      );
    }
  }
  static init_method_line_poll() {
    if (!this.#_bindings.method_line_poll) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("line_poll");
      this.#_bindings.method_line_poll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_send_message() {
    if (!this.#_bindings.method_send_message) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("send_message");
      this.#_bindings.method_send_message = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1209351045
      );
    }
  }
  static init_method_debug() {
    if (!this.#_bindings.method_debug) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("debug");
      this.#_bindings.method_debug = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2751962654
      );
    }
  }
  static init_method_script_debug() {
    if (!this.#_bindings.method_script_debug) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("script_debug");
      this.#_bindings.method_script_debug = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2442343672
      );
    }
  }
  static init_method_set_lines_left() {
    if (!this.#_bindings.method_set_lines_left) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("set_lines_left");
      this.#_bindings.method_set_lines_left = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_lines_left() {
    if (!this.#_bindings.method_get_lines_left) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("get_lines_left");
      this.#_bindings.method_get_lines_left = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_depth() {
    if (!this.#_bindings.method_set_depth) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("set_depth");
      this.#_bindings.method_set_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_depth() {
    if (!this.#_bindings.method_get_depth) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("get_depth");
      this.#_bindings.method_get_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_is_breakpoint() {
    if (!this.#_bindings.method_is_breakpoint) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("is_breakpoint");
      this.#_bindings.method_is_breakpoint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        921227809
      );
    }
  }
  static init_method_is_skipping_breakpoints() {
    if (!this.#_bindings.method_is_skipping_breakpoints) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("is_skipping_breakpoints");
      this.#_bindings.method_is_skipping_breakpoints = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_insert_breakpoint() {
    if (!this.#_bindings.method_insert_breakpoint) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("insert_breakpoint");
      this.#_bindings.method_insert_breakpoint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3780747571
      );
    }
  }
  static init_method_remove_breakpoint() {
    if (!this.#_bindings.method_remove_breakpoint) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("remove_breakpoint");
      this.#_bindings.method_remove_breakpoint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3780747571
      );
    }
  }
  static init_method_clear_breakpoints() {
    if (!this.#_bindings.method_clear_breakpoints) {
      let classname = new StringName("EngineDebugger");
      let methodname = new StringName("clear_breakpoints");
      this.#_bindings.method_clear_breakpoints = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  is_active() {
    EngineDebugger.init_method_is_active();
    return _call_native_mb_ret(
      _EngineDebugger.#_bindings.method_is_active,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  register_profiler(_name, _profiler) {
    EngineDebugger.init_method_register_profiler();
    return _call_native_mb_no_ret(
      _EngineDebugger.#_bindings.method_register_profiler,
      this._owner,
      _name, _profiler
    );
    
  }
  unregister_profiler(_name) {
    EngineDebugger.init_method_unregister_profiler();
    return _call_native_mb_no_ret(
      _EngineDebugger.#_bindings.method_unregister_profiler,
      this._owner,
      _name
    );
    
  }
  is_profiling(_name) {
    EngineDebugger.init_method_is_profiling();
    return _call_native_mb_ret(
      _EngineDebugger.#_bindings.method_is_profiling,
      this._owner,
			Variant.Type.BOOL,
    
      _name
    );
    
  }
  has_profiler(_name) {
    EngineDebugger.init_method_has_profiler();
    return _call_native_mb_ret(
      _EngineDebugger.#_bindings.method_has_profiler,
      this._owner,
			Variant.Type.BOOL,
    
      _name
    );
    
  }
  profiler_add_frame_data(_name, _data) {
    EngineDebugger.init_method_profiler_add_frame_data();
    return _call_native_mb_no_ret(
      _EngineDebugger.#_bindings.method_profiler_add_frame_data,
      this._owner,
      _name, _data
    );
    
  }
  profiler_enable(_name, _enable, _arguments) {
    EngineDebugger.init_method_profiler_enable();
    return _call_native_mb_no_ret(
      _EngineDebugger.#_bindings.method_profiler_enable,
      this._owner,
      _name, _enable, _arguments
    );
    
  }
  register_message_capture(_name, _callable) {
    EngineDebugger.init_method_register_message_capture();
    return _call_native_mb_no_ret(
      _EngineDebugger.#_bindings.method_register_message_capture,
      this._owner,
      _name, _callable
    );
    
  }
  unregister_message_capture(_name) {
    EngineDebugger.init_method_unregister_message_capture();
    return _call_native_mb_no_ret(
      _EngineDebugger.#_bindings.method_unregister_message_capture,
      this._owner,
      _name
    );
    
  }
  has_capture(_name) {
    EngineDebugger.init_method_has_capture();
    return _call_native_mb_ret(
      _EngineDebugger.#_bindings.method_has_capture,
      this._owner,
			Variant.Type.BOOL,
    
      _name
    );
    
  }
  line_poll() {
    EngineDebugger.init_method_line_poll();
    return _call_native_mb_no_ret(
      _EngineDebugger.#_bindings.method_line_poll,
      this._owner,
      
    );
    
  }
  send_message(_message, _data) {
    EngineDebugger.init_method_send_message();
    return _call_native_mb_no_ret(
      _EngineDebugger.#_bindings.method_send_message,
      this._owner,
      _message, _data
    );
    
  }
  debug(_can_continue, _is_error_breakpoint) {
    EngineDebugger.init_method_debug();
    return _call_native_mb_no_ret(
      _EngineDebugger.#_bindings.method_debug,
      this._owner,
      _can_continue, _is_error_breakpoint
    );
    
  }
  script_debug(_language, _can_continue, _is_error_breakpoint) {
    EngineDebugger.init_method_script_debug();
    return _call_native_mb_no_ret(
      _EngineDebugger.#_bindings.method_script_debug,
      this._owner,
      _language, _can_continue, _is_error_breakpoint
    );
    
  }
  set_lines_left(_lines) {
    EngineDebugger.init_method_set_lines_left();
    return _call_native_mb_no_ret(
      _EngineDebugger.#_bindings.method_set_lines_left,
      this._owner,
      _lines
    );
    
  }
  get_lines_left() {
    EngineDebugger.init_method_get_lines_left();
    return _call_native_mb_ret(
      _EngineDebugger.#_bindings.method_get_lines_left,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_depth(_depth) {
    EngineDebugger.init_method_set_depth();
    return _call_native_mb_no_ret(
      _EngineDebugger.#_bindings.method_set_depth,
      this._owner,
      _depth
    );
    
  }
  get_depth() {
    EngineDebugger.init_method_get_depth();
    return _call_native_mb_ret(
      _EngineDebugger.#_bindings.method_get_depth,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  is_breakpoint(_line, _source) {
    EngineDebugger.init_method_is_breakpoint();
    return _call_native_mb_ret(
      _EngineDebugger.#_bindings.method_is_breakpoint,
      this._owner,
			Variant.Type.BOOL,
    
      _line, _source
    );
    
  }
  is_skipping_breakpoints() {
    EngineDebugger.init_method_is_skipping_breakpoints();
    return _call_native_mb_ret(
      _EngineDebugger.#_bindings.method_is_skipping_breakpoints,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  insert_breakpoint(_line, _source) {
    EngineDebugger.init_method_insert_breakpoint();
    return _call_native_mb_no_ret(
      _EngineDebugger.#_bindings.method_insert_breakpoint,
      this._owner,
      _line, _source
    );
    
  }
  remove_breakpoint(_line, _source) {
    EngineDebugger.init_method_remove_breakpoint();
    return _call_native_mb_no_ret(
      _EngineDebugger.#_bindings.method_remove_breakpoint,
      this._owner,
      _line, _source
    );
    
  }
  clear_breakpoints() {
    EngineDebugger.init_method_clear_breakpoints();
    return _call_native_mb_no_ret(
      _EngineDebugger.#_bindings.method_clear_breakpoints,
      this._owner,
      
    );
    
  }
  

}
export const EngineDebugger = (function () {
  let _instance;
  function create_instance() {
    return new _EngineDebugger();
  }
  return {
    instance: function () {
      if (!_instance) {
        _instance = create_instance();
      }
      return _instance;
    },
  };
})();