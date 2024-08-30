import * as internal from '__internal__';
import { AnimationRootNode } from 'src/js_godot/classes/animation_root_node'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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


export class AnimationNodeAnimation extends AnimationRootNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationNodeAnimation");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("AnimationNodeAnimation");
        let methodname = new StringName("set_animation");
        this._bindings.method_set_animation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3304788590
        );
      }
      {
        let classname = new StringName("AnimationNodeAnimation");
        let methodname = new StringName("get_animation");
        this._bindings.method_get_animation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2002593661
        );
      }
      {
        let classname = new StringName("AnimationNodeAnimation");
        let methodname = new StringName("set_play_mode");
        this._bindings.method_set_play_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3347718873
        );
      }
      {
        let classname = new StringName("AnimationNodeAnimation");
        let methodname = new StringName("get_play_mode");
        this._bindings.method_get_play_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2061244637
        );
      }
      {
        let classname = new StringName("AnimationNodeAnimation");
        let methodname = new StringName("set_use_custom_timeline");
        this._bindings.method_set_use_custom_timeline = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("AnimationNodeAnimation");
        let methodname = new StringName("is_using_custom_timeline");
        this._bindings.method_is_using_custom_timeline = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("AnimationNodeAnimation");
        let methodname = new StringName("set_timeline_length");
        this._bindings.method_set_timeline_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AnimationNodeAnimation");
        let methodname = new StringName("get_timeline_length");
        this._bindings.method_get_timeline_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AnimationNodeAnimation");
        let methodname = new StringName("set_stretch_time_scale");
        this._bindings.method_set_stretch_time_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("AnimationNodeAnimation");
        let methodname = new StringName("is_stretching_time_scale");
        this._bindings.method_is_stretching_time_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("AnimationNodeAnimation");
        let methodname = new StringName("set_start_offset");
        this._bindings.method_set_start_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AnimationNodeAnimation");
        let methodname = new StringName("get_start_offset");
        this._bindings.method_get_start_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AnimationNodeAnimation");
        let methodname = new StringName("set_loop_mode");
        this._bindings.method_set_loop_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3155355575
        );
      }
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_animation,
      this._owner,
      _name
    );
    
  }
  get_animation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_animation,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
    
  }
  set_play_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_play_mode,
      this._owner,
      _mode
    );
    
  }
  get_play_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_play_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_use_custom_timeline(_use_custom_timeline) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_custom_timeline,
      this._owner,
      _use_custom_timeline
    );
    
  }
  is_using_custom_timeline() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_using_custom_timeline,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_timeline_length(_timeline_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_timeline_length,
      this._owner,
      _timeline_length
    );
    
  }
  get_timeline_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_timeline_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_stretch_time_scale(_stretch_time_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_stretch_time_scale,
      this._owner,
      _stretch_time_scale
    );
    
  }
  is_stretching_time_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_stretching_time_scale,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_start_offset(_start_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_start_offset,
      this._owner,
      _start_offset
    );
    
  }
  get_start_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_start_offset,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_loop_mode(_loop_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_loop_mode,
      this._owner,
      _loop_mode
    );
    
  }
  get_loop_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_loop_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  static PlayMode = {
    PLAY_MODE_FORWARD: 0,
    PLAY_MODE_BACKWARD: 1,
  }
}