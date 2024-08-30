import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { Texture2D } from 'src/js_godot/classes/texture2d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_viewport_path_in_scene;
    method_get_viewport_path_in_scene;
}


export class ViewportTexture extends Texture2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ViewportTexture");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("ViewportTexture");
        let methodname = new StringName("set_viewport_path_in_scene");
        this._bindings.method_set_viewport_path_in_scene = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1348162250
        );
      }
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_viewport_path_in_scene,
      this._owner,
      _path
    );
    
  }
  get_viewport_path_in_scene() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_viewport_path_in_scene,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
    
  }
}