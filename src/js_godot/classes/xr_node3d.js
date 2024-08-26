import * as internal from '__internal__';
import { Node3D } from 'src/js_godot/classesnode3d'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
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


export class XRNode3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("XRNode3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("set_tracker");
      this._bindings.method_set_tracker = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("get_tracker");
      this._bindings.method_get_tracker = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("set_pose_name");
      this._bindings.method_set_pose_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("get_pose_name");
      this._bindings.method_get_pose_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("set_show_when_tracked");
      this._bindings.method_set_show_when_tracked = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("get_show_when_tracked");
      this._bindings.method_get_show_when_tracked = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("get_is_active");
      this._bindings.method_get_is_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("get_has_tracking_data");
      this._bindings.method_get_has_tracking_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("XRNode3D");
      let methodname = new StringName("get_pose");
      this._bindings.method_get_pose = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2806551826
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tracker,
      this._owner,
      _tracker_name
    );
  }
  get_tracker() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tracker,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
  }
  set_pose_name(_pose) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pose_name,
      this._owner,
      _pose
    );
  }
  get_pose_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pose_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
  }
  set_show_when_tracked(_show) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_show_when_tracked,
      this._owner,
      _show
    );
  }
  get_show_when_tracked() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_show_when_tracked,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_is_active() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_is_active,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_has_tracking_data() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_has_tracking_data,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_pose() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pose,
      this._owner,
			Variant.INT,
      
    );
  }
  trigger_haptic_pulse(_action_name, _frequency, _amplitude, _duration_sec, _delay_sec) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_trigger_haptic_pulse,
      this._owner,
      _action_name, _frequency, _amplitude, _duration_sec, _delay_sec
    );
  }
}