import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_add_root_node;
  method_get_scene;
  method_get_editor_interface;
}
export class EditorScript extends RefCounted{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorScript");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_root_node() {
    if (!this.#_bindings.method_add_root_node) {
      let classname = new StringName("EditorScript");
      let methodname = new StringName("add_root_node");
      this.#_bindings.method_add_root_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }
  static init_method_get_scene() {
    if (!this.#_bindings.method_get_scene) {
      let classname = new StringName("EditorScript");
      let methodname = new StringName("get_scene");
      this.#_bindings.method_get_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3160264692
      );
    }
  }
  static init_method_get_editor_interface() {
    if (!this.#_bindings.method_get_editor_interface) {
      let classname = new StringName("EditorScript");
      let methodname = new StringName("get_editor_interface");
      this.#_bindings.method_get_editor_interface = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1976662476
      );
    }
  }

  
  
  _run() {
  }
  add_root_node(_node) {
    EditorScript.init_method_add_root_node();
    return _call_native_mb_no_ret(
      EditorScript.#_bindings.method_add_root_node,
      this._owner,
      _node
    );
    
  }
  get_scene() {
    EditorScript.init_method_get_scene();
    return _call_native_mb_ret(
      EditorScript.#_bindings.method_get_scene,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_editor_interface() {
    EditorScript.init_method_get_editor_interface();
    return _call_native_mb_ret(
      EditorScript.#_bindings.method_get_editor_interface,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  

}