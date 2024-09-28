import * as internal from '__internal__';
import { AudioStream } from '@js_godot/classes/audio_stream'
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
  method_set_clip_count;
  method_get_clip_count;
  method_set_initial_clip;
  method_get_initial_clip;
  method_set_clip_name;
  method_get_clip_name;
  method_set_clip_stream;
  method_get_clip_stream;
  method_set_clip_auto_advance;
  method_get_clip_auto_advance;
  method_set_clip_auto_advance_next_clip;
  method_get_clip_auto_advance_next_clip;
  method_add_transition;
  method_has_transition;
  method_erase_transition;
  method_get_transition_list;
  method_get_transition_from_time;
  method_get_transition_to_time;
  method_get_transition_fade_mode;
  method_get_transition_fade_beats;
  method_is_transition_using_filler_clip;
  method_get_transition_filler_clip;
  method_is_transition_holding_previous;
}
@GodotClass
export class AudioStreamInteractive extends AudioStream{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamInteractive");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_clip_count() {
    if (!this._bindings.method_set_clip_count) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("set_clip_count");
      this._bindings.method_set_clip_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_clip_count() {
    if (!this._bindings.method_get_clip_count) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("get_clip_count");
      this._bindings.method_get_clip_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_initial_clip() {
    if (!this._bindings.method_set_initial_clip) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("set_initial_clip");
      this._bindings.method_set_initial_clip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_initial_clip() {
    if (!this._bindings.method_get_initial_clip) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("get_initial_clip");
      this._bindings.method_get_initial_clip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_clip_name() {
    if (!this._bindings.method_set_clip_name) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("set_clip_name");
      this._bindings.method_set_clip_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3780747571
      );
    }
  }
  static init_method_get_clip_name() {
    if (!this._bindings.method_get_clip_name) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("get_clip_name");
      this._bindings.method_get_clip_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        659327637
      );
    }
  }
  static init_method_set_clip_stream() {
    if (!this._bindings.method_set_clip_stream) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("set_clip_stream");
      this._bindings.method_set_clip_stream = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        111075094
      );
    }
  }
  static init_method_get_clip_stream() {
    if (!this._bindings.method_get_clip_stream) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("get_clip_stream");
      this._bindings.method_get_clip_stream = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2739380747
      );
    }
  }
  static init_method_set_clip_auto_advance() {
    if (!this._bindings.method_set_clip_auto_advance) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("set_clip_auto_advance");
      this._bindings.method_set_clip_auto_advance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        57217598
      );
    }
  }
  static init_method_get_clip_auto_advance() {
    if (!this._bindings.method_get_clip_auto_advance) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("get_clip_auto_advance");
      this._bindings.method_get_clip_auto_advance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1778634807
      );
    }
  }
  static init_method_set_clip_auto_advance_next_clip() {
    if (!this._bindings.method_set_clip_auto_advance_next_clip) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("set_clip_auto_advance_next_clip");
      this._bindings.method_set_clip_auto_advance_next_clip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_clip_auto_advance_next_clip() {
    if (!this._bindings.method_get_clip_auto_advance_next_clip) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("get_clip_auto_advance_next_clip");
      this._bindings.method_get_clip_auto_advance_next_clip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_add_transition() {
    if (!this._bindings.method_add_transition) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("add_transition");
      this._bindings.method_add_transition = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1630280552
      );
    }
  }
  static init_method_has_transition() {
    if (!this._bindings.method_has_transition) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("has_transition");
      this._bindings.method_has_transition = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2522259332
      );
    }
  }
  static init_method_erase_transition() {
    if (!this._bindings.method_erase_transition) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("erase_transition");
      this._bindings.method_erase_transition = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_transition_list() {
    if (!this._bindings.method_get_transition_list) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("get_transition_list");
      this._bindings.method_get_transition_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1930428628
      );
    }
  }
  static init_method_get_transition_from_time() {
    if (!this._bindings.method_get_transition_from_time) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("get_transition_from_time");
      this._bindings.method_get_transition_from_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3453338158
      );
    }
  }
  static init_method_get_transition_to_time() {
    if (!this._bindings.method_get_transition_to_time) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("get_transition_to_time");
      this._bindings.method_get_transition_to_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1369651373
      );
    }
  }
  static init_method_get_transition_fade_mode() {
    if (!this._bindings.method_get_transition_fade_mode) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("get_transition_fade_mode");
      this._bindings.method_get_transition_fade_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4065396087
      );
    }
  }
  static init_method_get_transition_fade_beats() {
    if (!this._bindings.method_get_transition_fade_beats) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("get_transition_fade_beats");
      this._bindings.method_get_transition_fade_beats = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3085491603
      );
    }
  }
  static init_method_is_transition_using_filler_clip() {
    if (!this._bindings.method_is_transition_using_filler_clip) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("is_transition_using_filler_clip");
      this._bindings.method_is_transition_using_filler_clip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2522259332
      );
    }
  }
  static init_method_get_transition_filler_clip() {
    if (!this._bindings.method_get_transition_filler_clip) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("get_transition_filler_clip");
      this._bindings.method_get_transition_filler_clip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3175239445
      );
    }
  }
  static init_method_is_transition_holding_previous() {
    if (!this._bindings.method_is_transition_holding_previous) {
      let classname = new StringName("AudioStreamInteractive");
      let methodname = new StringName("is_transition_holding_previous");
      this._bindings.method_is_transition_holding_previous = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2522259332
      );
    }
  }

  
  
  set_clip_count(_clip_count) {
    AudioStreamInteractive.init_method_set_clip_count();
    return _call_native_mb_no_ret(
      AudioStreamInteractive._bindings.method_set_clip_count,
      this._owner,
      _clip_count
    );
    
  }
  get_clip_count() {
    AudioStreamInteractive.init_method_get_clip_count();
    return _call_native_mb_ret(
      AudioStreamInteractive._bindings.method_get_clip_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_initial_clip(_clip_index) {
    AudioStreamInteractive.init_method_set_initial_clip();
    return _call_native_mb_no_ret(
      AudioStreamInteractive._bindings.method_set_initial_clip,
      this._owner,
      _clip_index
    );
    
  }
  get_initial_clip() {
    AudioStreamInteractive.init_method_get_initial_clip();
    return _call_native_mb_ret(
      AudioStreamInteractive._bindings.method_get_initial_clip,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_clip_name(_clip_index, _name) {
    AudioStreamInteractive.init_method_set_clip_name();
    return _call_native_mb_no_ret(
      AudioStreamInteractive._bindings.method_set_clip_name,
      this._owner,
      _clip_index, _name
    );
    
  }
  get_clip_name(_clip_index) {
    AudioStreamInteractive.init_method_get_clip_name();
    return _call_native_mb_ret(
      AudioStreamInteractive._bindings.method_get_clip_name,
      this._owner,
			Variant.Type.STRING_NAME,
    
      _clip_index
    );
    
  }
  set_clip_stream(_clip_index, _stream) {
    AudioStreamInteractive.init_method_set_clip_stream();
    return _call_native_mb_no_ret(
      AudioStreamInteractive._bindings.method_set_clip_stream,
      this._owner,
      _clip_index, _stream
    );
    
  }
  get_clip_stream(_clip_index) {
    AudioStreamInteractive.init_method_get_clip_stream();
    return _call_native_mb_ret(
      AudioStreamInteractive._bindings.method_get_clip_stream,
      this._owner,
			Variant.Type.OBJECT,
      _clip_index
    );
    
  }
  set_clip_auto_advance(_clip_index, _mode) {
    AudioStreamInteractive.init_method_set_clip_auto_advance();
    return _call_native_mb_no_ret(
      AudioStreamInteractive._bindings.method_set_clip_auto_advance,
      this._owner,
      _clip_index, _mode
    );
    
  }
  get_clip_auto_advance(_clip_index) {
    AudioStreamInteractive.init_method_get_clip_auto_advance();
    return _call_native_mb_ret(
      AudioStreamInteractive._bindings.method_get_clip_auto_advance,
      this._owner,
			Variant.Type.INT,
    
      _clip_index
    );
    
  }
  set_clip_auto_advance_next_clip(_clip_index, _auto_advance_next_clip) {
    AudioStreamInteractive.init_method_set_clip_auto_advance_next_clip();
    return _call_native_mb_no_ret(
      AudioStreamInteractive._bindings.method_set_clip_auto_advance_next_clip,
      this._owner,
      _clip_index, _auto_advance_next_clip
    );
    
  }
  get_clip_auto_advance_next_clip(_clip_index) {
    AudioStreamInteractive.init_method_get_clip_auto_advance_next_clip();
    return _call_native_mb_ret(
      AudioStreamInteractive._bindings.method_get_clip_auto_advance_next_clip,
      this._owner,
			Variant.Type.INT,
    
      _clip_index
    );
    
  }
  add_transition(_from_clip, _to_clip, _from_time, _to_time, _fade_mode, _fade_beats, _use_filler_clip, _filler_clip, _hold_previous) {
    AudioStreamInteractive.init_method_add_transition();
    return _call_native_mb_no_ret(
      AudioStreamInteractive._bindings.method_add_transition,
      this._owner,
      _from_clip, _to_clip, _from_time, _to_time, _fade_mode, _fade_beats, _use_filler_clip, _filler_clip, _hold_previous
    );
    
  }
  has_transition(_from_clip, _to_clip) {
    AudioStreamInteractive.init_method_has_transition();
    return _call_native_mb_ret(
      AudioStreamInteractive._bindings.method_has_transition,
      this._owner,
			Variant.Type.BOOL,
    
      _from_clip, _to_clip
    );
    
  }
  erase_transition(_from_clip, _to_clip) {
    AudioStreamInteractive.init_method_erase_transition();
    return _call_native_mb_no_ret(
      AudioStreamInteractive._bindings.method_erase_transition,
      this._owner,
      _from_clip, _to_clip
    );
    
  }
  get_transition_list() {
    AudioStreamInteractive.init_method_get_transition_list();
    return _call_native_mb_ret(
      AudioStreamInteractive._bindings.method_get_transition_list,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  get_transition_from_time(_from_clip, _to_clip) {
    AudioStreamInteractive.init_method_get_transition_from_time();
    return _call_native_mb_ret(
      AudioStreamInteractive._bindings.method_get_transition_from_time,
      this._owner,
			Variant.Type.INT,
    
      _from_clip, _to_clip
    );
    
  }
  get_transition_to_time(_from_clip, _to_clip) {
    AudioStreamInteractive.init_method_get_transition_to_time();
    return _call_native_mb_ret(
      AudioStreamInteractive._bindings.method_get_transition_to_time,
      this._owner,
			Variant.Type.INT,
    
      _from_clip, _to_clip
    );
    
  }
  get_transition_fade_mode(_from_clip, _to_clip) {
    AudioStreamInteractive.init_method_get_transition_fade_mode();
    return _call_native_mb_ret(
      AudioStreamInteractive._bindings.method_get_transition_fade_mode,
      this._owner,
			Variant.Type.INT,
    
      _from_clip, _to_clip
    );
    
  }
  get_transition_fade_beats(_from_clip, _to_clip) {
    AudioStreamInteractive.init_method_get_transition_fade_beats();
    return _call_native_mb_ret(
      AudioStreamInteractive._bindings.method_get_transition_fade_beats,
      this._owner,
			Variant.Type.FLOAT,
    
      _from_clip, _to_clip
    );
    
  }
  is_transition_using_filler_clip(_from_clip, _to_clip) {
    AudioStreamInteractive.init_method_is_transition_using_filler_clip();
    return _call_native_mb_ret(
      AudioStreamInteractive._bindings.method_is_transition_using_filler_clip,
      this._owner,
			Variant.Type.BOOL,
    
      _from_clip, _to_clip
    );
    
  }
  get_transition_filler_clip(_from_clip, _to_clip) {
    AudioStreamInteractive.init_method_get_transition_filler_clip();
    return _call_native_mb_ret(
      AudioStreamInteractive._bindings.method_get_transition_filler_clip,
      this._owner,
			Variant.Type.INT,
    
      _from_clip, _to_clip
    );
    
  }
  is_transition_holding_previous(_from_clip, _to_clip) {
    AudioStreamInteractive.init_method_is_transition_holding_previous();
    return _call_native_mb_ret(
      AudioStreamInteractive._bindings.method_is_transition_holding_previous,
      this._owner,
			Variant.Type.BOOL,
    
      _from_clip, _to_clip
    );
    
  }
  
get initial_clip () {
  return this.get_initial_clip();
}
set initial_clip (new_value) {
  this.set_initial_clip(new_value);
}
get clip_count () {
  return this.get_clip_count();
}
set clip_count (new_value) {
  this.set_clip_count(new_value);
}

  static TransitionFromTime = {
    TRANSITION_FROM_TIME_IMMEDIATE: 0,
    TRANSITION_FROM_TIME_NEXT_BEAT: 1,
    TRANSITION_FROM_TIME_NEXT_BAR: 2,
    TRANSITION_FROM_TIME_END: 3,
  }
  static TransitionToTime = {
    TRANSITION_TO_TIME_SAME_POSITION: 0,
    TRANSITION_TO_TIME_START: 1,
  }
  static FadeMode = {
    FADE_DISABLED: 0,
    FADE_IN: 1,
    FADE_OUT: 2,
    FADE_CROSS: 3,
    FADE_AUTOMATIC: 4,
  }
  static AutoAdvanceMode = {
    AUTO_ADVANCE_DISABLED: 0,
    AUTO_ADVANCE_ENABLED: 1,
    AUTO_ADVANCE_RETURN_TO_HOLD: 2,
  }
}