import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { StringName } from '@js_godot/variant/string_name'
import { Node3DGizmo } from '@js_godot/classes/node3d_gizmo'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_add_lines;
  method_add_mesh;
  method_add_collision_segments;
  method_add_collision_triangles;
  method_add_unscaled_billboard;
  method_add_handles;
  method_set_node_3d;
  method_get_node_3d;
  method_get_plugin;
  method_clear;
  method_set_hidden;
  method_is_subgizmo_selected;
  method_get_subgizmo_selection;
}
@GodotClass
export class EditorNode3DGizmo extends Node3DGizmo{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorNode3DGizmo");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_lines() {
    if (!this._bindings.method_add_lines) {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("add_lines");
      this._bindings.method_add_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2910971437
      );
    }
  }
  static init_method_add_mesh() {
    if (!this._bindings.method_add_mesh) {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("add_mesh");
      this._bindings.method_add_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1579955111
      );
    }
  }
  static init_method_add_collision_segments() {
    if (!this._bindings.method_add_collision_segments) {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("add_collision_segments");
      this._bindings.method_add_collision_segments = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        334873810
      );
    }
  }
  static init_method_add_collision_triangles() {
    if (!this._bindings.method_add_collision_triangles) {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("add_collision_triangles");
      this._bindings.method_add_collision_triangles = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        54901064
      );
    }
  }
  static init_method_add_unscaled_billboard() {
    if (!this._bindings.method_add_unscaled_billboard) {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("add_unscaled_billboard");
      this._bindings.method_add_unscaled_billboard = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        520007164
      );
    }
  }
  static init_method_add_handles() {
    if (!this._bindings.method_add_handles) {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("add_handles");
      this._bindings.method_add_handles = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2254560097
      );
    }
  }
  static init_method_set_node_3d() {
    if (!this._bindings.method_set_node_3d) {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("set_node_3d");
      this._bindings.method_set_node_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }
  static init_method_get_node_3d() {
    if (!this._bindings.method_get_node_3d) {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("get_node_3d");
      this._bindings.method_get_node_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        151077316
      );
    }
  }
  static init_method_get_plugin() {
    if (!this._bindings.method_get_plugin) {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("get_plugin");
      this._bindings.method_get_plugin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4250544552
      );
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_hidden() {
    if (!this._bindings.method_set_hidden) {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("set_hidden");
      this._bindings.method_set_hidden = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_subgizmo_selected() {
    if (!this._bindings.method_is_subgizmo_selected) {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("is_subgizmo_selected");
      this._bindings.method_is_subgizmo_selected = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_get_subgizmo_selection() {
    if (!this._bindings.method_get_subgizmo_selection) {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("get_subgizmo_selection");
      this._bindings.method_get_subgizmo_selection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1930428628
      );
    }
  }

  
  
  _redraw() {
  }
  _get_handle_name(_id, _secondary) {
  }
  _is_handle_highlighted(_id, _secondary) {
  }
  _get_handle_value(_id, _secondary) {
  }
  _begin_handle_action(_id, _secondary) {
  }
  _set_handle(_id, _secondary, _camera, _point) {
  }
  _commit_handle(_id, _secondary, _restore, _cancel) {
  }
  _subgizmos_intersect_ray(_camera, _point) {
  }
  _subgizmos_intersect_frustum(_camera, _frustum) {
  }
  _set_subgizmo_transform(_id, _transform) {
  }
  _get_subgizmo_transform(_id) {
  }
  _commit_subgizmos(_ids, _restores, _cancel) {
  }
  add_lines(_lines, _material, _billboard, _modulate) {
    EditorNode3DGizmo.init_method_add_lines();
    return _call_native_mb_no_ret(
      EditorNode3DGizmo._bindings.method_add_lines,
      this._owner,
      _lines, _material, _billboard, _modulate
    );
    
  }
  add_mesh(_mesh, _material, _transform, _skeleton) {
    EditorNode3DGizmo.init_method_add_mesh();
    return _call_native_mb_no_ret(
      EditorNode3DGizmo._bindings.method_add_mesh,
      this._owner,
      _mesh, _material, _transform, _skeleton
    );
    
  }
  add_collision_segments(_segments) {
    EditorNode3DGizmo.init_method_add_collision_segments();
    return _call_native_mb_no_ret(
      EditorNode3DGizmo._bindings.method_add_collision_segments,
      this._owner,
      _segments
    );
    
  }
  add_collision_triangles(_triangles) {
    EditorNode3DGizmo.init_method_add_collision_triangles();
    return _call_native_mb_no_ret(
      EditorNode3DGizmo._bindings.method_add_collision_triangles,
      this._owner,
      _triangles
    );
    
  }
  add_unscaled_billboard(_material, _default_scale, _modulate) {
    EditorNode3DGizmo.init_method_add_unscaled_billboard();
    return _call_native_mb_no_ret(
      EditorNode3DGizmo._bindings.method_add_unscaled_billboard,
      this._owner,
      _material, _default_scale, _modulate
    );
    
  }
  add_handles(_handles, _material, _ids, _billboard, _secondary) {
    EditorNode3DGizmo.init_method_add_handles();
    return _call_native_mb_no_ret(
      EditorNode3DGizmo._bindings.method_add_handles,
      this._owner,
      _handles, _material, _ids, _billboard, _secondary
    );
    
  }
  set_node_3d(_node) {
    EditorNode3DGizmo.init_method_set_node_3d();
    return _call_native_mb_no_ret(
      EditorNode3DGizmo._bindings.method_set_node_3d,
      this._owner,
      _node
    );
    
  }
  get_node_3d() {
    EditorNode3DGizmo.init_method_get_node_3d();
    return _call_native_mb_ret(
      EditorNode3DGizmo._bindings.method_get_node_3d,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_plugin() {
    EditorNode3DGizmo.init_method_get_plugin();
    return _call_native_mb_ret(
      EditorNode3DGizmo._bindings.method_get_plugin,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  clear() {
    EditorNode3DGizmo.init_method_clear();
    return _call_native_mb_no_ret(
      EditorNode3DGizmo._bindings.method_clear,
      this._owner,
      
    );
    
  }
  set_hidden(_hidden) {
    EditorNode3DGizmo.init_method_set_hidden();
    return _call_native_mb_no_ret(
      EditorNode3DGizmo._bindings.method_set_hidden,
      this._owner,
      _hidden
    );
    
  }
  is_subgizmo_selected(_id) {
    EditorNode3DGizmo.init_method_is_subgizmo_selected();
    return _call_native_mb_ret(
      EditorNode3DGizmo._bindings.method_is_subgizmo_selected,
      this._owner,
			Variant.Type.BOOL,
    
      _id
    );
    
  }
  get_subgizmo_selection() {
    EditorNode3DGizmo.init_method_get_subgizmo_selection();
    return _call_native_mb_ret(
      EditorNode3DGizmo._bindings.method_get_subgizmo_selection,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  

}