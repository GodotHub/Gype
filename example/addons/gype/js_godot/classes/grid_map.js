import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { Node3D } from '@js_godot/classes/node3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GridMap");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_collision_layer() {
    if (!this.#_bindings.method_set_collision_layer) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_collision_layer");
      this.#_bindings.method_set_collision_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_collision_layer() {
    if (!this.#_bindings.method_get_collision_layer) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_collision_layer");
      this.#_bindings.method_get_collision_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_collision_mask() {
    if (!this.#_bindings.method_set_collision_mask) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_collision_mask");
      this.#_bindings.method_set_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_collision_mask() {
    if (!this.#_bindings.method_get_collision_mask) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_collision_mask");
      this.#_bindings.method_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_collision_mask_value() {
    if (!this.#_bindings.method_set_collision_mask_value) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_collision_mask_value");
      this.#_bindings.method_set_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_collision_mask_value() {
    if (!this.#_bindings.method_get_collision_mask_value) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_collision_mask_value");
      this.#_bindings.method_get_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_collision_layer_value() {
    if (!this.#_bindings.method_set_collision_layer_value) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_collision_layer_value");
      this.#_bindings.method_set_collision_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_collision_layer_value() {
    if (!this.#_bindings.method_get_collision_layer_value) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_collision_layer_value");
      this.#_bindings.method_get_collision_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_collision_priority() {
    if (!this.#_bindings.method_set_collision_priority) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_collision_priority");
      this.#_bindings.method_set_collision_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_collision_priority() {
    if (!this.#_bindings.method_get_collision_priority) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_collision_priority");
      this.#_bindings.method_get_collision_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_physics_material() {
    if (!this.#_bindings.method_set_physics_material) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_physics_material");
      this.#_bindings.method_set_physics_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1784508650
      );
    }
  }
  static init_method_get_physics_material() {
    if (!this.#_bindings.method_get_physics_material) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_physics_material");
      this.#_bindings.method_get_physics_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2521850424
      );
    }
  }
  static init_method_set_bake_navigation() {
    if (!this.#_bindings.method_set_bake_navigation) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_bake_navigation");
      this.#_bindings.method_set_bake_navigation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_baking_navigation() {
    if (!this.#_bindings.method_is_baking_navigation) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("is_baking_navigation");
      this.#_bindings.method_is_baking_navigation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_navigation_map() {
    if (!this.#_bindings.method_set_navigation_map) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_navigation_map");
      this.#_bindings.method_set_navigation_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }
  static init_method_get_navigation_map() {
    if (!this.#_bindings.method_get_navigation_map) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_navigation_map");
      this.#_bindings.method_get_navigation_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_set_mesh_library() {
    if (!this.#_bindings.method_set_mesh_library) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_mesh_library");
      this.#_bindings.method_set_mesh_library = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1488083439
      );
    }
  }
  static init_method_get_mesh_library() {
    if (!this.#_bindings.method_get_mesh_library) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_mesh_library");
      this.#_bindings.method_get_mesh_library = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3350993772
      );
    }
  }
  static init_method_set_cell_size() {
    if (!this.#_bindings.method_set_cell_size) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_cell_size");
      this.#_bindings.method_set_cell_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_cell_size() {
    if (!this.#_bindings.method_get_cell_size) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_cell_size");
      this.#_bindings.method_get_cell_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_cell_scale() {
    if (!this.#_bindings.method_set_cell_scale) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_cell_scale");
      this.#_bindings.method_set_cell_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_cell_scale() {
    if (!this.#_bindings.method_get_cell_scale) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_cell_scale");
      this.#_bindings.method_get_cell_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_octant_size() {
    if (!this.#_bindings.method_set_octant_size) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_octant_size");
      this.#_bindings.method_set_octant_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_octant_size() {
    if (!this.#_bindings.method_get_octant_size) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_octant_size");
      this.#_bindings.method_get_octant_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_cell_item() {
    if (!this.#_bindings.method_set_cell_item) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_cell_item");
      this.#_bindings.method_set_cell_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3449088946
      );
    }
  }
  static init_method_get_cell_item() {
    if (!this.#_bindings.method_get_cell_item) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_cell_item");
      this.#_bindings.method_get_cell_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3724960147
      );
    }
  }
  static init_method_get_cell_item_orientation() {
    if (!this.#_bindings.method_get_cell_item_orientation) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_cell_item_orientation");
      this.#_bindings.method_get_cell_item_orientation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3724960147
      );
    }
  }
  static init_method_get_cell_item_basis() {
    if (!this.#_bindings.method_get_cell_item_basis) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_cell_item_basis");
      this.#_bindings.method_get_cell_item_basis = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3493604918
      );
    }
  }
  static init_method_get_basis_with_orthogonal_index() {
    if (!this.#_bindings.method_get_basis_with_orthogonal_index) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_basis_with_orthogonal_index");
      this.#_bindings.method_get_basis_with_orthogonal_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2816196998
      );
    }
  }
  static init_method_get_orthogonal_index_from_basis() {
    if (!this.#_bindings.method_get_orthogonal_index_from_basis) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_orthogonal_index_from_basis");
      this.#_bindings.method_get_orthogonal_index_from_basis = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4210359952
      );
    }
  }
  static init_method_local_to_map() {
    if (!this.#_bindings.method_local_to_map) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("local_to_map");
      this.#_bindings.method_local_to_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1257687843
      );
    }
  }
  static init_method_map_to_local() {
    if (!this.#_bindings.method_map_to_local) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("map_to_local");
      this.#_bindings.method_map_to_local = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1088329196
      );
    }
  }
  static init_method_resource_changed() {
    if (!this.#_bindings.method_resource_changed) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("resource_changed");
      this.#_bindings.method_resource_changed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        968641751
      );
    }
  }
  static init_method_set_center_x() {
    if (!this.#_bindings.method_set_center_x) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_center_x");
      this.#_bindings.method_set_center_x = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_center_x() {
    if (!this.#_bindings.method_get_center_x) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_center_x");
      this.#_bindings.method_get_center_x = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_center_y() {
    if (!this.#_bindings.method_set_center_y) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_center_y");
      this.#_bindings.method_set_center_y = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_center_y() {
    if (!this.#_bindings.method_get_center_y) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_center_y");
      this.#_bindings.method_get_center_y = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_center_z() {
    if (!this.#_bindings.method_set_center_z) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("set_center_z");
      this.#_bindings.method_set_center_z = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_center_z() {
    if (!this.#_bindings.method_get_center_z) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_center_z");
      this.#_bindings.method_get_center_z = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_clear() {
    if (!this.#_bindings.method_clear) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("clear");
      this.#_bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_used_cells() {
    if (!this.#_bindings.method_get_used_cells) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_used_cells");
      this.#_bindings.method_get_used_cells = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_get_used_cells_by_item() {
    if (!this.#_bindings.method_get_used_cells_by_item) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_used_cells_by_item");
      this.#_bindings.method_get_used_cells_by_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        663333327
      );
    }
  }
  static init_method_get_meshes() {
    if (!this.#_bindings.method_get_meshes) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_meshes");
      this.#_bindings.method_get_meshes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_get_bake_meshes() {
    if (!this.#_bindings.method_get_bake_meshes) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_bake_meshes");
      this.#_bindings.method_get_bake_meshes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_get_bake_mesh_instance() {
    if (!this.#_bindings.method_get_bake_mesh_instance) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("get_bake_mesh_instance");
      this.#_bindings.method_get_bake_mesh_instance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        937000113
      );
    }
  }
  static init_method_clear_baked_meshes() {
    if (!this.#_bindings.method_clear_baked_meshes) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("clear_baked_meshes");
      this.#_bindings.method_clear_baked_meshes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_make_baked_meshes() {
    if (!this.#_bindings.method_make_baked_meshes) {
      let classname = new StringName("GridMap");
      let methodname = new StringName("make_baked_meshes");
      this.#_bindings.method_make_baked_meshes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3609286057
      );
    }
  }

  
  
  set_collision_layer(_layer) {
    GridMap.init_method_set_collision_layer();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_set_collision_layer,
      this._owner,
      _layer
    );
    
  }
  get_collision_layer() {
    GridMap.init_method_get_collision_layer();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_collision_layer,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_collision_mask(_mask) {
    GridMap.init_method_set_collision_mask();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_set_collision_mask,
      this._owner,
      _mask
    );
    
  }
  get_collision_mask() {
    GridMap.init_method_get_collision_mask();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_collision_mask_value(_layer_number, _value) {
    GridMap.init_method_set_collision_mask_value();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_set_collision_mask_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_collision_mask_value(_layer_number) {
    GridMap.init_method_get_collision_mask_value();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_collision_mask_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
    );
    
  }
  set_collision_layer_value(_layer_number, _value) {
    GridMap.init_method_set_collision_layer_value();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_set_collision_layer_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_collision_layer_value(_layer_number) {
    GridMap.init_method_get_collision_layer_value();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_collision_layer_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
    );
    
  }
  set_collision_priority(_priority) {
    GridMap.init_method_set_collision_priority();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_set_collision_priority,
      this._owner,
      _priority
    );
    
  }
  get_collision_priority() {
    GridMap.init_method_get_collision_priority();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_collision_priority,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_physics_material(_material) {
    GridMap.init_method_set_physics_material();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_set_physics_material,
      this._owner,
      _material
    );
    
  }
  get_physics_material() {
    GridMap.init_method_get_physics_material();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_physics_material,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_bake_navigation(_bake_navigation) {
    GridMap.init_method_set_bake_navigation();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_set_bake_navigation,
      this._owner,
      _bake_navigation
    );
    
  }
  is_baking_navigation() {
    GridMap.init_method_is_baking_navigation();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_is_baking_navigation,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_navigation_map(_navigation_map) {
    GridMap.init_method_set_navigation_map();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_set_navigation_map,
      this._owner,
      _navigation_map
    );
    
  }
  get_navigation_map() {
    GridMap.init_method_get_navigation_map();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_navigation_map,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_mesh_library(_mesh_library) {
    GridMap.init_method_set_mesh_library();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_set_mesh_library,
      this._owner,
      _mesh_library
    );
    
  }
  get_mesh_library() {
    GridMap.init_method_get_mesh_library();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_mesh_library,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_cell_size(_size) {
    GridMap.init_method_set_cell_size();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_set_cell_size,
      this._owner,
      _size
    );
    
  }
  get_cell_size() {
    GridMap.init_method_get_cell_size();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_cell_size,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_cell_scale(_scale) {
    GridMap.init_method_set_cell_scale();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_set_cell_scale,
      this._owner,
      _scale
    );
    
  }
  get_cell_scale() {
    GridMap.init_method_get_cell_scale();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_cell_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_octant_size(_size) {
    GridMap.init_method_set_octant_size();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_set_octant_size,
      this._owner,
      _size
    );
    
  }
  get_octant_size() {
    GridMap.init_method_get_octant_size();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_octant_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_cell_item(_position, _item, _orientation) {
    GridMap.init_method_set_cell_item();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_set_cell_item,
      this._owner,
      _position, _item, _orientation
    );
    
  }
  get_cell_item(_position) {
    GridMap.init_method_get_cell_item();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_cell_item,
      this._owner,
			Variant.Type.INT,
    
      _position
    );
    
  }
  get_cell_item_orientation(_position) {
    GridMap.init_method_get_cell_item_orientation();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_cell_item_orientation,
      this._owner,
			Variant.Type.INT,
    
      _position
    );
    
  }
  get_cell_item_basis(_position) {
    GridMap.init_method_get_cell_item_basis();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_cell_item_basis,
      this._owner,
			Variant.Type.BASIS,
    
      _position
    );
    
  }
  get_basis_with_orthogonal_index(_index) {
    GridMap.init_method_get_basis_with_orthogonal_index();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_basis_with_orthogonal_index,
      this._owner,
			Variant.Type.BASIS,
    
      _index
    );
    
  }
  get_orthogonal_index_from_basis(_basis) {
    GridMap.init_method_get_orthogonal_index_from_basis();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_orthogonal_index_from_basis,
      this._owner,
			Variant.Type.INT,
    
      _basis
    );
    
  }
  local_to_map(_local_position) {
    GridMap.init_method_local_to_map();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_local_to_map,
      this._owner,
			Variant.Type.VECTOR3I,
    
      _local_position
    );
    
  }
  map_to_local(_map_position) {
    GridMap.init_method_map_to_local();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_map_to_local,
      this._owner,
			Variant.Type.VECTOR3,
    
      _map_position
    );
    
  }
  resource_changed(_resource) {
    GridMap.init_method_resource_changed();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_resource_changed,
      this._owner,
      _resource
    );
    
  }
  set_center_x(_enable) {
    GridMap.init_method_set_center_x();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_set_center_x,
      this._owner,
      _enable
    );
    
  }
  get_center_x() {
    GridMap.init_method_get_center_x();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_center_x,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_center_y(_enable) {
    GridMap.init_method_set_center_y();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_set_center_y,
      this._owner,
      _enable
    );
    
  }
  get_center_y() {
    GridMap.init_method_get_center_y();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_center_y,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_center_z(_enable) {
    GridMap.init_method_set_center_z();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_set_center_z,
      this._owner,
      _enable
    );
    
  }
  get_center_z() {
    GridMap.init_method_get_center_z();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_center_z,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  clear() {
    GridMap.init_method_clear();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_clear,
      this._owner,
      
    );
    
  }
  get_used_cells() {
    GridMap.init_method_get_used_cells();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_used_cells,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  get_used_cells_by_item(_item) {
    GridMap.init_method_get_used_cells_by_item();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_used_cells_by_item,
      this._owner,
			Variant.Type.ARRAY,
      _item
    );
    
  }
  get_meshes() {
    GridMap.init_method_get_meshes();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_meshes,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  get_bake_meshes() {
    GridMap.init_method_get_bake_meshes();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_bake_meshes,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  get_bake_mesh_instance(_idx) {
    GridMap.init_method_get_bake_mesh_instance();
    return _call_native_mb_ret(
      GridMap.#_bindings.method_get_bake_mesh_instance,
      this._owner,
			Variant.Type.RID,
    
      _idx
    );
    
  }
  clear_baked_meshes() {
    GridMap.init_method_clear_baked_meshes();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_clear_baked_meshes,
      this._owner,
      
    );
    
  }
  make_baked_meshes(_gen_lightmap_uv, _lightmap_uv_texel_size) {
    GridMap.init_method_make_baked_meshes();
    return _call_native_mb_no_ret(
      GridMap.#_bindings.method_make_baked_meshes,
      this._owner,
      _gen_lightmap_uv, _lightmap_uv_texel_size
    );
    
  }
  
get mesh_library () {
  return this.get_mesh_library();
}
set mesh_library (new_value) {
  this.set_mesh_library(new_value);
}
get physics_material () {
  return this.get_physics_material();
}
set physics_material (new_value) {
  this.set_physics_material(new_value);
}
get cell_size () {
  return this.get_cell_size();
}
set cell_size (new_value) {
  this.set_cell_size(new_value);
}
get cell_octant_size () {
  return this.get_octant_size();
}
set cell_octant_size (new_value) {
  this.set_octant_size(new_value);
}
get cell_center_x () {
  return this.get_center_x();
}
set cell_center_x (new_value) {
  this.set_center_x(new_value);
}
get cell_center_y () {
  return this.get_center_y();
}
set cell_center_y (new_value) {
  this.set_center_y(new_value);
}
get cell_center_z () {
  return this.get_center_z();
}
set cell_center_z (new_value) {
  this.set_center_z(new_value);
}
get cell_scale () {
  return this.get_cell_scale();
}
set cell_scale (new_value) {
  this.set_cell_scale(new_value);
}
get collision_layer () {
  return this.get_collision_layer();
}
set collision_layer (new_value) {
  this.set_collision_layer(new_value);
}
get collision_mask () {
  return this.get_collision_mask();
}
set collision_mask (new_value) {
  this.set_collision_mask(new_value);
}
get collision_priority () {
  return this.get_collision_priority();
}
set collision_priority (new_value) {
  this.set_collision_priority(new_value);
}
get bake_navigation () {
  return this.is_baking_navigation();
}
set bake_navigation (new_value) {
  this.set_bake_navigation(new_value);
}

}