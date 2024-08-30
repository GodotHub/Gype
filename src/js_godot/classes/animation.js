import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { Quaternion } from 'src/js_godot/variant/quaternion'
import { Resource } from 'src/js_godot/classes/resource'
import { StringName } from 'src/js_godot/variant/string_name'
import { NodePath } from 'src/js_godot/variant/node_path'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Variant } from 'src/js_godot/variant/variant'
import { GDArray } from 'src/js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_add_track;
    method_remove_track;
    method_get_track_count;
    method_track_get_type;
    method_track_get_path;
    method_track_set_path;
    method_find_track;
    method_track_move_up;
    method_track_move_down;
    method_track_move_to;
    method_track_swap;
    method_track_set_imported;
    method_track_is_imported;
    method_track_set_enabled;
    method_track_is_enabled;
    method_position_track_insert_key;
    method_rotation_track_insert_key;
    method_scale_track_insert_key;
    method_blend_shape_track_insert_key;
    method_position_track_interpolate;
    method_rotation_track_interpolate;
    method_scale_track_interpolate;
    method_blend_shape_track_interpolate;
    method_track_insert_key;
    method_track_remove_key;
    method_track_remove_key_at_time;
    method_track_set_key_value;
    method_track_set_key_transition;
    method_track_set_key_time;
    method_track_get_key_transition;
    method_track_get_key_count;
    method_track_get_key_value;
    method_track_get_key_time;
    method_track_find_key;
    method_track_set_interpolation_type;
    method_track_get_interpolation_type;
    method_track_set_interpolation_loop_wrap;
    method_track_get_interpolation_loop_wrap;
    method_track_is_compressed;
    method_value_track_set_update_mode;
    method_value_track_get_update_mode;
    method_value_track_interpolate;
    method_method_track_get_name;
    method_method_track_get_params;
    method_bezier_track_insert_key;
    method_bezier_track_set_key_value;
    method_bezier_track_set_key_in_handle;
    method_bezier_track_set_key_out_handle;
    method_bezier_track_get_key_value;
    method_bezier_track_get_key_in_handle;
    method_bezier_track_get_key_out_handle;
    method_bezier_track_interpolate;
    method_audio_track_insert_key;
    method_audio_track_set_key_stream;
    method_audio_track_set_key_start_offset;
    method_audio_track_set_key_end_offset;
    method_audio_track_get_key_stream;
    method_audio_track_get_key_start_offset;
    method_audio_track_get_key_end_offset;
    method_audio_track_set_use_blend;
    method_audio_track_is_use_blend;
    method_animation_track_insert_key;
    method_animation_track_set_key_animation;
    method_animation_track_get_key_animation;
    method_set_length;
    method_get_length;
    method_set_loop_mode;
    method_get_loop_mode;
    method_set_step;
    method_get_step;
    method_clear;
    method_copy_track;
    method_compress;
    method_is_capture_included;
}


