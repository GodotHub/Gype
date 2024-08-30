import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { StringName } from 'src/js_godot/variant/string_name'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { RID } from 'src/js_godot/variant/rid'
import { Node3D } from 'src/js_godot/classes/node3d'
import { Projection } from 'src/js_godot/variant/projection'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_project_ray_normal;
    method_project_local_ray_normal;
    method_project_ray_origin;
    method_unproject_position;
    method_is_position_behind;
    method_project_position;
    method_set_perspective;
    method_set_orthogonal;
    method_set_frustum;
    method_make_current;
    method_clear_current;
    method_set_current;
    method_is_current;
    method_get_camera_transform;
    method_get_camera_projection;
    method_get_fov;
    method_get_frustum_offset;
    method_get_size;
    method_get_far;
    method_get_near;
    method_set_fov;
    method_set_frustum_offset;
    method_set_size;
    method_set_far;
    method_set_near;
    method_get_projection;
    method_set_projection;
    method_set_h_offset;
    method_get_h_offset;
    method_set_v_offset;
    method_get_v_offset;
    method_set_cull_mask;
    method_get_cull_mask;
    method_set_environment;
    method_get_environment;
    method_set_attributes;
    method_get_attributes;
    method_set_compositor;
    method_get_compositor;
    method_set_keep_aspect_mode;
    method_get_keep_aspect_mode;
    method_set_doppler_tracking;
    method_get_doppler_tracking;
    method_get_frustum;
    method_is_position_in_frustum;
    method_get_camera_rid;
    method_get_pyramid_shape_rid;
    method_set_cull_mask_value;
    method_get_cull_mask_value;
}


