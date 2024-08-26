import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
class _MethodBindings {
    method__process;
    method__process_silence;
}


export class AudioEffectInstance extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectInstance");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AudioEffectInstance");
      let methodname = new StringName("_process");
      this._bindings.method__process = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AudioEffectInstance");
      let methodname = new StringName("_process_silence");
      this._bindings.method__process_silence = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _process(_src_buffer, _dst_buffer, _frame_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__process,
      this._owner,
      _src_buffer, _dst_buffer, _frame_count
    );
  }
  _process_silence() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__process_silence,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}