import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import { StringName } from '@js_godot/variant/string_name'
import { VisualShaderNode } from '@js_godot/classes/visual_shader_node'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_option_index;
}
export class VisualShaderNodeCustom extends VisualShaderNode{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeCustom");
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
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("get_option_index");
      this._bindings.method_get_option_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
  }
  
  _get_name() {
  }
  _get_description() {
  }
  _get_category() {
  }
  _get_return_icon_type() {
  }
  _get_input_port_count() {
  }
  _get_input_port_type(_port) {
  }
  _get_input_port_name(_port) {
  }
  _get_input_port_default_value(_port) {
  }
  _get_default_input_port(_type) {
  }
  _get_output_port_count() {
  }
  _get_output_port_type(_port) {
  }
  _get_output_port_name(_port) {
  }
  _get_property_count() {
  }
  _get_property_name(_index) {
  }
  _get_property_default_index(_index) {
  }
  _get_property_options(_index) {
  }
  _get_code(_input_vars, _output_vars, _mode, _type) {
  }
  _get_func_code(_mode, _type) {
  }
  _get_global_code(_mode) {
  }
  _is_highend() {
  }
  _is_available(_mode, _type) {
  }
  get_option_index(_option) {
    return _call_native_mb_ret(
      VisualShaderNodeCustom._bindings.method_get_option_index,
      this._owner,
			Variant.Type.INT,
      _option
    );
    
  }
  
get initialized () {
  return this._is_initialized();
}
set initialized (new_value) {
  this._set_initialized(new_value);
}
get properties () {
  return this._get_properties();
}
set properties (new_value) {
  this._set_properties(new_value);
}


  static {
    this._init_bindings();
  }
}