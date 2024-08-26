import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { Node } from 'src/js_godot/classesnode'
class _MethodBindings {
    method_set_original_class;
    method_get_original_class;
    method_set_original_scene;
    method_get_original_scene;
    method_set_recording_properties;
    method_is_recording_properties;
}


export class MissingNode extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MissingNode");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("MissingNode");
      let methodname = new StringName("set_original_class");
      this._bindings.method_set_original_class = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("MissingNode");
      let methodname = new StringName("get_original_class");
      this._bindings.method_get_original_class = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("MissingNode");
      let methodname = new StringName("set_original_scene");
      this._bindings.method_set_original_scene = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("MissingNode");
      let methodname = new StringName("get_original_scene");
      this._bindings.method_get_original_scene = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("MissingNode");
      let methodname = new StringName("set_recording_properties");
      this._bindings.method_set_recording_properties = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("MissingNode");
      let methodname = new StringName("is_recording_properties");
      this._bindings.method_is_recording_properties = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_original_class(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_original_class,
      this._owner,
      _name
    );
  }
  get_original_class() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_original_class,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_original_scene(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_original_scene,
      this._owner,
      _name
    );
  }
  get_original_scene() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_original_scene,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_recording_properties(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_recording_properties,
      this._owner,
      _enable
    );
  }
  is_recording_properties() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_recording_properties,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}