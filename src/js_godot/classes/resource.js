import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
import { RID } from 'src/js_godot/variant/rid'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__setup_local_to_scene;
    method_set_path;
    method_take_over_path;
    method_get_path;
    method_set_name;
    method_get_name;
    method_get_rid;
    method_set_local_to_scene;
    method_is_local_to_scene;
    method_get_local_scene;
    method_setup_local_to_scene;
    method_generate_scene_unique_id;
    method_set_scene_unique_id;
    method_get_scene_unique_id;
    method_emit_changed;
    method_duplicate;
}


export class Resource extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Resource");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Resource");
      let methodname = new StringName("_setup_local_to_scene");
      this._bindings.method__setup_local_to_scene = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("Resource");
      let methodname = new StringName("set_path");
      this._bindings.method_set_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("Resource");
      let methodname = new StringName("take_over_path");
      this._bindings.method_take_over_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("Resource");
      let methodname = new StringName("get_path");
      this._bindings.method_get_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("Resource");
      let methodname = new StringName("set_name");
      this._bindings.method_set_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("Resource");
      let methodname = new StringName("get_name");
      this._bindings.method_get_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("Resource");
      let methodname = new StringName("get_rid");
      this._bindings.method_get_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("Resource");
      let methodname = new StringName("set_local_to_scene");
      this._bindings.method_set_local_to_scene = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Resource");
      let methodname = new StringName("is_local_to_scene");
      this._bindings.method_is_local_to_scene = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Resource");
      let methodname = new StringName("get_local_scene");
      this._bindings.method_get_local_scene = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3160264692
      );
    }
    {
      let classname = new StringName("Resource");
      let methodname = new StringName("setup_local_to_scene");
      this._bindings.method_setup_local_to_scene = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Resource");
      let methodname = new StringName("generate_scene_unique_id");
      this._bindings.method_generate_scene_unique_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2841200299
      );
    }
    {
      let classname = new StringName("Resource");
      let methodname = new StringName("set_scene_unique_id");
      this._bindings.method_set_scene_unique_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("Resource");
      let methodname = new StringName("get_scene_unique_id");
      this._bindings.method_get_scene_unique_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("Resource");
      let methodname = new StringName("emit_changed");
      this._bindings.method_emit_changed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Resource");
      let methodname = new StringName("duplicate");
      this._bindings.method_duplicate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        482882304
      );
    }
  }
  _setup_local_to_scene() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__setup_local_to_scene,
      this._owner,
      
    );
  }
  set_path(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_path,
      this._owner,
      _path
    );
  }
  take_over_path(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_take_over_path,
      this._owner,
      _path
    );
  }
  get_path() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_path,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_name(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_name,
      this._owner,
      _name
    );
  }
  get_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  get_rid() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rid,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  set_local_to_scene(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_local_to_scene,
      this._owner,
      _enable
    );
  }
  is_local_to_scene() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_local_to_scene,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_local_scene() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_local_scene,
      this._owner,
			Variant.INT,
      
    );
  }
  setup_local_to_scene() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_setup_local_to_scene,
      this._owner,
      
    );
  }
  generate_scene_unique_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_generate_scene_unique_id,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_scene_unique_id(_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scene_unique_id,
      this._owner,
      _id
    );
  }
  get_scene_unique_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scene_unique_id,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  emit_changed() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_emit_changed,
      this._owner,
      
    );
  }
  duplicate(_subresources) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_duplicate,
      this._owner,
			Variant.INT,
      _subresources
    );
  }
}