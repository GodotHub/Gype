import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Translation } from '@js_godot/classes/translation'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_generate;
}
@GodotClass
export class OptimizedTranslation extends Translation{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OptimizedTranslation");
    } else {
      super(godot_object);
    }
  }
  static init_method_generate() {
    if (!this._bindings.method_generate) {
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
    OptimizedTranslation.init_method_generate();
    return _call_native_mb_no_ret(
      OptimizedTranslation._bindings.method_generate,
      this._owner,
      _from
    );
    
  }
  

}