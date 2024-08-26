import * as internal from '__internal__';
import { Color } from 'src/js_godot/variant/color'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { GDString } from 'src/js_godot/variant/gd_string'
import { PackedVector3Array } from 'src/js_godot/variant/packed_vector3_array'
import { Node3DGizmo } from 'src/js_godot/classesnode3d_gizmo'
import { Variant } from 'src/js_godot/variant/variant'
import { Transform3D } from 'src/js_godot/variant/transform3d'
class _MethodBindings {
    method__redraw;
    method__get_handle_name;
    method__is_handle_highlighted;
    method__get_handle_value;
    method__begin_handle_action;
    method__set_handle;
    method__commit_handle;
    method__subgizmos_intersect_ray;
    method__subgizmos_intersect_frustum;
    method__set_subgizmo_transform;
    method__get_subgizmo_transform;
    method__commit_subgizmos;
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


export class EditorNode3DGizmo extends Node3DGizmo{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorNode3DGizmo");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("_redraw");
      this._bindings.method__redraw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("_get_handle_name");
      this._bindings.method__get_handle_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("_is_handle_highlighted");
      this._bindings.method__is_handle_highlighted = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("_get_handle_value");
      this._bindings.method__get_handle_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("_begin_handle_action");
      this._bindings.method__begin_handle_action = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("_set_handle");
      this._bindings.method__set_handle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("_commit_handle");
      this._bindings.method__commit_handle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("_subgizmos_intersect_ray");
      this._bindings.method__subgizmos_intersect_ray = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("_subgizmos_intersect_frustum");
      this._bindings.method__subgizmos_intersect_frustum = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("_set_subgizmo_transform");
      this._bindings.method__set_subgizmo_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("_get_subgizmo_transform");
      this._bindings.method__get_subgizmo_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("_commit_subgizmos");
      this._bindings.method__commit_subgizmos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("add_lines");
      this._bindings.method_add_lines = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2910971437
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("add_mesh");
      this._bindings.method_add_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1579955111
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("add_collision_segments");
      this._bindings.method_add_collision_segments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        334873810
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("add_collision_triangles");
      this._bindings.method_add_collision_triangles = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        54901064
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("add_unscaled_billboard");
      this._bindings.method_add_unscaled_billboard = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        520007164
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("add_handles");
      this._bindings.method_add_handles = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2254560097
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("set_node_3d");
      this._bindings.method_set_node_3d = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1078189570
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("get_node_3d");
      this._bindings.method_get_node_3d = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        151077316
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("get_plugin");
      this._bindings.method_get_plugin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4250544552
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("set_hidden");
      this._bindings.method_set_hidden = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmo");
      let methodname = new StringName("is_subgizmo_selected");
      this._bindings.method_is_subgizmo_selected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__redraw,
      this._owner,
      
    );
  }
  _get_handle_name(_id, _secondary) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_handle_name,
      this._owner,
			Variant.Type.STRING
    ,
      _id, _secondary
    );
  }
  _is_handle_highlighted(_id, _secondary) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_handle_highlighted,
      this._owner,
			Variant.Type.BOOL,
      _id, _secondary
    );
  }
  _get_handle_value(_id, _secondary) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_handle_value,
      this._owner,
			Variant.Type.VARIANT
    ,
      _id, _secondary
    );
  }
  _begin_handle_action(_id, _secondary) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__begin_handle_action,
      this._owner,
      _id, _secondary
    );
  }
  _set_handle(_id, _secondary, _camera, _point) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_handle,
      this._owner,
      _id, _secondary, _camera, _point
    );
  }
  _commit_handle(_id, _secondary, _restore, _cancel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__commit_handle,
      this._owner,
      _id, _secondary, _restore, _cancel
    );
  }
  _subgizmos_intersect_ray(_camera, _point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__subgizmos_intersect_ray,
      this._owner,
			Variant.Type.INT,
      _camera, _point
    );
  }
  _subgizmos_intersect_frustum(_camera, _frustum) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__subgizmos_intersect_frustum,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _camera, _frustum
    );
  }
  _set_subgizmo_transform(_id, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_subgizmo_transform,
      this._owner,
      _id, _transform
    );
  }
  _get_subgizmo_transform(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_subgizmo_transform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _id
    );
  }
  _commit_subgizmos(_ids, _restores, _cancel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__commit_subgizmos,
      this._owner,
      _ids, _restores, _cancel
    );
  }
  add_lines(_lines, _material, _billboard, _modulate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_lines,
      this._owner,
      _lines, _material, _billboard, _modulate
    );
  }
  add_mesh(_mesh, _material, _transform, _skeleton) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_mesh,
      this._owner,
      _mesh, _material, _transform, _skeleton
    );
  }
  add_collision_segments(_segments) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_collision_segments,
      this._owner,
      _segments
    );
  }
  add_collision_triangles(_triangles) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_collision_triangles,
      this._owner,
      _triangles
    );
  }
  add_unscaled_billboard(_material, _default_scale, _modulate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_unscaled_billboard,
      this._owner,
      _material, _default_scale, _modulate
    );
  }
  add_handles(_handles, _material, _ids, _billboard, _secondary) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_handles,
      this._owner,
      _handles, _material, _ids, _billboard, _secondary
    );
  }
  set_node_3d(_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_node_3d,
      this._owner,
      _node
    );
  }
  get_node_3d() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_3d,
      this._owner,
			Variant.INT,
      
    );
  }
  get_plugin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_plugin,
      this._owner,
			Variant.INT,
      
    );
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
  }
  set_hidden(_hidden) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hidden,
      this._owner,
      _hidden
    );
  }
  is_subgizmo_selected(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_subgizmo_selected,
      this._owner,
			Variant.Type.BOOL,
      _id
    );
  }
  get_subgizmo_selection() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_subgizmo_selection,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
  }
}