import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { VisualShaderNodeParameter } from '@js_godot/classes/visual_shader_node_parameter'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_hint;
  method_get_hint;
  method_set_min;
  method_get_min;
  method_set_max;
  method_get_max;
  method_set_step;
  method_get_step;
  method_set_default_value_enabled;
  method_is_default_value_enabled;
  method_set_default_value;
  method_get_default_value;
}
export class VisualShaderNodeIntParameter extends VisualShaderNodeParameter{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeIntParameter");
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
      let classname = new StringName("VisualShaderNodeIntParameter");
      let methodname = new StringName("set_hint");
      this._bindings.method_set_hint = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2540512075
      );
    }
    {
      let classname = new StringName("VisualShaderNodeIntParameter");
      let methodname = new StringName("get_hint");
      this._bindings.method_get_hint = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4250814924
      );
    }
    {
      let classname = new StringName("VisualShaderNodeIntParameter");
      let methodname = new StringName("set_min");
      this._bindings.method_set_min = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("VisualShaderNodeIntParameter");
      let methodname = new StringName("get_min");
      this._bindings.method_get_min = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("VisualShaderNodeIntParameter");
      let methodname = new StringName("set_max");
      this._bindings.method_set_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("VisualShaderNodeIntParameter");
      let methodname = new StringName("get_max");
      this._bindings.method_get_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("VisualShaderNodeIntParameter");
      let methodname = new StringName("set_step");
      this._bindings.method_set_step = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("VisualShaderNodeIntParameter");
      let methodname = new StringName("get_step");
      this._bindings.method_get_step = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("VisualShaderNodeIntParameter");
      let methodname = new StringName("set_default_value_enabled");
      this._bindings.method_set_default_value_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("VisualShaderNodeIntParameter");
      let methodname = new StringName("is_default_value_enabled");
      this._bindings.method_is_default_value_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("VisualShaderNodeIntParameter");
      let methodname = new StringName("set_default_value");
      this._bindings.method_set_default_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("VisualShaderNodeIntParameter");
      let methodname = new StringName("get_default_value");
      this._bindings.method_get_default_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  set_hint(_hint) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hint,
      this._owner,
      _hint
    );
    
  }
  get_hint() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hint,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_min(_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_min,
      this._owner,
      _value
    );
    
  }
  get_min() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_min,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_max(_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max,
      this._owner,
      _value
    );
    
  }
  get_max() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_step(_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_step,
      this._owner,
      _value
    );
    
  }
  get_step() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_step,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_default_value_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_default_value_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_default_value_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_default_value_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_default_value(_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_default_value,
      this._owner,
      _value
    );
    
  }
  get_default_value() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_default_value,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  
get hint () {
  return this.get_hint();
}
set hint (new_value) {
  this.set_hint(new_value);
}
get min () {
  return this.get_min();
}
set min (new_value) {
  this.set_min(new_value);
}
get max () {
  return this.get_max();
}
set max (new_value) {
  this.set_max(new_value);
}
get step () {
  return this.get_step();
}
set step (new_value) {
  this.set_step(new_value);
}
get default_value_enabled () {
  return this.is_default_value_enabled();
}
set default_value_enabled (new_value) {
  this.set_default_value_enabled(new_value);
}
get default_value () {
  return this.get_default_value();
}
set default_value (new_value) {
  this.set_default_value(new_value);
}

  static Hint = {
    HINT_NONE: 0,
    HINT_RANGE: 1,
    HINT_RANGE_STEP: 2,
    HINT_MAX: 3,
  }

  static {
    this._init_bindings();
  }
}