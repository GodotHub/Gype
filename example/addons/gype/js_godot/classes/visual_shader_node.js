import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_default_input_port;
  method_set_output_port_for_preview;
  method_get_output_port_for_preview;
  method_set_input_port_default_value;
  method_get_input_port_default_value;
  method_remove_input_port_default_value;
  method_clear_default_input_values;
  method_set_default_input_values;
  method_get_default_input_values;
  method_set_frame;
  method_get_frame;
}
export class VisualShaderNode extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNode");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_default_input_port() {
    if (!this.#_bindings.method_get_default_input_port) {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("get_default_input_port");
      this.#_bindings.method_get_default_input_port = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1894493699
      );
    }
  }
  static init_method_set_output_port_for_preview() {
    if (!this.#_bindings.method_set_output_port_for_preview) {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("set_output_port_for_preview");
      this.#_bindings.method_set_output_port_for_preview = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_output_port_for_preview() {
    if (!this.#_bindings.method_get_output_port_for_preview) {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("get_output_port_for_preview");
      this.#_bindings.method_get_output_port_for_preview = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_input_port_default_value() {
    if (!this.#_bindings.method_set_input_port_default_value) {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("set_input_port_default_value");
      this.#_bindings.method_set_input_port_default_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        150923387
      );
    }
  }
  static init_method_get_input_port_default_value() {
    if (!this.#_bindings.method_get_input_port_default_value) {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("get_input_port_default_value");
      this.#_bindings.method_get_input_port_default_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4227898402
      );
    }
  }
  static init_method_remove_input_port_default_value() {
    if (!this.#_bindings.method_remove_input_port_default_value) {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("remove_input_port_default_value");
      this.#_bindings.method_remove_input_port_default_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_clear_default_input_values() {
    if (!this.#_bindings.method_clear_default_input_values) {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("clear_default_input_values");
      this.#_bindings.method_clear_default_input_values = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_default_input_values() {
    if (!this.#_bindings.method_set_default_input_values) {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("set_default_input_values");
      this.#_bindings.method_set_default_input_values = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_default_input_values() {
    if (!this.#_bindings.method_get_default_input_values) {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("get_default_input_values");
      this.#_bindings.method_get_default_input_values = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_frame() {
    if (!this.#_bindings.method_set_frame) {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("set_frame");
      this.#_bindings.method_set_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_frame() {
    if (!this.#_bindings.method_get_frame) {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("get_frame");
      this.#_bindings.method_get_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  get_default_input_port(_type) {
    VisualShaderNode.init_method_get_default_input_port();
    return _call_native_mb_ret(
      VisualShaderNode.#_bindings.method_get_default_input_port,
      this._owner,
			Variant.Type.INT,
    
      _type
    );
    
  }
  set_output_port_for_preview(_port) {
    VisualShaderNode.init_method_set_output_port_for_preview();
    return _call_native_mb_no_ret(
      VisualShaderNode.#_bindings.method_set_output_port_for_preview,
      this._owner,
      _port
    );
    
  }
  get_output_port_for_preview() {
    VisualShaderNode.init_method_get_output_port_for_preview();
    return _call_native_mb_ret(
      VisualShaderNode.#_bindings.method_get_output_port_for_preview,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_input_port_default_value(_port, _value, _prev_value) {
    VisualShaderNode.init_method_set_input_port_default_value();
    return _call_native_mb_no_ret(
      VisualShaderNode.#_bindings.method_set_input_port_default_value,
      this._owner,
      _port, _value, _prev_value
    );
    
  }
  get_input_port_default_value(_port) {
    VisualShaderNode.init_method_get_input_port_default_value();
    return _call_native_mb_ret(
      VisualShaderNode.#_bindings.method_get_input_port_default_value,
      this._owner,
			Variant.Type.VARIANT,
    
      _port
    );
    
  }
  remove_input_port_default_value(_port) {
    VisualShaderNode.init_method_remove_input_port_default_value();
    return _call_native_mb_no_ret(
      VisualShaderNode.#_bindings.method_remove_input_port_default_value,
      this._owner,
      _port
    );
    
  }
  clear_default_input_values() {
    VisualShaderNode.init_method_clear_default_input_values();
    return _call_native_mb_no_ret(
      VisualShaderNode.#_bindings.method_clear_default_input_values,
      this._owner,
      
    );
    
  }
  set_default_input_values(_values) {
    VisualShaderNode.init_method_set_default_input_values();
    return _call_native_mb_no_ret(
      VisualShaderNode.#_bindings.method_set_default_input_values,
      this._owner,
      _values
    );
    
  }
  get_default_input_values() {
    VisualShaderNode.init_method_get_default_input_values();
    return _call_native_mb_ret(
      VisualShaderNode.#_bindings.method_get_default_input_values,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  set_frame(_frame) {
    VisualShaderNode.init_method_set_frame();
    return _call_native_mb_no_ret(
      VisualShaderNode.#_bindings.method_set_frame,
      this._owner,
      _frame
    );
    
  }
  get_frame() {
    VisualShaderNode.init_method_get_frame();
    return _call_native_mb_ret(
      VisualShaderNode.#_bindings.method_get_frame,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get output_port_for_preview () {
  return this.get_output_port_for_preview();
}
set output_port_for_preview (new_value) {
  this.set_output_port_for_preview(new_value);
}
get default_input_values () {
  return this.get_default_input_values();
}
set default_input_values (new_value) {
  this.set_default_input_values(new_value);
}
get expanded_output_ports () {
  return this._get_output_ports_expanded();
}
set expanded_output_ports (new_value) {
  this._set_output_ports_expanded(new_value);
}
get linked_parent_graph_frame () {
  return this.get_frame();
}
set linked_parent_graph_frame (new_value) {
  this.set_frame(new_value);
}

  static PortType = {
    PORT_TYPE_SCALAR: 0,
    PORT_TYPE_SCALAR_INT: 1,
    PORT_TYPE_SCALAR_UINT: 2,
    PORT_TYPE_VECTOR_2D: 3,
    PORT_TYPE_VECTOR_3D: 4,
    PORT_TYPE_VECTOR_4D: 5,
    PORT_TYPE_BOOLEAN: 6,
    PORT_TYPE_TRANSFORM: 7,
    PORT_TYPE_SAMPLER: 8,
    PORT_TYPE_MAX: 9,
  }
}