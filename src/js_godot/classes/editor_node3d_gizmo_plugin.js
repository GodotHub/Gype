import * as internal from '__internal__';
import { Color } from 'src/js_godot/variant/color'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { GDString } from 'src/js_godot/variant/gd_string'
import { Variant } from 'src/js_godot/variant/variant'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { Resource } from 'src/js_godot/classesresource'
class _MethodBindings {
    method__has_gizmo;
    method__create_gizmo;
    method__get_gizmo_name;
    method__get_priority;
    method__can_be_hidden;
    method__is_selectable_when_hidden;
    method__redraw;
    method__get_handle_name;
    method__is_handle_highlighted;
    method__get_handle_value;
    method__begin_handle_action;
    method__set_handle;
    method__commit_handle;
    method__subgizmos_intersect_ray;
    method__subgizmos_intersect_frustum;
    method__get_subgizmo_transform;
    method__set_subgizmo_transform;
    method__commit_subgizmos;
    method_create_material;
    method_create_icon_material;
    method_create_handle_material;
    method_add_material;
    method_get_material;
}


export class EditorNode3DGizmoPlugin extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorNode3DGizmoPlugin");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_has_gizmo");
      this._bindings.method__has_gizmo = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_create_gizmo");
      this._bindings.method__create_gizmo = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_get_gizmo_name");
      this._bindings.method__get_gizmo_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_get_priority");
      this._bindings.method__get_priority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_can_be_hidden");
      this._bindings.method__can_be_hidden = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_is_selectable_when_hidden");
      this._bindings.method__is_selectable_when_hidden = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_redraw");
      this._bindings.method__redraw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_get_handle_name");
      this._bindings.method__get_handle_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_is_handle_highlighted");
      this._bindings.method__is_handle_highlighted = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_get_handle_value");
      this._bindings.method__get_handle_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_begin_handle_action");
      this._bindings.method__begin_handle_action = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_set_handle");
      this._bindings.method__set_handle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_commit_handle");
      this._bindings.method__commit_handle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_subgizmos_intersect_ray");
      this._bindings.method__subgizmos_intersect_ray = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_subgizmos_intersect_frustum");
      this._bindings.method__subgizmos_intersect_frustum = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_get_subgizmo_transform");
      this._bindings.method__get_subgizmo_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_set_subgizmo_transform");
      this._bindings.method__set_subgizmo_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("_commit_subgizmos");
      this._bindings.method__commit_subgizmos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("create_material");
      this._bindings.method_create_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3486012546
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("create_icon_material");
      this._bindings.method_create_icon_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3804976916
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("create_handle_material");
      this._bindings.method_create_handle_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2486475223
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("add_material");
      this._bindings.method_add_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1374068695
      );
    }
    {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("get_material");
      this._bindings.method_get_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        974464017
      );
    }
  }
  _has_gizmo(_for_node_3d) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__has_gizmo,
      this._owner,
			Variant.Type.BOOL,
      _for_node_3d
    );
  }
  _create_gizmo(_for_node_3d) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__create_gizmo,
      this._owner,
			Variant.INT,
      _for_node_3d
    );
  }
  _get_gizmo_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_gizmo_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _get_priority() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_priority,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _can_be_hidden() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__can_be_hidden,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _is_selectable_when_hidden() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_selectable_when_hidden,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _redraw(_gizmo) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__redraw,
      this._owner,
      _gizmo
    );
  }
  _get_handle_name(_gizmo, _handle_id, _secondary) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_handle_name,
      this._owner,
			Variant.Type.STRING
    ,
      _gizmo, _handle_id, _secondary
    );
  }
  _is_handle_highlighted(_gizmo, _handle_id, _secondary) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_handle_highlighted,
      this._owner,
			Variant.Type.BOOL,
      _gizmo, _handle_id, _secondary
    );
  }
  _get_handle_value(_gizmo, _handle_id, _secondary) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_handle_value,
      this._owner,
			Variant.Type.VARIANT
    ,
      _gizmo, _handle_id, _secondary
    );
  }
  _begin_handle_action(_gizmo, _handle_id, _secondary) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__begin_handle_action,
      this._owner,
      _gizmo, _handle_id, _secondary
    );
  }
  _set_handle(_gizmo, _handle_id, _secondary, _camera, _screen_pos) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_handle,
      this._owner,
      _gizmo, _handle_id, _secondary, _camera, _screen_pos
    );
  }
  _commit_handle(_gizmo, _handle_id, _secondary, _restore, _cancel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__commit_handle,
      this._owner,
      _gizmo, _handle_id, _secondary, _restore, _cancel
    );
  }
  _subgizmos_intersect_ray(_gizmo, _camera, _screen_pos) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__subgizmos_intersect_ray,
      this._owner,
			Variant.Type.INT,
      _gizmo, _camera, _screen_pos
    );
  }
  _subgizmos_intersect_frustum(_gizmo, _camera, _frustum_planes) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__subgizmos_intersect_frustum,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _gizmo, _camera, _frustum_planes
    );
  }
  _get_subgizmo_transform(_gizmo, _subgizmo_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_subgizmo_transform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _gizmo, _subgizmo_id
    );
  }
  _set_subgizmo_transform(_gizmo, _subgizmo_id, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_subgizmo_transform,
      this._owner,
      _gizmo, _subgizmo_id, _transform
    );
  }
  _commit_subgizmos(_gizmo, _ids, _restores, _cancel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__commit_subgizmos,
      this._owner,
      _gizmo, _ids, _restores, _cancel
    );
  }
  create_material(_name, _color, _billboard, _on_top, _use_vertex_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_create_material,
      this._owner,
      _name, _color, _billboard, _on_top, _use_vertex_color
    );
  }
  create_icon_material(_name, _texture, _on_top, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_create_icon_material,
      this._owner,
      _name, _texture, _on_top, _color
    );
  }
  create_handle_material(_name, _billboard, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_create_handle_material,
      this._owner,
      _name, _billboard, _texture
    );
  }
  add_material(_name, _material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_material,
      this._owner,
      _name, _material
    );
  }
  get_material(_name, _gizmo) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_material,
      this._owner,
			Variant.INT,
      _name, _gizmo
    );
  }
}