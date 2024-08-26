import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
import { RID } from 'src/js_godot/variant/rid'
import { Vector2 } from 'src/js_godot/variant/vector2'
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


export class NavigationPathQueryParameters2D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationPathQueryParameters2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("set_pathfinding_algorithm");
      this._bindings.method_set_pathfinding_algorithm = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2783519915
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("get_pathfinding_algorithm");
      this._bindings.method_get_pathfinding_algorithm = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3000421146
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("set_path_postprocessing");
      this._bindings.method_set_path_postprocessing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2864409082
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("get_path_postprocessing");
      this._bindings.method_get_path_postprocessing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3798118993
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("set_map");
      this._bindings.method_set_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("get_map");
      this._bindings.method_get_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("set_start_position");
      this._bindings.method_set_start_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("get_start_position");
      this._bindings.method_get_start_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("set_target_position");
      this._bindings.method_set_target_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("get_target_position");
      this._bindings.method_get_target_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("set_navigation_layers");
      this._bindings.method_set_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("get_navigation_layers");
      this._bindings.method_get_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("set_metadata_flags");
      this._bindings.method_set_metadata_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        24274129
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("get_metadata_flags");
      this._bindings.method_get_metadata_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        488152976
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("set_simplify_path");
      this._bindings.method_set_simplify_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("get_simplify_path");
      this._bindings.method_get_simplify_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("set_simplify_epsilon");
      this._bindings.method_set_simplify_epsilon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("NavigationPathQueryParameters2D");
      let methodname = new StringName("get_simplify_epsilon");
      this._bindings.method_get_simplify_epsilon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_pathfinding_algorithm(_pathfinding_algorithm) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pathfinding_algorithm,
      this._owner,
      _pathfinding_algorithm
    );
  }
  get_pathfinding_algorithm() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pathfinding_algorithm,
      this._owner,
			Variant.INT,
      
    );
  }
  set_path_postprocessing(_path_postprocessing) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_path_postprocessing,
      this._owner,
      _path_postprocessing
    );
  }
  get_path_postprocessing() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_path_postprocessing,
      this._owner,
			Variant.INT,
      
    );
  }
  set_map(_map) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_map,
      this._owner,
      _map
    );
  }
  get_map() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_map,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  set_start_position(_start_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_start_position,
      this._owner,
      _start_position
    );
  }
  get_start_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_start_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_target_position(_target_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_target_position,
      this._owner,
      _target_position
    );
  }
  get_target_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_target_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_navigation_layers(_navigation_layers) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_navigation_layers,
      this._owner,
      _navigation_layers
    );
  }
  get_navigation_layers() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_navigation_layers,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_metadata_flags(_flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_metadata_flags,
      this._owner,
      _flags
    );
  }
  get_metadata_flags() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_metadata_flags,
      this._owner,
			Variant.INT,
      
    );
  }
  set_simplify_path(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_simplify_path,
      this._owner,
      _enabled
    );
  }
  get_simplify_path() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_simplify_path,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_simplify_epsilon(_epsilon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_simplify_epsilon,
      this._owner,
      _epsilon
    );
  }
  get_simplify_epsilon() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_simplify_epsilon,
      this._owner,
			Variant.Type.FLOAT,
      
    );
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