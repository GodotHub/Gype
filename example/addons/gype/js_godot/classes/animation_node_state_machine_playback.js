import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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
export class AnimationNodeStateMachinePlayback extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationNodeStateMachinePlayback");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("travel");
      this._bindings.method_travel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3823612587
      );
    }
    {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("start");
      this._bindings.method_start = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3823612587
      );
    }
    {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("next");
      this._bindings.method_next = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("stop");
      this._bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("is_playing");
      this._bindings.method_is_playing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("get_current_node");
      this._bindings.method_get_current_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("get_current_play_position");
      this._bindings.method_get_current_play_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("get_current_length");
      this._bindings.method_get_current_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AnimationNodeStateMachinePlayback");
      let methodname = new StringName("get_fading_from_node");
      this._bindings.method_get_fading_from_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_travel,
      this._owner,
      _to_node, _reset_on_teleport
    );
    
  }
  start(_node, _reset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_start,
      this._owner,
      _node, _reset
    );
    
  }
  next() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_next,
      this._owner,
      
    );
    
  }
  stop() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_stop,
      this._owner,
      
    );
    
  }
  is_playing() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_playing,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_current_node() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_current_node,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  get_current_play_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_current_play_position,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_current_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_current_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_fading_from_node() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fading_from_node,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  get_travel_path() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_travel_path,
      this._owner,
			Variant.INT,
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}