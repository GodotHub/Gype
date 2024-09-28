import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
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
}
@GodotClass
export class ResourceFormatLoader extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ResourceFormatLoader");
    } else {
      super(godot_object);
    }
  }

  
  
  _get_recognized_extensions() {
  }
  _recognize_path(_path, _type) {
  }
  _handles_type(_type) {
  }
  _get_resource_type(_path) {
  }
  _get_resource_script_class(_path) {
  }
  _get_resource_uid(_path) {
  }
  _get_dependencies(_path, _add_types) {
  }
  _rename_dependencies(_path, _renames) {
  }
  _exists(_path) {
  }
  _get_classes_used(_path) {
  }
  _load(_path, _original_path, _use_sub_threads, _cache_mode) {
  }
  

  static CacheMode = {
    CACHE_MODE_IGNORE: 0,
    CACHE_MODE_REUSE: 1,
    CACHE_MODE_REPLACE: 2,
    CACHE_MODE_IGNORE_DEEP: 3,
    CACHE_MODE_REPLACE_DEEP: 4,
  }
}