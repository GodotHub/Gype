import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { GodotObject } from '@js_godot/classes/godot_object'
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
  method_get_world_scale;
  method_set_world_scale;
  method_get_world_origin;
  method_set_world_origin;
  method_get_reference_frame;
  method_clear_reference_frame;
  method_center_on_hmd;
  method_get_hmd_transform;
  method_add_interface;
  method_get_interface_count;
  method_remove_interface;
  method_get_interface;
  method_get_interfaces;
  method_find_interface;
  method_add_tracker;
  method_remove_tracker;
  method_get_trackers;
  method_get_tracker;
  method_get_primary_interface;
  method_set_primary_interface;
}class _XRServer extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("XRServer");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_world_scale() {
    if (!this._bindings.method_get_world_scale) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("get_world_scale");
      this._bindings.method_get_world_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_world_scale() {
    if (!this._bindings.method_set_world_scale) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("set_world_scale");
      this._bindings.method_set_world_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_world_origin() {
    if (!this._bindings.method_get_world_origin) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("get_world_origin");
      this._bindings.method_get_world_origin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3229777777
      );
    }
  }
  static init_method_set_world_origin() {
    if (!this._bindings.method_set_world_origin) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("set_world_origin");
      this._bindings.method_set_world_origin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2952846383
      );
    }
  }
  static init_method_get_reference_frame() {
    if (!this._bindings.method_get_reference_frame) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("get_reference_frame");
      this._bindings.method_get_reference_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3229777777
      );
    }
  }
  static init_method_clear_reference_frame() {
    if (!this._bindings.method_clear_reference_frame) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("clear_reference_frame");
      this._bindings.method_clear_reference_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_center_on_hmd() {
    if (!this._bindings.method_center_on_hmd) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("center_on_hmd");
      this._bindings.method_center_on_hmd = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1450904707
      );
    }
  }
  static init_method_get_hmd_transform() {
    if (!this._bindings.method_get_hmd_transform) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("get_hmd_transform");
      this._bindings.method_get_hmd_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4183770049
      );
    }
  }
  static init_method_add_interface() {
    if (!this._bindings.method_add_interface) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("add_interface");
      this._bindings.method_add_interface = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1898711491
      );
    }
  }
  static init_method_get_interface_count() {
    if (!this._bindings.method_get_interface_count) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("get_interface_count");
      this._bindings.method_get_interface_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_remove_interface() {
    if (!this._bindings.method_remove_interface) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("remove_interface");
      this._bindings.method_remove_interface = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1898711491
      );
    }
  }
  static init_method_get_interface() {
    if (!this._bindings.method_get_interface) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("get_interface");
      this._bindings.method_get_interface = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4237347919
      );
    }
  }
  static init_method_get_interfaces() {
    if (!this._bindings.method_get_interfaces) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("get_interfaces");
      this._bindings.method_get_interfaces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_find_interface() {
    if (!this._bindings.method_find_interface) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("find_interface");
      this._bindings.method_find_interface = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1395192955
      );
    }
  }
  static init_method_add_tracker() {
    if (!this._bindings.method_add_tracker) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("add_tracker");
      this._bindings.method_add_tracker = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        684804553
      );
    }
  }
  static init_method_remove_tracker() {
    if (!this._bindings.method_remove_tracker) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("remove_tracker");
      this._bindings.method_remove_tracker = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        684804553
      );
    }
  }
  static init_method_get_trackers() {
    if (!this._bindings.method_get_trackers) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("get_trackers");
      this._bindings.method_get_trackers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3554694381
      );
    }
  }
  static init_method_get_tracker() {
    if (!this._bindings.method_get_tracker) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("get_tracker");
      this._bindings.method_get_tracker = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        147382240
      );
    }
  }
  static init_method_get_primary_interface() {
    if (!this._bindings.method_get_primary_interface) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("get_primary_interface");
      this._bindings.method_get_primary_interface = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2143545064
      );
    }
  }
  static init_method_set_primary_interface() {
    if (!this._bindings.method_set_primary_interface) {
      let classname = new StringName("XRServer");
      let methodname = new StringName("set_primary_interface");
      this._bindings.method_set_primary_interface = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1898711491
      );
    }
  }

  
  
  get_world_scale() {
    XRServer.init_method_get_world_scale();
    return _call_native_mb_ret(
      _XRServer._bindings.method_get_world_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_world_scale(_scale) {
    XRServer.init_method_set_world_scale();
    return _call_native_mb_no_ret(
      _XRServer._bindings.method_set_world_scale,
      this._owner,
      _scale
    );
    
  }
  get_world_origin() {
    XRServer.init_method_get_world_origin();
    return _call_native_mb_ret(
      _XRServer._bindings.method_get_world_origin,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  set_world_origin(_world_origin) {
    XRServer.init_method_set_world_origin();
    return _call_native_mb_no_ret(
      _XRServer._bindings.method_set_world_origin,
      this._owner,
      _world_origin
    );
    
  }
  get_reference_frame() {
    XRServer.init_method_get_reference_frame();
    return _call_native_mb_ret(
      _XRServer._bindings.method_get_reference_frame,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  clear_reference_frame() {
    XRServer.init_method_clear_reference_frame();
    return _call_native_mb_no_ret(
      _XRServer._bindings.method_clear_reference_frame,
      this._owner,
      
    );
    
  }
  center_on_hmd(_rotation_mode, _keep_height) {
    XRServer.init_method_center_on_hmd();
    return _call_native_mb_no_ret(
      _XRServer._bindings.method_center_on_hmd,
      this._owner,
      _rotation_mode, _keep_height
    );
    
  }
  get_hmd_transform() {
    XRServer.init_method_get_hmd_transform();
    return _call_native_mb_ret(
      _XRServer._bindings.method_get_hmd_transform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  add_interface(_interface) {
    XRServer.init_method_add_interface();
    return _call_native_mb_no_ret(
      _XRServer._bindings.method_add_interface,
      this._owner,
      _interface
    );
    
  }
  get_interface_count() {
    XRServer.init_method_get_interface_count();
    return _call_native_mb_ret(
      _XRServer._bindings.method_get_interface_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  remove_interface(_interface) {
    XRServer.init_method_remove_interface();
    return _call_native_mb_no_ret(
      _XRServer._bindings.method_remove_interface,
      this._owner,
      _interface
    );
    
  }
  get_interface(_idx) {
    XRServer.init_method_get_interface();
    return _call_native_mb_ret(
      _XRServer._bindings.method_get_interface,
      this._owner,
			Variant.Type.OBJECT,
      _idx
    );
    
  }
  get_interfaces() {
    XRServer.init_method_get_interfaces();
    return _call_native_mb_ret(
      _XRServer._bindings.method_get_interfaces,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  find_interface(_name) {
    XRServer.init_method_find_interface();
    return _call_native_mb_ret(
      _XRServer._bindings.method_find_interface,
      this._owner,
			Variant.Type.OBJECT,
      _name
    );
    
  }
  add_tracker(_tracker) {
    XRServer.init_method_add_tracker();
    return _call_native_mb_no_ret(
      _XRServer._bindings.method_add_tracker,
      this._owner,
      _tracker
    );
    
  }
  remove_tracker(_tracker) {
    XRServer.init_method_remove_tracker();
    return _call_native_mb_no_ret(
      _XRServer._bindings.method_remove_tracker,
      this._owner,
      _tracker
    );
    
  }
  get_trackers(_tracker_types) {
    XRServer.init_method_get_trackers();
    return _call_native_mb_ret(
      _XRServer._bindings.method_get_trackers,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _tracker_types
    );
    
  }
  get_tracker(_tracker_name) {
    XRServer.init_method_get_tracker();
    return _call_native_mb_ret(
      _XRServer._bindings.method_get_tracker,
      this._owner,
			Variant.Type.OBJECT,
      _tracker_name
    );
    
  }
  get_primary_interface() {
    XRServer.init_method_get_primary_interface();
    return _call_native_mb_ret(
      _XRServer._bindings.method_get_primary_interface,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_primary_interface(_interface) {
    XRServer.init_method_set_primary_interface();
    return _call_native_mb_no_ret(
      _XRServer._bindings.method_set_primary_interface,
      this._owner,
      _interface
    );
    
  }
  
get world_scale () {
  return this.get_world_scale();
}
set world_scale (new_value) {
  this.set_world_scale(new_value);
}
get world_origin () {
  return this.get_world_origin();
}
set world_origin (new_value) {
  this.set_world_origin(new_value);
}
get primary_interface () {
  return this.get_primary_interface();
}
set primary_interface (new_value) {
  this.set_primary_interface(new_value);
}

  static TrackerType = {
    TRACKER_HEAD: 1,
    TRACKER_CONTROLLER: 2,
    TRACKER_BASESTATION: 4,
    TRACKER_ANCHOR: 8,
    TRACKER_HAND: 16,
    TRACKER_BODY: 32,
    TRACKER_FACE: 64,
    TRACKER_ANY_KNOWN: 127,
    TRACKER_UNKNOWN: 128,
    TRACKER_ANY: 255,
  }
  static RotationMode = {
    RESET_FULL_ROTATION: 0,
    RESET_BUT_KEEP_TILT: 1,
    DONT_RESET_ROTATION: 2,
  }
}
export const XRServer = (function () {
  let _instance;
  function create_instance() {
    return new _XRServer();
  }
  return {
    instance: function () {
      if (!_instance) {
        _instance = create_instance();
      }
      return _instance;
    },
  };
})();