export class Animation extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Animation");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("add_track");
        this._bindings.method_add_track = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3843682357
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("remove_track");
        this._bindings.method_remove_track = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("get_track_count");
        this._bindings.method_get_track_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_get_type");
        this._bindings.method_track_get_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3445944217
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_get_path");
        this._bindings.method_track_get_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          408788394
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_set_path");
        this._bindings.method_track_set_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2761262315
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("find_track");
        this._bindings.method_find_track = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          245376003
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_move_up");
        this._bindings.method_track_move_up = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_move_down");
        this._bindings.method_track_move_down = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_move_to");
        this._bindings.method_track_move_to = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937882851
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_swap");
        this._bindings.method_track_swap = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937882851
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_set_imported");
        this._bindings.method_track_set_imported = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_is_imported");
        this._bindings.method_track_is_imported = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_set_enabled");
        this._bindings.method_track_set_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_is_enabled");
        this._bindings.method_track_is_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("position_track_insert_key");
        this._bindings.method_position_track_insert_key = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2540608232
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("rotation_track_insert_key");
        this._bindings.method_rotation_track_insert_key = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4165004800
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("scale_track_insert_key");
        this._bindings.method_scale_track_insert_key = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2540608232
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("blend_shape_track_insert_key");
        this._bindings.method_blend_shape_track_insert_key = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1534913637
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("position_track_interpolate");
        this._bindings.method_position_track_interpolate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3530011197
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("rotation_track_interpolate");
        this._bindings.method_rotation_track_interpolate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2915876792
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("scale_track_interpolate");
        this._bindings.method_scale_track_interpolate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3530011197
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("blend_shape_track_interpolate");
        this._bindings.method_blend_shape_track_interpolate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2482365182
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_insert_key");
        this._bindings.method_track_insert_key = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          808952278
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_remove_key");
        this._bindings.method_track_remove_key = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937882851
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_remove_key_at_time");
        this._bindings.method_track_remove_key_at_time = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1602489585
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_set_key_value");
        this._bindings.method_track_set_key_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2060538656
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_set_key_transition");
        this._bindings.method_track_set_key_transition = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3506521499
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_set_key_time");
        this._bindings.method_track_set_key_time = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3506521499
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_get_key_transition");
        this._bindings.method_track_get_key_transition = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3085491603
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_get_key_count");
        this._bindings.method_track_get_key_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          923996154
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_get_key_value");
        this._bindings.method_track_get_key_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          678354945
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_get_key_time");
        this._bindings.method_track_get_key_time = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3085491603
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_find_key");
        this._bindings.method_track_find_key = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4230953007
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_set_interpolation_type");
        this._bindings.method_track_set_interpolation_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4112932513
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_get_interpolation_type");
        this._bindings.method_track_get_interpolation_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1530756894
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_set_interpolation_loop_wrap");
        this._bindings.method_track_set_interpolation_loop_wrap = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_get_interpolation_loop_wrap");
        this._bindings.method_track_get_interpolation_loop_wrap = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("track_is_compressed");
        this._bindings.method_track_is_compressed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("value_track_set_update_mode");
        this._bindings.method_value_track_set_update_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2854058312
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("value_track_get_update_mode");
        this._bindings.method_value_track_get_update_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1440326473
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("value_track_interpolate");
        this._bindings.method_value_track_interpolate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          747269075
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("method_track_get_name");
        this._bindings.method_method_track_get_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          351665558
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("method_track_get_params");
        this._bindings.method_method_track_get_params = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2345056839
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("bezier_track_insert_key");
        this._bindings.method_bezier_track_insert_key = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3656773645
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("bezier_track_set_key_value");
        this._bindings.method_bezier_track_set_key_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3506521499
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("bezier_track_set_key_in_handle");
        this._bindings.method_bezier_track_set_key_in_handle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1719223284
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("bezier_track_set_key_out_handle");
        this._bindings.method_bezier_track_set_key_out_handle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1719223284
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("bezier_track_get_key_value");
        this._bindings.method_bezier_track_get_key_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3085491603
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("bezier_track_get_key_in_handle");
        this._bindings.method_bezier_track_get_key_in_handle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3016396712
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("bezier_track_get_key_out_handle");
        this._bindings.method_bezier_track_get_key_out_handle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3016396712
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("bezier_track_interpolate");
        this._bindings.method_bezier_track_interpolate = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1900462983
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("audio_track_insert_key");
        this._bindings.method_audio_track_insert_key = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4021027286
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("audio_track_set_key_stream");
        this._bindings.method_audio_track_set_key_stream = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3886397084
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("audio_track_set_key_start_offset");
        this._bindings.method_audio_track_set_key_start_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3506521499
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("audio_track_set_key_end_offset");
        this._bindings.method_audio_track_set_key_end_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3506521499
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("audio_track_get_key_stream");
        this._bindings.method_audio_track_get_key_stream = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          635277205
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("audio_track_get_key_start_offset");
        this._bindings.method_audio_track_get_key_start_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3085491603
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("audio_track_get_key_end_offset");
        this._bindings.method_audio_track_get_key_end_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3085491603
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("audio_track_set_use_blend");
        this._bindings.method_audio_track_set_use_blend = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("audio_track_is_use_blend");
        this._bindings.method_audio_track_is_use_blend = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("animation_track_insert_key");
        this._bindings.method_animation_track_insert_key = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          158676774
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("animation_track_set_key_animation");
        this._bindings.method_animation_track_set_key_animation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          117615382
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("animation_track_get_key_animation");
        this._bindings.method_animation_track_get_key_animation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          351665558
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("set_length");
        this._bindings.method_set_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("get_length");
        this._bindings.method_get_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("set_loop_mode");
        this._bindings.method_set_loop_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3155355575
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("get_loop_mode");
        this._bindings.method_get_loop_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1988889481
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("set_step");
        this._bindings.method_set_step = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("get_step");
        this._bindings.method_get_step = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("clear");
        this._bindings.method_clear = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("copy_track");
        this._bindings.method_copy_track = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          148001024
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("compress");
        this._bindings.method_compress = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3608408117
        );
      }
      {
        let classname = new StringName("Animation");
        let methodname = new StringName("is_capture_included");
        this._bindings.method_is_capture_included = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  add_track(_type, _at_position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_add_track,
      this._owner,
			Variant.Type.INT,
      _type, _at_position
    );
    
  }
  remove_track(_track_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_track,
      this._owner,
      _track_idx
    );
    
  }
  get_track_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_track_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  track_get_type(_track_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_track_get_type,
      this._owner,
			Variant.INT,
      _track_idx
    );
    
  }
  track_get_path(_track_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_track_get_path,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      _track_idx
    );
    
  }
  track_set_path(_track_idx, _path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_track_set_path,
      this._owner,
      _track_idx, _path
    );
    
  }
  find_track(_path, _type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_find_track,
      this._owner,
			Variant.Type.INT,
      _path, _type
    );
    
  }
  track_move_up(_track_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_track_move_up,
      this._owner,
      _track_idx
    );
    
  }
  track_move_down(_track_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_track_move_down,
      this._owner,
      _track_idx
    );
    
  }
  track_move_to(_track_idx, _to_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_track_move_to,
      this._owner,
      _track_idx, _to_idx
    );
    
  }
  track_swap(_track_idx, _with_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_track_swap,
      this._owner,
      _track_idx, _with_idx
    );
    
  }
  track_set_imported(_track_idx, _imported) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_track_set_imported,
      this._owner,
      _track_idx, _imported
    );
    
  }
  track_is_imported(_track_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_track_is_imported,
      this._owner,
			Variant.Type.BOOL,
      _track_idx
    );
    
  }
  track_set_enabled(_track_idx, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_track_set_enabled,
      this._owner,
      _track_idx, _enabled
    );
    
  }
  track_is_enabled(_track_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_track_is_enabled,
      this._owner,
			Variant.Type.BOOL,
      _track_idx
    );
    
  }
  position_track_insert_key(_track_idx, _time, _position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_position_track_insert_key,
      this._owner,
			Variant.Type.INT,
      _track_idx, _time, _position
    );
    
  }
  rotation_track_insert_key(_track_idx, _time, _rotation) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_rotation_track_insert_key,
      this._owner,
			Variant.Type.INT,
      _track_idx, _time, _rotation
    );
    
  }
  scale_track_insert_key(_track_idx, _time, _scale) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_scale_track_insert_key,
      this._owner,
			Variant.Type.INT,
      _track_idx, _time, _scale
    );
    
  }
  blend_shape_track_insert_key(_track_idx, _time, _amount) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_blend_shape_track_insert_key,
      this._owner,
			Variant.Type.INT,
      _track_idx, _time, _amount
    );
    
  }
  position_track_interpolate(_track_idx, _time_sec, _backward) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_position_track_interpolate,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _track_idx, _time_sec, _backward
    );
    
  }
  rotation_track_interpolate(_track_idx, _time_sec, _backward) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_rotation_track_interpolate,
      this._owner,
			Variant.Type.QUATERNION
    ,
      _track_idx, _time_sec, _backward
    );
    
  }
  scale_track_interpolate(_track_idx, _time_sec, _backward) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_scale_track_interpolate,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _track_idx, _time_sec, _backward
    );
    
  }
  blend_shape_track_interpolate(_track_idx, _time_sec, _backward) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_blend_shape_track_interpolate,
      this._owner,
			Variant.Type.FLOAT,
      _track_idx, _time_sec, _backward
    );
    
  }
  track_insert_key(_track_idx, _time, _key, _transition) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_track_insert_key,
      this._owner,
			Variant.Type.INT,
      _track_idx, _time, _key, _transition
    );
    
  }
  track_remove_key(_track_idx, _key_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_track_remove_key,
      this._owner,
      _track_idx, _key_idx
    );
    
  }
  track_remove_key_at_time(_track_idx, _time) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_track_remove_key_at_time,
      this._owner,
      _track_idx, _time
    );
    
  }
  track_set_key_value(_track_idx, _key, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_track_set_key_value,
      this._owner,
      _track_idx, _key, _value
    );
    
  }
  track_set_key_transition(_track_idx, _key_idx, _transition) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_track_set_key_transition,
      this._owner,
      _track_idx, _key_idx, _transition
    );
    
  }
  track_set_key_time(_track_idx, _key_idx, _time) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_track_set_key_time,
      this._owner,
      _track_idx, _key_idx, _time
    );
    
  }
  track_get_key_transition(_track_idx, _key_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_track_get_key_transition,
      this._owner,
			Variant.Type.FLOAT,
      _track_idx, _key_idx
    );
    
  }
  track_get_key_count(_track_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_track_get_key_count,
      this._owner,
			Variant.Type.INT,
      _track_idx
    );
    
  }
  track_get_key_value(_track_idx, _key_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_track_get_key_value,
      this._owner,
			Variant.Type.VARIANT
    ,
      _track_idx, _key_idx
    );
    
  }
  track_get_key_time(_track_idx, _key_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_track_get_key_time,
      this._owner,
			Variant.Type.FLOAT,
      _track_idx, _key_idx
    );
    
  }
  track_find_key(_track_idx, _time, _find_mode, _limit, _backward) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_track_find_key,
      this._owner,
			Variant.Type.INT,
      _track_idx, _time, _find_mode, _limit, _backward
    );
    
  }
  track_set_interpolation_type(_track_idx, _interpolation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_track_set_interpolation_type,
      this._owner,
      _track_idx, _interpolation
    );
    
  }
  track_get_interpolation_type(_track_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_track_get_interpolation_type,
      this._owner,
			Variant.INT,
      _track_idx
    );
    
  }
  track_set_interpolation_loop_wrap(_track_idx, _interpolation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_track_set_interpolation_loop_wrap,
      this._owner,
      _track_idx, _interpolation
    );
    
  }
  track_get_interpolation_loop_wrap(_track_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_track_get_interpolation_loop_wrap,
      this._owner,
			Variant.Type.BOOL,
      _track_idx
    );
    
  }
  track_is_compressed(_track_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_track_is_compressed,
      this._owner,
			Variant.Type.BOOL,
      _track_idx
    );
    
  }
  value_track_set_update_mode(_track_idx, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_value_track_set_update_mode,
      this._owner,
      _track_idx, _mode
    );
    
  }
  value_track_get_update_mode(_track_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_value_track_get_update_mode,
      this._owner,
			Variant.INT,
      _track_idx
    );
    
  }
  value_track_interpolate(_track_idx, _time_sec, _backward) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_value_track_interpolate,
      this._owner,
			Variant.Type.VARIANT
    ,
      _track_idx, _time_sec, _backward
    );
    
  }
  method_track_get_name(_track_idx, _key_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_method_track_get_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _track_idx, _key_idx
    );
    
  }
  method_track_get_params(_track_idx, _key_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_method_track_get_params,
      this._owner,
			Variant.Type.ARRAY
    ,
      _track_idx, _key_idx
    );
    
  }
  bezier_track_insert_key(_track_idx, _time, _value, _in_handle, _out_handle) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_bezier_track_insert_key,
      this._owner,
			Variant.Type.INT,
      _track_idx, _time, _value, _in_handle, _out_handle
    );
    
  }
  bezier_track_set_key_value(_track_idx, _key_idx, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_bezier_track_set_key_value,
      this._owner,
      _track_idx, _key_idx, _value
    );
    
  }
  bezier_track_set_key_in_handle(_track_idx, _key_idx, _in_handle, _balanced_value_time_ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_bezier_track_set_key_in_handle,
      this._owner,
      _track_idx, _key_idx, _in_handle, _balanced_value_time_ratio
    );
    
  }
  bezier_track_set_key_out_handle(_track_idx, _key_idx, _out_handle, _balanced_value_time_ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_bezier_track_set_key_out_handle,
      this._owner,
      _track_idx, _key_idx, _out_handle, _balanced_value_time_ratio
    );
    
  }
  bezier_track_get_key_value(_track_idx, _key_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_bezier_track_get_key_value,
      this._owner,
			Variant.Type.FLOAT,
      _track_idx, _key_idx
    );
    
  }
  bezier_track_get_key_in_handle(_track_idx, _key_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_bezier_track_get_key_in_handle,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _track_idx, _key_idx
    );
    
  }
  bezier_track_get_key_out_handle(_track_idx, _key_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_bezier_track_get_key_out_handle,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _track_idx, _key_idx
    );
    
  }
  bezier_track_interpolate(_track_idx, _time) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_bezier_track_interpolate,
      this._owner,
			Variant.Type.FLOAT,
      _track_idx, _time
    );
    
  }
  audio_track_insert_key(_track_idx, _time, _stream, _start_offset, _end_offset) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_audio_track_insert_key,
      this._owner,
			Variant.Type.INT,
      _track_idx, _time, _stream, _start_offset, _end_offset
    );
    
  }
  audio_track_set_key_stream(_track_idx, _key_idx, _stream) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_audio_track_set_key_stream,
      this._owner,
      _track_idx, _key_idx, _stream
    );
    
  }
  audio_track_set_key_start_offset(_track_idx, _key_idx, _offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_audio_track_set_key_start_offset,
      this._owner,
      _track_idx, _key_idx, _offset
    );
    
  }
  audio_track_set_key_end_offset(_track_idx, _key_idx, _offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_audio_track_set_key_end_offset,
      this._owner,
      _track_idx, _key_idx, _offset
    );
    
  }
  audio_track_get_key_stream(_track_idx, _key_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_audio_track_get_key_stream,
      this._owner,
			Variant.INT,
      _track_idx, _key_idx
    );
    
  }
  audio_track_get_key_start_offset(_track_idx, _key_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_audio_track_get_key_start_offset,
      this._owner,
			Variant.Type.FLOAT,
      _track_idx, _key_idx
    );
    
  }
  audio_track_get_key_end_offset(_track_idx, _key_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_audio_track_get_key_end_offset,
      this._owner,
			Variant.Type.FLOAT,
      _track_idx, _key_idx
    );
    
  }
  audio_track_set_use_blend(_track_idx, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_audio_track_set_use_blend,
      this._owner,
      _track_idx, _enable
    );
    
  }
  audio_track_is_use_blend(_track_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_audio_track_is_use_blend,
      this._owner,
			Variant.Type.BOOL,
      _track_idx
    );
    
  }
  animation_track_insert_key(_track_idx, _time, _animation) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_animation_track_insert_key,
      this._owner,
			Variant.Type.INT,
      _track_idx, _time, _animation
    );
    
  }
  animation_track_set_key_animation(_track_idx, _key_idx, _animation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_animation_track_set_key_animation,
      this._owner,
      _track_idx, _key_idx, _animation
    );
    
  }
  animation_track_get_key_animation(_track_idx, _key_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_animation_track_get_key_animation,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _track_idx, _key_idx
    );
    
  }
  set_length(_time_sec) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_length,
      this._owner,
      _time_sec
    );
    
  }
  get_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_length,
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
  set_step(_size_sec) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_step,
      this._owner,
      _size_sec
    );
    
  }
  get_step() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_step,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
    
  }
  copy_track(_track_idx, _to_animation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_copy_track,
      this._owner,
      _track_idx, _to_animation
    );
    
  }
  compress(_page_size, _fps, _split_tolerance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_compress,
      this._owner,
      _page_size, _fps, _split_tolerance
    );
    
  }
  is_capture_included() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_capture_included,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  static TrackType = {
    TYPE_VALUE: 0,
    TYPE_POSITION_3D: 1,
    TYPE_ROTATION_3D: 2,
    TYPE_SCALE_3D: 3,
    TYPE_BLEND_SHAPE: 4,
    TYPE_METHOD: 5,
    TYPE_BEZIER: 6,
    TYPE_AUDIO: 7,
    TYPE_ANIMATION: 8,
  }
  static InterpolationType = {
    INTERPOLATION_NEAREST: 0,
    INTERPOLATION_LINEAR: 1,
    INTERPOLATION_CUBIC: 2,
    INTERPOLATION_LINEAR_ANGLE: 3,
    INTERPOLATION_CUBIC_ANGLE: 4,
  }
  static UpdateMode = {
    UPDATE_CONTINUOUS: 0,
    UPDATE_DISCRETE: 1,
    UPDATE_CAPTURE: 2,
  }
  static LoopMode = {
    LOOP_NONE: 0,
    LOOP_LINEAR: 1,
    LOOP_PINGPONG: 2,
  }
  static LoopedFlag = {
    LOOPED_FLAG_NONE: 0,
    LOOPED_FLAG_END: 1,
    LOOPED_FLAG_START: 2,
  }
  static FindMode = {
    FIND_MODE_NEAREST: 0,
    FIND_MODE_APPROX: 1,
    FIND_MODE_EXACT: 2,
  }
}