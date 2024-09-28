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
  method_load_buffer_view_data;
  method_get_buffer;
  method_set_buffer;
  method_get_byte_offset;
  method_set_byte_offset;
  method_get_byte_length;
  method_set_byte_length;
  method_get_byte_stride;
  method_set_byte_stride;
  method_get_indices;
  method_set_indices;
  method_get_vertex_attributes;
  method_set_vertex_attributes;
}
@GodotClass
export class GLTFBufferView extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFBufferView");
    } else {
      super(godot_object);
    }
  }
  static init_method_load_buffer_view_data() {
    if (!this._bindings.method_load_buffer_view_data) {
      let classname = new StringName("GLTFBufferView");
      let methodname = new StringName("load_buffer_view_data");
      this._bindings.method_load_buffer_view_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3945446907
      );
    }
  }
  static init_method_get_buffer() {
    if (!this._bindings.method_get_buffer) {
      let classname = new StringName("GLTFBufferView");
      let methodname = new StringName("get_buffer");
      this._bindings.method_get_buffer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_buffer() {
    if (!this._bindings.method_set_buffer) {
      let classname = new StringName("GLTFBufferView");
      let methodname = new StringName("set_buffer");
      this._bindings.method_set_buffer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_byte_offset() {
    if (!this._bindings.method_get_byte_offset) {
      let classname = new StringName("GLTFBufferView");
      let methodname = new StringName("get_byte_offset");
      this._bindings.method_get_byte_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_byte_offset() {
    if (!this._bindings.method_set_byte_offset) {
      let classname = new StringName("GLTFBufferView");
      let methodname = new StringName("set_byte_offset");
      this._bindings.method_set_byte_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_byte_length() {
    if (!this._bindings.method_get_byte_length) {
      let classname = new StringName("GLTFBufferView");
      let methodname = new StringName("get_byte_length");
      this._bindings.method_get_byte_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_byte_length() {
    if (!this._bindings.method_set_byte_length) {
      let classname = new StringName("GLTFBufferView");
      let methodname = new StringName("set_byte_length");
      this._bindings.method_set_byte_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_byte_stride() {
    if (!this._bindings.method_get_byte_stride) {
      let classname = new StringName("GLTFBufferView");
      let methodname = new StringName("get_byte_stride");
      this._bindings.method_get_byte_stride = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_byte_stride() {
    if (!this._bindings.method_set_byte_stride) {
      let classname = new StringName("GLTFBufferView");
      let methodname = new StringName("set_byte_stride");
      this._bindings.method_set_byte_stride = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_indices() {
    if (!this._bindings.method_get_indices) {
      let classname = new StringName("GLTFBufferView");
      let methodname = new StringName("get_indices");
      this._bindings.method_get_indices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_indices() {
    if (!this._bindings.method_set_indices) {
      let classname = new StringName("GLTFBufferView");
      let methodname = new StringName("set_indices");
      this._bindings.method_set_indices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_vertex_attributes() {
    if (!this._bindings.method_get_vertex_attributes) {
      let classname = new StringName("GLTFBufferView");
      let methodname = new StringName("get_vertex_attributes");
      this._bindings.method_get_vertex_attributes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_vertex_attributes() {
    if (!this._bindings.method_set_vertex_attributes) {
      let classname = new StringName("GLTFBufferView");
      let methodname = new StringName("set_vertex_attributes");
      this._bindings.method_set_vertex_attributes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }

  
  
  load_buffer_view_data(_state) {
    GLTFBufferView.init_method_load_buffer_view_data();
    return _call_native_mb_ret(
      GLTFBufferView._bindings.method_load_buffer_view_data,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _state
    );
    
  }
  get_buffer() {
    GLTFBufferView.init_method_get_buffer();
    return _call_native_mb_ret(
      GLTFBufferView._bindings.method_get_buffer,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_buffer(_buffer) {
    GLTFBufferView.init_method_set_buffer();
    return _call_native_mb_no_ret(
      GLTFBufferView._bindings.method_set_buffer,
      this._owner,
      _buffer
    );
    
  }
  get_byte_offset() {
    GLTFBufferView.init_method_get_byte_offset();
    return _call_native_mb_ret(
      GLTFBufferView._bindings.method_get_byte_offset,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_byte_offset(_byte_offset) {
    GLTFBufferView.init_method_set_byte_offset();
    return _call_native_mb_no_ret(
      GLTFBufferView._bindings.method_set_byte_offset,
      this._owner,
      _byte_offset
    );
    
  }
  get_byte_length() {
    GLTFBufferView.init_method_get_byte_length();
    return _call_native_mb_ret(
      GLTFBufferView._bindings.method_get_byte_length,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_byte_length(_byte_length) {
    GLTFBufferView.init_method_set_byte_length();
    return _call_native_mb_no_ret(
      GLTFBufferView._bindings.method_set_byte_length,
      this._owner,
      _byte_length
    );
    
  }
  get_byte_stride() {
    GLTFBufferView.init_method_get_byte_stride();
    return _call_native_mb_ret(
      GLTFBufferView._bindings.method_get_byte_stride,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_byte_stride(_byte_stride) {
    GLTFBufferView.init_method_set_byte_stride();
    return _call_native_mb_no_ret(
      GLTFBufferView._bindings.method_set_byte_stride,
      this._owner,
      _byte_stride
    );
    
  }
  get_indices() {
    GLTFBufferView.init_method_get_indices();
    return _call_native_mb_ret(
      GLTFBufferView._bindings.method_get_indices,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_indices(_indices) {
    GLTFBufferView.init_method_set_indices();
    return _call_native_mb_no_ret(
      GLTFBufferView._bindings.method_set_indices,
      this._owner,
      _indices
    );
    
  }
  get_vertex_attributes() {
    GLTFBufferView.init_method_get_vertex_attributes();
    return _call_native_mb_ret(
      GLTFBufferView._bindings.method_get_vertex_attributes,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_vertex_attributes(_is_attributes) {
    GLTFBufferView.init_method_set_vertex_attributes();
    return _call_native_mb_no_ret(
      GLTFBufferView._bindings.method_set_vertex_attributes,
      this._owner,
      _is_attributes
    );
    
  }
  
get buffer () {
  return this.get_buffer();
}
set buffer (new_value) {
  this.set_buffer(new_value);
}
get byte_offset () {
  return this.get_byte_offset();
}
set byte_offset (new_value) {
  this.set_byte_offset(new_value);
}
get byte_length () {
  return this.get_byte_length();
}
set byte_length (new_value) {
  this.set_byte_length(new_value);
}
get byte_stride () {
  return this.get_byte_stride();
}
set byte_stride (new_value) {
  this.set_byte_stride(new_value);
}
get indices () {
  return this.get_indices();
}
set indices (new_value) {
  this.set_indices(new_value);
}
get vertex_attributes () {
  return this.get_vertex_attributes();
}
set vertex_attributes (new_value) {
  this.set_vertex_attributes(new_value);
}

}