import * as internal from '__internal__';
import { RID } from 'src/js_godot/variant/rid'
import { Resource } from 'src/js_godot/classes/resource'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_next_pass;
    method_get_next_pass;
    method_set_render_priority;
    method_get_render_priority;
    method_inspect_native_shader_code;
    method_create_placeholder;
}


export class Material extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Material");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Material");
        let methodname = new StringName("set_next_pass");
        this._bindings.method_set_next_pass = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2757459619
        );
      }
      {
        let classname = new StringName("Material");
        let methodname = new StringName("get_next_pass");
        this._bindings.method_get_next_pass = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          5934680
        );
      }
      {
        let classname = new StringName("Material");
        let methodname = new StringName("set_render_priority");
        this._bindings.method_set_render_priority = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Material");
        let methodname = new StringName("get_render_priority");
        this._bindings.method_get_render_priority = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Material");
        let methodname = new StringName("inspect_native_shader_code");
        this._bindings.method_inspect_native_shader_code = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("Material");
        let methodname = new StringName("create_placeholder");
        this._bindings.method_create_placeholder = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          121922552
        );
      }
  }
  _get_shader_rid() {
  }
  _get_shader_mode() {
  }
  _can_do_next_pass() {
  }
  _can_use_render_priority() {
  }
  set_next_pass(_next_pass) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_next_pass,
      this._owner,
      _next_pass
    );
    
  }
  get_next_pass() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_next_pass,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_render_priority(_priority) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_render_priority,
      this._owner,
      _priority
    );
    
  }
  get_render_priority() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_render_priority,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  inspect_native_shader_code() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_inspect_native_shader_code,
      this._owner,
      
    );
    
  }
  create_placeholder() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_placeholder,
      this._owner,
			Variant.INT,
      
    );
    
  }
}