import * as internal from '__internal__';
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
  method_set_bus_count;
  method_get_bus_count;
  method_remove_bus;
  method_add_bus;
  method_move_bus;
  method_set_bus_name;
  method_get_bus_name;
  method_get_bus_index;
  method_get_bus_channels;
  method_set_bus_volume_db;
  method_get_bus_volume_db;
  method_set_bus_send;
  method_get_bus_send;
  method_set_bus_solo;
  method_is_bus_solo;
  method_set_bus_mute;
  method_is_bus_mute;
  method_set_bus_bypass_effects;
  method_is_bus_bypassing_effects;
  method_add_bus_effect;
  method_remove_bus_effect;
  method_get_bus_effect_count;
  method_get_bus_effect;
  method_get_bus_effect_instance;
  method_swap_bus_effects;
  method_set_bus_effect_enabled;
  method_is_bus_effect_enabled;
  method_get_bus_peak_volume_left_db;
  method_get_bus_peak_volume_right_db;
  method_set_playback_speed_scale;
  method_get_playback_speed_scale;
  method_lock;
  method_unlock;
  method_get_speaker_mode;
  method_get_mix_rate;
  method_get_output_device_list;
  method_get_output_device;
  method_set_output_device;
  method_get_time_to_next_mix;
  method_get_time_since_last_mix;
  method_get_output_latency;
  method_get_input_device_list;
  method_get_input_device;
  method_set_input_device;
  method_set_bus_layout;
  method_generate_bus_layout;
  method_set_enable_tagging_used_audio_streams;
  method_is_stream_registered_as_sample;
  method_register_stream_as_sample;
}class _AudioServer extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioServer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_bus_count() {
    if (!this._bindings.method_set_bus_count) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("set_bus_count");
      this._bindings.method_set_bus_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_bus_count() {
    if (!this._bindings.method_get_bus_count) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_bus_count");
      this._bindings.method_get_bus_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_remove_bus() {
    if (!this._bindings.method_remove_bus) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("remove_bus");
      this._bindings.method_remove_bus = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_add_bus() {
    if (!this._bindings.method_add_bus) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("add_bus");
      this._bindings.method_add_bus = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1025054187
      );
    }
  }
  static init_method_move_bus() {
    if (!this._bindings.method_move_bus) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("move_bus");
      this._bindings.method_move_bus = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_set_bus_name() {
    if (!this._bindings.method_set_bus_name) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("set_bus_name");
      this._bindings.method_set_bus_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_bus_name() {
    if (!this._bindings.method_get_bus_name) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_bus_name");
      this._bindings.method_get_bus_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_bus_index() {
    if (!this._bindings.method_get_bus_index) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_bus_index");
      this._bindings.method_get_bus_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2458036349
      );
    }
  }
  static init_method_get_bus_channels() {
    if (!this._bindings.method_get_bus_channels) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_bus_channels");
      this._bindings.method_get_bus_channels = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_set_bus_volume_db() {
    if (!this._bindings.method_set_bus_volume_db) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("set_bus_volume_db");
      this._bindings.method_set_bus_volume_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_get_bus_volume_db() {
    if (!this._bindings.method_get_bus_volume_db) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_bus_volume_db");
      this._bindings.method_get_bus_volume_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_set_bus_send() {
    if (!this._bindings.method_set_bus_send) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("set_bus_send");
      this._bindings.method_set_bus_send = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3780747571
      );
    }
  }
  static init_method_get_bus_send() {
    if (!this._bindings.method_get_bus_send) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_bus_send");
      this._bindings.method_get_bus_send = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        659327637
      );
    }
  }
  static init_method_set_bus_solo() {
    if (!this._bindings.method_set_bus_solo) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("set_bus_solo");
      this._bindings.method_set_bus_solo = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_bus_solo() {
    if (!this._bindings.method_is_bus_solo) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("is_bus_solo");
      this._bindings.method_is_bus_solo = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_bus_mute() {
    if (!this._bindings.method_set_bus_mute) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("set_bus_mute");
      this._bindings.method_set_bus_mute = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_bus_mute() {
    if (!this._bindings.method_is_bus_mute) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("is_bus_mute");
      this._bindings.method_is_bus_mute = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_bus_bypass_effects() {
    if (!this._bindings.method_set_bus_bypass_effects) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("set_bus_bypass_effects");
      this._bindings.method_set_bus_bypass_effects = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_bus_bypassing_effects() {
    if (!this._bindings.method_is_bus_bypassing_effects) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("is_bus_bypassing_effects");
      this._bindings.method_is_bus_bypassing_effects = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_add_bus_effect() {
    if (!this._bindings.method_add_bus_effect) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("add_bus_effect");
      this._bindings.method_add_bus_effect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4068819785
      );
    }
  }
  static init_method_remove_bus_effect() {
    if (!this._bindings.method_remove_bus_effect) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("remove_bus_effect");
      this._bindings.method_remove_bus_effect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_bus_effect_count() {
    if (!this._bindings.method_get_bus_effect_count) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_bus_effect_count");
      this._bindings.method_get_bus_effect_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3744713108
      );
    }
  }
  static init_method_get_bus_effect() {
    if (!this._bindings.method_get_bus_effect) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_bus_effect");
      this._bindings.method_get_bus_effect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        726064442
      );
    }
  }
  static init_method_get_bus_effect_instance() {
    if (!this._bindings.method_get_bus_effect_instance) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_bus_effect_instance");
      this._bindings.method_get_bus_effect_instance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1829771234
      );
    }
  }
  static init_method_swap_bus_effects() {
    if (!this._bindings.method_swap_bus_effects) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("swap_bus_effects");
      this._bindings.method_swap_bus_effects = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1649997291
      );
    }
  }
  static init_method_set_bus_effect_enabled() {
    if (!this._bindings.method_set_bus_effect_enabled) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("set_bus_effect_enabled");
      this._bindings.method_set_bus_effect_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1383440665
      );
    }
  }
  static init_method_is_bus_effect_enabled() {
    if (!this._bindings.method_is_bus_effect_enabled) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("is_bus_effect_enabled");
      this._bindings.method_is_bus_effect_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2522259332
      );
    }
  }
  static init_method_get_bus_peak_volume_left_db() {
    if (!this._bindings.method_get_bus_peak_volume_left_db) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_bus_peak_volume_left_db");
      this._bindings.method_get_bus_peak_volume_left_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3085491603
      );
    }
  }
  static init_method_get_bus_peak_volume_right_db() {
    if (!this._bindings.method_get_bus_peak_volume_right_db) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_bus_peak_volume_right_db");
      this._bindings.method_get_bus_peak_volume_right_db = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3085491603
      );
    }
  }
  static init_method_set_playback_speed_scale() {
    if (!this._bindings.method_set_playback_speed_scale) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("set_playback_speed_scale");
      this._bindings.method_set_playback_speed_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_playback_speed_scale() {
    if (!this._bindings.method_get_playback_speed_scale) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_playback_speed_scale");
      this._bindings.method_get_playback_speed_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_lock() {
    if (!this._bindings.method_lock) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("lock");
      this._bindings.method_lock = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_unlock() {
    if (!this._bindings.method_unlock) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("unlock");
      this._bindings.method_unlock = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_speaker_mode() {
    if (!this._bindings.method_get_speaker_mode) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_speaker_mode");
      this._bindings.method_get_speaker_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2549190337
      );
    }
  }
  static init_method_get_mix_rate() {
    if (!this._bindings.method_get_mix_rate) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_mix_rate");
      this._bindings.method_get_mix_rate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_output_device_list() {
    if (!this._bindings.method_get_output_device_list) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_output_device_list");
      this._bindings.method_get_output_device_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2981934095
      );
    }
  }
  static init_method_get_output_device() {
    if (!this._bindings.method_get_output_device) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_output_device");
      this._bindings.method_get_output_device = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2841200299
      );
    }
  }
  static init_method_set_output_device() {
    if (!this._bindings.method_set_output_device) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("set_output_device");
      this._bindings.method_set_output_device = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_time_to_next_mix() {
    if (!this._bindings.method_get_time_to_next_mix) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_time_to_next_mix");
      this._bindings.method_get_time_to_next_mix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_time_since_last_mix() {
    if (!this._bindings.method_get_time_since_last_mix) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_time_since_last_mix");
      this._bindings.method_get_time_since_last_mix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_output_latency() {
    if (!this._bindings.method_get_output_latency) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_output_latency");
      this._bindings.method_get_output_latency = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_input_device_list() {
    if (!this._bindings.method_get_input_device_list) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_input_device_list");
      this._bindings.method_get_input_device_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2981934095
      );
    }
  }
  static init_method_get_input_device() {
    if (!this._bindings.method_get_input_device) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("get_input_device");
      this._bindings.method_get_input_device = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2841200299
      );
    }
  }
  static init_method_set_input_device() {
    if (!this._bindings.method_set_input_device) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("set_input_device");
      this._bindings.method_set_input_device = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_set_bus_layout() {
    if (!this._bindings.method_set_bus_layout) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("set_bus_layout");
      this._bindings.method_set_bus_layout = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3319058824
      );
    }
  }
  static init_method_generate_bus_layout() {
    if (!this._bindings.method_generate_bus_layout) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("generate_bus_layout");
      this._bindings.method_generate_bus_layout = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3769973890
      );
    }
  }
  static init_method_set_enable_tagging_used_audio_streams() {
    if (!this._bindings.method_set_enable_tagging_used_audio_streams) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("set_enable_tagging_used_audio_streams");
      this._bindings.method_set_enable_tagging_used_audio_streams = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_stream_registered_as_sample() {
    if (!this._bindings.method_is_stream_registered_as_sample) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("is_stream_registered_as_sample");
      this._bindings.method_is_stream_registered_as_sample = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        500225754
      );
    }
  }
  static init_method_register_stream_as_sample() {
    if (!this._bindings.method_register_stream_as_sample) {
      let classname = new StringName("AudioServer");
      let methodname = new StringName("register_stream_as_sample");
      this._bindings.method_register_stream_as_sample = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2210767741
      );
    }
  }

  
  
  set_bus_count(_amount) {
    AudioServer.init_method_set_bus_count();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_set_bus_count,
      this._owner,
      _amount
    );
    
  }
  get_bus_count() {
    AudioServer.init_method_get_bus_count();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_bus_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  remove_bus(_index) {
    AudioServer.init_method_remove_bus();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_remove_bus,
      this._owner,
      _index
    );
    
  }
  add_bus(_at_position) {
    AudioServer.init_method_add_bus();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_add_bus,
      this._owner,
      _at_position
    );
    
  }
  move_bus(_index, _to_index) {
    AudioServer.init_method_move_bus();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_move_bus,
      this._owner,
      _index, _to_index
    );
    
  }
  set_bus_name(_bus_idx, _name) {
    AudioServer.init_method_set_bus_name();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_set_bus_name,
      this._owner,
      _bus_idx, _name
    );
    
  }
  get_bus_name(_bus_idx) {
    AudioServer.init_method_get_bus_name();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_bus_name,
      this._owner,
			Variant.Type.STRING,
    
      _bus_idx
    );
    
  }
  get_bus_index(_bus_name) {
    AudioServer.init_method_get_bus_index();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_bus_index,
      this._owner,
			Variant.Type.INT,
    
      _bus_name
    );
    
  }
  get_bus_channels(_bus_idx) {
    AudioServer.init_method_get_bus_channels();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_bus_channels,
      this._owner,
			Variant.Type.INT,
    
      _bus_idx
    );
    
  }
  set_bus_volume_db(_bus_idx, _volume_db) {
    AudioServer.init_method_set_bus_volume_db();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_set_bus_volume_db,
      this._owner,
      _bus_idx, _volume_db
    );
    
  }
  get_bus_volume_db(_bus_idx) {
    AudioServer.init_method_get_bus_volume_db();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_bus_volume_db,
      this._owner,
			Variant.Type.FLOAT,
    
      _bus_idx
    );
    
  }
  set_bus_send(_bus_idx, _send) {
    AudioServer.init_method_set_bus_send();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_set_bus_send,
      this._owner,
      _bus_idx, _send
    );
    
  }
  get_bus_send(_bus_idx) {
    AudioServer.init_method_get_bus_send();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_bus_send,
      this._owner,
			Variant.Type.STRING_NAME,
    
      _bus_idx
    );
    
  }
  set_bus_solo(_bus_idx, _enable) {
    AudioServer.init_method_set_bus_solo();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_set_bus_solo,
      this._owner,
      _bus_idx, _enable
    );
    
  }
  is_bus_solo(_bus_idx) {
    AudioServer.init_method_is_bus_solo();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_is_bus_solo,
      this._owner,
			Variant.Type.BOOL,
    
      _bus_idx
    );
    
  }
  set_bus_mute(_bus_idx, _enable) {
    AudioServer.init_method_set_bus_mute();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_set_bus_mute,
      this._owner,
      _bus_idx, _enable
    );
    
  }
  is_bus_mute(_bus_idx) {
    AudioServer.init_method_is_bus_mute();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_is_bus_mute,
      this._owner,
			Variant.Type.BOOL,
    
      _bus_idx
    );
    
  }
  set_bus_bypass_effects(_bus_idx, _enable) {
    AudioServer.init_method_set_bus_bypass_effects();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_set_bus_bypass_effects,
      this._owner,
      _bus_idx, _enable
    );
    
  }
  is_bus_bypassing_effects(_bus_idx) {
    AudioServer.init_method_is_bus_bypassing_effects();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_is_bus_bypassing_effects,
      this._owner,
			Variant.Type.BOOL,
    
      _bus_idx
    );
    
  }
  add_bus_effect(_bus_idx, _effect, _at_position) {
    AudioServer.init_method_add_bus_effect();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_add_bus_effect,
      this._owner,
      _bus_idx, _effect, _at_position
    );
    
  }
  remove_bus_effect(_bus_idx, _effect_idx) {
    AudioServer.init_method_remove_bus_effect();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_remove_bus_effect,
      this._owner,
      _bus_idx, _effect_idx
    );
    
  }
  get_bus_effect_count(_bus_idx) {
    AudioServer.init_method_get_bus_effect_count();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_bus_effect_count,
      this._owner,
			Variant.Type.INT,
    
      _bus_idx
    );
    
  }
  get_bus_effect(_bus_idx, _effect_idx) {
    AudioServer.init_method_get_bus_effect();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_bus_effect,
      this._owner,
			Variant.Type.OBJECT,
      _bus_idx, _effect_idx
    );
    
  }
  get_bus_effect_instance(_bus_idx, _effect_idx, _channel) {
    AudioServer.init_method_get_bus_effect_instance();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_bus_effect_instance,
      this._owner,
			Variant.Type.OBJECT,
      _bus_idx, _effect_idx, _channel
    );
    
  }
  swap_bus_effects(_bus_idx, _effect_idx, _by_effect_idx) {
    AudioServer.init_method_swap_bus_effects();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_swap_bus_effects,
      this._owner,
      _bus_idx, _effect_idx, _by_effect_idx
    );
    
  }
  set_bus_effect_enabled(_bus_idx, _effect_idx, _enabled) {
    AudioServer.init_method_set_bus_effect_enabled();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_set_bus_effect_enabled,
      this._owner,
      _bus_idx, _effect_idx, _enabled
    );
    
  }
  is_bus_effect_enabled(_bus_idx, _effect_idx) {
    AudioServer.init_method_is_bus_effect_enabled();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_is_bus_effect_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      _bus_idx, _effect_idx
    );
    
  }
  get_bus_peak_volume_left_db(_bus_idx, _channel) {
    AudioServer.init_method_get_bus_peak_volume_left_db();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_bus_peak_volume_left_db,
      this._owner,
			Variant.Type.FLOAT,
    
      _bus_idx, _channel
    );
    
  }
  get_bus_peak_volume_right_db(_bus_idx, _channel) {
    AudioServer.init_method_get_bus_peak_volume_right_db();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_bus_peak_volume_right_db,
      this._owner,
			Variant.Type.FLOAT,
    
      _bus_idx, _channel
    );
    
  }
  set_playback_speed_scale(_scale) {
    AudioServer.init_method_set_playback_speed_scale();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_set_playback_speed_scale,
      this._owner,
      _scale
    );
    
  }
  get_playback_speed_scale() {
    AudioServer.init_method_get_playback_speed_scale();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_playback_speed_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  lock() {
    AudioServer.init_method_lock();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_lock,
      this._owner,
      
    );
    
  }
  unlock() {
    AudioServer.init_method_unlock();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_unlock,
      this._owner,
      
    );
    
  }
  get_speaker_mode() {
    AudioServer.init_method_get_speaker_mode();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_speaker_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_mix_rate() {
    AudioServer.init_method_get_mix_rate();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_mix_rate,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_output_device_list() {
    AudioServer.init_method_get_output_device_list();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_output_device_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_output_device() {
    AudioServer.init_method_get_output_device();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_output_device,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_output_device(_name) {
    AudioServer.init_method_set_output_device();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_set_output_device,
      this._owner,
      _name
    );
    
  }
  get_time_to_next_mix() {
    AudioServer.init_method_get_time_to_next_mix();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_time_to_next_mix,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_time_since_last_mix() {
    AudioServer.init_method_get_time_since_last_mix();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_time_since_last_mix,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_output_latency() {
    AudioServer.init_method_get_output_latency();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_output_latency,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_input_device_list() {
    AudioServer.init_method_get_input_device_list();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_input_device_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_input_device() {
    AudioServer.init_method_get_input_device();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_get_input_device,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_input_device(_name) {
    AudioServer.init_method_set_input_device();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_set_input_device,
      this._owner,
      _name
    );
    
  }
  set_bus_layout(_bus_layout) {
    AudioServer.init_method_set_bus_layout();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_set_bus_layout,
      this._owner,
      _bus_layout
    );
    
  }
  generate_bus_layout() {
    AudioServer.init_method_generate_bus_layout();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_generate_bus_layout,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_enable_tagging_used_audio_streams(_enable) {
    AudioServer.init_method_set_enable_tagging_used_audio_streams();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_set_enable_tagging_used_audio_streams,
      this._owner,
      _enable
    );
    
  }
  is_stream_registered_as_sample(_stream) {
    AudioServer.init_method_is_stream_registered_as_sample();
    return _call_native_mb_ret(
      _AudioServer._bindings.method_is_stream_registered_as_sample,
      this._owner,
			Variant.Type.BOOL,
    
      _stream
    );
    
  }
  register_stream_as_sample(_stream) {
    AudioServer.init_method_register_stream_as_sample();
    return _call_native_mb_no_ret(
      _AudioServer._bindings.method_register_stream_as_sample,
      this._owner,
      _stream
    );
    
  }
  
get bus_count () {
  return this.get_bus_count();
}
set bus_count (new_value) {
  this.set_bus_count(new_value);
}
get output_device () {
  return this.get_output_device();
}
set output_device (new_value) {
  this.set_output_device(new_value);
}
get input_device () {
  return this.get_input_device();
}
set input_device (new_value) {
  this.set_input_device(new_value);
}
get playback_speed_scale () {
  return this.get_playback_speed_scale();
}
set playback_speed_scale (new_value) {
  this.set_playback_speed_scale(new_value);
}

  static SpeakerMode = {
    SPEAKER_MODE_STEREO: 0,
    SPEAKER_SURROUND_31: 1,
    SPEAKER_SURROUND_51: 2,
    SPEAKER_SURROUND_71: 3,
  }
  static PlaybackType = {
    PLAYBACK_TYPE_DEFAULT: 0,
    PLAYBACK_TYPE_STREAM: 1,
    PLAYBACK_TYPE_SAMPLE: 2,
    PLAYBACK_TYPE_MAX: 3,
  }
}
export const AudioServer = (function () {
  let _instance;
  function create_instance() {
    return new _AudioServer();
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