import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_datetime_dict_from_unix_time;
  method_get_date_dict_from_unix_time;
  method_get_time_dict_from_unix_time;
  method_get_datetime_string_from_unix_time;
  method_get_date_string_from_unix_time;
  method_get_time_string_from_unix_time;
  method_get_datetime_dict_from_datetime_string;
  method_get_datetime_string_from_datetime_dict;
  method_get_unix_time_from_datetime_dict;
  method_get_unix_time_from_datetime_string;
  method_get_offset_string_from_offset_minutes;
  method_get_datetime_dict_from_system;
  method_get_date_dict_from_system;
  method_get_time_dict_from_system;
  method_get_datetime_string_from_system;
  method_get_date_string_from_system;
  method_get_time_string_from_system;
  method_get_time_zone_from_system;
  method_get_unix_time_from_system;
  method_get_ticks_msec;
  method_get_ticks_usec;
}class _Time extends GodotObject{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Time");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_datetime_dict_from_unix_time() {
    if (!this.#_bindings.method_get_datetime_dict_from_unix_time) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_datetime_dict_from_unix_time");
      this.#_bindings.method_get_datetime_dict_from_unix_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3485342025
      );
    }
  }
  static init_method_get_date_dict_from_unix_time() {
    if (!this.#_bindings.method_get_date_dict_from_unix_time) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_date_dict_from_unix_time");
      this.#_bindings.method_get_date_dict_from_unix_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3485342025
      );
    }
  }
  static init_method_get_time_dict_from_unix_time() {
    if (!this.#_bindings.method_get_time_dict_from_unix_time) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_time_dict_from_unix_time");
      this.#_bindings.method_get_time_dict_from_unix_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3485342025
      );
    }
  }
  static init_method_get_datetime_string_from_unix_time() {
    if (!this.#_bindings.method_get_datetime_string_from_unix_time) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_datetime_string_from_unix_time");
      this.#_bindings.method_get_datetime_string_from_unix_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2311239925
      );
    }
  }
  static init_method_get_date_string_from_unix_time() {
    if (!this.#_bindings.method_get_date_string_from_unix_time) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_date_string_from_unix_time");
      this.#_bindings.method_get_date_string_from_unix_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_time_string_from_unix_time() {
    if (!this.#_bindings.method_get_time_string_from_unix_time) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_time_string_from_unix_time");
      this.#_bindings.method_get_time_string_from_unix_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_datetime_dict_from_datetime_string() {
    if (!this.#_bindings.method_get_datetime_dict_from_datetime_string) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_datetime_dict_from_datetime_string");
      this.#_bindings.method_get_datetime_dict_from_datetime_string = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3253569256
      );
    }
  }
  static init_method_get_datetime_string_from_datetime_dict() {
    if (!this.#_bindings.method_get_datetime_string_from_datetime_dict) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_datetime_string_from_datetime_dict");
      this.#_bindings.method_get_datetime_string_from_datetime_dict = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1898123706
      );
    }
  }
  static init_method_get_unix_time_from_datetime_dict() {
    if (!this.#_bindings.method_get_unix_time_from_datetime_dict) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_unix_time_from_datetime_dict");
      this.#_bindings.method_get_unix_time_from_datetime_dict = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3021115443
      );
    }
  }
  static init_method_get_unix_time_from_datetime_string() {
    if (!this.#_bindings.method_get_unix_time_from_datetime_string) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_unix_time_from_datetime_string");
      this.#_bindings.method_get_unix_time_from_datetime_string = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1321353865
      );
    }
  }
  static init_method_get_offset_string_from_offset_minutes() {
    if (!this.#_bindings.method_get_offset_string_from_offset_minutes) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_offset_string_from_offset_minutes");
      this.#_bindings.method_get_offset_string_from_offset_minutes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_datetime_dict_from_system() {
    if (!this.#_bindings.method_get_datetime_dict_from_system) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_datetime_dict_from_system");
      this.#_bindings.method_get_datetime_dict_from_system = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        205769976
      );
    }
  }
  static init_method_get_date_dict_from_system() {
    if (!this.#_bindings.method_get_date_dict_from_system) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_date_dict_from_system");
      this.#_bindings.method_get_date_dict_from_system = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        205769976
      );
    }
  }
  static init_method_get_time_dict_from_system() {
    if (!this.#_bindings.method_get_time_dict_from_system) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_time_dict_from_system");
      this.#_bindings.method_get_time_dict_from_system = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        205769976
      );
    }
  }
  static init_method_get_datetime_string_from_system() {
    if (!this.#_bindings.method_get_datetime_string_from_system) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_datetime_string_from_system");
      this.#_bindings.method_get_datetime_string_from_system = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1136425492
      );
    }
  }
  static init_method_get_date_string_from_system() {
    if (!this.#_bindings.method_get_date_string_from_system) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_date_string_from_system");
      this.#_bindings.method_get_date_string_from_system = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1162154673
      );
    }
  }
  static init_method_get_time_string_from_system() {
    if (!this.#_bindings.method_get_time_string_from_system) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_time_string_from_system");
      this.#_bindings.method_get_time_string_from_system = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1162154673
      );
    }
  }
  static init_method_get_time_zone_from_system() {
    if (!this.#_bindings.method_get_time_zone_from_system) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_time_zone_from_system");
      this.#_bindings.method_get_time_zone_from_system = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3102165223
      );
    }
  }
  static init_method_get_unix_time_from_system() {
    if (!this.#_bindings.method_get_unix_time_from_system) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_unix_time_from_system");
      this.#_bindings.method_get_unix_time_from_system = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_ticks_msec() {
    if (!this.#_bindings.method_get_ticks_msec) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_ticks_msec");
      this.#_bindings.method_get_ticks_msec = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_ticks_usec() {
    if (!this.#_bindings.method_get_ticks_usec) {
      let classname = new StringName("Time");
      let methodname = new StringName("get_ticks_usec");
      this.#_bindings.method_get_ticks_usec = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  get_datetime_dict_from_unix_time(_unix_time_val) {
    Time.init_method_get_datetime_dict_from_unix_time();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_datetime_dict_from_unix_time,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _unix_time_val
    );
    
  }
  get_date_dict_from_unix_time(_unix_time_val) {
    Time.init_method_get_date_dict_from_unix_time();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_date_dict_from_unix_time,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _unix_time_val
    );
    
  }
  get_time_dict_from_unix_time(_unix_time_val) {
    Time.init_method_get_time_dict_from_unix_time();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_time_dict_from_unix_time,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _unix_time_val
    );
    
  }
  get_datetime_string_from_unix_time(_unix_time_val, _use_space) {
    Time.init_method_get_datetime_string_from_unix_time();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_datetime_string_from_unix_time,
      this._owner,
			Variant.Type.STRING,
    
      _unix_time_val, _use_space
    );
    
  }
  get_date_string_from_unix_time(_unix_time_val) {
    Time.init_method_get_date_string_from_unix_time();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_date_string_from_unix_time,
      this._owner,
			Variant.Type.STRING,
    
      _unix_time_val
    );
    
  }
  get_time_string_from_unix_time(_unix_time_val) {
    Time.init_method_get_time_string_from_unix_time();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_time_string_from_unix_time,
      this._owner,
			Variant.Type.STRING,
    
      _unix_time_val
    );
    
  }
  get_datetime_dict_from_datetime_string(_datetime, _weekday) {
    Time.init_method_get_datetime_dict_from_datetime_string();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_datetime_dict_from_datetime_string,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _datetime, _weekday
    );
    
  }
  get_datetime_string_from_datetime_dict(_datetime, _use_space) {
    Time.init_method_get_datetime_string_from_datetime_dict();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_datetime_string_from_datetime_dict,
      this._owner,
			Variant.Type.STRING,
    
      _datetime, _use_space
    );
    
  }
  get_unix_time_from_datetime_dict(_datetime) {
    Time.init_method_get_unix_time_from_datetime_dict();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_unix_time_from_datetime_dict,
      this._owner,
			Variant.Type.INT,
    
      _datetime
    );
    
  }
  get_unix_time_from_datetime_string(_datetime) {
    Time.init_method_get_unix_time_from_datetime_string();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_unix_time_from_datetime_string,
      this._owner,
			Variant.Type.INT,
    
      _datetime
    );
    
  }
  get_offset_string_from_offset_minutes(_offset_minutes) {
    Time.init_method_get_offset_string_from_offset_minutes();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_offset_string_from_offset_minutes,
      this._owner,
			Variant.Type.STRING,
    
      _offset_minutes
    );
    
  }
  get_datetime_dict_from_system(_utc) {
    Time.init_method_get_datetime_dict_from_system();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_datetime_dict_from_system,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _utc
    );
    
  }
  get_date_dict_from_system(_utc) {
    Time.init_method_get_date_dict_from_system();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_date_dict_from_system,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _utc
    );
    
  }
  get_time_dict_from_system(_utc) {
    Time.init_method_get_time_dict_from_system();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_time_dict_from_system,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _utc
    );
    
  }
  get_datetime_string_from_system(_utc, _use_space) {
    Time.init_method_get_datetime_string_from_system();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_datetime_string_from_system,
      this._owner,
			Variant.Type.STRING,
    
      _utc, _use_space
    );
    
  }
  get_date_string_from_system(_utc) {
    Time.init_method_get_date_string_from_system();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_date_string_from_system,
      this._owner,
			Variant.Type.STRING,
    
      _utc
    );
    
  }
  get_time_string_from_system(_utc) {
    Time.init_method_get_time_string_from_system();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_time_string_from_system,
      this._owner,
			Variant.Type.STRING,
    
      _utc
    );
    
  }
  get_time_zone_from_system() {
    Time.init_method_get_time_zone_from_system();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_time_zone_from_system,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  get_unix_time_from_system() {
    Time.init_method_get_unix_time_from_system();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_unix_time_from_system,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_ticks_msec() {
    Time.init_method_get_ticks_msec();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_ticks_msec,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_ticks_usec() {
    Time.init_method_get_ticks_usec();
    return _call_native_mb_ret(
      _Time.#_bindings.method_get_ticks_usec,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  

  static Month = {
    MONTH_JANUARY: 1,
    MONTH_FEBRUARY: 2,
    MONTH_MARCH: 3,
    MONTH_APRIL: 4,
    MONTH_MAY: 5,
    MONTH_JUNE: 6,
    MONTH_JULY: 7,
    MONTH_AUGUST: 8,
    MONTH_SEPTEMBER: 9,
    MONTH_OCTOBER: 10,
    MONTH_NOVEMBER: 11,
    MONTH_DECEMBER: 12,
  }
  static Weekday = {
    WEEKDAY_SUNDAY: 0,
    WEEKDAY_MONDAY: 1,
    WEEKDAY_TUESDAY: 2,
    WEEKDAY_WEDNESDAY: 3,
    WEEKDAY_THURSDAY: 4,
    WEEKDAY_FRIDAY: 5,
    WEEKDAY_SATURDAY: 6,
  }
}
export const Time = (function () {
  let _instance;
  function create_instance() {
    return new _Time();
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