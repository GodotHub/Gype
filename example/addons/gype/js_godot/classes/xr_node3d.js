import * as internal from '__internal__';
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
  method_set_tracker;
  method_get_tracker;
  method_set_pose_name;
  method_get_pose_name;
  method_set_show_when_tracked;
  method_get_show_when_tracked;
  method_get_is_active;
  method_get_has_tracking_data;
  method_get_pose;
  method_trigger_haptic_pulse;
}
@GodotClass
export class XRNode3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("XRNode3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_tracker() {
    if (!this._bindings.method_set_tracker) {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("set_tracker");
      this._bindings.method_set_tracker = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_tracker() {
    if (!this._bindings.method_get_tracker) {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("get_tracker");
      this._bindings.method_get_tracker = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_set_pose_name() {
    if (!this._bindings.method_set_pose_name) {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("set_pose_name");
      this._bindings.method_set_pose_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_pose_name() {
    if (!this._bindings.method_get_pose_name) {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("get_pose_name");
      this._bindings.method_get_pose_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_set_show_when_tracked() {
    if (!this._bindings.method_set_show_when_tracked) {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("set_show_when_tracked");
      this._bindings.method_set_show_when_tracked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_show_when_tracked() {
    if (!this._bindings.method_get_show_when_tracked) {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("get_show_when_tracked");
      this._bindings.method_get_show_when_tracked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_is_active() {
    if (!this._bindings.method_get_is_active) {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("get_is_active");
      this._bindings.method_get_is_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_has_tracking_data() {
    if (!this._bindings.method_get_has_tracking_data) {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("get_has_tracking_data");
      this._bindings.method_get_has_tracking_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_pose() {
    if (!this._bindings.method_get_pose) {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("get_pose");
      this._bindings.method_get_pose = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2806551826
      );
    }
  }
  static init_method_trigger_haptic_pulse() {
    if (!this._bindings.method_trigger_haptic_pulse) {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("trigger_haptic_pulse");
      this._bindings.method_trigger_haptic_pulse = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        508576839
      );
    }
  }

  
  
  set_tracker(_tracker_name) {
    XRNode3D.init_method_set_tracker();
    return _call_native_mb_no_ret(
      XRNode3D._bindings.method_set_tracker,
      this._owner,
      _tracker_name
    );
    
  }
  get_tracker() {
    XRNode3D.init_method_get_tracker();
    return _call_native_mb_ret(
      XRNode3D._bindings.method_get_tracker,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_pose_name(_pose) {
    XRNode3D.init_method_set_pose_name();
    return _call_native_mb_no_ret(
      XRNode3D._bindings.method_set_pose_name,
      this._owner,
      _pose
    );
    
  }
  get_pose_name() {
    XRNode3D.init_method_get_pose_name();
    return _call_native_mb_ret(
      XRNode3D._bindings.method_get_pose_name,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_show_when_tracked(_show) {
    XRNode3D.init_method_set_show_when_tracked();
    return _call_native_mb_no_ret(
      XRNode3D._bindings.method_set_show_when_tracked,
      this._owner,
      _show
    );
    
  }
  get_show_when_tracked() {
    XRNode3D.init_method_get_show_when_tracked();
    return _call_native_mb_ret(
      XRNode3D._bindings.method_get_show_when_tracked,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_is_active() {
    XRNode3D.init_method_get_is_active();
    return _call_native_mb_ret(
      XRNode3D._bindings.method_get_is_active,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_has_tracking_data() {
    XRNode3D.init_method_get_has_tracking_data();
    return _call_native_mb_ret(
      XRNode3D._bindings.method_get_has_tracking_data,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_pose() {
    XRNode3D.init_method_get_pose();
    return _call_native_mb_ret(
      XRNode3D._bindings.method_get_pose,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  trigger_haptic_pulse(_action_name, _frequency, _amplitude, _duration_sec, _delay_sec) {
    XRNode3D.init_method_trigger_haptic_pulse();
    return _call_native_mb_no_ret(
      XRNode3D._bindings.method_trigger_haptic_pulse,
      this._owner,
      _action_name, _frequency, _amplitude, _duration_sec, _delay_sec
    );
    
  }
  
get tracker () {
  return this.get_tracker();
}
set tracker (new_value) {
  this.set_tracker(new_value);
}
get pose () {
  return this.get_pose_name();
}
set pose (new_value) {
  this.set_pose_name(new_value);
}
get show_when_tracked () {
  return this.get_show_when_tracked();
}
set show_when_tracked (new_value) {
  this.set_show_when_tracked(new_value);
}

}