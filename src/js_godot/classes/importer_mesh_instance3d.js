import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { Node3D } from 'src/js_godot/classes/node3d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ImporterMeshInstance3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("set_mesh");
        this._bindings.method_set_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2255166972
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("get_mesh");
        this._bindings.method_get_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3161779525
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("set_skin");
        this._bindings.method_set_skin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3971435618
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("get_skin");
        this._bindings.method_get_skin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2074563878
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("set_skeleton_path");
        this._bindings.method_set_skeleton_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1348162250
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("get_skeleton_path");
        this._bindings.method_get_skeleton_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4075236667
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("set_layer_mask");
        this._bindings.method_set_layer_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("get_layer_mask");
        this._bindings.method_get_layer_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("set_cast_shadows_setting");
        this._bindings.method_set_cast_shadows_setting = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          856677339
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("get_cast_shadows_setting");
        this._bindings.method_get_cast_shadows_setting = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3383019359
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("set_visibility_range_end_margin");
        this._bindings.method_set_visibility_range_end_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("get_visibility_range_end_margin");
        this._bindings.method_get_visibility_range_end_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("set_visibility_range_end");
        this._bindings.method_set_visibility_range_end = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("get_visibility_range_end");
        this._bindings.method_get_visibility_range_end = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("set_visibility_range_begin_margin");
        this._bindings.method_set_visibility_range_begin_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("get_visibility_range_begin_margin");
        this._bindings.method_get_visibility_range_begin_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("set_visibility_range_begin");
        this._bindings.method_set_visibility_range_begin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("get_visibility_range_begin");
        this._bindings.method_get_visibility_range_begin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("set_visibility_range_fade_mode");
        this._bindings.method_set_visibility_range_fade_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1440117808
        );
      }
      {
        let classname = new StringName("ImporterMeshInstance3D");
        let methodname = new StringName("get_visibility_range_fade_mode");
        this._bindings.method_get_visibility_range_fade_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2067221882
        );
      }
  }
  set_mesh(_mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mesh,
      this._owner,
      _mesh
    );
    
  }
  get_mesh() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mesh,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_skin(_skin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_skin,
      this._owner,
      _skin
    );
    
  }
  get_skin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_skin,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_skeleton_path(_skeleton_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_skeleton_path,
      this._owner,
      _skeleton_path
    );
    
  }
  get_skeleton_path() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_skeleton_path,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
    
  }
  set_layer_mask(_layer_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_layer_mask,
      this._owner,
      _layer_mask
    );
    
  }
  get_layer_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_layer_mask,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_cast_shadows_setting(_shadow_casting_setting) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cast_shadows_setting,
      this._owner,
      _shadow_casting_setting
    );
    
  }
  get_cast_shadows_setting() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cast_shadows_setting,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_visibility_range_end_margin(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility_range_end_margin,
      this._owner,
      _distance
    );
    
  }
  get_visibility_range_end_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visibility_range_end_margin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_visibility_range_end(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility_range_end,
      this._owner,
      _distance
    );
    
  }
  get_visibility_range_end() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visibility_range_end,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_visibility_range_begin_margin(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility_range_begin_margin,
      this._owner,
      _distance
    );
    
  }
  get_visibility_range_begin_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visibility_range_begin_margin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_visibility_range_begin(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility_range_begin,
      this._owner,
      _distance
    );
    
  }
  get_visibility_range_begin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visibility_range_begin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_visibility_range_fade_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility_range_fade_mode,
      this._owner,
      _mode
    );
    
  }
  get_visibility_range_fade_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visibility_range_fade_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
}