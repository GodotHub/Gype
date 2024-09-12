import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_create_material;
  method_create_icon_material;
  method_create_handle_material;
  method_add_material;
  method_get_material;
}
export class EditorNode3DGizmoPlugin extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorNode3DGizmoPlugin");
    } else {
      super(godot_object);
    }
  }
  static init_method_create_material() {
    if (!this.#_bindings.method_create_material) {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("create_material");
      this.#_bindings.method_create_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3486012546
      );
    }
  }
  static init_method_create_icon_material() {
    if (!this.#_bindings.method_create_icon_material) {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("create_icon_material");
      this.#_bindings.method_create_icon_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3804976916
      );
    }
  }
  static init_method_create_handle_material() {
    if (!this.#_bindings.method_create_handle_material) {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("create_handle_material");
      this.#_bindings.method_create_handle_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2486475223
      );
    }
  }
  static init_method_add_material() {
    if (!this.#_bindings.method_add_material) {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("add_material");
      this.#_bindings.method_add_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1374068695
      );
    }
  }
  static init_method_get_material() {
    if (!this.#_bindings.method_get_material) {
      let classname = new StringName("EditorNode3DGizmoPlugin");
      let methodname = new StringName("get_material");
      this.#_bindings.method_get_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        974464017
      );
    }
  }

  
  
  _has_gizmo(_for_node_3d) {
  }
  _create_gizmo(_for_node_3d) {
  }
  _get_gizmo_name() {
  }
  _get_priority() {
  }
  _can_be_hidden() {
  }
  _is_selectable_when_hidden() {
  }
  _redraw(_gizmo) {
  }
  _get_handle_name(_gizmo, _handle_id, _secondary) {
  }
  _is_handle_highlighted(_gizmo, _handle_id, _secondary) {
  }
  _get_handle_value(_gizmo, _handle_id, _secondary) {
  }
  _begin_handle_action(_gizmo, _handle_id, _secondary) {
  }
  _set_handle(_gizmo, _handle_id, _secondary, _camera, _screen_pos) {
  }
  _commit_handle(_gizmo, _handle_id, _secondary, _restore, _cancel) {
  }
  _subgizmos_intersect_ray(_gizmo, _camera, _screen_pos) {
  }
  _subgizmos_intersect_frustum(_gizmo, _camera, _frustum_planes) {
  }
  _get_subgizmo_transform(_gizmo, _subgizmo_id) {
  }
  _set_subgizmo_transform(_gizmo, _subgizmo_id, _transform) {
  }
  _commit_subgizmos(_gizmo, _ids, _restores, _cancel) {
  }
  create_material(_name, _color, _billboard, _on_top, _use_vertex_color) {
    EditorNode3DGizmoPlugin.init_method_create_material();
    return _call_native_mb_no_ret(
      EditorNode3DGizmoPlugin.#_bindings.method_create_material,
      this._owner,
      _name, _color, _billboard, _on_top, _use_vertex_color
    );
    
  }
  create_icon_material(_name, _texture, _on_top, _color) {
    EditorNode3DGizmoPlugin.init_method_create_icon_material();
    return _call_native_mb_no_ret(
      EditorNode3DGizmoPlugin.#_bindings.method_create_icon_material,
      this._owner,
      _name, _texture, _on_top, _color
    );
    
  }
  create_handle_material(_name, _billboard, _texture) {
    EditorNode3DGizmoPlugin.init_method_create_handle_material();
    return _call_native_mb_no_ret(
      EditorNode3DGizmoPlugin.#_bindings.method_create_handle_material,
      this._owner,
      _name, _billboard, _texture
    );
    
  }
  add_material(_name, _material) {
    EditorNode3DGizmoPlugin.init_method_add_material();
    return _call_native_mb_no_ret(
      EditorNode3DGizmoPlugin.#_bindings.method_add_material,
      this._owner,
      _name, _material
    );
    
  }
  get_material(_name, _gizmo) {
    EditorNode3DGizmoPlugin.init_method_get_material();
    return _call_native_mb_ret(
      EditorNode3DGizmoPlugin.#_bindings.method_get_material,
      this._owner,
			Variant.Type.OBJECT,
      _name, _gizmo
    );
    
  }
  

}