import * as internal from '__internal__';
import { Translation } from 'src/js_godot/classestranslation'
class _MethodBindings {
    method_generate;
}


export class OptimizedTranslation extends Translation{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OptimizedTranslation");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("OptimizedTranslation");
      let methodname = new StringName("generate");
      this._bindings.method_generate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1466479800
      );
    }
  }
  generate(_from) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_generate,
      this._owner,
      _from
    );
  }
}