import * as internal from '__internal__';
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import { Resource } from 'src/js_godot/classes/resource'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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


export class GLTFBufferView extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFBufferView");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("GLTFBufferView");
        let methodname = new StringName("load_buffer_view_data");
        this._bindings.method_load_buffer_view_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3945446907
        );
      }
      {
        let classname = new StringName("GLTFBufferView");
        let methodname = new StringName("get_buffer");
        this._bindings.method_get_buffer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("GLTFBufferView");
        let methodname = new StringName("set_buffer");
        this._bindings.method_set_buffer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GLTFBufferView");
        let methodname = new StringName("get_byte_offset");
        this._bindings.method_get_byte_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("GLTFBufferView");
        let methodname = new StringName("set_byte_offset");
        this._bindings.method_set_byte_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GLTFBufferView");
        let methodname = new StringName("get_byte_length");
        this._bindings.method_get_byte_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("GLTFBufferView");
        let methodname = new StringName("set_byte_length");
        this._bindings.method_set_byte_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GLTFBufferView");
        let methodname = new StringName("get_byte_stride");
        this._bindings.method_get_byte_stride = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("GLTFBufferView");
        let methodname = new StringName("set_byte_stride");
        this._bindings.method_set_byte_stride = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GLTFBufferView");
        let methodname = new StringName("get_indices");
        this._bindings.method_get_indices = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("GLTFBufferView");
        let methodname = new StringName("set_indices");
        this._bindings.method_set_indices = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("GLTFBufferView");
        let methodname = new StringName("get_vertex_attributes");
        this._bindings.method_get_vertex_attributes = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_buffer_view_data,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY
    ,
      _state
    );
    
  }
  get_buffer() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_buffer,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_buffer(_buffer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_buffer,
      this._owner,
      _buffer
    );
    
  }
  get_byte_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_byte_offset,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_byte_offset(_byte_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_byte_offset,
      this._owner,
      _byte_offset
    );
    
  }
  get_byte_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_byte_length,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_byte_length(_byte_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_byte_length,
      this._owner,
      _byte_length
    );
    
  }
  get_byte_stride() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_byte_stride,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_byte_stride(_byte_stride) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_byte_stride,
      this._owner,
      _byte_stride
    );
    
  }
  get_indices() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_indices,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_indices(_indices) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_indices,
      this._owner,
      _indices
    );
    
  }
  get_vertex_attributes() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertex_attributes,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_vertex_attributes(_is_attributes) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertex_attributes,
      this._owner,
      _is_attributes
    );
    
  }
}