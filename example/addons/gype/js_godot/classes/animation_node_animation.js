import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { AnimationRootNode } from '@js_godot/classes/animation_root_node'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_animation;
  method_get_animation;
  method_set_play_mode;
  method_get_play_mode;
  method_set_use_custom_timeline;
  method_is_using_custom_timeline;
  method_set_timeline_length;
  method_get_timeline_length;
  method_set_stretch_time_scale;
  method_is_stretching_time_scale;
  method_set_start_offset;
  method_get_start_offset;
  method_set_loop_mode;
  method_get_loop_mode;
}
@GodotClass
export class AnimationNodeAnimation extends AnimationRootNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationNodeAnimation");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_animation() {
    if (!this._bindings.method_set_animation) {
      let classname = new StringName("AnimationNodeAnimation");
      let methodname = new StringName("set_animation");
      this._bindings.method_set_animation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_animation() {
    if (!this._bindings.method_get_animation) {
      let classname = new StringName("AnimationNodeAnimation");
      let methodname = new StringName("get_animation");
      this._bindings.method_get_animation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_set_play_mode() {
    if (!this._bindings.method_set_play_mode) {
      let classname = new StringName("AnimationNodeAnimation");
      let methodname = new StringName("set_play_mode");
      this._bindings.method_set_play_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3347718873
      );
    }
  }
  static init_method_get_play_mode() {
    if (!this._bindings.method_get_play_mode) {
      let classname = new StringName("AnimationNodeAnimation");
      let methodname = new StringName("get_play_mode");
      this._bindings.method_get_play_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2061244637
      );
    }
  }
  static init_method_set_use_custom_timeline() {
    if (!this._bindings.method_set_use_custom_timeline) {
      let classname = new StringName("AnimationNodeAnimation");
      let methodname = new StringName("set_use_custom_timeline");
      this._bindings.method_set_use_custom_timeline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_custom_timeline() {
    if (!this._bindings.method_is_using_custom_timeline) {
      let classname = new StringName("AnimationNodeAnimation");
      let methodname = new StringName("is_using_custom_timeline");
      this._bindings.method_is_using_custom_timeline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_timeline_length() {
    if (!this._bindings.method_set_timeline_length) {
      let classname = new StringName("AnimationNodeAnimation");
      let methodname = new StringName("set_timeline_length");
      this._bindings.method_set_timeline_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_timeline_length() {
    if (!this._bindings.method_get_timeline_length) {
      let classname = new StringName("AnimationNodeAnimation");
      let methodname = new StringName("get_timeline_length");
      this._bindings.method_get_timeline_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_stretch_time_scale() {
    if (!this._bindings.method_set_stretch_time_scale) {
      let classname = new StringName("AnimationNodeAnimation");
      let methodname = new StringName("set_stretch_time_scale");
      this._bindings.method_set_stretch_time_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_stretching_time_scale() {
    if (!this._bindings.method_is_stretching_time_scale) {
      let classname = new StringName("AnimationNodeAnimation");
      let methodname = new StringName("is_stretching_time_scale");
      this._bindings.method_is_stretching_time_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_start_offset() {
    if (!this._bindings.method_set_start_offset) {
      let classname = new StringName("AnimationNodeAnimation");
      let methodname = new StringName("set_start_offset");
      this._bindings.method_set_start_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_start_offset() {
    if (!this._bindings.method_get_start_offset) {
      let classname = new StringName("AnimationNodeAnimation");
      let methodname = new StringName("get_start_offset");
      this._bindings.method_get_start_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_loop_mode() {
    if (!this._bindings.method_set_loop_mode) {
      let classname = new StringName("AnimationNodeAnimation");
      let methodname = new StringName("set_loop_mode");
      this._bindings.method_set_loop_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3155355575
      );
    }
  }
  static init_method_get_loop_mode() {
    if (!this._bindings.method_get_loop_mode) {
      let classname = new StringName("AnimationNodeAnimation");
      let methodname = new StringName("get_loop_mode");
      this._bindings.method_get_loop_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1988889481
      );
    }
  }

  
  
  set_animation(_name) {
    AnimationNodeAnimation.init_method_set_animation();
    return _call_native_mb_no_ret(
      AnimationNodeAnimation._bindings.method_set_animation,
      this._owner,
      _name
    );
    
  }
  get_animation() {
    AnimationNodeAnimation.init_method_get_animation();
    return _call_native_mb_ret(
      AnimationNodeAnimation._bindings.method_get_animation,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_play_mode(_mode) {
    AnimationNodeAnimation.init_method_set_play_mode();
    return _call_native_mb_no_ret(
      AnimationNodeAnimation._bindings.method_set_play_mode,
      this._owner,
      _mode
    );
    
  }
  get_play_mode() {
    AnimationNodeAnimation.init_method_get_play_mode();
    return _call_native_mb_ret(
      AnimationNodeAnimation._bindings.method_get_play_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_use_custom_timeline(_use_custom_timeline) {
    AnimationNodeAnimation.init_method_set_use_custom_timeline();
    return _call_native_mb_no_ret(
      AnimationNodeAnimation._bindings.method_set_use_custom_timeline,
      this._owner,
      _use_custom_timeline
    );
    
  }
  is_using_custom_timeline() {
    AnimationNodeAnimation.init_method_is_using_custom_timeline();
    return _call_native_mb_ret(
      AnimationNodeAnimation._bindings.method_is_using_custom_timeline,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_timeline_length(_timeline_length) {
    AnimationNodeAnimation.init_method_set_timeline_length();
    return _call_native_mb_no_ret(
      AnimationNodeAnimation._bindings.method_set_timeline_length,
      this._owner,
      _timeline_length
    );
    
  }
  get_timeline_length() {
    AnimationNodeAnimation.init_method_get_timeline_length();
    return _call_native_mb_ret(
      AnimationNodeAnimation._bindings.method_get_timeline_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_stretch_time_scale(_stretch_time_scale) {
    AnimationNodeAnimation.init_method_set_stretch_time_scale();
    return _call_native_mb_no_ret(
      AnimationNodeAnimation._bindings.method_set_stretch_time_scale,
      this._owner,
      _stretch_time_scale
    );
    
  }
  is_stretching_time_scale() {
    AnimationNodeAnimation.init_method_is_stretching_time_scale();
    return _call_native_mb_ret(
      AnimationNodeAnimation._bindings.method_is_stretching_time_scale,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_start_offset(_start_offset) {
    AnimationNodeAnimation.init_method_set_start_offset();
    return _call_native_mb_no_ret(
      AnimationNodeAnimation._bindings.method_set_start_offset,
      this._owner,
      _start_offset
    );
    
  }
  get_start_offset() {
    AnimationNodeAnimation.init_method_get_start_offset();
    return _call_native_mb_ret(
      AnimationNodeAnimation._bindings.method_get_start_offset,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_loop_mode(_loop_mode) {
    AnimationNodeAnimation.init_method_set_loop_mode();
    return _call_native_mb_no_ret(
      AnimationNodeAnimation._bindings.method_set_loop_mode,
      this._owner,
      _loop_mode
    );
    
  }
  get_loop_mode() {
    AnimationNodeAnimation.init_method_get_loop_mode();
    return _call_native_mb_ret(
      AnimationNodeAnimation._bindings.method_get_loop_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get animation () {
  return this.get_animation();
}
set animation (new_value) {
  this.set_animation(new_value);
}
get play_mode () {
  return this.get_play_mode();
}
set play_mode (new_value) {
  this.set_play_mode(new_value);
}
get use_custom_timeline () {
  return this.is_using_custom_timeline();
}
set use_custom_timeline (new_value) {
  this.set_use_custom_timeline(new_value);
}
get timeline_length () {
  return this.get_timeline_length();
}
set timeline_length (new_value) {
  this.set_timeline_length(new_value);
}
get stretch_time_scale () {
  return this.is_stretching_time_scale();
}
set stretch_time_scale (new_value) {
  this.set_stretch_time_scale(new_value);
}
get start_offset () {
  return this.get_start_offset();
}
set start_offset (new_value) {
  this.set_start_offset(new_value);
}
get loop_mode () {
  return this.get_loop_mode();
}
set loop_mode (new_value) {
  this.set_loop_mode(new_value);
}

  static PlayMode = {
    PLAY_MODE_FORWARD: 0,
    PLAY_MODE_BACKWARD: 1,
  }
}