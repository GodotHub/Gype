import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_pathfinding_algorithm;
  method_get_pathfinding_algorithm;
  method_set_path_postprocessing;
  method_get_path_postprocessing;
  method_set_map;
  method_get_map;
  method_set_start_position;
  method_get_start_position;
  method_set_target_position;
  method_get_target_position;
  method_set_navigation_layers;
  method_get_navigation_layers;
  method_set_metadata_flags;
  method_get_metadata_flags;
  method_set_simplify_path;
  method_get_simplify_path;
  method_set_simplify_epsilon;
  method_get_simplify_epsilon;
}
@GodotClass
export class NavigationPathQueryParameters3D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationPathQueryParameters3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_pathfinding_algorithm() {
    if (!this._bindings.method_set_pathfinding_algorithm) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("set_pathfinding_algorithm");
      this._bindings.method_set_pathfinding_algorithm = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        394560454
      );
    }
  }
  static init_method_get_pathfinding_algorithm() {
    if (!this._bindings.method_get_pathfinding_algorithm) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("get_pathfinding_algorithm");
      this._bindings.method_get_pathfinding_algorithm = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3398491350
      );
    }
  }
  static init_method_set_path_postprocessing() {
    if (!this._bindings.method_set_path_postprocessing) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("set_path_postprocessing");
      this._bindings.method_set_path_postprocessing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2267362344
      );
    }
  }
  static init_method_get_path_postprocessing() {
    if (!this._bindings.method_get_path_postprocessing) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("get_path_postprocessing");
      this._bindings.method_get_path_postprocessing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3883858360
      );
    }
  }
  static init_method_set_map() {
    if (!this._bindings.method_set_map) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("set_map");
      this._bindings.method_set_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }
  static init_method_get_map() {
    if (!this._bindings.method_get_map) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("get_map");
      this._bindings.method_get_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_set_start_position() {
    if (!this._bindings.method_set_start_position) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("set_start_position");
      this._bindings.method_set_start_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_start_position() {
    if (!this._bindings.method_get_start_position) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("get_start_position");
      this._bindings.method_get_start_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_target_position() {
    if (!this._bindings.method_set_target_position) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("set_target_position");
      this._bindings.method_set_target_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_target_position() {
    if (!this._bindings.method_get_target_position) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("get_target_position");
      this._bindings.method_get_target_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_navigation_layers() {
    if (!this._bindings.method_set_navigation_layers) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("set_navigation_layers");
      this._bindings.method_set_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_navigation_layers() {
    if (!this._bindings.method_get_navigation_layers) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("get_navigation_layers");
      this._bindings.method_get_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_metadata_flags() {
    if (!this._bindings.method_set_metadata_flags) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("set_metadata_flags");
      this._bindings.method_set_metadata_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2713846708
      );
    }
  }
  static init_method_get_metadata_flags() {
    if (!this._bindings.method_get_metadata_flags) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("get_metadata_flags");
      this._bindings.method_get_metadata_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1582332802
      );
    }
  }
  static init_method_set_simplify_path() {
    if (!this._bindings.method_set_simplify_path) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("set_simplify_path");
      this._bindings.method_set_simplify_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_simplify_path() {
    if (!this._bindings.method_get_simplify_path) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("get_simplify_path");
      this._bindings.method_get_simplify_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_simplify_epsilon() {
    if (!this._bindings.method_set_simplify_epsilon) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("set_simplify_epsilon");
      this._bindings.method_set_simplify_epsilon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_simplify_epsilon() {
    if (!this._bindings.method_get_simplify_epsilon) {
      let classname = new StringName("NavigationPathQueryParameters3D");
      let methodname = new StringName("get_simplify_epsilon");
      this._bindings.method_get_simplify_epsilon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_pathfinding_algorithm(_pathfinding_algorithm) {
    NavigationPathQueryParameters3D.init_method_set_pathfinding_algorithm();
    return _call_native_mb_no_ret(
      NavigationPathQueryParameters3D._bindings.method_set_pathfinding_algorithm,
      this._owner,
      _pathfinding_algorithm
    );
    
  }
  get_pathfinding_algorithm() {
    NavigationPathQueryParameters3D.init_method_get_pathfinding_algorithm();
    return _call_native_mb_ret(
      NavigationPathQueryParameters3D._bindings.method_get_pathfinding_algorithm,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_path_postprocessing(_path_postprocessing) {
    NavigationPathQueryParameters3D.init_method_set_path_postprocessing();
    return _call_native_mb_no_ret(
      NavigationPathQueryParameters3D._bindings.method_set_path_postprocessing,
      this._owner,
      _path_postprocessing
    );
    
  }
  get_path_postprocessing() {
    NavigationPathQueryParameters3D.init_method_get_path_postprocessing();
    return _call_native_mb_ret(
      NavigationPathQueryParameters3D._bindings.method_get_path_postprocessing,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_map(_map) {
    NavigationPathQueryParameters3D.init_method_set_map();
    return _call_native_mb_no_ret(
      NavigationPathQueryParameters3D._bindings.method_set_map,
      this._owner,
      _map
    );
    
  }
  get_map() {
    NavigationPathQueryParameters3D.init_method_get_map();
    return _call_native_mb_ret(
      NavigationPathQueryParameters3D._bindings.method_get_map,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_start_position(_start_position) {
    NavigationPathQueryParameters3D.init_method_set_start_position();
    return _call_native_mb_no_ret(
      NavigationPathQueryParameters3D._bindings.method_set_start_position,
      this._owner,
      _start_position
    );
    
  }
  get_start_position() {
    NavigationPathQueryParameters3D.init_method_get_start_position();
    return _call_native_mb_ret(
      NavigationPathQueryParameters3D._bindings.method_get_start_position,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_target_position(_target_position) {
    NavigationPathQueryParameters3D.init_method_set_target_position();
    return _call_native_mb_no_ret(
      NavigationPathQueryParameters3D._bindings.method_set_target_position,
      this._owner,
      _target_position
    );
    
  }
  get_target_position() {
    NavigationPathQueryParameters3D.init_method_get_target_position();
    return _call_native_mb_ret(
      NavigationPathQueryParameters3D._bindings.method_get_target_position,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_navigation_layers(_navigation_layers) {
    NavigationPathQueryParameters3D.init_method_set_navigation_layers();
    return _call_native_mb_no_ret(
      NavigationPathQueryParameters3D._bindings.method_set_navigation_layers,
      this._owner,
      _navigation_layers
    );
    
  }
  get_navigation_layers() {
    NavigationPathQueryParameters3D.init_method_get_navigation_layers();
    return _call_native_mb_ret(
      NavigationPathQueryParameters3D._bindings.method_get_navigation_layers,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_metadata_flags(_flags) {
    NavigationPathQueryParameters3D.init_method_set_metadata_flags();
    return _call_native_mb_no_ret(
      NavigationPathQueryParameters3D._bindings.method_set_metadata_flags,
      this._owner,
      _flags
    );
    
  }
  get_metadata_flags() {
    NavigationPathQueryParameters3D.init_method_get_metadata_flags();
    return _call_native_mb_ret(
      NavigationPathQueryParameters3D._bindings.method_get_metadata_flags,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_simplify_path(_enabled) {
    NavigationPathQueryParameters3D.init_method_set_simplify_path();
    return _call_native_mb_no_ret(
      NavigationPathQueryParameters3D._bindings.method_set_simplify_path,
      this._owner,
      _enabled
    );
    
  }
  get_simplify_path() {
    NavigationPathQueryParameters3D.init_method_get_simplify_path();
    return _call_native_mb_ret(
      NavigationPathQueryParameters3D._bindings.method_get_simplify_path,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_simplify_epsilon(_epsilon) {
    NavigationPathQueryParameters3D.init_method_set_simplify_epsilon();
    return _call_native_mb_no_ret(
      NavigationPathQueryParameters3D._bindings.method_set_simplify_epsilon,
      this._owner,
      _epsilon
    );
    
  }
  get_simplify_epsilon() {
    NavigationPathQueryParameters3D.init_method_get_simplify_epsilon();
    return _call_native_mb_ret(
      NavigationPathQueryParameters3D._bindings.method_get_simplify_epsilon,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get map () {
  return this.get_map();
}
set map (new_value) {
  this.set_map(new_value);
}
get start_position () {
  return this.get_start_position();
}
set start_position (new_value) {
  this.set_start_position(new_value);
}
get target_position () {
  return this.get_target_position();
}
set target_position (new_value) {
  this.set_target_position(new_value);
}
get navigation_layers () {
  return this.get_navigation_layers();
}
set navigation_layers (new_value) {
  this.set_navigation_layers(new_value);
}
get pathfinding_algorithm () {
  return this.get_pathfinding_algorithm();
}
set pathfinding_algorithm (new_value) {
  this.set_pathfinding_algorithm(new_value);
}
get path_postprocessing () {
  return this.get_path_postprocessing();
}
set path_postprocessing (new_value) {
  this.set_path_postprocessing(new_value);
}
get metadata_flags () {
  return this.get_metadata_flags();
}
set metadata_flags (new_value) {
  this.set_metadata_flags(new_value);
}
get simplify_path () {
  return this.get_simplify_path();
}
set simplify_path (new_value) {
  this.set_simplify_path(new_value);
}
get simplify_epsilon () {
  return this.get_simplify_epsilon();
}
set simplify_epsilon (new_value) {
  this.set_simplify_epsilon(new_value);
}

  static PathfindingAlgorithm = {
    PATHFINDING_ALGORITHM_ASTAR: 0,
  }
  static PathPostProcessing = {
    PATH_POSTPROCESSING_CORRIDORFUNNEL: 0,
    PATH_POSTPROCESSING_EDGECENTERED: 1,
  }
  static PathMetadataFlags = {
    PATH_METADATA_INCLUDE_NONE: 0,
    PATH_METADATA_INCLUDE_TYPES: 1,
    PATH_METADATA_INCLUDE_RIDS: 2,
    PATH_METADATA_INCLUDE_OWNERS: 4,
    PATH_METADATA_INCLUDE_ALL: 7,
  }
}