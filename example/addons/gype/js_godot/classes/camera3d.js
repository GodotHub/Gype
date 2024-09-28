import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { Node3D } from '@js_godot/classes/node3d'
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
@GodotClass
export class Camera3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Camera3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_project_ray_normal() {
    if (!this._bindings.method_project_ray_normal) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("project_ray_normal");
      this._bindings.method_project_ray_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1718073306
      );
    }
  }
  static init_method_project_local_ray_normal() {
    if (!this._bindings.method_project_local_ray_normal) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("project_local_ray_normal");
      this._bindings.method_project_local_ray_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1718073306
      );
    }
  }
  static init_method_project_ray_origin() {
    if (!this._bindings.method_project_ray_origin) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("project_ray_origin");
      this._bindings.method_project_ray_origin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1718073306
      );
    }
  }
  static init_method_unproject_position() {
    if (!this._bindings.method_unproject_position) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("unproject_position");
      this._bindings.method_unproject_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3758901831
      );
    }
  }
  static init_method_is_position_behind() {
    if (!this._bindings.method_is_position_behind) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("is_position_behind");
      this._bindings.method_is_position_behind = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3108956480
      );
    }
  }
  static init_method_project_position() {
    if (!this._bindings.method_project_position) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("project_position");
      this._bindings.method_project_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2171975744
      );
    }
  }
  static init_method_set_perspective() {
    if (!this._bindings.method_set_perspective) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_perspective");
      this._bindings.method_set_perspective = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2385087082
      );
    }
  }
  static init_method_set_orthogonal() {
    if (!this._bindings.method_set_orthogonal) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_orthogonal");
      this._bindings.method_set_orthogonal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2385087082
      );
    }
  }
  static init_method_set_frustum() {
    if (!this._bindings.method_set_frustum) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_frustum");
      this._bindings.method_set_frustum = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        354890663
      );
    }
  }
  static init_method_make_current() {
    if (!this._bindings.method_make_current) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("make_current");
      this._bindings.method_make_current = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_clear_current() {
    if (!this._bindings.method_clear_current) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("clear_current");
      this._bindings.method_clear_current = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3216645846
      );
    }
  }
  static init_method_set_current() {
    if (!this._bindings.method_set_current) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_current");
      this._bindings.method_set_current = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_current() {
    if (!this._bindings.method_is_current) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("is_current");
      this._bindings.method_is_current = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_camera_transform() {
    if (!this._bindings.method_get_camera_transform) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_camera_transform");
      this._bindings.method_get_camera_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3229777777
      );
    }
  }
  static init_method_get_camera_projection() {
    if (!this._bindings.method_get_camera_projection) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_camera_projection");
      this._bindings.method_get_camera_projection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2910717950
      );
    }
  }
  static init_method_get_fov() {
    if (!this._bindings.method_get_fov) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_fov");
      this._bindings.method_get_fov = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_frustum_offset() {
    if (!this._bindings.method_get_frustum_offset) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_frustum_offset");
      this._bindings.method_get_frustum_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_get_size() {
    if (!this._bindings.method_get_size) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_far() {
    if (!this._bindings.method_get_far) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_far");
      this._bindings.method_get_far = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_near() {
    if (!this._bindings.method_get_near) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_near");
      this._bindings.method_get_near = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_fov() {
    if (!this._bindings.method_set_fov) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_fov");
      this._bindings.method_set_fov = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_frustum_offset() {
    if (!this._bindings.method_set_frustum_offset) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_frustum_offset");
      this._bindings.method_set_frustum_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_set_size() {
    if (!this._bindings.method_set_size) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_far() {
    if (!this._bindings.method_set_far) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_far");
      this._bindings.method_set_far = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_near() {
    if (!this._bindings.method_set_near) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_near");
      this._bindings.method_set_near = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_projection() {
    if (!this._bindings.method_get_projection) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_projection");
      this._bindings.method_get_projection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2624185235
      );
    }
  }
  static init_method_set_projection() {
    if (!this._bindings.method_set_projection) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_projection");
      this._bindings.method_set_projection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4218540108
      );
    }
  }
  static init_method_set_h_offset() {
    if (!this._bindings.method_set_h_offset) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_h_offset");
      this._bindings.method_set_h_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_h_offset() {
    if (!this._bindings.method_get_h_offset) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_h_offset");
      this._bindings.method_get_h_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_v_offset() {
    if (!this._bindings.method_set_v_offset) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_v_offset");
      this._bindings.method_set_v_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_v_offset() {
    if (!this._bindings.method_get_v_offset) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_v_offset");
      this._bindings.method_get_v_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_cull_mask() {
    if (!this._bindings.method_set_cull_mask) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_cull_mask");
      this._bindings.method_set_cull_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_cull_mask() {
    if (!this._bindings.method_get_cull_mask) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_cull_mask");
      this._bindings.method_get_cull_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_environment() {
    if (!this._bindings.method_set_environment) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_environment");
      this._bindings.method_set_environment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4143518816
      );
    }
  }
  static init_method_get_environment() {
    if (!this._bindings.method_get_environment) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_environment");
      this._bindings.method_get_environment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3082064660
      );
    }
  }
  static init_method_set_attributes() {
    if (!this._bindings.method_set_attributes) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_attributes");
      this._bindings.method_set_attributes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2817810567
      );
    }
  }
  static init_method_get_attributes() {
    if (!this._bindings.method_get_attributes) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_attributes");
      this._bindings.method_get_attributes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3921283215
      );
    }
  }
  static init_method_set_compositor() {
    if (!this._bindings.method_set_compositor) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_compositor");
      this._bindings.method_set_compositor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1586754307
      );
    }
  }
  static init_method_get_compositor() {
    if (!this._bindings.method_get_compositor) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_compositor");
      this._bindings.method_get_compositor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3647707413
      );
    }
  }
  static init_method_set_keep_aspect_mode() {
    if (!this._bindings.method_set_keep_aspect_mode) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_keep_aspect_mode");
      this._bindings.method_set_keep_aspect_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740651252
      );
    }
  }
  static init_method_get_keep_aspect_mode() {
    if (!this._bindings.method_get_keep_aspect_mode) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_keep_aspect_mode");
      this._bindings.method_get_keep_aspect_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2790278316
      );
    }
  }
  static init_method_set_doppler_tracking() {
    if (!this._bindings.method_set_doppler_tracking) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_doppler_tracking");
      this._bindings.method_set_doppler_tracking = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3109431270
      );
    }
  }
  static init_method_get_doppler_tracking() {
    if (!this._bindings.method_get_doppler_tracking) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_doppler_tracking");
      this._bindings.method_get_doppler_tracking = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1584483649
      );
    }
  }
  static init_method_get_frustum() {
    if (!this._bindings.method_get_frustum) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_frustum");
      this._bindings.method_get_frustum = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_is_position_in_frustum() {
    if (!this._bindings.method_is_position_in_frustum) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("is_position_in_frustum");
      this._bindings.method_is_position_in_frustum = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3108956480
      );
    }
  }
  static init_method_get_camera_rid() {
    if (!this._bindings.method_get_camera_rid) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_camera_rid");
      this._bindings.method_get_camera_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_get_pyramid_shape_rid() {
    if (!this._bindings.method_get_pyramid_shape_rid) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("get_pyramid_shape_rid");
      this._bindings.method_get_pyramid_shape_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        529393457
      );
    }
  }
  static init_method_set_cull_mask_value() {
    if (!this._bindings.method_set_cull_mask_value) {
      let classname = new StringName("Camera3D");
      let methodname = new StringName("set_cull_mask_value");
      this._bindings.method_set_cull_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_cull_mask_value() {
    if (!this._bindings.method_get_cull_mask_value) {
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
    Camera3D.init_method_project_ray_normal();
    return _call_native_mb_ret(
      Camera3D._bindings.method_project_ray_normal,
      this._owner,
			Variant.Type.VECTOR3,
    
      _screen_point
    );
    
  }
  project_local_ray_normal(_screen_point) {
    Camera3D.init_method_project_local_ray_normal();
    return _call_native_mb_ret(
      Camera3D._bindings.method_project_local_ray_normal,
      this._owner,
			Variant.Type.VECTOR3,
    
      _screen_point
    );
    
  }
  project_ray_origin(_screen_point) {
    Camera3D.init_method_project_ray_origin();
    return _call_native_mb_ret(
      Camera3D._bindings.method_project_ray_origin,
      this._owner,
			Variant.Type.VECTOR3,
    
      _screen_point
    );
    
  }
  unproject_position(_world_point) {
    Camera3D.init_method_unproject_position();
    return _call_native_mb_ret(
      Camera3D._bindings.method_unproject_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _world_point
    );
    
  }
  is_position_behind(_world_point) {
    Camera3D.init_method_is_position_behind();
    return _call_native_mb_ret(
      Camera3D._bindings.method_is_position_behind,
      this._owner,
			Variant.Type.BOOL,
    
      _world_point
    );
    
  }
  project_position(_screen_point, _z_depth) {
    Camera3D.init_method_project_position();
    return _call_native_mb_ret(
      Camera3D._bindings.method_project_position,
      this._owner,
			Variant.Type.VECTOR3,
    
      _screen_point, _z_depth
    );
    
  }
  set_perspective(_fov, _z_near, _z_far) {
    Camera3D.init_method_set_perspective();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_perspective,
      this._owner,
      _fov, _z_near, _z_far
    );
    
  }
  set_orthogonal(_size, _z_near, _z_far) {
    Camera3D.init_method_set_orthogonal();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_orthogonal,
      this._owner,
      _size, _z_near, _z_far
    );
    
  }
  set_frustum(_size, _offset, _z_near, _z_far) {
    Camera3D.init_method_set_frustum();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_frustum,
      this._owner,
      _size, _offset, _z_near, _z_far
    );
    
  }
  make_current() {
    Camera3D.init_method_make_current();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_make_current,
      this._owner,
      
    );
    
  }
  clear_current(_enable_next) {
    Camera3D.init_method_clear_current();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_clear_current,
      this._owner,
      _enable_next
    );
    
  }
  set_current(_enabled) {
    Camera3D.init_method_set_current();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_current,
      this._owner,
      _enabled
    );
    
  }
  is_current() {
    Camera3D.init_method_is_current();
    return _call_native_mb_ret(
      Camera3D._bindings.method_is_current,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_camera_transform() {
    Camera3D.init_method_get_camera_transform();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_camera_transform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  get_camera_projection() {
    Camera3D.init_method_get_camera_projection();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_camera_projection,
      this._owner,
			Variant.Type.PROJECTION,
    
      
    );
    
  }
  get_fov() {
    Camera3D.init_method_get_fov();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_fov,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_frustum_offset() {
    Camera3D.init_method_get_frustum_offset();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_frustum_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_size() {
    Camera3D.init_method_get_size();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_size,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_far() {
    Camera3D.init_method_get_far();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_far,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_near() {
    Camera3D.init_method_get_near();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_near,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_fov(_fov) {
    Camera3D.init_method_set_fov();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_fov,
      this._owner,
      _fov
    );
    
  }
  set_frustum_offset(_offset) {
    Camera3D.init_method_set_frustum_offset();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_frustum_offset,
      this._owner,
      _offset
    );
    
  }
  set_size(_size) {
    Camera3D.init_method_set_size();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  set_far(_far) {
    Camera3D.init_method_set_far();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_far,
      this._owner,
      _far
    );
    
  }
  set_near(_near) {
    Camera3D.init_method_set_near();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_near,
      this._owner,
      _near
    );
    
  }
  get_projection() {
    Camera3D.init_method_get_projection();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_projection,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_projection(_mode) {
    Camera3D.init_method_set_projection();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_projection,
      this._owner,
      _mode
    );
    
  }
  set_h_offset(_offset) {
    Camera3D.init_method_set_h_offset();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_h_offset,
      this._owner,
      _offset
    );
    
  }
  get_h_offset() {
    Camera3D.init_method_get_h_offset();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_h_offset,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_v_offset(_offset) {
    Camera3D.init_method_set_v_offset();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_v_offset,
      this._owner,
      _offset
    );
    
  }
  get_v_offset() {
    Camera3D.init_method_get_v_offset();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_v_offset,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_cull_mask(_mask) {
    Camera3D.init_method_set_cull_mask();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_cull_mask,
      this._owner,
      _mask
    );
    
  }
  get_cull_mask() {
    Camera3D.init_method_get_cull_mask();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_cull_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_environment(_env) {
    Camera3D.init_method_set_environment();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_environment,
      this._owner,
      _env
    );
    
  }
  get_environment() {
    Camera3D.init_method_get_environment();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_environment,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_attributes(_env) {
    Camera3D.init_method_set_attributes();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_attributes,
      this._owner,
      _env
    );
    
  }
  get_attributes() {
    Camera3D.init_method_get_attributes();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_attributes,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_compositor(_compositor) {
    Camera3D.init_method_set_compositor();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_compositor,
      this._owner,
      _compositor
    );
    
  }
  get_compositor() {
    Camera3D.init_method_get_compositor();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_compositor,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_keep_aspect_mode(_mode) {
    Camera3D.init_method_set_keep_aspect_mode();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_keep_aspect_mode,
      this._owner,
      _mode
    );
    
  }
  get_keep_aspect_mode() {
    Camera3D.init_method_get_keep_aspect_mode();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_keep_aspect_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_doppler_tracking(_mode) {
    Camera3D.init_method_set_doppler_tracking();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_doppler_tracking,
      this._owner,
      _mode
    );
    
  }
  get_doppler_tracking() {
    Camera3D.init_method_get_doppler_tracking();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_doppler_tracking,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_frustum() {
    Camera3D.init_method_get_frustum();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_frustum,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  is_position_in_frustum(_world_point) {
    Camera3D.init_method_is_position_in_frustum();
    return _call_native_mb_ret(
      Camera3D._bindings.method_is_position_in_frustum,
      this._owner,
			Variant.Type.BOOL,
    
      _world_point
    );
    
  }
  get_camera_rid() {
    Camera3D.init_method_get_camera_rid();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_camera_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  get_pyramid_shape_rid() {
    Camera3D.init_method_get_pyramid_shape_rid();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_pyramid_shape_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_cull_mask_value(_layer_number, _value) {
    Camera3D.init_method_set_cull_mask_value();
    return _call_native_mb_no_ret(
      Camera3D._bindings.method_set_cull_mask_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_cull_mask_value(_layer_number) {
    Camera3D.init_method_get_cull_mask_value();
    return _call_native_mb_ret(
      Camera3D._bindings.method_get_cull_mask_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
    );
    
  }
  
get keep_aspect () {
  return this.get_keep_aspect_mode();
}
set keep_aspect (new_value) {
  this.set_keep_aspect_mode(new_value);
}
get cull_mask () {
  return this.get_cull_mask();
}
set cull_mask (new_value) {
  this.set_cull_mask(new_value);
}
get environment () {
  return this.get_environment();
}
set environment (new_value) {
  this.set_environment(new_value);
}
get attributes () {
  return this.get_attributes();
}
set attributes (new_value) {
  this.set_attributes(new_value);
}
get compositor () {
  return this.get_compositor();
}
set compositor (new_value) {
  this.set_compositor(new_value);
}
get h_offset () {
  return this.get_h_offset();
}
set h_offset (new_value) {
  this.set_h_offset(new_value);
}
get v_offset () {
  return this.get_v_offset();
}
set v_offset (new_value) {
  this.set_v_offset(new_value);
}
get doppler_tracking () {
  return this.get_doppler_tracking();
}
set doppler_tracking (new_value) {
  this.set_doppler_tracking(new_value);
}
get projection () {
  return this.get_projection();
}
set projection (new_value) {
  this.set_projection(new_value);
}
get current () {
  return this.is_current();
}
set current (new_value) {
  this.set_current(new_value);
}
get fov () {
  return this.get_fov();
}
set fov (new_value) {
  this.set_fov(new_value);
}
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}
get frustum_offset () {
  return this.get_frustum_offset();
}
set frustum_offset (new_value) {
  this.set_frustum_offset(new_value);
}
get near () {
  return this.get_near();
}
set near (new_value) {
  this.set_near(new_value);
}
get far () {
  return this.get_far();
}
set far (new_value) {
  this.set_far(new_value);
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