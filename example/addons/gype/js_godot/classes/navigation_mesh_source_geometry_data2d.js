import * as internal from '__internal__';
import { Resource } from '@js_godot/classes/resource'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { PackedVector2Array } from '@js_godot/variant/packed_vector2_array'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_clear;
  method_has_data;
  method_set_traversable_outlines;
  method_get_traversable_outlines;
  method_set_obstruction_outlines;
  method_get_obstruction_outlines;
  method_append_traversable_outlines;
  method_append_obstruction_outlines;
  method_add_traversable_outline;
  method_add_obstruction_outline;
  method_merge;
  method_add_projected_obstruction;
  method_clear_projected_obstructions;
  method_set_projected_obstructions;
  method_get_projected_obstructions;
}
export class NavigationMeshSourceGeometryData2D extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationMeshSourceGeometryData2D");
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
      let classname = new StringName("NavigationMeshSourceGeometryData2D");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("NavigationMeshSourceGeometryData2D");
      let methodname = new StringName("has_data");
      this._bindings.method_has_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("NavigationMeshSourceGeometryData2D");
      let methodname = new StringName("set_traversable_outlines");
      this._bindings.method_set_traversable_outlines = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("NavigationMeshSourceGeometryData2D");
      let methodname = new StringName("get_traversable_outlines");
      this._bindings.method_get_traversable_outlines = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("NavigationMeshSourceGeometryData2D");
      let methodname = new StringName("set_obstruction_outlines");
      this._bindings.method_set_obstruction_outlines = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("NavigationMeshSourceGeometryData2D");
      let methodname = new StringName("get_obstruction_outlines");
      this._bindings.method_get_obstruction_outlines = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("NavigationMeshSourceGeometryData2D");
      let methodname = new StringName("append_traversable_outlines");
      this._bindings.method_append_traversable_outlines = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("NavigationMeshSourceGeometryData2D");
      let methodname = new StringName("append_obstruction_outlines");
      this._bindings.method_append_obstruction_outlines = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("NavigationMeshSourceGeometryData2D");
      let methodname = new StringName("add_traversable_outline");
      this._bindings.method_add_traversable_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1509147220
      );
    }
    {
      let classname = new StringName("NavigationMeshSourceGeometryData2D");
      let methodname = new StringName("add_obstruction_outline");
      this._bindings.method_add_obstruction_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1509147220
      );
    }
    {
      let classname = new StringName("NavigationMeshSourceGeometryData2D");
      let methodname = new StringName("merge");
      this._bindings.method_merge = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        742424872
      );
    }
    {
      let classname = new StringName("NavigationMeshSourceGeometryData2D");
      let methodname = new StringName("add_projected_obstruction");
      this._bindings.method_add_projected_obstruction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3882407395
      );
    }
    {
      let classname = new StringName("NavigationMeshSourceGeometryData2D");
      let methodname = new StringName("clear_projected_obstructions");
      this._bindings.method_clear_projected_obstructions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("NavigationMeshSourceGeometryData2D");
      let methodname = new StringName("set_projected_obstructions");
      this._bindings.method_set_projected_obstructions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("NavigationMeshSourceGeometryData2D");
      let methodname = new StringName("get_projected_obstructions");
      this._bindings.method_get_projected_obstructions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
  }
  
  clear() {
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData2D._bindings.method_clear,
      this._owner,
      
    );
    
  }
  has_data() {
    return _call_native_mb_ret(
      NavigationMeshSourceGeometryData2D._bindings.method_has_data,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_traversable_outlines(_traversable_outlines) {
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData2D._bindings.method_set_traversable_outlines,
      this._owner,
      _traversable_outlines
    );
    
  }
  get_traversable_outlines() {
    return _call_native_mb_ret(
      NavigationMeshSourceGeometryData2D._bindings.method_get_traversable_outlines,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_obstruction_outlines(_obstruction_outlines) {
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData2D._bindings.method_set_obstruction_outlines,
      this._owner,
      _obstruction_outlines
    );
    
  }
  get_obstruction_outlines() {
    return _call_native_mb_ret(
      NavigationMeshSourceGeometryData2D._bindings.method_get_obstruction_outlines,
      this._owner,
			Variant.INT,
      
    );
    
  }
  append_traversable_outlines(_traversable_outlines) {
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData2D._bindings.method_append_traversable_outlines,
      this._owner,
      _traversable_outlines
    );
    
  }
  append_obstruction_outlines(_obstruction_outlines) {
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData2D._bindings.method_append_obstruction_outlines,
      this._owner,
      _obstruction_outlines
    );
    
  }
  add_traversable_outline(_shape_outline) {
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData2D._bindings.method_add_traversable_outline,
      this._owner,
      _shape_outline
    );
    
  }
  add_obstruction_outline(_shape_outline) {
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData2D._bindings.method_add_obstruction_outline,
      this._owner,
      _shape_outline
    );
    
  }
  merge(_other_geometry) {
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData2D._bindings.method_merge,
      this._owner,
      _other_geometry
    );
    
  }
  add_projected_obstruction(_vertices, _carve) {
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData2D._bindings.method_add_projected_obstruction,
      this._owner,
      _vertices, _carve
    );
    
  }
  clear_projected_obstructions() {
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData2D._bindings.method_clear_projected_obstructions,
      this._owner,
      
    );
    
  }
  set_projected_obstructions(_projected_obstructions) {
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData2D._bindings.method_set_projected_obstructions,
      this._owner,
      _projected_obstructions
    );
    
  }
  get_projected_obstructions() {
    return _call_native_mb_ret(
      NavigationMeshSourceGeometryData2D._bindings.method_get_projected_obstructions,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  
get traversable_outlines () {
  return this.get_traversable_outlines();
}
set traversable_outlines (new_value) {
  this.set_traversable_outlines(new_value);
}
get obstruction_outlines () {
  return this.get_obstruction_outlines();
}
set obstruction_outlines (new_value) {
  this.set_obstruction_outlines(new_value);
}
get projected_obstructions () {
  return this.get_projected_obstructions();
}
set projected_obstructions (new_value) {
  this.set_projected_obstructions(new_value);
}


  static {
    this._init_bindings();
  }
}