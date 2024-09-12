import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_packet_data;
  method_get_packet_data;
  method_set_packet_granule_positions;
  method_get_packet_granule_positions;
  method_set_sampling_rate;
  method_get_sampling_rate;
  method_get_length;
}
export class OggPacketSequence extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("OggPacketSequence");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_packet_data() {
    if (!this.#_bindings.method_set_packet_data) {
      let classname = new StringName("OggPacketSequence");
      let methodname = new StringName("set_packet_data");
      this.#_bindings.method_set_packet_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_packet_data() {
    if (!this.#_bindings.method_get_packet_data) {
      let classname = new StringName("OggPacketSequence");
      let methodname = new StringName("get_packet_data");
      this.#_bindings.method_get_packet_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_packet_granule_positions() {
    if (!this.#_bindings.method_set_packet_granule_positions) {
      let classname = new StringName("OggPacketSequence");
      let methodname = new StringName("set_packet_granule_positions");
      this.#_bindings.method_set_packet_granule_positions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3709968205
      );
    }
  }
  static init_method_get_packet_granule_positions() {
    if (!this.#_bindings.method_get_packet_granule_positions) {
      let classname = new StringName("OggPacketSequence");
      let methodname = new StringName("get_packet_granule_positions");
      this.#_bindings.method_get_packet_granule_positions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        235988956
      );
    }
  }
  static init_method_set_sampling_rate() {
    if (!this.#_bindings.method_set_sampling_rate) {
      let classname = new StringName("OggPacketSequence");
      let methodname = new StringName("set_sampling_rate");
      this.#_bindings.method_set_sampling_rate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_sampling_rate() {
    if (!this.#_bindings.method_get_sampling_rate) {
      let classname = new StringName("OggPacketSequence");
      let methodname = new StringName("get_sampling_rate");
      this.#_bindings.method_get_sampling_rate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_length() {
    if (!this.#_bindings.method_get_length) {
      let classname = new StringName("OggPacketSequence");
      let methodname = new StringName("get_length");
      this.#_bindings.method_get_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_packet_data(_packet_data) {
    OggPacketSequence.init_method_set_packet_data();
    return _call_native_mb_no_ret(
      OggPacketSequence.#_bindings.method_set_packet_data,
      this._owner,
      _packet_data
    );
    
  }
  get_packet_data() {
    OggPacketSequence.init_method_get_packet_data();
    return _call_native_mb_ret(
      OggPacketSequence.#_bindings.method_get_packet_data,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_packet_granule_positions(_granule_positions) {
    OggPacketSequence.init_method_set_packet_granule_positions();
    return _call_native_mb_no_ret(
      OggPacketSequence.#_bindings.method_set_packet_granule_positions,
      this._owner,
      _granule_positions
    );
    
  }
  get_packet_granule_positions() {
    OggPacketSequence.init_method_get_packet_granule_positions();
    return _call_native_mb_ret(
      OggPacketSequence.#_bindings.method_get_packet_granule_positions,
      this._owner,
			Variant.Type.PACKED_INT64_ARRAY,
    
      
    );
    
  }
  set_sampling_rate(_sampling_rate) {
    OggPacketSequence.init_method_set_sampling_rate();
    return _call_native_mb_no_ret(
      OggPacketSequence.#_bindings.method_set_sampling_rate,
      this._owner,
      _sampling_rate
    );
    
  }
  get_sampling_rate() {
    OggPacketSequence.init_method_get_sampling_rate();
    return _call_native_mb_ret(
      OggPacketSequence.#_bindings.method_get_sampling_rate,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_length() {
    OggPacketSequence.init_method_get_length();
    return _call_native_mb_ret(
      OggPacketSequence.#_bindings.method_get_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get packet_data () {
  return this.get_packet_data();
}
set packet_data (new_value) {
  this.set_packet_data(new_value);
}
get granule_positions () {
  return this.get_packet_granule_positions();
}
set granule_positions (new_value) {
  this.set_packet_granule_positions(new_value);
}
get sampling_rate () {
  return this.get_sampling_rate();
}
set sampling_rate (new_value) {
  this.set_sampling_rate(new_value);
}

}