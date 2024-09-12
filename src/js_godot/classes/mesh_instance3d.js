import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GeometryInstance3D } from '@js_godot/classes/geometry_instance3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_mesh;
  method_get_mesh;
  method_set_skeleton_path;
  method_get_skeleton_path;
  method_set_skin;
  method_get_skin;
  method_get_skin_reference;
  method_get_surface_override_material_count;
  method_set_surface_override_material;
  method_get_surface_override_material;
  method_get_active_material;
  method_create_trimesh_collision;
  method_create_convex_collision;
  method_create_multiple_convex_collisions;
  method_get_blend_shape_count;
  method_find_blend_shape_by_name;
  method_get_blend_shape_value;
  method_set_blend_shape_value;
  method_create_debug_tangents;
  method_bake_mesh_from_current_blend_shape_mix;
}
export class MeshInstance3D extends GeometryInstance3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MeshInstance3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_mesh() {
    if (!this.#_bindings.method_set_mesh) {
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("set_mesh");
      this.#_bindings.method_set_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        194775623
      );
    }
  }
  static init_method_get_mesh() {
    if (!this.#_bindings.method_get_mesh) {
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("get_mesh");
      this.#_bindings.method_get_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1808005922
      );
    }
  }
  static init_method_set_skeleton_path() {
    if (!this.#_bindings.method_set_skeleton_path) {
      let classname = new StringName("MeshInstance3D");
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
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("get_skeleton_path");
      this.#_bindings.method_get_skeleton_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        277076166
      );
    }
  }
  static init_method_set_skin() {
    if (!this.#_bindings.method_set_skin) {
      let classname = new StringName("MeshInstance3D");
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
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("get_skin");
      this.#_bindings.method_get_skin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2074563878
      );
    }
  }
  static init_method_get_skin_reference() {
    if (!this.#_bindings.method_get_skin_reference) {
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("get_skin_reference");
      this.#_bindings.method_get_skin_reference = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2060603409
      );
    }
  }
  static init_method_get_surface_override_material_count() {
    if (!this.#_bindings.method_get_surface_override_material_count) {
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("get_surface_override_material_count");
      this.#_bindings.method_get_surface_override_material_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_surface_override_material() {
    if (!this.#_bindings.method_set_surface_override_material) {
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("set_surface_override_material");
      this.#_bindings.method_set_surface_override_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3671737478
      );
    }
  }
  static init_method_get_surface_override_material() {
    if (!this.#_bindings.method_get_surface_override_material) {
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("get_surface_override_material");
      this.#_bindings.method_get_surface_override_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2897466400
      );
    }
  }
  static init_method_get_active_material() {
    if (!this.#_bindings.method_get_active_material) {
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("get_active_material");
      this.#_bindings.method_get_active_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2897466400
      );
    }
  }
  static init_method_create_trimesh_collision() {
    if (!this.#_bindings.method_create_trimesh_collision) {
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("create_trimesh_collision");
      this.#_bindings.method_create_trimesh_collision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_create_convex_collision() {
    if (!this.#_bindings.method_create_convex_collision) {
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("create_convex_collision");
      this.#_bindings.method_create_convex_collision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2751962654
      );
    }
  }
  static init_method_create_multiple_convex_collisions() {
    if (!this.#_bindings.method_create_multiple_convex_collisions) {
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("create_multiple_convex_collisions");
      this.#_bindings.method_create_multiple_convex_collisions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        628789669
      );
    }
  }
  static init_method_get_blend_shape_count() {
    if (!this.#_bindings.method_get_blend_shape_count) {
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("get_blend_shape_count");
      this.#_bindings.method_get_blend_shape_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_find_blend_shape_by_name() {
    if (!this.#_bindings.method_find_blend_shape_by_name) {
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("find_blend_shape_by_name");
      this.#_bindings.method_find_blend_shape_by_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4150868206
      );
    }
  }
  static init_method_get_blend_shape_value() {
    if (!this.#_bindings.method_get_blend_shape_value) {
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("get_blend_shape_value");
      this.#_bindings.method_get_blend_shape_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_set_blend_shape_value() {
    if (!this.#_bindings.method_set_blend_shape_value) {
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("set_blend_shape_value");
      this.#_bindings.method_set_blend_shape_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_create_debug_tangents() {
    if (!this.#_bindings.method_create_debug_tangents) {
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("create_debug_tangents");
      this.#_bindings.method_create_debug_tangents = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_bake_mesh_from_current_blend_shape_mix() {
    if (!this.#_bindings.method_bake_mesh_from_current_blend_shape_mix) {
      let classname = new StringName("MeshInstance3D");
      let methodname = new StringName("bake_mesh_from_current_blend_shape_mix");
      this.#_bindings.method_bake_mesh_from_current_blend_shape_mix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1457573577
      );
    }
  }

  
  
  set_mesh(_mesh) {
    MeshInstance3D.init_method_set_mesh();
    return _call_native_mb_no_ret(
      MeshInstance3D.#_bindings.method_set_mesh,
      this._owner,
      _mesh
    );
    
  }
  get_mesh() {
    MeshInstance3D.init_method_get_mesh();
    return _call_native_mb_ret(
      MeshInstance3D.#_bindings.method_get_mesh,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_skeleton_path(_skeleton_path) {
    MeshInstance3D.init_method_set_skeleton_path();
    return _call_native_mb_no_ret(
      MeshInstance3D.#_bindings.method_set_skeleton_path,
      this._owner,
      _skeleton_path
    );
    
  }
  get_skeleton_path() {
    MeshInstance3D.init_method_get_skeleton_path();
    return _call_native_mb_ret(
      MeshInstance3D.#_bindings.method_get_skeleton_path,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_skin(_skin) {
    MeshInstance3D.init_method_set_skin();
    return _call_native_mb_no_ret(
      MeshInstance3D.#_bindings.method_set_skin,
      this._owner,
      _skin
    );
    
  }
  get_skin() {
    MeshInstance3D.init_method_get_skin();
    return _call_native_mb_ret(
      MeshInstance3D.#_bindings.method_get_skin,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_skin_reference() {
    MeshInstance3D.init_method_get_skin_reference();
    return _call_native_mb_ret(
      MeshInstance3D.#_bindings.method_get_skin_reference,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_surface_override_material_count() {
    MeshInstance3D.init_method_get_surface_override_material_count();
    return _call_native_mb_ret(
      MeshInstance3D.#_bindings.method_get_surface_override_material_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_surface_override_material(_surface, _material) {
    MeshInstance3D.init_method_set_surface_override_material();
    return _call_native_mb_no_ret(
      MeshInstance3D.#_bindings.method_set_surface_override_material,
      this._owner,
      _surface, _material
    );
    
  }
  get_surface_override_material(_surface) {
    MeshInstance3D.init_method_get_surface_override_material();
    return _call_native_mb_ret(
      MeshInstance3D.#_bindings.method_get_surface_override_material,
      this._owner,
			Variant.Type.OBJECT,
      _surface
    );
    
  }
  get_active_material(_surface) {
    MeshInstance3D.init_method_get_active_material();
    return _call_native_mb_ret(
      MeshInstance3D.#_bindings.method_get_active_material,
      this._owner,
			Variant.Type.OBJECT,
      _surface
    );
    
  }
  create_trimesh_collision() {
    MeshInstance3D.init_method_create_trimesh_collision();
    return _call_native_mb_no_ret(
      MeshInstance3D.#_bindings.method_create_trimesh_collision,
      this._owner,
      
    );
    
  }
  create_convex_collision(_clean, _simplify) {
    MeshInstance3D.init_method_create_convex_collision();
    return _call_native_mb_no_ret(
      MeshInstance3D.#_bindings.method_create_convex_collision,
      this._owner,
      _clean, _simplify
    );
    
  }
  create_multiple_convex_collisions(_settings) {
    MeshInstance3D.init_method_create_multiple_convex_collisions();
    return _call_native_mb_no_ret(
      MeshInstance3D.#_bindings.method_create_multiple_convex_collisions,
      this._owner,
      _settings
    );
    
  }
  get_blend_shape_count() {
    MeshInstance3D.init_method_get_blend_shape_count();
    return _call_native_mb_ret(
      MeshInstance3D.#_bindings.method_get_blend_shape_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  find_blend_shape_by_name(_name) {
    MeshInstance3D.init_method_find_blend_shape_by_name();
    return _call_native_mb_ret(
      MeshInstance3D.#_bindings.method_find_blend_shape_by_name,
      this._owner,
			Variant.Type.INT,
    
      _name
    );
    
  }
  get_blend_shape_value(_blend_shape_idx) {
    MeshInstance3D.init_method_get_blend_shape_value();
    return _call_native_mb_ret(
      MeshInstance3D.#_bindings.method_get_blend_shape_value,
      this._owner,
			Variant.Type.FLOAT,
    
      _blend_shape_idx
    );
    
  }
  set_blend_shape_value(_blend_shape_idx, _value) {
    MeshInstance3D.init_method_set_blend_shape_value();
    return _call_native_mb_no_ret(
      MeshInstance3D.#_bindings.method_set_blend_shape_value,
      this._owner,
      _blend_shape_idx, _value
    );
    
  }
  create_debug_tangents() {
    MeshInstance3D.init_method_create_debug_tangents();
    return _call_native_mb_no_ret(
      MeshInstance3D.#_bindings.method_create_debug_tangents,
      this._owner,
      
    );
    
  }
  bake_mesh_from_current_blend_shape_mix(_existing) {
    MeshInstance3D.init_method_bake_mesh_from_current_blend_shape_mix();
    return _call_native_mb_ret(
      MeshInstance3D.#_bindings.method_bake_mesh_from_current_blend_shape_mix,
      this._owner,
			Variant.Type.OBJECT,
      _existing
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
get skeleton () {
  return this.get_skeleton_path();
}
set skeleton (new_value) {
  this.set_skeleton_path(new_value);
}

}