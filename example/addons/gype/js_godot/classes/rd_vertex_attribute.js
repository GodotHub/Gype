import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_location;
  method_get_location;
  method_set_offset;
  method_get_offset;
  method_set_format;
  method_get_format;
  method_set_stride;
  method_get_stride;
  method_set_frequency;
  method_get_frequency;
}
@GodotClass
export class RDVertexAttribute extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDVertexAttribute");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_location() {
    if (!this._bindings.method_set_location) {
      let classname = new StringName("RDVertexAttribute");
      let methodname = new StringName("set_location");
      this._bindings.method_set_location = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_location() {
    if (!this._bindings.method_get_location) {
      let classname = new StringName("RDVertexAttribute");
      let methodname = new StringName("get_location");
      this._bindings.method_get_location = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_offset() {
    if (!this._bindings.method_set_offset) {
      let classname = new StringName("RDVertexAttribute");
      let methodname = new StringName("set_offset");
      this._bindings.method_set_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_offset() {
    if (!this._bindings.method_get_offset) {
      let classname = new StringName("RDVertexAttribute");
      let methodname = new StringName("get_offset");
      this._bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_format() {
    if (!this._bindings.method_set_format) {
      let classname = new StringName("RDVertexAttribute");
      let methodname = new StringName("set_format");
      this._bindings.method_set_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        565531219
      );
    }
  }
  static init_method_get_format() {
    if (!this._bindings.method_get_format) {
      let classname = new StringName("RDVertexAttribute");
      let methodname = new StringName("get_format");
      this._bindings.method_get_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2235804183
      );
    }
  }
  static init_method_set_stride() {
    if (!this._bindings.method_set_stride) {
      let classname = new StringName("RDVertexAttribute");
      let methodname = new StringName("set_stride");
      this._bindings.method_set_stride = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_stride() {
    if (!this._bindings.method_get_stride) {
      let classname = new StringName("RDVertexAttribute");
      let methodname = new StringName("get_stride");
      this._bindings.method_get_stride = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_frequency() {
    if (!this._bindings.method_set_frequency) {
      let classname = new StringName("RDVertexAttribute");
      let methodname = new StringName("set_frequency");
      this._bindings.method_set_frequency = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        522141836
      );
    }
  }
  static init_method_get_frequency() {
    if (!this._bindings.method_get_frequency) {
      let classname = new StringName("RDVertexAttribute");
      let methodname = new StringName("get_frequency");
      this._bindings.method_get_frequency = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4154106413
      );
    }
  }

  
  
  set_location(_p_member) {
    RDVertexAttribute.init_method_set_location();
    return _call_native_mb_no_ret(
      RDVertexAttribute._bindings.method_set_location,
      this._owner,
      _p_member
    );
    
  }
  get_location() {
    RDVertexAttribute.init_method_get_location();
    return _call_native_mb_ret(
      RDVertexAttribute._bindings.method_get_location,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_offset(_p_member) {
    RDVertexAttribute.init_method_set_offset();
    return _call_native_mb_no_ret(
      RDVertexAttribute._bindings.method_set_offset,
      this._owner,
      _p_member
    );
    
  }
  get_offset() {
    RDVertexAttribute.init_method_get_offset();
    return _call_native_mb_ret(
      RDVertexAttribute._bindings.method_get_offset,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_format(_p_member) {
    RDVertexAttribute.init_method_set_format();
    return _call_native_mb_no_ret(
      RDVertexAttribute._bindings.method_set_format,
      this._owner,
      _p_member
    );
    
  }
  get_format() {
    RDVertexAttribute.init_method_get_format();
    return _call_native_mb_ret(
      RDVertexAttribute._bindings.method_get_format,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_stride(_p_member) {
    RDVertexAttribute.init_method_set_stride();
    return _call_native_mb_no_ret(
      RDVertexAttribute._bindings.method_set_stride,
      this._owner,
      _p_member
    );
    
  }
  get_stride() {
    RDVertexAttribute.init_method_get_stride();
    return _call_native_mb_ret(
      RDVertexAttribute._bindings.method_get_stride,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_frequency(_p_member) {
    RDVertexAttribute.init_method_set_frequency();
    return _call_native_mb_no_ret(
      RDVertexAttribute._bindings.method_set_frequency,
      this._owner,
      _p_member
    );
    
  }
  get_frequency() {
    RDVertexAttribute.init_method_get_frequency();
    return _call_native_mb_ret(
      RDVertexAttribute._bindings.method_get_frequency,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get location () {
  return this.get_location();
}
set location (new_value) {
  this.set_location(new_value);
}
get offset () {
  return this.get_offset();
}
set offset (new_value) {
  this.set_offset(new_value);
}
get format () {
  return this.get_format();
}
set format (new_value) {
  this.set_format(new_value);
}
get stride () {
  return this.get_stride();
}
set stride (new_value) {
  this.set_stride(new_value);
}
get frequency () {
  return this.get_frequency();
}
set frequency (new_value) {
  this.set_frequency(new_value);
}

}