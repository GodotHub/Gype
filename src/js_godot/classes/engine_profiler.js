import * as internal from '__internal__';
import { GDArray } from 'src/js_godot/variant/gd_array'
import { RefCounted } from 'src/js_godot/classesref_counted'
class _MethodBindings {
    method__toggle;
    method__add_frame;
    method__tick;
}


export class EngineProfiler extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EngineProfiler");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EngineProfiler");
      let methodname = new StringName("_toggle");
      this._bindings.method__toggle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EngineProfiler");
      let methodname = new StringName("_add_frame");
      this._bindings.method__add_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EngineProfiler");
      let methodname = new StringName("_tick");
      this._bindings.method__tick = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _toggle(_enable, _options) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__toggle,
      this._owner,
      _enable, _options
    );
  }
  _add_frame(_data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__add_frame,
      this._owner,
      _data
    );
  }
  _tick(_frame_time, _process_time, _physics_time, _physics_frame_time) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__tick,
      this._owner,
      _frame_time, _process_time, _physics_time, _physics_frame_time
    );
  }
}