export class Camera3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Camera3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("project_ray_normal");
        this._bindings.method_project_ray_normal = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1718073306
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("project_local_ray_normal");
        this._bindings.method_project_local_ray_normal = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1718073306
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("project_ray_origin");
        this._bindings.method_project_ray_origin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1718073306
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("unproject_position");
        this._bindings.method_unproject_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3758901831
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("is_position_behind");
        this._bindings.method_is_position_behind = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3108956480
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("project_position");
        this._bindings.method_project_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2171975744
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_perspective");
        this._bindings.method_set_perspective = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2385087082
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_orthogonal");
        this._bindings.method_set_orthogonal = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2385087082
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_frustum");
        this._bindings.method_set_frustum = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          354890663
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("make_current");
        this._bindings.method_make_current = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("clear_current");
        this._bindings.method_clear_current = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3216645846
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_current");
        this._bindings.method_set_current = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("is_current");
        this._bindings.method_is_current = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_camera_transform");
        this._bindings.method_get_camera_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3229777777
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_camera_projection");
        this._bindings.method_get_camera_projection = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2910717950
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_fov");
        this._bindings.method_get_fov = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_frustum_offset");
        this._bindings.method_get_frustum_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_size");
        this._bindings.method_get_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_far");
        this._bindings.method_get_far = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_near");
        this._bindings.method_get_near = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_fov");
        this._bindings.method_set_fov = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_frustum_offset");
        this._bindings.method_set_frustum_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_size");
        this._bindings.method_set_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_far");
        this._bindings.method_set_far = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_near");
        this._bindings.method_set_near = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_projection");
        this._bindings.method_get_projection = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2624185235
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_projection");
        this._bindings.method_set_projection = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4218540108
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_h_offset");
        this._bindings.method_set_h_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_h_offset");
        this._bindings.method_get_h_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_v_offset");
        this._bindings.method_set_v_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_v_offset");
        this._bindings.method_get_v_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_cull_mask");
        this._bindings.method_set_cull_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_cull_mask");
        this._bindings.method_get_cull_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_environment");
        this._bindings.method_set_environment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4143518816
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_environment");
        this._bindings.method_get_environment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3082064660
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_attributes");
        this._bindings.method_set_attributes = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2817810567
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_attributes");
        this._bindings.method_get_attributes = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3921283215
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_compositor");
        this._bindings.method_set_compositor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1586754307
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_compositor");
        this._bindings.method_get_compositor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3647707413
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_keep_aspect_mode");
        this._bindings.method_set_keep_aspect_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740651252
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_keep_aspect_mode");
        this._bindings.method_get_keep_aspect_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2790278316
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_doppler_tracking");
        this._bindings.method_set_doppler_tracking = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3109431270
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_doppler_tracking");
        this._bindings.method_get_doppler_tracking = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1584483649
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_frustum");
        this._bindings.method_get_frustum = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("is_position_in_frustum");
        this._bindings.method_is_position_in_frustum = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3108956480
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_camera_rid");
        this._bindings.method_get_camera_rid = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2944877500
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_pyramid_shape_rid");
        this._bindings.method_get_pyramid_shape_rid = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("set_cull_mask_value");
        this._bindings.method_set_cull_mask_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("Camera3D");
        let methodname = new StringName("get_cull_mask_value");
        this._bindings.method_get_cull_mask_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
  }
  project_ray_normal(_screen_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_project_ray_normal,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _screen_point
    );
    
  }
  project_local_ray_normal(_screen_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_project_local_ray_normal,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _screen_point
    );
    
  }
  project_ray_origin(_screen_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_project_ray_origin,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _screen_point
    );
    
  }
  unproject_position(_world_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_unproject_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _world_point
    );
    
  }
  is_position_behind(_world_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_position_behind,
      this._owner,
			Variant.Type.BOOL,
      _world_point
    );
    
  }
  project_position(_screen_point, _z_depth) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_project_position,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _screen_point, _z_depth
    );
    
  }
  set_perspective(_fov, _z_near, _z_far) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_perspective,
      this._owner,
      _fov, _z_near, _z_far
    );
    
  }
  set_orthogonal(_size, _z_near, _z_far) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_orthogonal,
      this._owner,
      _size, _z_near, _z_far
    );
    
  }
  set_frustum(_size, _offset, _z_near, _z_far) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_frustum,
      this._owner,
      _size, _offset, _z_near, _z_far
    );
    
  }
  make_current() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_make_current,
      this._owner,
      
    );
    
  }
  clear_current(_enable_next) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_current,
      this._owner,
      _enable_next
    );
    
  }
  set_current(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_current,
      this._owner,
      _enabled
    );
    
  }
  is_current() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_current,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_camera_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_camera_transform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      
    );
    
  }
  get_camera_projection() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_camera_projection,
      this._owner,
			Variant.Type.PROJECTION
    ,
      
    );
    
  }
  get_fov() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fov,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_frustum_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_frustum_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_far() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_far,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_near() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_near,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_fov(_fov) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fov,
      this._owner,
      _fov
    );
    
  }
  set_frustum_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_frustum_offset,
      this._owner,
      _offset
    );
    
  }
  set_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  set_far(_far) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_far,
      this._owner,
      _far
    );
    
  }
  set_near(_near) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_near,
      this._owner,
      _near
    );
    
  }
  get_projection() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_projection,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_projection(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_projection,
      this._owner,
      _mode
    );
    
  }
  set_h_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_h_offset,
      this._owner,
      _offset
    );
    
  }
  get_h_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_h_offset,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_v_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_v_offset,
      this._owner,
      _offset
    );
    
  }
  get_v_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_v_offset,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_cull_mask(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cull_mask,
      this._owner,
      _mask
    );
    
  }
  get_cull_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cull_mask,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_environment(_env) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_environment,
      this._owner,
      _env
    );
    
  }
  get_environment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_environment,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_attributes(_env) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_attributes,
      this._owner,
      _env
    );
    
  }
  get_attributes() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_attributes,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_compositor(_compositor) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_compositor,
      this._owner,
      _compositor
    );
    
  }
  get_compositor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_compositor,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_keep_aspect_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_keep_aspect_mode,
      this._owner,
      _mode
    );
    
  }
  get_keep_aspect_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_keep_aspect_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_doppler_tracking(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_doppler_tracking,
      this._owner,
      _mode
    );
    
  }
  get_doppler_tracking() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_doppler_tracking,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_frustum() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_frustum,
      this._owner,
			Variant.INT,
      
    );
    
  }
  is_position_in_frustum(_world_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_position_in_frustum,
      this._owner,
			Variant.Type.BOOL,
      _world_point
    );
    
  }
  get_camera_rid() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_camera_rid,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  get_pyramid_shape_rid() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pyramid_shape_rid,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  set_cull_mask_value(_layer_number, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cull_mask_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_cull_mask_value(_layer_number) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cull_mask_value,
      this._owner,
			Variant.Type.BOOL,
      _layer_number
    );
    
  }
  static ProjectionType = {
    PROJECTION_PERSPECTIVE: 0,
    PROJECTION_ORTHOGONAL: 1,
    PROJECTION_FRUSTUM: 2,
  }
  static KeepAspect = {
    KEEP_WIDTH: 0,
    KEEP_HEIGHT: 1,
  }
  static DopplerTracking = {
    DOPPLER_TRACKING_DISABLED: 0,
    DOPPLER_TRACKING_IDLE_STEP: 1,
    DOPPLER_TRACKING_PHYSICS_STEP: 2,
  }
}