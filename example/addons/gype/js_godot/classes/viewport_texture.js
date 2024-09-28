import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Texture2D } from '@js_godot/classes/texture2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_viewport_path_in_scene;
  method_get_viewport_path_in_scene;
}
@GodotClass
export class ViewportTexture extends Texture2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ViewportTexture");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_viewport_path_in_scene() {
    if (!this._bindings.method_set_viewport_path_in_scene) {
      let classname = new StringName("ViewportTexture");
      let methodname = new StringName("set_viewport_path_in_scene");
      this._bindings.method_set_viewport_path_in_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_viewport_path_in_scene() {
    if (!this._bindings.method_get_viewport_path_in_scene) {
      let classname = new StringName("ViewportTexture");
      let methodname = new StringName("get_viewport_path_in_scene");
      this._bindings.method_get_viewport_path_in_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }

  
  
  set_viewport_path_in_scene(_path) {
    ViewportTexture.init_method_set_viewport_path_in_scene();
    return _call_native_mb_no_ret(
      ViewportTexture._bindings.method_set_viewport_path_in_scene,
      this._owner,
      _path
    );
    
  }
  get_viewport_path_in_scene() {
    ViewportTexture.init_method_get_viewport_path_in_scene();
    return _call_native_mb_ret(
      ViewportTexture._bindings.method_get_viewport_path_in_scene,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  
get viewport_path () {
  return this.get_viewport_path_in_scene();
}
set viewport_path (new_value) {
  this.set_viewport_path_in_scene(new_value);
}

}