import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classesgodot_object'
class _MethodBindings {
    method__initialize;
    method__physics_process;
    method__process;
    method__finalize;
}


export class MainLoop extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MainLoop");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("MainLoop");
      let methodname = new StringName("_initialize");
      this._bindings.method__initialize = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MainLoop");
      let methodname = new StringName("_physics_process");
      this._bindings.method__physics_process = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MainLoop");
      let methodname = new StringName("_process");
      this._bindings.method__process = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("MainLoop");
      let methodname = new StringName("_finalize");
      this._bindings.method__finalize = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _initialize() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__initialize,
      this._owner,
      
    );
  }
  _physics_process(_delta) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__physics_process,
      this._owner,
			Variant.Type.BOOL,
      _delta
    );
  }
  _process(_delta) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__process,
      this._owner,
			Variant.Type.BOOL,
      _delta
    );
  }
  _finalize() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__finalize,
      this._owner,
      
    );
  }
}