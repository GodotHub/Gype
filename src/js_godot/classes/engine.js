import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_physics_ticks_per_second;
  method_get_physics_ticks_per_second;
  method_set_max_physics_steps_per_frame;
  method_get_max_physics_steps_per_frame;
  method_set_physics_jitter_fix;
  method_get_physics_jitter_fix;
  method_get_physics_interpolation_fraction;
  method_set_max_fps;
  method_get_max_fps;
  method_set_time_scale;
  method_get_time_scale;
  method_get_frames_drawn;
  method_get_frames_per_second;
  method_get_physics_frames;
  method_get_process_frames;
  method_get_main_loop;
  method_get_version_info;
  method_get_author_info;
  method_get_copyright_info;
  method_get_donor_info;
  method_get_license_info;
  method_get_license_text;
  method_get_architecture_name;
  method_is_in_physics_frame;
  method_has_singleton;
  method_get_singleton;
  method_register_singleton;
  method_unregister_singleton;
  method_get_singleton_list;
  method_register_script_language;
  method_unregister_script_language;
  method_get_script_language_count;
  method_get_script_language;
  method_is_editor_hint;
  method_get_write_movie_path;
  method_set_print_error_messages;
  method_is_printing_error_messages;
}class _Engine extends GodotObject{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Engine");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_physics_ticks_per_second() {
    if (!this.#_bindings.method_set_physics_ticks_per_second) {
      let classname = new StringName("Engine");
      let methodname = new StringName("set_physics_ticks_per_second");
      this.#_bindings.method_set_physics_ticks_per_second = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_physics_ticks_per_second() {
    if (!this.#_bindings.method_get_physics_ticks_per_second) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_physics_ticks_per_second");
      this.#_bindings.method_get_physics_ticks_per_second = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_max_physics_steps_per_frame() {
    if (!this.#_bindings.method_set_max_physics_steps_per_frame) {
      let classname = new StringName("Engine");
      let methodname = new StringName("set_max_physics_steps_per_frame");
      this.#_bindings.method_set_max_physics_steps_per_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_max_physics_steps_per_frame() {
    if (!this.#_bindings.method_get_max_physics_steps_per_frame) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_max_physics_steps_per_frame");
      this.#_bindings.method_get_max_physics_steps_per_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_physics_jitter_fix() {
    if (!this.#_bindings.method_set_physics_jitter_fix) {
      let classname = new StringName("Engine");
      let methodname = new StringName("set_physics_jitter_fix");
      this.#_bindings.method_set_physics_jitter_fix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_physics_jitter_fix() {
    if (!this.#_bindings.method_get_physics_jitter_fix) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_physics_jitter_fix");
      this.#_bindings.method_get_physics_jitter_fix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_physics_interpolation_fraction() {
    if (!this.#_bindings.method_get_physics_interpolation_fraction) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_physics_interpolation_fraction");
      this.#_bindings.method_get_physics_interpolation_fraction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_max_fps() {
    if (!this.#_bindings.method_set_max_fps) {
      let classname = new StringName("Engine");
      let methodname = new StringName("set_max_fps");
      this.#_bindings.method_set_max_fps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_max_fps() {
    if (!this.#_bindings.method_get_max_fps) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_max_fps");
      this.#_bindings.method_get_max_fps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_time_scale() {
    if (!this.#_bindings.method_set_time_scale) {
      let classname = new StringName("Engine");
      let methodname = new StringName("set_time_scale");
      this.#_bindings.method_set_time_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_time_scale() {
    if (!this.#_bindings.method_get_time_scale) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_time_scale");
      this.#_bindings.method_get_time_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_get_frames_drawn() {
    if (!this.#_bindings.method_get_frames_drawn) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_frames_drawn");
      this.#_bindings.method_get_frames_drawn = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_get_frames_per_second() {
    if (!this.#_bindings.method_get_frames_per_second) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_frames_per_second");
      this.#_bindings.method_get_frames_per_second = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_physics_frames() {
    if (!this.#_bindings.method_get_physics_frames) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_physics_frames");
      this.#_bindings.method_get_physics_frames = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_process_frames() {
    if (!this.#_bindings.method_get_process_frames) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_process_frames");
      this.#_bindings.method_get_process_frames = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_main_loop() {
    if (!this.#_bindings.method_get_main_loop) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_main_loop");
      this.#_bindings.method_get_main_loop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1016888095
      );
    }
  }
  static init_method_get_version_info() {
    if (!this.#_bindings.method_get_version_info) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_version_info");
      this.#_bindings.method_get_version_info = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3102165223
      );
    }
  }
  static init_method_get_author_info() {
    if (!this.#_bindings.method_get_author_info) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_author_info");
      this.#_bindings.method_get_author_info = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3102165223
      );
    }
  }
  static init_method_get_copyright_info() {
    if (!this.#_bindings.method_get_copyright_info) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_copyright_info");
      this.#_bindings.method_get_copyright_info = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_get_donor_info() {
    if (!this.#_bindings.method_get_donor_info) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_donor_info");
      this.#_bindings.method_get_donor_info = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3102165223
      );
    }
  }
  static init_method_get_license_info() {
    if (!this.#_bindings.method_get_license_info) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_license_info");
      this.#_bindings.method_get_license_info = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3102165223
      );
    }
  }
  static init_method_get_license_text() {
    if (!this.#_bindings.method_get_license_text) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_license_text");
      this.#_bindings.method_get_license_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_architecture_name() {
    if (!this.#_bindings.method_get_architecture_name) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_architecture_name");
      this.#_bindings.method_get_architecture_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_is_in_physics_frame() {
    if (!this.#_bindings.method_is_in_physics_frame) {
      let classname = new StringName("Engine");
      let methodname = new StringName("is_in_physics_frame");
      this.#_bindings.method_is_in_physics_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_has_singleton() {
    if (!this.#_bindings.method_has_singleton) {
      let classname = new StringName("Engine");
      let methodname = new StringName("has_singleton");
      this.#_bindings.method_has_singleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2619796661
      );
    }
  }
  static init_method_get_singleton() {
    if (!this.#_bindings.method_get_singleton) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_singleton");
      this.#_bindings.method_get_singleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1371597918
      );
    }
  }
  static init_method_register_singleton() {
    if (!this.#_bindings.method_register_singleton) {
      let classname = new StringName("Engine");
      let methodname = new StringName("register_singleton");
      this.#_bindings.method_register_singleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        965313290
      );
    }
  }
  static init_method_unregister_singleton() {
    if (!this.#_bindings.method_unregister_singleton) {
      let classname = new StringName("Engine");
      let methodname = new StringName("unregister_singleton");
      this.#_bindings.method_unregister_singleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_singleton_list() {
    if (!this.#_bindings.method_get_singleton_list) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_singleton_list");
      this.#_bindings.method_get_singleton_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_register_script_language() {
    if (!this.#_bindings.method_register_script_language) {
      let classname = new StringName("Engine");
      let methodname = new StringName("register_script_language");
      this.#_bindings.method_register_script_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1850254898
      );
    }
  }
  static init_method_unregister_script_language() {
    if (!this.#_bindings.method_unregister_script_language) {
      let classname = new StringName("Engine");
      let methodname = new StringName("unregister_script_language");
      this.#_bindings.method_unregister_script_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1850254898
      );
    }
  }
  static init_method_get_script_language_count() {
    if (!this.#_bindings.method_get_script_language_count) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_script_language_count");
      this.#_bindings.method_get_script_language_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_get_script_language() {
    if (!this.#_bindings.method_get_script_language) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_script_language");
      this.#_bindings.method_get_script_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2151255799
      );
    }
  }
  static init_method_is_editor_hint() {
    if (!this.#_bindings.method_is_editor_hint) {
      let classname = new StringName("Engine");
      let methodname = new StringName("is_editor_hint");
      this.#_bindings.method_is_editor_hint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_write_movie_path() {
    if (!this.#_bindings.method_get_write_movie_path) {
      let classname = new StringName("Engine");
      let methodname = new StringName("get_write_movie_path");
      this.#_bindings.method_get_write_movie_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_print_error_messages() {
    if (!this.#_bindings.method_set_print_error_messages) {
      let classname = new StringName("Engine");
      let methodname = new StringName("set_print_error_messages");
      this.#_bindings.method_set_print_error_messages = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_printing_error_messages() {
    if (!this.#_bindings.method_is_printing_error_messages) {
      let classname = new StringName("Engine");
      let methodname = new StringName("is_printing_error_messages");
      this.#_bindings.method_is_printing_error_messages = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_physics_ticks_per_second(_physics_ticks_per_second) {
    Engine.init_method_set_physics_ticks_per_second();
    return _call_native_mb_no_ret(
      _Engine.#_bindings.method_set_physics_ticks_per_second,
      this._owner,
      _physics_ticks_per_second
    );
    
  }
  get_physics_ticks_per_second() {
    Engine.init_method_get_physics_ticks_per_second();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_physics_ticks_per_second,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_max_physics_steps_per_frame(_max_physics_steps) {
    Engine.init_method_set_max_physics_steps_per_frame();
    return _call_native_mb_no_ret(
      _Engine.#_bindings.method_set_max_physics_steps_per_frame,
      this._owner,
      _max_physics_steps
    );
    
  }
  get_max_physics_steps_per_frame() {
    Engine.init_method_get_max_physics_steps_per_frame();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_max_physics_steps_per_frame,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_physics_jitter_fix(_physics_jitter_fix) {
    Engine.init_method_set_physics_jitter_fix();
    return _call_native_mb_no_ret(
      _Engine.#_bindings.method_set_physics_jitter_fix,
      this._owner,
      _physics_jitter_fix
    );
    
  }
  get_physics_jitter_fix() {
    Engine.init_method_get_physics_jitter_fix();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_physics_jitter_fix,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_physics_interpolation_fraction() {
    Engine.init_method_get_physics_interpolation_fraction();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_physics_interpolation_fraction,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_max_fps(_max_fps) {
    Engine.init_method_set_max_fps();
    return _call_native_mb_no_ret(
      _Engine.#_bindings.method_set_max_fps,
      this._owner,
      _max_fps
    );
    
  }
  get_max_fps() {
    Engine.init_method_get_max_fps();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_max_fps,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_time_scale(_time_scale) {
    Engine.init_method_set_time_scale();
    return _call_native_mb_no_ret(
      _Engine.#_bindings.method_set_time_scale,
      this._owner,
      _time_scale
    );
    
  }
  get_time_scale() {
    Engine.init_method_get_time_scale();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_time_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_frames_drawn() {
    Engine.init_method_get_frames_drawn();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_frames_drawn,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_frames_per_second() {
    Engine.init_method_get_frames_per_second();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_frames_per_second,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_physics_frames() {
    Engine.init_method_get_physics_frames();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_physics_frames,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_process_frames() {
    Engine.init_method_get_process_frames();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_process_frames,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_main_loop() {
    Engine.init_method_get_main_loop();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_main_loop,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_version_info() {
    Engine.init_method_get_version_info();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_version_info,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  get_author_info() {
    Engine.init_method_get_author_info();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_author_info,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  get_copyright_info() {
    Engine.init_method_get_copyright_info();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_copyright_info,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  get_donor_info() {
    Engine.init_method_get_donor_info();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_donor_info,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  get_license_info() {
    Engine.init_method_get_license_info();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_license_info,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  get_license_text() {
    Engine.init_method_get_license_text();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_license_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_architecture_name() {
    Engine.init_method_get_architecture_name();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_architecture_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_in_physics_frame() {
    Engine.init_method_is_in_physics_frame();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_is_in_physics_frame,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  has_singleton(_name) {
    Engine.init_method_has_singleton();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_has_singleton,
      this._owner,
			Variant.Type.BOOL,
    
      _name
    );
    
  }
  get_singleton(_name) {
    Engine.init_method_get_singleton();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_singleton,
      this._owner,
			Variant.Type.OBJECT,
      _name
    );
    
  }
  register_singleton(_name, _instance) {
    Engine.init_method_register_singleton();
    return _call_native_mb_no_ret(
      _Engine.#_bindings.method_register_singleton,
      this._owner,
      _name, _instance
    );
    
  }
  unregister_singleton(_name) {
    Engine.init_method_unregister_singleton();
    return _call_native_mb_no_ret(
      _Engine.#_bindings.method_unregister_singleton,
      this._owner,
      _name
    );
    
  }
  get_singleton_list() {
    Engine.init_method_get_singleton_list();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_singleton_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  register_script_language(_language) {
    Engine.init_method_register_script_language();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_register_script_language,
      this._owner,
			Variant.Type.INT,
    
      _language
    );
    
  }
  unregister_script_language(_language) {
    Engine.init_method_unregister_script_language();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_unregister_script_language,
      this._owner,
			Variant.Type.INT,
    
      _language
    );
    
  }
  get_script_language_count() {
    Engine.init_method_get_script_language_count();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_script_language_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_script_language(_index) {
    Engine.init_method_get_script_language();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_script_language,
      this._owner,
			Variant.Type.OBJECT,
      _index
    );
    
  }
  is_editor_hint() {
    Engine.init_method_is_editor_hint();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_is_editor_hint,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_write_movie_path() {
    Engine.init_method_get_write_movie_path();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_get_write_movie_path,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_print_error_messages(_enabled) {
    Engine.init_method_set_print_error_messages();
    return _call_native_mb_no_ret(
      _Engine.#_bindings.method_set_print_error_messages,
      this._owner,
      _enabled
    );
    
  }
  is_printing_error_messages() {
    Engine.init_method_is_printing_error_messages();
    return _call_native_mb_ret(
      _Engine.#_bindings.method_is_printing_error_messages,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get print_error_messages () {
  return this.is_printing_error_messages();
}
set print_error_messages (new_value) {
  this.set_print_error_messages(new_value);
}
get physics_ticks_per_second () {
  return this.get_physics_ticks_per_second();
}
set physics_ticks_per_second (new_value) {
  this.set_physics_ticks_per_second(new_value);
}
get max_physics_steps_per_frame () {
  return this.get_max_physics_steps_per_frame();
}
set max_physics_steps_per_frame (new_value) {
  this.set_max_physics_steps_per_frame(new_value);
}
get max_fps () {
  return this.get_max_fps();
}
set max_fps (new_value) {
  this.set_max_fps(new_value);
}
get time_scale () {
  return this.get_time_scale();
}
set time_scale (new_value) {
  this.set_time_scale(new_value);
}
get physics_jitter_fix () {
  return this.get_physics_jitter_fix();
}
set physics_jitter_fix (new_value) {
  this.set_physics_jitter_fix(new_value);
}

}
export const Engine = (function () {
  let _instance;
  function create_instance() {
    return new _Engine();
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