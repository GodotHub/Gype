import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { Variant } from 'src/js_godot/variant/variant'
import { GDArray } from 'src/js_godot/variant/gd_array'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNode");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("get_default_input_port");
      this._bindings.method_get_default_input_port = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1894493699
      );
    }
    {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("set_output_port_for_preview");
      this._bindings.method_set_output_port_for_preview = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("get_output_port_for_preview");
      this._bindings.method_get_output_port_for_preview = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("set_input_port_default_value");
      this._bindings.method_set_input_port_default_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        150923387
      );
    }
    {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("get_input_port_default_value");
      this._bindings.method_get_input_port_default_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4227898402
      );
    }
    {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("remove_input_port_default_value");
      this._bindings.method_remove_input_port_default_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("clear_default_input_values");
      this._bindings.method_clear_default_input_values = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("set_default_input_values");
      this._bindings.method_set_default_input_values = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("get_default_input_values");
      this._bindings.method_get_default_input_values = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("set_frame");
      this._bindings.method_set_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("VisualShaderNode");
      let methodname = new StringName("get_frame");
      this._bindings.method_get_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  get_default_input_port(_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_default_input_port,
      this._owner,
			Variant.Type.INT,
      _type
    );
  }
  set_output_port_for_preview(_port) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_output_port_for_preview,
      this._owner,
      _port
    );
  }
  get_output_port_for_preview() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_output_port_for_preview,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_input_port_default_value(_port, _value, _prev_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_input_port_default_value,
      this._owner,
      _port, _value, _prev_value
    );
  }
  get_input_port_default_value(_port) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_input_port_default_value,
      this._owner,
			Variant.Type.VARIANT
    ,
      _port
    );
  }
  remove_input_port_default_value(_port) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_input_port_default_value,
      this._owner,
      _port
    );
  }
  clear_default_input_values() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_default_input_values,
      this._owner,
      
    );
  }
  set_default_input_values(_values) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_default_input_values,
      this._owner,
      _values
    );
  }
  get_default_input_values() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_default_input_values,
      this._owner,
			Variant.Type.ARRAY
    ,
      
    );
  }
  set_frame(_frame) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_frame,
      this._owner,
      _frame
    );
  }
  get_frame() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_frame,
      this._owner,
			Variant.Type.INT,
      
    );
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