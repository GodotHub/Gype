import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_request_thumbnail;
}
@GodotClass
export class EditorResourceTooltipPlugin extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorResourceTooltipPlugin");
    } else {
      super(godot_object);
    }
  }
  static init_method_request_thumbnail() {
    if (!this._bindings.method_request_thumbnail) {
      let classname = new StringName("EditorResourceTooltipPlugin");
      let methodname = new StringName("request_thumbnail");
      this._bindings.method_request_thumbnail = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3245519720
      );
    }
  }

  
  
  _handles(_type) {
  }
  _make_tooltip_for_path(_path, _metadata, _base) {
  }
  request_thumbnail(_path, _control) {
    EditorResourceTooltipPlugin.init_method_request_thumbnail();
    return _call_native_mb_no_ret(
      EditorResourceTooltipPlugin._bindings.method_request_thumbnail,
      this._owner,
      _path, _control
    );
    
  }
  

}