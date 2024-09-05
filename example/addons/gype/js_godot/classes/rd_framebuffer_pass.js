import * as internal from '__internal__';
import { PackedInt32Array } from '@js_godot/variant/packed_int32_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_color_attachments;
  method_get_color_attachments;
  method_set_input_attachments;
  method_get_input_attachments;
  method_set_resolve_attachments;
  method_get_resolve_attachments;
  method_set_preserve_attachments;
  method_get_preserve_attachments;
  method_set_depth_attachment;
  method_get_depth_attachment;
}
export class RDFramebufferPass extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RDFramebufferPass");
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
      let classname = new StringName("RDFramebufferPass");
      let methodname = new StringName("set_color_attachments");
      this._bindings.method_set_color_attachments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3614634198
      );
    }
    {
      let classname = new StringName("RDFramebufferPass");
      let methodname = new StringName("get_color_attachments");
      this._bindings.method_get_color_attachments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1930428628
      );
    }
    {
      let classname = new StringName("RDFramebufferPass");
      let methodname = new StringName("set_input_attachments");
      this._bindings.method_set_input_attachments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3614634198
      );
    }
    {
      let classname = new StringName("RDFramebufferPass");
      let methodname = new StringName("get_input_attachments");
      this._bindings.method_get_input_attachments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1930428628
      );
    }
    {
      let classname = new StringName("RDFramebufferPass");
      let methodname = new StringName("set_resolve_attachments");
      this._bindings.method_set_resolve_attachments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3614634198
      );
    }
    {
      let classname = new StringName("RDFramebufferPass");
      let methodname = new StringName("get_resolve_attachments");
      this._bindings.method_get_resolve_attachments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1930428628
      );
    }
    {
      let classname = new StringName("RDFramebufferPass");
      let methodname = new StringName("set_preserve_attachments");
      this._bindings.method_set_preserve_attachments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3614634198
      );
    }
    {
      let classname = new StringName("RDFramebufferPass");
      let methodname = new StringName("get_preserve_attachments");
      this._bindings.method_get_preserve_attachments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1930428628
      );
    }
    {
      let classname = new StringName("RDFramebufferPass");
      let methodname = new StringName("set_depth_attachment");
      this._bindings.method_set_depth_attachment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("RDFramebufferPass");
      let methodname = new StringName("get_depth_attachment");
      this._bindings.method_get_depth_attachment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  
  set_color_attachments(_p_member) {
    return _call_native_mb_no_ret(
      RDFramebufferPass._bindings.method_set_color_attachments,
      this._owner,
      _p_member
    );
    
  }
  get_color_attachments() {
    return _call_native_mb_ret(
      RDFramebufferPass._bindings.method_get_color_attachments,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_input_attachments(_p_member) {
    return _call_native_mb_no_ret(
      RDFramebufferPass._bindings.method_set_input_attachments,
      this._owner,
      _p_member
    );
    
  }
  get_input_attachments() {
    return _call_native_mb_ret(
      RDFramebufferPass._bindings.method_get_input_attachments,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_resolve_attachments(_p_member) {
    return _call_native_mb_no_ret(
      RDFramebufferPass._bindings.method_set_resolve_attachments,
      this._owner,
      _p_member
    );
    
  }
  get_resolve_attachments() {
    return _call_native_mb_ret(
      RDFramebufferPass._bindings.method_get_resolve_attachments,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_preserve_attachments(_p_member) {
    return _call_native_mb_no_ret(
      RDFramebufferPass._bindings.method_set_preserve_attachments,
      this._owner,
      _p_member
    );
    
  }
  get_preserve_attachments() {
    return _call_native_mb_ret(
      RDFramebufferPass._bindings.method_get_preserve_attachments,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_depth_attachment(_p_member) {
    return _call_native_mb_no_ret(
      RDFramebufferPass._bindings.method_set_depth_attachment,
      this._owner,
      _p_member
    );
    
  }
  get_depth_attachment() {
    return _call_native_mb_ret(
      RDFramebufferPass._bindings.method_get_depth_attachment,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  
get color_attachments () {
  return this.get_color_attachments();
}
set color_attachments (new_value) {
  this.set_color_attachments(new_value);
}
get input_attachments () {
  return this.get_input_attachments();
}
set input_attachments (new_value) {
  this.set_input_attachments(new_value);
}
get resolve_attachments () {
  return this.get_resolve_attachments();
}
set resolve_attachments (new_value) {
  this.set_resolve_attachments(new_value);
}
get preserve_attachments () {
  return this.get_preserve_attachments();
}
set preserve_attachments (new_value) {
  this.set_preserve_attachments(new_value);
}
get depth_attachment () {
  return this.get_depth_attachment();
}
set depth_attachment (new_value) {
  this.set_depth_attachment(new_value);
}


  static {
    this._init_bindings();
  }
}