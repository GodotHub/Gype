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
@GodotClass
export class Resource extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Resource");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_path() {
    if (!this._bindings.method_set_path) {
      let classname = new StringName("Resource");
      let methodname = new StringName("set_path");
      this._bindings.method_set_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_take_over_path() {
    if (!this._bindings.method_take_over_path) {
      let classname = new StringName("Resource");
      let methodname = new StringName("take_over_path");
      this._bindings.method_take_over_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_path() {
    if (!this._bindings.method_get_path) {
      let classname = new StringName("Resource");
      let methodname = new StringName("get_path");
      this._bindings.method_get_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_name() {
    if (!this._bindings.method_set_name) {
      let classname = new StringName("Resource");
      let methodname = new StringName("set_name");
      this._bindings.method_set_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_name() {
    if (!this._bindings.method_get_name) {
      let classname = new StringName("Resource");
      let methodname = new StringName("get_name");
      this._bindings.method_get_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_rid() {
    if (!this._bindings.method_get_rid) {
      let classname = new StringName("Resource");
      let methodname = new StringName("get_rid");
      this._bindings.method_get_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_set_local_to_scene() {
    if (!this._bindings.method_set_local_to_scene) {
      let classname = new StringName("Resource");
      let methodname = new StringName("set_local_to_scene");
      this._bindings.method_set_local_to_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_local_to_scene() {
    if (!this._bindings.method_is_local_to_scene) {
      let classname = new StringName("Resource");
      let methodname = new StringName("is_local_to_scene");
      this._bindings.method_is_local_to_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_local_scene() {
    if (!this._bindings.method_get_local_scene) {
      let classname = new StringName("Resource");
      let methodname = new StringName("get_local_scene");
      this._bindings.method_get_local_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3160264692
      );
    }
  }
  static init_method_setup_local_to_scene() {
    if (!this._bindings.method_setup_local_to_scene) {
      let classname = new StringName("Resource");
      let methodname = new StringName("setup_local_to_scene");
      this._bindings.method_setup_local_to_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_generate_scene_unique_id() {
    if (!this._bindings.method_generate_scene_unique_id) {
      let classname = new StringName("Resource");
      let methodname = new StringName("generate_scene_unique_id");
      this._bindings.method_generate_scene_unique_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2841200299
      );
    }
  }
  static init_method_set_scene_unique_id() {
    if (!this._bindings.method_set_scene_unique_id) {
      let classname = new StringName("Resource");
      let methodname = new StringName("set_scene_unique_id");
      this._bindings.method_set_scene_unique_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_scene_unique_id() {
    if (!this._bindings.method_get_scene_unique_id) {
      let classname = new StringName("Resource");
      let methodname = new StringName("get_scene_unique_id");
      this._bindings.method_get_scene_unique_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_emit_changed() {
    if (!this._bindings.method_emit_changed) {
      let classname = new StringName("Resource");
      let methodname = new StringName("emit_changed");
      this._bindings.method_emit_changed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_duplicate() {
    if (!this._bindings.method_duplicate) {
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
  }
  set_path(_path) {
    Resource.init_method_set_path();
    return _call_native_mb_no_ret(
      Resource._bindings.method_set_path,
      this._owner,
      _path
    );
    
  }
  take_over_path(_path) {
    Resource.init_method_take_over_path();
    return _call_native_mb_no_ret(
      Resource._bindings.method_take_over_path,
      this._owner,
      _path
    );
    
  }
  get_path() {
    Resource.init_method_get_path();
    return _call_native_mb_ret(
      Resource._bindings.method_get_path,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_name(_name) {
    Resource.init_method_set_name();
    return _call_native_mb_no_ret(
      Resource._bindings.method_set_name,
      this._owner,
      _name
    );
    
  }
  get_name() {
    Resource.init_method_get_name();
    return _call_native_mb_ret(
      Resource._bindings.method_get_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_rid() {
    Resource.init_method_get_rid();
    return _call_native_mb_ret(
      Resource._bindings.method_get_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_local_to_scene(_enable) {
    Resource.init_method_set_local_to_scene();
    return _call_native_mb_no_ret(
      Resource._bindings.method_set_local_to_scene,
      this._owner,
      _enable
    );
    
  }
  is_local_to_scene() {
    Resource.init_method_is_local_to_scene();
    return _call_native_mb_ret(
      Resource._bindings.method_is_local_to_scene,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_local_scene() {
    Resource.init_method_get_local_scene();
    return _call_native_mb_ret(
      Resource._bindings.method_get_local_scene,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  setup_local_to_scene() {
    Resource.init_method_setup_local_to_scene();
    return _call_native_mb_no_ret(
      Resource._bindings.method_setup_local_to_scene,
      this._owner,
      
    );
    
  }
  generate_scene_unique_id() {
    Resource.init_method_generate_scene_unique_id();
    return _call_native_mb_ret(
      Resource._bindings.method_generate_scene_unique_id,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_scene_unique_id(_id) {
    Resource.init_method_set_scene_unique_id();
    return _call_native_mb_no_ret(
      Resource._bindings.method_set_scene_unique_id,
      this._owner,
      _id
    );
    
  }
  get_scene_unique_id() {
    Resource.init_method_get_scene_unique_id();
    return _call_native_mb_ret(
      Resource._bindings.method_get_scene_unique_id,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  emit_changed() {
    Resource.init_method_emit_changed();
    return _call_native_mb_no_ret(
      Resource._bindings.method_emit_changed,
      this._owner,
      
    );
    
  }
  duplicate(_subresources) {
    Resource.init_method_duplicate();
    return _call_native_mb_ret(
      Resource._bindings.method_duplicate,
      this._owner,
			Variant.Type.OBJECT,
      _subresources
    );
    
  }
  
get resource_local_to_scene () {
  return this.is_local_to_scene();
}
set resource_local_to_scene (new_value) {
  this.set_local_to_scene(new_value);
}
get resource_path () {
  return this.get_path();
}
set resource_path (new_value) {
  this.set_path(new_value);
}
get resource_name () {
  return this.get_name();
}
set resource_name (new_value) {
  this.set_name(new_value);
}
get resource_scene_unique_id () {
  return this.get_scene_unique_id();
}
set resource_scene_unique_id (new_value) {
  this.set_scene_unique_id(new_value);
}

}