import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node3D } from '@js_godot/classes/node3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_mesh;
  method_get_mesh;
  method_set_skin;
  method_get_skin;
  method_set_skeleton_path;
  method_get_skeleton_path;
  method_set_layer_mask;
  method_get_layer_mask;
  method_set_cast_shadows_setting;
  method_get_cast_shadows_setting;
  method_set_visibility_range_end_margin;
  method_get_visibility_range_end_margin;
  method_set_visibility_range_end;
  method_get_visibility_range_end;
  method_set_visibility_range_begin_margin;
  method_get_visibility_range_begin_margin;
  method_set_visibility_range_begin;
  method_get_visibility_range_begin;
  method_set_visibility_range_fade_mode;
  method_get_visibility_range_fade_mode;
}
export class ImporterMeshInstance3D extends Node3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ImporterMeshInstance3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_mesh() {
    if (!this.#_bindings.method_set_mesh) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("set_mesh");
      this.#_bindings.method_set_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2255166972
      );
    }
  }
  static init_method_get_mesh() {
    if (!this.#_bindings.method_get_mesh) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("get_mesh");
      this.#_bindings.method_get_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3161779525
      );
    }
  }
  static init_method_set_skin() {
    if (!this.#_bindings.method_set_skin) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("set_skin");
      this.#_bindings.method_set_skin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3971435618
      );
    }
  }
  static init_method_get_skin() {
    if (!this.#_bindings.method_get_skin) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("get_skin");
      this.#_bindings.method_get_skin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2074563878
      );
    }
  }
  static init_method_set_skeleton_path() {
    if (!this.#_bindings.method_set_skeleton_path) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("set_skeleton_path");
      this.#_bindings.method_set_skeleton_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_skeleton_path() {
    if (!this.#_bindings.method_get_skeleton_path) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("get_skeleton_path");
      this.#_bindings.method_get_skeleton_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_layer_mask() {
    if (!this.#_bindings.method_set_layer_mask) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("set_layer_mask");
      this.#_bindings.method_set_layer_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_layer_mask() {
    if (!this.#_bindings.method_get_layer_mask) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("get_layer_mask");
      this.#_bindings.method_get_layer_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_cast_shadows_setting() {
    if (!this.#_bindings.method_set_cast_shadows_setting) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("set_cast_shadows_setting");
      this.#_bindings.method_set_cast_shadows_setting = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        856677339
      );
    }
  }
  static init_method_get_cast_shadows_setting() {
    if (!this.#_bindings.method_get_cast_shadows_setting) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("get_cast_shadows_setting");
      this.#_bindings.method_get_cast_shadows_setting = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3383019359
      );
    }
  }
  static init_method_set_visibility_range_end_margin() {
    if (!this.#_bindings.method_set_visibility_range_end_margin) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("set_visibility_range_end_margin");
      this.#_bindings.method_set_visibility_range_end_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_visibility_range_end_margin() {
    if (!this.#_bindings.method_get_visibility_range_end_margin) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("get_visibility_range_end_margin");
      this.#_bindings.method_get_visibility_range_end_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_visibility_range_end() {
    if (!this.#_bindings.method_set_visibility_range_end) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("set_visibility_range_end");
      this.#_bindings.method_set_visibility_range_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_visibility_range_end() {
    if (!this.#_bindings.method_get_visibility_range_end) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("get_visibility_range_end");
      this.#_bindings.method_get_visibility_range_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_visibility_range_begin_margin() {
    if (!this.#_bindings.method_set_visibility_range_begin_margin) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("set_visibility_range_begin_margin");
      this.#_bindings.method_set_visibility_range_begin_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_visibility_range_begin_margin() {
    if (!this.#_bindings.method_get_visibility_range_begin_margin) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("get_visibility_range_begin_margin");
      this.#_bindings.method_get_visibility_range_begin_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_visibility_range_begin() {
    if (!this.#_bindings.method_set_visibility_range_begin) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("set_visibility_range_begin");
      this.#_bindings.method_set_visibility_range_begin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_visibility_range_begin() {
    if (!this.#_bindings.method_get_visibility_range_begin) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("get_visibility_range_begin");
      this.#_bindings.method_get_visibility_range_begin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_visibility_range_fade_mode() {
    if (!this.#_bindings.method_set_visibility_range_fade_mode) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("set_visibility_range_fade_mode");
      this.#_bindings.method_set_visibility_range_fade_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1440117808
      );
    }
  }
  static init_method_get_visibility_range_fade_mode() {
    if (!this.#_bindings.method_get_visibility_range_fade_mode) {
      let classname = new StringName("ImporterMeshInstance3D");
      let methodname = new StringName("get_visibility_range_fade_mode");
      this.#_bindings.method_get_visibility_range_fade_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2067221882
      );
    }
  }

  
  
  set_mesh(_mesh) {
    ImporterMeshInstance3D.init_method_set_mesh();
    return _call_native_mb_no_ret(
      ImporterMeshInstance3D.#_bindings.method_set_mesh,
      this._owner,
      _mesh
    );
    
  }
  get_mesh() {
    ImporterMeshInstance3D.init_method_get_mesh();
    return _call_native_mb_ret(
      ImporterMeshInstance3D.#_bindings.method_get_mesh,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_skin(_skin) {
    ImporterMeshInstance3D.init_method_set_skin();
    return _call_native_mb_no_ret(
      ImporterMeshInstance3D.#_bindings.method_set_skin,
      this._owner,
      _skin
    );
    
  }
  get_skin() {
    ImporterMeshInstance3D.init_method_get_skin();
    return _call_native_mb_ret(
      ImporterMeshInstance3D.#_bindings.method_get_skin,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_skeleton_path(_skeleton_path) {
    ImporterMeshInstance3D.init_method_set_skeleton_path();
    return _call_native_mb_no_ret(
      ImporterMeshInstance3D.#_bindings.method_set_skeleton_path,
      this._owner,
      _skeleton_path
    );
    
  }
  get_skeleton_path() {
    ImporterMeshInstance3D.init_method_get_skeleton_path();
    return _call_native_mb_ret(
      ImporterMeshInstance3D.#_bindings.method_get_skeleton_path,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_layer_mask(_layer_mask) {
    ImporterMeshInstance3D.init_method_set_layer_mask();
    return _call_native_mb_no_ret(
      ImporterMeshInstance3D.#_bindings.method_set_layer_mask,
      this._owner,
      _layer_mask
    );
    
  }
  get_layer_mask() {
    ImporterMeshInstance3D.init_method_get_layer_mask();
    return _call_native_mb_ret(
      ImporterMeshInstance3D.#_bindings.method_get_layer_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_cast_shadows_setting(_shadow_casting_setting) {
    ImporterMeshInstance3D.init_method_set_cast_shadows_setting();
    return _call_native_mb_no_ret(
      ImporterMeshInstance3D.#_bindings.method_set_cast_shadows_setting,
      this._owner,
      _shadow_casting_setting
    );
    
  }
  get_cast_shadows_setting() {
    ImporterMeshInstance3D.init_method_get_cast_shadows_setting();
    return _call_native_mb_ret(
      ImporterMeshInstance3D.#_bindings.method_get_cast_shadows_setting,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_visibility_range_end_margin(_distance) {
    ImporterMeshInstance3D.init_method_set_visibility_range_end_margin();
    return _call_native_mb_no_ret(
      ImporterMeshInstance3D.#_bindings.method_set_visibility_range_end_margin,
      this._owner,
      _distance
    );
    
  }
  get_visibility_range_end_margin() {
    ImporterMeshInstance3D.init_method_get_visibility_range_end_margin();
    return _call_native_mb_ret(
      ImporterMeshInstance3D.#_bindings.method_get_visibility_range_end_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_visibility_range_end(_distance) {
    ImporterMeshInstance3D.init_method_set_visibility_range_end();
    return _call_native_mb_no_ret(
      ImporterMeshInstance3D.#_bindings.method_set_visibility_range_end,
      this._owner,
      _distance
    );
    
  }
  get_visibility_range_end() {
    ImporterMeshInstance3D.init_method_get_visibility_range_end();
    return _call_native_mb_ret(
      ImporterMeshInstance3D.#_bindings.method_get_visibility_range_end,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_visibility_range_begin_margin(_distance) {
    ImporterMeshInstance3D.init_method_set_visibility_range_begin_margin();
    return _call_native_mb_no_ret(
      ImporterMeshInstance3D.#_bindings.method_set_visibility_range_begin_margin,
      this._owner,
      _distance
    );
    
  }
  get_visibility_range_begin_margin() {
    ImporterMeshInstance3D.init_method_get_visibility_range_begin_margin();
    return _call_native_mb_ret(
      ImporterMeshInstance3D.#_bindings.method_get_visibility_range_begin_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_visibility_range_begin(_distance) {
    ImporterMeshInstance3D.init_method_set_visibility_range_begin();
    return _call_native_mb_no_ret(
      ImporterMeshInstance3D.#_bindings.method_set_visibility_range_begin,
      this._owner,
      _distance
    );
    
  }
  get_visibility_range_begin() {
    ImporterMeshInstance3D.init_method_get_visibility_range_begin();
    return _call_native_mb_ret(
      ImporterMeshInstance3D.#_bindings.method_get_visibility_range_begin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_visibility_range_fade_mode(_mode) {
    ImporterMeshInstance3D.init_method_set_visibility_range_fade_mode();
    return _call_native_mb_no_ret(
      ImporterMeshInstance3D.#_bindings.method_set_visibility_range_fade_mode,
      this._owner,
      _mode
    );
    
  }
  get_visibility_range_fade_mode() {
    ImporterMeshInstance3D.init_method_get_visibility_range_fade_mode();
    return _call_native_mb_ret(
      ImporterMeshInstance3D.#_bindings.method_get_visibility_range_fade_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get mesh () {
  return this.get_mesh();
}
set mesh (new_value) {
  this.set_mesh(new_value);
}
get skin () {
  return this.get_skin();
}
set skin (new_value) {
  this.set_skin(new_value);
}
get skeleton_path () {
  return this.get_skeleton_path();
}
set skeleton_path (new_value) {
  this.set_skeleton_path(new_value);
}
get layer_mask () {
  return this.get_layer_mask();
}
set layer_mask (new_value) {
  this.set_layer_mask(new_value);
}
get cast_shadow () {
  return this.get_cast_shadows_setting();
}
set cast_shadow (new_value) {
  this.set_cast_shadows_setting(new_value);
}
get visibility_range_begin () {
  return this.get_visibility_range_begin();
}
set visibility_range_begin (new_value) {
  this.set_visibility_range_begin(new_value);
}
get visibility_range_begin_margin () {
  return this.get_visibility_range_begin_margin();
}
set visibility_range_begin_margin (new_value) {
  this.set_visibility_range_begin_margin(new_value);
}
get visibility_range_end () {
  return this.get_visibility_range_end();
}
set visibility_range_end (new_value) {
  this.set_visibility_range_end(new_value);
}
get visibility_range_end_margin () {
  return this.get_visibility_range_end_margin();
}
set visibility_range_end_margin (new_value) {
  this.set_visibility_range_end_margin(new_value);
}
get visibility_range_fade_mode () {
  return this.get_visibility_range_fade_mode();
}
set visibility_range_fade_mode (new_value) {
  this.set_visibility_range_fade_mode(new_value);
}

}