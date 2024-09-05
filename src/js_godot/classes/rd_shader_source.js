import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_stage_source;
  method_get_stage_source;
  method_set_language;
  method_get_language;
}
export class RDShaderSource extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RDShaderSource");
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
      let classname = new StringName("RDShaderSource");
      let methodname = new StringName("set_stage_source");
      this._bindings.method_set_stage_source = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        620821314
      );
    }
    {
      let classname = new StringName("RDShaderSource");
      let methodname = new StringName("get_stage_source");
      this._bindings.method_get_stage_source = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3354920045
      );
    }
    {
      let classname = new StringName("RDShaderSource");
      let methodname = new StringName("set_language");
      this._bindings.method_set_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3422186742
      );
    }
    {
      let classname = new StringName("RDShaderSource");
      let methodname = new StringName("get_language");
      this._bindings.method_get_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1063538261
      );
    }
  }
  
  set_stage_source(_stage, _source) {
    return _call_native_mb_no_ret(
      RDShaderSource._bindings.method_set_stage_source,
      this._owner,
      _stage, _source
    );
    
  }
  get_stage_source(_stage) {
    return _call_native_mb_ret(
      RDShaderSource._bindings.method_get_stage_source,
      this._owner,
			Variant.Type.STRING,
    
      _stage
    );
    
  }
  set_language(_language) {
    return _call_native_mb_no_ret(
      RDShaderSource._bindings.method_set_language,
      this._owner,
      _language
    );
    
  }
  get_language() {
    return _call_native_mb_ret(
      RDShaderSource._bindings.method_get_language,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get source_vertex () {
  return this.get_stage_source();
}
set source_vertex (new_value) {
  this.set_stage_source(new_value);
}
get source_fragment () {
  return this.get_stage_source();
}
set source_fragment (new_value) {
  this.set_stage_source(new_value);
}
get source_tesselation_control () {
  return this.get_stage_source();
}
set source_tesselation_control (new_value) {
  this.set_stage_source(new_value);
}
get source_tesselation_evaluation () {
  return this.get_stage_source();
}
set source_tesselation_evaluation (new_value) {
  this.set_stage_source(new_value);
}
get source_compute () {
  return this.get_stage_source();
}
set source_compute (new_value) {
  this.set_stage_source(new_value);
}
get language () {
  return this.get_language();
}
set language (new_value) {
  this.set_language(new_value);
}


  static {
    this._init_bindings();
  }
}