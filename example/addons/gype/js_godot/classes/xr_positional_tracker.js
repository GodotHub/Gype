import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { XRTracker } from '@js_godot/classes/xr_tracker'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_get_tracker_profile;
  method_set_tracker_profile;
  method_get_tracker_hand;
  method_set_tracker_hand;
  method_has_pose;
  method_get_pose;
  method_invalidate_pose;
  method_set_pose;
  method_get_input;
  method_set_input;
}
@GodotClass
export class XRPositionalTracker extends XRTracker{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("XRPositionalTracker");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_tracker_profile() {
    if (!this._bindings.method_get_tracker_profile) {
      let classname = new StringName("XRPositionalTracker");
      let methodname = new StringName("get_tracker_profile");
      this._bindings.method_get_tracker_profile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_tracker_profile() {
    if (!this._bindings.method_set_tracker_profile) {
      let classname = new StringName("XRPositionalTracker");
      let methodname = new StringName("set_tracker_profile");
      this._bindings.method_set_tracker_profile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_tracker_hand() {
    if (!this._bindings.method_get_tracker_hand) {
      let classname = new StringName("XRPositionalTracker");
      let methodname = new StringName("get_tracker_hand");
      this._bindings.method_get_tracker_hand = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4181770860
      );
    }
  }
  static init_method_set_tracker_hand() {
    if (!this._bindings.method_set_tracker_hand) {
      let classname = new StringName("XRPositionalTracker");
      let methodname = new StringName("set_tracker_hand");
      this._bindings.method_set_tracker_hand = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3904108980
      );
    }
  }
  static init_method_has_pose() {
    if (!this._bindings.method_has_pose) {
      let classname = new StringName("XRPositionalTracker");
      let methodname = new StringName("has_pose");
      this._bindings.method_has_pose = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2619796661
      );
    }
  }
  static init_method_get_pose() {
    if (!this._bindings.method_get_pose) {
      let classname = new StringName("XRPositionalTracker");
      let methodname = new StringName("get_pose");
      this._bindings.method_get_pose = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4099720006
      );
    }
  }
  static init_method_invalidate_pose() {
    if (!this._bindings.method_invalidate_pose) {
      let classname = new StringName("XRPositionalTracker");
      let methodname = new StringName("invalidate_pose");
      this._bindings.method_invalidate_pose = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_set_pose() {
    if (!this._bindings.method_set_pose) {
      let classname = new StringName("XRPositionalTracker");
      let methodname = new StringName("set_pose");
      this._bindings.method_set_pose = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3451230163
      );
    }
  }
  static init_method_get_input() {
    if (!this._bindings.method_get_input) {
      let classname = new StringName("XRPositionalTracker");
      let methodname = new StringName("get_input");
      this._bindings.method_get_input = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2760726917
      );
    }
  }
  static init_method_set_input() {
    if (!this._bindings.method_set_input) {
      let classname = new StringName("XRPositionalTracker");
      let methodname = new StringName("set_input");
      this._bindings.method_set_input = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3776071444
      );
    }
  }

  
  
  get_tracker_profile() {
    XRPositionalTracker.init_method_get_tracker_profile();
    return _call_native_mb_ret(
      XRPositionalTracker._bindings.method_get_tracker_profile,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_tracker_profile(_profile) {
    XRPositionalTracker.init_method_set_tracker_profile();
    return _call_native_mb_no_ret(
      XRPositionalTracker._bindings.method_set_tracker_profile,
      this._owner,
      _profile
    );
    
  }
  get_tracker_hand() {
    XRPositionalTracker.init_method_get_tracker_hand();
    return _call_native_mb_ret(
      XRPositionalTracker._bindings.method_get_tracker_hand,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_tracker_hand(_hand) {
    XRPositionalTracker.init_method_set_tracker_hand();
    return _call_native_mb_no_ret(
      XRPositionalTracker._bindings.method_set_tracker_hand,
      this._owner,
      _hand
    );
    
  }
  has_pose(_name) {
    XRPositionalTracker.init_method_has_pose();
    return _call_native_mb_ret(
      XRPositionalTracker._bindings.method_has_pose,
      this._owner,
			Variant.Type.BOOL,
    
      _name
    );
    
  }
  get_pose(_name) {
    XRPositionalTracker.init_method_get_pose();
    return _call_native_mb_ret(
      XRPositionalTracker._bindings.method_get_pose,
      this._owner,
			Variant.Type.OBJECT,
      _name
    );
    
  }
  invalidate_pose(_name) {
    XRPositionalTracker.init_method_invalidate_pose();
    return _call_native_mb_no_ret(
      XRPositionalTracker._bindings.method_invalidate_pose,
      this._owner,
      _name
    );
    
  }
  set_pose(_name, _transform, _linear_velocity, _angular_velocity, _tracking_confidence) {
    XRPositionalTracker.init_method_set_pose();
    return _call_native_mb_no_ret(
      XRPositionalTracker._bindings.method_set_pose,
      this._owner,
      _name, _transform, _linear_velocity, _angular_velocity, _tracking_confidence
    );
    
  }
  get_input(_name) {
    XRPositionalTracker.init_method_get_input();
    return _call_native_mb_ret(
      XRPositionalTracker._bindings.method_get_input,
      this._owner,
			Variant.Type.VARIANT,
    
      _name
    );
    
  }
  set_input(_name, _value) {
    XRPositionalTracker.init_method_set_input();
    return _call_native_mb_no_ret(
      XRPositionalTracker._bindings.method_set_input,
      this._owner,
      _name, _value
    );
    
  }
  
get profile () {
  return this.get_tracker_profile();
}
set profile (new_value) {
  this.set_tracker_profile(new_value);
}
get hand () {
  return this.get_tracker_hand();
}
set hand (new_value) {
  this.set_tracker_hand(new_value);
}

  static TrackerHand = {
    TRACKER_HAND_UNKNOWN: 0,
    TRACKER_HAND_LEFT: 1,
    TRACKER_HAND_RIGHT: 2,
    TRACKER_HAND_MAX: 3,
  }
}