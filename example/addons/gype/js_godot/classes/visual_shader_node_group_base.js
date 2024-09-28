import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { VisualShaderNodeResizableBase } from '@js_godot/classes/visual_shader_node_resizable_base'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_inputs;
  method_get_inputs;
  method_set_outputs;
  method_get_outputs;
  method_is_valid_port_name;
  method_add_input_port;
  method_remove_input_port;
  method_get_input_port_count;
  method_has_input_port;
  method_clear_input_ports;
  method_add_output_port;
  method_remove_output_port;
  method_get_output_port_count;
  method_has_output_port;
  method_clear_output_ports;
  method_set_input_port_name;
  method_set_input_port_type;
  method_set_output_port_name;
  method_set_output_port_type;
  method_get_free_input_port_id;
  method_get_free_output_port_id;
}
@GodotClass
export class VisualShaderNodeGroupBase extends VisualShaderNodeResizableBase{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeGroupBase");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_inputs() {
    if (!this._bindings.method_set_inputs) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("set_inputs");
      this._bindings.method_set_inputs = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_inputs() {
    if (!this._bindings.method_get_inputs) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("get_inputs");
      this._bindings.method_get_inputs = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_outputs() {
    if (!this._bindings.method_set_outputs) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("set_outputs");
      this._bindings.method_set_outputs = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_outputs() {
    if (!this._bindings.method_get_outputs) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("get_outputs");
      this._bindings.method_get_outputs = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_is_valid_port_name() {
    if (!this._bindings.method_is_valid_port_name) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("is_valid_port_name");
      this._bindings.method_is_valid_port_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3927539163
      );
    }
  }
  static init_method_add_input_port() {
    if (!this._bindings.method_add_input_port) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("add_input_port");
      this._bindings.method_add_input_port = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2285447957
      );
    }
  }
  static init_method_remove_input_port() {
    if (!this._bindings.method_remove_input_port) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("remove_input_port");
      this._bindings.method_remove_input_port = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_input_port_count() {
    if (!this._bindings.method_get_input_port_count) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("get_input_port_count");
      this._bindings.method_get_input_port_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_has_input_port() {
    if (!this._bindings.method_has_input_port) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("has_input_port");
      this._bindings.method_has_input_port = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_clear_input_ports() {
    if (!this._bindings.method_clear_input_ports) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("clear_input_ports");
      this._bindings.method_clear_input_ports = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_add_output_port() {
    if (!this._bindings.method_add_output_port) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("add_output_port");
      this._bindings.method_add_output_port = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2285447957
      );
    }
  }
  static init_method_remove_output_port() {
    if (!this._bindings.method_remove_output_port) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("remove_output_port");
      this._bindings.method_remove_output_port = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_output_port_count() {
    if (!this._bindings.method_get_output_port_count) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("get_output_port_count");
      this._bindings.method_get_output_port_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_has_output_port() {
    if (!this._bindings.method_has_output_port) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("has_output_port");
      this._bindings.method_has_output_port = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_clear_output_ports() {
    if (!this._bindings.method_clear_output_ports) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("clear_output_ports");
      this._bindings.method_clear_output_ports = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_input_port_name() {
    if (!this._bindings.method_set_input_port_name) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("set_input_port_name");
      this._bindings.method_set_input_port_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_set_input_port_type() {
    if (!this._bindings.method_set_input_port_type) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("set_input_port_type");
      this._bindings.method_set_input_port_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_set_output_port_name() {
    if (!this._bindings.method_set_output_port_name) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("set_output_port_name");
      this._bindings.method_set_output_port_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_set_output_port_type() {
    if (!this._bindings.method_set_output_port_type) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("set_output_port_type");
      this._bindings.method_set_output_port_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_free_input_port_id() {
    if (!this._bindings.method_get_free_input_port_id) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("get_free_input_port_id");
      this._bindings.method_get_free_input_port_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_free_output_port_id() {
    if (!this._bindings.method_get_free_output_port_id) {
      let classname = new StringName("VisualShaderNodeGroupBase");
      let methodname = new StringName("get_free_output_port_id");
      this._bindings.method_get_free_output_port_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  set_inputs(_inputs) {
    VisualShaderNodeGroupBase.init_method_set_inputs();
    return _call_native_mb_no_ret(
      VisualShaderNodeGroupBase._bindings.method_set_inputs,
      this._owner,
      _inputs
    );
    
  }
  get_inputs() {
    VisualShaderNodeGroupBase.init_method_get_inputs();
    return _call_native_mb_ret(
      VisualShaderNodeGroupBase._bindings.method_get_inputs,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_outputs(_outputs) {
    VisualShaderNodeGroupBase.init_method_set_outputs();
    return _call_native_mb_no_ret(
      VisualShaderNodeGroupBase._bindings.method_set_outputs,
      this._owner,
      _outputs
    );
    
  }
  get_outputs() {
    VisualShaderNodeGroupBase.init_method_get_outputs();
    return _call_native_mb_ret(
      VisualShaderNodeGroupBase._bindings.method_get_outputs,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_valid_port_name(_name) {
    VisualShaderNodeGroupBase.init_method_is_valid_port_name();
    return _call_native_mb_ret(
      VisualShaderNodeGroupBase._bindings.method_is_valid_port_name,
      this._owner,
			Variant.Type.BOOL,
    
      _name
    );
    
  }
  add_input_port(_id, _type, _name) {
    VisualShaderNodeGroupBase.init_method_add_input_port();
    return _call_native_mb_no_ret(
      VisualShaderNodeGroupBase._bindings.method_add_input_port,
      this._owner,
      _id, _type, _name
    );
    
  }
  remove_input_port(_id) {
    VisualShaderNodeGroupBase.init_method_remove_input_port();
    return _call_native_mb_no_ret(
      VisualShaderNodeGroupBase._bindings.method_remove_input_port,
      this._owner,
      _id
    );
    
  }
  get_input_port_count() {
    VisualShaderNodeGroupBase.init_method_get_input_port_count();
    return _call_native_mb_ret(
      VisualShaderNodeGroupBase._bindings.method_get_input_port_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  has_input_port(_id) {
    VisualShaderNodeGroupBase.init_method_has_input_port();
    return _call_native_mb_ret(
      VisualShaderNodeGroupBase._bindings.method_has_input_port,
      this._owner,
			Variant.Type.BOOL,
    
      _id
    );
    
  }
  clear_input_ports() {
    VisualShaderNodeGroupBase.init_method_clear_input_ports();
    return _call_native_mb_no_ret(
      VisualShaderNodeGroupBase._bindings.method_clear_input_ports,
      this._owner,
      
    );
    
  }
  add_output_port(_id, _type, _name) {
    VisualShaderNodeGroupBase.init_method_add_output_port();
    return _call_native_mb_no_ret(
      VisualShaderNodeGroupBase._bindings.method_add_output_port,
      this._owner,
      _id, _type, _name
    );
    
  }
  remove_output_port(_id) {
    VisualShaderNodeGroupBase.init_method_remove_output_port();
    return _call_native_mb_no_ret(
      VisualShaderNodeGroupBase._bindings.method_remove_output_port,
      this._owner,
      _id
    );
    
  }
  get_output_port_count() {
    VisualShaderNodeGroupBase.init_method_get_output_port_count();
    return _call_native_mb_ret(
      VisualShaderNodeGroupBase._bindings.method_get_output_port_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  has_output_port(_id) {
    VisualShaderNodeGroupBase.init_method_has_output_port();
    return _call_native_mb_ret(
      VisualShaderNodeGroupBase._bindings.method_has_output_port,
      this._owner,
			Variant.Type.BOOL,
    
      _id
    );
    
  }
  clear_output_ports() {
    VisualShaderNodeGroupBase.init_method_clear_output_ports();
    return _call_native_mb_no_ret(
      VisualShaderNodeGroupBase._bindings.method_clear_output_ports,
      this._owner,
      
    );
    
  }
  set_input_port_name(_id, _name) {
    VisualShaderNodeGroupBase.init_method_set_input_port_name();
    return _call_native_mb_no_ret(
      VisualShaderNodeGroupBase._bindings.method_set_input_port_name,
      this._owner,
      _id, _name
    );
    
  }
  set_input_port_type(_id, _type) {
    VisualShaderNodeGroupBase.init_method_set_input_port_type();
    return _call_native_mb_no_ret(
      VisualShaderNodeGroupBase._bindings.method_set_input_port_type,
      this._owner,
      _id, _type
    );
    
  }
  set_output_port_name(_id, _name) {
    VisualShaderNodeGroupBase.init_method_set_output_port_name();
    return _call_native_mb_no_ret(
      VisualShaderNodeGroupBase._bindings.method_set_output_port_name,
      this._owner,
      _id, _name
    );
    
  }
  set_output_port_type(_id, _type) {
    VisualShaderNodeGroupBase.init_method_set_output_port_type();
    return _call_native_mb_no_ret(
      VisualShaderNodeGroupBase._bindings.method_set_output_port_type,
      this._owner,
      _id, _type
    );
    
  }
  get_free_input_port_id() {
    VisualShaderNodeGroupBase.init_method_get_free_input_port_id();
    return _call_native_mb_ret(
      VisualShaderNodeGroupBase._bindings.method_get_free_input_port_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_free_output_port_id() {
    VisualShaderNodeGroupBase.init_method_get_free_output_port_id();
    return _call_native_mb_ret(
      VisualShaderNodeGroupBase._bindings.method_get_free_output_port_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  

}