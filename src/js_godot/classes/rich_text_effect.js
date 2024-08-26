import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
class _MethodBindings {
    method__process_custom_fx;
}


export class RichTextEffect extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RichTextEffect");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("RichTextEffect");
      let methodname = new StringName("_process_custom_fx");
      this._bindings.method__process_custom_fx = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _process_custom_fx(_char_fx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__process_custom_fx,
      this._owner,
			Variant.Type.BOOL,
      _char_fx
    );
  }
}