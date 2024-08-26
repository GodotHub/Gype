import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classesgodot_object'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_id_to_text;
    method_text_to_id;
    method_create_id;
    method_has_id;
    method_add_id;
    method_set_id;
    method_get_id_path;
    method_remove_id;
}

export const ResourceUID = new _ResourceUID();

class _ResourceUID extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ResourceUID");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ResourceUID");
      let methodname = new StringName("id_to_text");
      this._bindings.method_id_to_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("ResourceUID");
      let methodname = new StringName("text_to_id");
      this._bindings.method_text_to_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1321353865
      );
    }
    {
      let classname = new StringName("ResourceUID");
      let methodname = new StringName("create_id");
      this._bindings.method_create_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("ResourceUID");
      let methodname = new StringName("has_id");
      this._bindings.method_has_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("ResourceUID");
      let methodname = new StringName("add_id");
      this._bindings.method_add_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("ResourceUID");
      let methodname = new StringName("set_id");
      this._bindings.method_set_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("ResourceUID");
      let methodname = new StringName("get_id_path");
      this._bindings.method_get_id_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("ResourceUID");
      let methodname = new StringName("remove_id");
      this._bindings.method_remove_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
  }
  id_to_text(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_id_to_text,
      this._owner,
			Variant.Type.STRING
    ,
      _id
    );
  }
  text_to_id(_text_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_text_to_id,
      this._owner,
			Variant.Type.INT,
      _text_id
    );
  }
  create_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_id,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  has_id(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_id,
      this._owner,
			Variant.Type.BOOL,
      _id
    );
  }
  add_id(_id, _path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_id,
      this._owner,
      _id, _path
    );
  }
  set_id(_id, _path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_id,
      this._owner,
      _id, _path
    );
  }
  get_id_path(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_id_path,
      this._owner,
			Variant.Type.STRING
    ,
      _id
    );
  }
  remove_id(_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_id,
      this._owner,
      _id
    );
  }
}