import * as internal from '__internal__';
import { Node3D } from 'src/js_godot/classesnode3d'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Basis } from 'src/js_godot/variant/basis'
import { RID } from 'src/js_godot/variant/rid'
import { Vector3i } from 'src/js_godot/variant/vector3i'
class _MethodBindings {
    method_set_collision_layer;
    method_get_collision_layer;
    method_set_collision_mask;
    method_get_collision_mask;
    method_set_collision_mask_value;
    method_get_collision_mask_value;
    method_set_collision_layer_value;
    method_get_collision_layer_value;
    method_set_collision_priority;
    method_get_collision_priority;
    method_set_physics_material;
    method_get_physics_material;
    method_set_bake_navigation;
    method_is_baking_navigation;
    method_set_navigation_map;
    method_get_navigation_map;
    method_set_mesh_library;
    method_get_mesh_library;
    method_set_cell_size;
    method_get_cell_size;
    method_set_cell_scale;
    method_get_cell_scale;
    method_set_octant_size;
    method_get_octant_size;
    method_set_cell_item;
    method_get_cell_item;
    method_get_cell_item_orientation;
    method_get_cell_item_basis;
    method_get_basis_with_orthogonal_index;
    method_get_orthogonal_index_from_basis;
    method_local_to_map;
    method_map_to_local;
    method_resource_changed;
    method_set_center_x;
    method_get_center_x;
    method_set_center_y;
    method_get_center_y;
    method_set_center_z;
    method_get_center_z;
    method_clear;
    method_get_used_cells;
    method_get_used_cells_by_item;
    method_get_meshes;
    method_get_bake_meshes;
    method_get_bake_mesh_instance;
    method_clear_baked_meshes;
    method_make_baked_meshes;
}


