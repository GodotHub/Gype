import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Container } from '@js_godot/classes/container'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_line_count;
  method_set_alignment;
  method_get_alignment;
  method_set_last_wrap_alignment;
  method_get_last_wrap_alignment;
  method_set_vertical;
  method_is_vertical;
  method_set_reverse_fill;
  method_is_reverse_fill;
}
export class FlowContainer extends Container{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("FlowContainer");
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
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("get_line_count");
      this._bindings.method_get_line_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("set_alignment");
      this._bindings.method_set_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        575250951
      );
    }
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("get_alignment");
      this._bindings.method_get_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3749743559
      );
    }
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("set_last_wrap_alignment");
      this._bindings.method_set_last_wrap_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2899697495
      );
    }
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("get_last_wrap_alignment");
      this._bindings.method_get_last_wrap_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3743456014
      );
    }
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("set_vertical");
      this._bindings.method_set_vertical = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("is_vertical");
      this._bindings.method_is_vertical = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("set_reverse_fill");
      this._bindings.method_set_reverse_fill = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("is_reverse_fill");
      this._bindings.method_is_reverse_fill = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  get_line_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_alignment(_alignment) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alignment,
      this._owner,
      _alignment
    );
    
  }
  get_alignment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alignment,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_last_wrap_alignment(_last_wrap_alignment) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_last_wrap_alignment,
      this._owner,
      _last_wrap_alignment
    );
    
  }
  get_last_wrap_alignment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_last_wrap_alignment,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_vertical(_vertical) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertical,
      this._owner,
      _vertical
    );
    
  }
  is_vertical() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_vertical,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_reverse_fill(_reverse_fill) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_reverse_fill,
      this._owner,
      _reverse_fill
    );
    
  }
  is_reverse_fill() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_reverse_fill,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  
get alignment () {
  return this.get_alignment();
}
set alignment (new_value) {
  this.set_alignment(new_value);
}
get last_wrap_alignment () {
  return this.get_last_wrap_alignment();
}
set last_wrap_alignment (new_value) {
  this.set_last_wrap_alignment(new_value);
}
get vertical () {
  return this.is_vertical();
}
set vertical (new_value) {
  this.set_vertical(new_value);
}
get reverse_fill () {
  return this.is_reverse_fill();
}
set reverse_fill (new_value) {
  this.set_reverse_fill(new_value);
}

  static AlignmentMode = {
    ALIGNMENT_BEGIN: 0,
    ALIGNMENT_CENTER: 1,
    ALIGNMENT_END: 2,
  }
  static LastWrapAlignmentMode = {
    LAST_WRAP_ALIGNMENT_INHERIT: 0,
    LAST_WRAP_ALIGNMENT_BEGIN: 1,
    LAST_WRAP_ALIGNMENT_CENTER: 2,
    LAST_WRAP_ALIGNMENT_END: 3,
  }

  static {
    this._init_bindings();
  }
}