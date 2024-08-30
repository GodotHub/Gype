import * as internal from '__internal__';
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { GDString } from 'src/js_godot/variant/gd_string'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_request_thumbnail;
}


export class EditorResourceTooltipPlugin extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorResourceTooltipPlugin");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_request_thumbnail,
      this._owner,
      _path, _control
    );
    
  }
}