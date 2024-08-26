import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { CSGPrimitive3D } from 'src/js_godot/classescsg_primitive3d'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
class _MethodBindings {
    method_set_polygon;
    method_get_polygon;
    method_set_mode;
    method_get_mode;
    method_set_depth;
    method_get_depth;
    method_set_spin_degrees;
    method_get_spin_degrees;
    method_set_spin_sides;
    method_get_spin_sides;
    method_set_path_node;
    method_get_path_node;
    method_set_path_interval_type;
    method_get_path_interval_type;
    method_set_path_interval;
    method_get_path_interval;
    method_set_path_simplify_angle;
    method_get_path_simplify_angle;
    method_set_path_rotation;
    method_get_path_rotation;
    method_set_path_local;
    method_is_path_local;
    method_set_path_continuous_u;
    method_is_path_continuous_u;
    method_set_path_u_distance;
    method_get_path_u_distance;
    method_set_path_joined;
    method_is_path_joined;
    method_set_material;
    method_get_material;
    method_set_smooth_faces;
    method_get_smooth_faces;
}


export class CSGPolygon3D extends CSGPrimitive3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CSGPolygon3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_polygon");
      this._bindings.method_set_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1509147220
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_polygon");
      this._bindings.method_get_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2961356807
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_mode");
      this._bindings.method_set_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3158377035
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_mode");
      this._bindings.method_get_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1201612222
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_depth");
      this._bindings.method_set_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_depth");
      this._bindings.method_get_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_spin_degrees");
      this._bindings.method_set_spin_degrees = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_spin_degrees");
      this._bindings.method_get_spin_degrees = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_spin_sides");
      this._bindings.method_set_spin_sides = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_spin_sides");
      this._bindings.method_get_spin_sides = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_node");
      this._bindings.method_set_path_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_path_node");
      this._bindings.method_get_path_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_interval_type");
      this._bindings.method_set_path_interval_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3744240707
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_path_interval_type");
      this._bindings.method_get_path_interval_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3434618397
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_interval");
      this._bindings.method_set_path_interval = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_path_interval");
      this._bindings.method_get_path_interval = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_simplify_angle");
      this._bindings.method_set_path_simplify_angle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_path_simplify_angle");
      this._bindings.method_get_path_simplify_angle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_rotation");
      this._bindings.method_set_path_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1412947288
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_path_rotation");
      this._bindings.method_get_path_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        647219346
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_local");
      this._bindings.method_set_path_local = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("is_path_local");
      this._bindings.method_is_path_local = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_continuous_u");
      this._bindings.method_set_path_continuous_u = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("is_path_continuous_u");
      this._bindings.method_is_path_continuous_u = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_u_distance");
      this._bindings.method_set_path_u_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_path_u_distance");
      this._bindings.method_get_path_u_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_joined");
      this._bindings.method_set_path_joined = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("is_path_joined");
      this._bindings.method_is_path_joined = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_material");
      this._bindings.method_set_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2757459619
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_material");
      this._bindings.method_get_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        5934680
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_smooth_faces");
      this._bindings.method_set_smooth_faces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_smooth_faces");
      this._bindings.method_get_smooth_faces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_polygon(_polygon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_polygon,
      this._owner,
      _polygon
    );
  }
  get_polygon() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_polygon,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      
    );
  }
  set_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mode,
      this._owner,
      _mode
    );
  }
  get_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_depth(_depth) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth,
      this._owner,
      _depth
    );
  }
  get_depth() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_spin_degrees(_degrees) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_spin_degrees,
      this._owner,
      _degrees
    );
  }
  get_spin_degrees() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_spin_degrees,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_spin_sides(_spin_sides) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_spin_sides,
      this._owner,
      _spin_sides
    );
  }
  get_spin_sides() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_spin_sides,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_path_node(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_path_node,
      this._owner,
      _path
    );
  }
  get_path_node() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_path_node,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
  }
  set_path_interval_type(_interval_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_path_interval_type,
      this._owner,
      _interval_type
    );
  }
  get_path_interval_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_path_interval_type,
      this._owner,
			Variant.INT,
      
    );
  }
  set_path_interval(_interval) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_path_interval,
      this._owner,
      _interval
    );
  }
  get_path_interval() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_path_interval,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_path_simplify_angle(_degrees) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_path_simplify_angle,
      this._owner,
      _degrees
    );
  }
  get_path_simplify_angle() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_path_simplify_angle,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_path_rotation(_path_rotation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_path_rotation,
      this._owner,
      _path_rotation
    );
  }
  get_path_rotation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_path_rotation,
      this._owner,
			Variant.INT,
      
    );
  }
  set_path_local(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_path_local,
      this._owner,
      _enable
    );
  }
  is_path_local() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_path_local,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_path_continuous_u(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_path_continuous_u,
      this._owner,
      _enable
    );
  }
  is_path_continuous_u() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_path_continuous_u,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_path_u_distance(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_path_u_distance,
      this._owner,
      _distance
    );
  }
  get_path_u_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_path_u_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_path_joined(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_path_joined,
      this._owner,
      _enable
    );
  }
  is_path_joined() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_path_joined,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_material(_material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_material,
      this._owner,
      _material
    );
  }
  get_material() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_material,
      this._owner,
			Variant.INT,
      
    );
  }
  set_smooth_faces(_smooth_faces) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_smooth_faces,
      this._owner,
      _smooth_faces
    );
  }
  get_smooth_faces() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_smooth_faces,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  static Mode = {
    MODE_DEPTH: 0,
    MODE_SPIN: 1,
    MODE_PATH: 2,
  }
  static PathRotation = {
    PATH_ROTATION_POLYGON: 0,
    PATH_ROTATION_PATH: 1,
    PATH_ROTATION_PATH_FOLLOW: 2,
  }
  static PathIntervalType = {
    PATH_INTERVAL_DISTANCE: 0,
    PATH_INTERVAL_SUBDIVIDE: 1,
  }
}