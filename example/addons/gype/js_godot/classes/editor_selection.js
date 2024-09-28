import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { GodotObject } from '@js_godot/classes/godot_object'
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
  method_clear;
  method_add_node;
  method_remove_node;
  method_get_selected_nodes;
  method_get_transformable_selected_nodes;
}
@GodotClass
export class EditorSelection extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorSelection");
    } else {
      super(godot_object);
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("EditorSelection");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_add_node() {
    if (!this._bindings.method_add_node) {
      let classname = new StringName("EditorSelection");
      let methodname = new StringName("add_node");
      this._bindings.method_add_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }
  static init_method_remove_node() {
    if (!this._bindings.method_remove_node) {
      let classname = new StringName("EditorSelection");
      let methodname = new StringName("remove_node");
      this._bindings.method_remove_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }
  static init_method_get_selected_nodes() {
    if (!this._bindings.method_get_selected_nodes) {
      let classname = new StringName("EditorSelection");
      let methodname = new StringName("get_selected_nodes");
      this._bindings.method_get_selected_nodes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_get_transformable_selected_nodes() {
    if (!this._bindings.method_get_transformable_selected_nodes) {
      let classname = new StringName("EditorSelection");
      let methodname = new StringName("get_transformable_selected_nodes");
      this._bindings.method_get_transformable_selected_nodes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }

  
  
  clear() {
    EditorSelection.init_method_clear();
    return _call_native_mb_no_ret(
      EditorSelection._bindings.method_clear,
      this._owner,
      
    );
    
  }
  add_node(_node) {
    EditorSelection.init_method_add_node();
    return _call_native_mb_no_ret(
      EditorSelection._bindings.method_add_node,
      this._owner,
      _node
    );
    
  }
  remove_node(_node) {
    EditorSelection.init_method_remove_node();
    return _call_native_mb_no_ret(
      EditorSelection._bindings.method_remove_node,
      this._owner,
      _node
    );
    
  }
  get_selected_nodes() {
    EditorSelection.init_method_get_selected_nodes();
    return _call_native_mb_ret(
      EditorSelection._bindings.method_get_selected_nodes,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  get_transformable_selected_nodes() {
    EditorSelection.init_method_get_transformable_selected_nodes();
    return _call_native_mb_ret(
      EditorSelection._bindings.method_get_transformable_selected_nodes,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  

}