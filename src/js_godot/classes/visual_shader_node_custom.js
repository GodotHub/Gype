import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classesvisual_shader_node'
import { Variant } from 'src/js_godot/variant/variant'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__get_name;
    method__get_description;
    method__get_category;
    method__get_return_icon_type;
    method__get_input_port_count;
    method__get_input_port_type;
    method__get_input_port_name;
    method__get_input_port_default_value;
    method__get_default_input_port;
    method__get_output_port_count;
    method__get_output_port_type;
    method__get_output_port_name;
    method__get_property_count;
    method__get_property_name;
    method__get_property_default_index;
    method__get_property_options;
    method__get_code;
    method__get_func_code;
    method__get_global_code;
    method__is_highend;
    method__is_available;
    method_get_option_index;
}


export class VisualShaderNodeCustom extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeCustom");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_name");
      this._bindings.method__get_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_description");
      this._bindings.method__get_description = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_category");
      this._bindings.method__get_category = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_return_icon_type");
      this._bindings.method__get_return_icon_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_input_port_count");
      this._bindings.method__get_input_port_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_input_port_type");
      this._bindings.method__get_input_port_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_input_port_name");
      this._bindings.method__get_input_port_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_input_port_default_value");
      this._bindings.method__get_input_port_default_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_default_input_port");
      this._bindings.method__get_default_input_port = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_output_port_count");
      this._bindings.method__get_output_port_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_output_port_type");
      this._bindings.method__get_output_port_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_output_port_name");
      this._bindings.method__get_output_port_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_property_count");
      this._bindings.method__get_property_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_property_name");
      this._bindings.method__get_property_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_property_default_index");
      this._bindings.method__get_property_default_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_property_options");
      this._bindings.method__get_property_options = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_code");
      this._bindings.method__get_code = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_func_code");
      this._bindings.method__get_func_code = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_get_global_code");
      this._bindings.method__get_global_code = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_is_highend");
      this._bindings.method__is_highend = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCustom");
      let methodname = new StringName("_is_available");
      this._bindings.method__is_available = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
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
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _get_description() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_description,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _get_category() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_category,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _get_return_icon_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_return_icon_type,
      this._owner,
			Variant.INT,
      
    );
  }
  _get_input_port_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_input_port_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_input_port_type(_port) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_input_port_type,
      this._owner,
			Variant.INT,
      _port
    );
  }
  _get_input_port_name(_port) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_input_port_name,
      this._owner,
			Variant.Type.STRING
    ,
      _port
    );
  }
  _get_input_port_default_value(_port) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_input_port_default_value,
      this._owner,
			Variant.Type.VARIANT
    ,
      _port
    );
  }
  _get_default_input_port(_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_default_input_port,
      this._owner,
			Variant.Type.INT,
      _type
    );
  }
  _get_output_port_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_output_port_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_output_port_type(_port) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_output_port_type,
      this._owner,
			Variant.INT,
      _port
    );
  }
  _get_output_port_name(_port) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_output_port_name,
      this._owner,
			Variant.Type.STRING
    ,
      _port
    );
  }
  _get_property_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_property_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_property_name(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_property_name,
      this._owner,
			Variant.Type.STRING
    ,
      _index
    );
  }
  _get_property_default_index(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_property_default_index,
      this._owner,
			Variant.Type.INT,
      _index
    );
  }
  _get_property_options(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_property_options,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _index
    );
  }
  _get_code(_input_vars, _output_vars, _mode, _type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_code,
      this._owner,
			Variant.Type.STRING
    ,
      _input_vars, _output_vars, _mode, _type
    );
  }
  _get_func_code(_mode, _type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_func_code,
      this._owner,
			Variant.Type.STRING
    ,
      _mode, _type
    );
  }
  _get_global_code(_mode) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_global_code,
      this._owner,
			Variant.Type.STRING
    ,
      _mode
    );
  }
  _is_highend() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_highend,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _is_available(_mode, _type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_available,
      this._owner,
			Variant.Type.BOOL,
      _mode, _type
    );
  }
  get_option_index(_option) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_option_index,
      this._owner,
			Variant.Type.INT,
      _option
    );
  }
}