import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Transform3D } from '@js_godot/variant/transform3d'
import { Resource } from '@js_godot/classes/resource'
import { Vector3 } from '@js_godot/variant/vector3'
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { StringName } from '@js_godot/variant/string_name'
import { AABB } from '@js_godot/variant/aabb'
import { PackedInt32Array } from '@js_godot/variant/packed_int32_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_allocate;
  method_get_bounds;
  method_get_octree_size;
  method_get_to_cell_xform;
  method_get_octree_cells;
  method_get_data_cells;
  method_get_level_counts;
  method_set_dynamic_range;
  method_get_dynamic_range;
  method_set_energy;
  method_get_energy;
  method_set_bias;
  method_get_bias;
  method_set_normal_bias;
  method_get_normal_bias;
  method_set_propagation;
  method_get_propagation;
  method_set_interior;
  method_is_interior;
  method_set_use_two_bounces;
  method_is_using_two_bounces;
}
export class VoxelGIData extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VoxelGIData");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("allocate");
      this._bindings.method_allocate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4041601946
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("get_bounds");
      this._bindings.method_get_bounds = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1068685055
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("get_octree_size");
      this._bindings.method_get_octree_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("get_to_cell_xform");
      this._bindings.method_get_to_cell_xform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3229777777
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("get_octree_cells");
      this._bindings.method_get_octree_cells = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2362200018
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("get_data_cells");
      this._bindings.method_get_data_cells = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2362200018
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("get_level_counts");
      this._bindings.method_get_level_counts = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1930428628
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("set_dynamic_range");
      this._bindings.method_set_dynamic_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("get_dynamic_range");
      this._bindings.method_get_dynamic_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("set_energy");
      this._bindings.method_set_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("get_energy");
      this._bindings.method_get_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("set_bias");
      this._bindings.method_set_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("get_bias");
      this._bindings.method_get_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("set_normal_bias");
      this._bindings.method_set_normal_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("get_normal_bias");
      this._bindings.method_get_normal_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("set_propagation");
      this._bindings.method_set_propagation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("get_propagation");
      this._bindings.method_get_propagation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("set_interior");
      this._bindings.method_set_interior = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("is_interior");
      this._bindings.method_is_interior = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("set_use_two_bounces");
      this._bindings.method_set_use_two_bounces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("VoxelGIData");
      let methodname = new StringName("is_using_two_bounces");
      this._bindings.method_is_using_two_bounces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  allocate(_to_cell_xform, _aabb, _octree_size, _octree_cells, _data_cells, _distance_field, _level_counts) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_allocate,
      this._owner,
      _to_cell_xform, _aabb, _octree_size, _octree_cells, _data_cells, _distance_field, _level_counts
    );
    
  }
  get_bounds() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bounds,
      this._owner,
			Variant.Type.AABB,
    
      
    );
    
  }
  get_octree_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_octree_size,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_to_cell_xform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_to_cell_xform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  get_octree_cells() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_octree_cells,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      
    );
    
  }
  get_data_cells() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_data_cells,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      
    );
    
  }
  get_level_counts() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_level_counts,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_dynamic_range(_dynamic_range) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_dynamic_range,
      this._owner,
      _dynamic_range
    );
    
  }
  get_dynamic_range() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_dynamic_range,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_energy(_energy) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_energy,
      this._owner,
      _energy
    );
    
  }
  get_energy() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_energy,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_bias(_bias) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bias,
      this._owner,
      _bias
    );
    
  }
  get_bias() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bias,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_normal_bias(_bias) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_normal_bias,
      this._owner,
      _bias
    );
    
  }
  get_normal_bias() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_normal_bias,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_propagation(_propagation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_propagation,
      this._owner,
      _propagation
    );
    
  }
  get_propagation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_propagation,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_interior(_interior) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_interior,
      this._owner,
      _interior
    );
    
  }
  is_interior() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_interior,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_use_two_bounces(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_two_bounces,
      this._owner,
      _enable
    );
    
  }
  is_using_two_bounces() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_using_two_bounces,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  
get dynamic_range () {
  return this.get_dynamic_range();
}
set dynamic_range (new_value) {
  this.set_dynamic_range(new_value);
}
get energy () {
  return this.get_energy();
}
set energy (new_value) {
  this.set_energy(new_value);
}
get bias () {
  return this.get_bias();
}
set bias (new_value) {
  this.set_bias(new_value);
}
get normal_bias () {
  return this.get_normal_bias();
}
set normal_bias (new_value) {
  this.set_normal_bias(new_value);
}
get propagation () {
  return this.get_propagation();
}
set propagation (new_value) {
  this.set_propagation(new_value);
}
get use_two_bounces () {
  return this.is_using_two_bounces();
}
set use_two_bounces (new_value) {
  this.set_use_two_bounces(new_value);
}
get interior () {
  return this.is_interior();
}
set interior (new_value) {
  this.set_interior(new_value);
}


  static {
    this._init_bindings();
  }
}