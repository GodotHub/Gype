import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_next_pass;
  method_get_next_pass;
  method_set_render_priority;
  method_get_render_priority;
  method_inspect_native_shader_code;
  method_create_placeholder;
}
@GodotClass
export class Material extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Material");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_next_pass() {
    if (!this._bindings.method_set_next_pass) {
      let classname = new StringName("Material");
      let methodname = new StringName("set_next_pass");
      this._bindings.method_set_next_pass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2757459619
      );
    }
  }
  static init_method_get_next_pass() {
    if (!this._bindings.method_get_next_pass) {
      let classname = new StringName("Material");
      let methodname = new StringName("get_next_pass");
      this._bindings.method_get_next_pass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        5934680
      );
    }
  }
  static init_method_set_render_priority() {
    if (!this._bindings.method_set_render_priority) {
      let classname = new StringName("Material");
      let methodname = new StringName("set_render_priority");
      this._bindings.method_set_render_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_render_priority() {
    if (!this._bindings.method_get_render_priority) {
      let classname = new StringName("Material");
      let methodname = new StringName("get_render_priority");
      this._bindings.method_get_render_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_inspect_native_shader_code() {
    if (!this._bindings.method_inspect_native_shader_code) {
      let classname = new StringName("Material");
      let methodname = new StringName("inspect_native_shader_code");
      this._bindings.method_inspect_native_shader_code = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_create_placeholder() {
    if (!this._bindings.method_create_placeholder) {
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
    Material.init_method_set_next_pass();
    return _call_native_mb_no_ret(
      Material._bindings.method_set_next_pass,
      this._owner,
      _next_pass
    );
    
  }
  get_next_pass() {
    Material.init_method_get_next_pass();
    return _call_native_mb_ret(
      Material._bindings.method_get_next_pass,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_render_priority(_priority) {
    Material.init_method_set_render_priority();
    return _call_native_mb_no_ret(
      Material._bindings.method_set_render_priority,
      this._owner,
      _priority
    );
    
  }
  get_render_priority() {
    Material.init_method_get_render_priority();
    return _call_native_mb_ret(
      Material._bindings.method_get_render_priority,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  inspect_native_shader_code() {
    Material.init_method_inspect_native_shader_code();
    return _call_native_mb_no_ret(
      Material._bindings.method_inspect_native_shader_code,
      this._owner,
      
    );
    
  }
  create_placeholder() {
    Material.init_method_create_placeholder();
    return _call_native_mb_ret(
      Material._bindings.method_create_placeholder,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get render_priority () {
  return this.get_render_priority();
}
set render_priority (new_value) {
  this.set_render_priority(new_value);
}
get next_pass () {
  return this.get_next_pass();
}
set next_pass (new_value) {
  this.set_next_pass(new_value);
}

}