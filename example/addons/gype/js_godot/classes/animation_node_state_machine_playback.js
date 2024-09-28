import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_travel;
  method_start;
  method_next;
  method_stop;
  method_is_playing;
  method_get_current_node;
  method_get_current_play_position;
  method_get_current_length;
  method_get_fading_from_node;
  method_get_travel_path;
}
@GodotClass
export class AnimationNodeStateMachinePlayback extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationNodeStateMachinePlayback");
    } else {
      super(godot_object);
    }
  }
  static init_method_travel() {
    if (!this._bindings.method_travel) {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("travel");
      this._bindings.method_travel = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3823612587
      );
    }
  }
  static init_method_start() {
    if (!this._bindings.method_start) {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("start");
      this._bindings.method_start = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3823612587
      );
    }
  }
  static init_method_next() {
    if (!this._bindings.method_next) {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("next");
      this._bindings.method_next = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_stop() {
    if (!this._bindings.method_stop) {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("stop");
      this._bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_is_playing() {
    if (!this._bindings.method_is_playing) {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("is_playing");
      this._bindings.method_is_playing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_current_node() {
    if (!this._bindings.method_get_current_node) {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("get_current_node");
      this._bindings.method_get_current_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_get_current_play_position() {
    if (!this._bindings.method_get_current_play_position) {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("get_current_play_position");
      this._bindings.method_get_current_play_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_current_length() {
    if (!this._bindings.method_get_current_length) {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("get_current_length");
      this._bindings.method_get_current_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_fading_from_node() {
    if (!this._bindings.method_get_fading_from_node) {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("get_fading_from_node");
      this._bindings.method_get_fading_from_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_get_travel_path() {
    if (!this._bindings.method_get_travel_path) {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("get_travel_path");
      this._bindings.method_get_travel_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }

  
  
  travel(_to_node, _reset_on_teleport) {
    AnimationNodeStateMachinePlayback.init_method_travel();
    return _call_native_mb_no_ret(
      AnimationNodeStateMachinePlayback._bindings.method_travel,
      this._owner,
      _to_node, _reset_on_teleport
    );
    
  }
  start(_node, _reset) {
    AnimationNodeStateMachinePlayback.init_method_start();
    return _call_native_mb_no_ret(
      AnimationNodeStateMachinePlayback._bindings.method_start,
      this._owner,
      _node, _reset
    );
    
  }
  next() {
    AnimationNodeStateMachinePlayback.init_method_next();
    return _call_native_mb_no_ret(
      AnimationNodeStateMachinePlayback._bindings.method_next,
      this._owner,
      
    );
    
  }
  stop() {
    AnimationNodeStateMachinePlayback.init_method_stop();
    return _call_native_mb_no_ret(
      AnimationNodeStateMachinePlayback._bindings.method_stop,
      this._owner,
      
    );
    
  }
  is_playing() {
    AnimationNodeStateMachinePlayback.init_method_is_playing();
    return _call_native_mb_ret(
      AnimationNodeStateMachinePlayback._bindings.method_is_playing,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_current_node() {
    AnimationNodeStateMachinePlayback.init_method_get_current_node();
    return _call_native_mb_ret(
      AnimationNodeStateMachinePlayback._bindings.method_get_current_node,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  get_current_play_position() {
    AnimationNodeStateMachinePlayback.init_method_get_current_play_position();
    return _call_native_mb_ret(
      AnimationNodeStateMachinePlayback._bindings.method_get_current_play_position,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_current_length() {
    AnimationNodeStateMachinePlayback.init_method_get_current_length();
    return _call_native_mb_ret(
      AnimationNodeStateMachinePlayback._bindings.method_get_current_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_fading_from_node() {
    AnimationNodeStateMachinePlayback.init_method_get_fading_from_node();
    return _call_native_mb_ret(
      AnimationNodeStateMachinePlayback._bindings.method_get_fading_from_node,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  get_travel_path() {
    AnimationNodeStateMachinePlayback.init_method_get_travel_path();
    return _call_native_mb_ret(
      AnimationNodeStateMachinePlayback._bindings.method_get_travel_path,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  

}