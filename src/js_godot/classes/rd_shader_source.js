import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_set_stage_source;
    method_get_stage_source;
    method_set_language;
    method_get_language;
}


export class RDShaderSource extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDShaderSource");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_set_stage_source,
      this._owner,
      _stage, _source
    );
  }
  get_stage_source(_stage) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stage_source,
      this._owner,
			Variant.Type.STRING
    ,
      _stage
    );
  }
  set_language(_language) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_language,
      this._owner,
      _language
    );
  }
  get_language() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_language,
      this._owner,
			Variant.INT,
      
    );
  }
}