export class GridMap extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GridMap");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_collision_layer");
      this._bindings.method_set_collision_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_collision_layer");
      this._bindings.method_get_collision_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_collision_mask");
      this._bindings.method_set_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_collision_mask");
      this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_collision_mask_value");
      this._bindings.method_set_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_collision_mask_value");
      this._bindings.method_get_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_collision_layer_value");
      this._bindings.method_set_collision_layer_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_collision_layer_value");
      this._bindings.method_get_collision_layer_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_collision_priority");
      this._bindings.method_set_collision_priority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_collision_priority");
      this._bindings.method_get_collision_priority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_physics_material");
      this._bindings.method_set_physics_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1784508650
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_physics_material");
      this._bindings.method_get_physics_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2521850424
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_bake_navigation");
      this._bindings.method_set_bake_navigation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("is_baking_navigation");
      this._bindings.method_is_baking_navigation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_navigation_map");
      this._bindings.method_set_navigation_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_navigation_map");
      this._bindings.method_get_navigation_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_mesh_library");
      this._bindings.method_set_mesh_library = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1488083439
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_mesh_library");
      this._bindings.method_get_mesh_library = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3350993772
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_cell_size");
      this._bindings.method_set_cell_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_cell_size");
      this._bindings.method_get_cell_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_cell_scale");
      this._bindings.method_set_cell_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_cell_scale");
      this._bindings.method_get_cell_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_octant_size");
      this._bindings.method_set_octant_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_octant_size");
      this._bindings.method_get_octant_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_cell_item");
      this._bindings.method_set_cell_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3449088946
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_cell_item");
      this._bindings.method_get_cell_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3724960147
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_cell_item_orientation");
      this._bindings.method_get_cell_item_orientation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3724960147
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_cell_item_basis");
      this._bindings.method_get_cell_item_basis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3493604918
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_basis_with_orthogonal_index");
      this._bindings.method_get_basis_with_orthogonal_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2816196998
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_orthogonal_index_from_basis");
      this._bindings.method_get_orthogonal_index_from_basis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4210359952
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("local_to_map");
      this._bindings.method_local_to_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1257687843
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("map_to_local");
      this._bindings.method_map_to_local = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1088329196
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("resource_changed");
      this._bindings.method_resource_changed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        968641751
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_center_x");
      this._bindings.method_set_center_x = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_center_x");
      this._bindings.method_get_center_x = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_center_y");
      this._bindings.method_set_center_y = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_center_y");
      this._bindings.method_get_center_y = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_center_z");
      this._bindings.method_set_center_z = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_center_z");
      this._bindings.method_get_center_z = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_used_cells");
      this._bindings.method_get_used_cells = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_used_cells_by_item");
      this._bindings.method_get_used_cells_by_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        663333327
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_meshes");
      this._bindings.method_get_meshes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_bake_meshes");
      this._bindings.method_get_bake_meshes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2915620761
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_bake_mesh_instance");
      this._bindings.method_get_bake_mesh_instance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        937000113
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("clear_baked_meshes");
      this._bindings.method_clear_baked_meshes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("GridMap");
      let methodname = new StringName("make_baked_meshes");
      this._bindings.method_make_baked_meshes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3609286057
      );
    }
  }
  set_collision_layer(_layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_layer,
      this._owner,
      _layer
    );
  }
  get_collision_layer() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_layer,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_collision_mask(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_mask,
      this._owner,
      _mask
    );
  }
  get_collision_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_collision_mask_value(_layer_number, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_mask_value,
      this._owner,
      _layer_number, _value
    );
  }
  get_collision_mask_value(_layer_number) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_mask_value,
      this._owner,
			Variant.Type.BOOL,
      _layer_number
    );
  }
  set_collision_layer_value(_layer_number, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_layer_value,
      this._owner,
      _layer_number, _value
    );
  }
  get_collision_layer_value(_layer_number) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_layer_value,
      this._owner,
			Variant.Type.BOOL,
      _layer_number
    );
  }
  set_collision_priority(_priority) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_priority,
      this._owner,
      _priority
    );
  }
  get_collision_priority() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_priority,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_physics_material(_material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_physics_material,
      this._owner,
      _material
    );
  }
  get_physics_material() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_physics_material,
      this._owner,
			Variant.INT,
      
    );
  }
  set_bake_navigation(_bake_navigation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bake_navigation,
      this._owner,
      _bake_navigation
    );
  }
  is_baking_navigation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_baking_navigation,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_navigation_map(_navigation_map) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_navigation_map,
      this._owner,
      _navigation_map
    );
  }
  get_navigation_map() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_navigation_map,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  set_mesh_library(_mesh_library) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mesh_library,
      this._owner,
      _mesh_library
    );
  }
  get_mesh_library() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mesh_library,
      this._owner,
			Variant.INT,
      
    );
  }
  set_cell_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cell_size,
      this._owner,
      _size
    );
  }
  get_cell_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cell_size,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_cell_scale(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cell_scale,
      this._owner,
      _scale
    );
  }
  get_cell_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cell_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_octant_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_octant_size,
      this._owner,
      _size
    );
  }
  get_octant_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_octant_size,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_cell_item(_position, _item, _orientation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cell_item,
      this._owner,
      _position, _item, _orientation
    );
  }
  get_cell_item(_position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cell_item,
      this._owner,
			Variant.Type.INT,
      _position
    );
  }
  get_cell_item_orientation(_position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cell_item_orientation,
      this._owner,
			Variant.Type.INT,
      _position
    );
  }
  get_cell_item_basis(_position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cell_item_basis,
      this._owner,
			Variant.Type.BASIS
    ,
      _position
    );
  }
  get_basis_with_orthogonal_index(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_basis_with_orthogonal_index,
      this._owner,
			Variant.Type.BASIS
    ,
      _index
    );
  }
  get_orthogonal_index_from_basis(_basis) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_orthogonal_index_from_basis,
      this._owner,
			Variant.Type.INT,
      _basis
    );
  }
  local_to_map(_local_position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_local_to_map,
      this._owner,
			Variant.Type.VECTOR3I
    ,
      _local_position
    );
  }
  map_to_local(_map_position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_to_local,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _map_position
    );
  }
  resource_changed(_resource) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_resource_changed,
      this._owner,
      _resource
    );
  }
  set_center_x(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_center_x,
      this._owner,
      _enable
    );
  }
  get_center_x() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_center_x,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_center_y(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_center_y,
      this._owner,
      _enable
    );
  }
  get_center_y() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_center_y,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_center_z(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_center_z,
      this._owner,
      _enable
    );
  }
  get_center_z() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_center_z,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
  }
  get_used_cells() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_used_cells,
      this._owner,
			Variant.INT,
      
    );
  }
  get_used_cells_by_item(_item) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_used_cells_by_item,
      this._owner,
			Variant.INT,
      _item
    );
  }
  get_meshes() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_meshes,
      this._owner,
			Variant.Type.ARRAY
    ,
      
    );
  }
  get_bake_meshes() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bake_meshes,
      this._owner,
			Variant.Type.ARRAY
    ,
      
    );
  }
  get_bake_mesh_instance(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bake_mesh_instance,
      this._owner,
			Variant.Type.RID
    ,
      _idx
    );
  }
  clear_baked_meshes() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_baked_meshes,
      this._owner,
      
    );
  }
  make_baked_meshes(_gen_lightmap_uv, _lightmap_uv_texel_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_make_baked_meshes,
      this._owner,
      _gen_lightmap_uv, _lightmap_uv_texel_size
    );
  }
}