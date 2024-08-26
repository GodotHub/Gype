import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
class _MethodBindings {
    method__run;
    method_add_root_node;
    method_get_scene;
    method_get_editor_interface;
}


export class EditorScript extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorScript");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorScript");
      let methodname = new StringName("_run");
      this._bindings.method__run = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorScript");
      let methodname = new StringName("add_root_node");
      this._bindings.method_add_root_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1078189570
      );
    }
    {
      let classname = new StringName("EditorScript");
      let methodname = new StringName("get_scene");
      this._bindings.method_get_scene = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3160264692
      );
    }
    {
      let classname = new StringName("EditorScript");
      let methodname = new StringName("get_editor_interface");
      this._bindings.method_get_editor_interface = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1976662476
      );
    }
  }
  _run() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__run,
      this._owner,
      
    );
  }
  add_root_node(_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_root_node,
      this._owner,
      _node
    );
  }
  get_scene() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scene,
      this._owner,
			Variant.INT,
      
    );
  }
  get_editor_interface() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_editor_interface,
      this._owner,
			Variant.INT,
      
    );
  }
}