import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { Resource } from 'src/js_godot/classes/resource'
import { PackedFloat64Array } from 'src/js_godot/variant/packed_float64_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_buffer_view;
    method_set_buffer_view;
    method_get_byte_offset;
    method_set_byte_offset;
    method_get_component_type;
    method_set_component_type;
    method_get_normalized;
    method_set_normalized;
    method_get_count;
    method_set_count;
    method_get_accessor_type;
    method_set_accessor_type;
    method_get_type;
    method_set_type;
    method_get_min;
    method_set_min;
    method_get_max;
    method_set_max;
    method_get_sparse_count;
    method_set_sparse_count;
    method_get_sparse_indices_buffer_view;
    method_set_sparse_indices_buffer_view;
    method_get_sparse_indices_byte_offset;
    method_set_sparse_indices_byte_offset;
    method_get_sparse_indices_component_type;
    method_set_sparse_indices_component_type;
    method_get_sparse_values_buffer_view;
    method_set_sparse_values_buffer_view;
    method_get_sparse_values_byte_offset;
    method_set_sparse_values_byte_offset;
}


export class GLTFAccessor extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFAccessor");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("get_buffer_view");
        this._bindings.method_get_buffer_view = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("set_buffer_view");
        this._bindings.method_set_buffer_view = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("get_byte_offset");
        this._bindings.method_get_byte_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("set_byte_offset");
        this._bindings.method_set_byte_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("get_component_type");
        this._bindings.method_get_component_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("set_component_type");
        this._bindings.method_set_component_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("get_normalized");
        this._bindings.method_get_normalized = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2240911060
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("set_normalized");
        this._bindings.method_set_normalized = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("get_count");
        this._bindings.method_get_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("set_count");
        this._bindings.method_set_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("get_accessor_type");
        this._bindings.method_get_accessor_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          679305214
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("set_accessor_type");
        this._bindings.method_set_accessor_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2347728198
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("get_type");
        this._bindings.method_get_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("set_type");
        this._bindings.method_set_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("get_min");
        this._bindings.method_get_min = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          148677866
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("set_min");
        this._bindings.method_set_min = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2576592201
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("get_max");
        this._bindings.method_get_max = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          148677866
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("set_max");
        this._bindings.method_set_max = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2576592201
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("get_sparse_count");
        this._bindings.method_get_sparse_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("set_sparse_count");
        this._bindings.method_set_sparse_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("get_sparse_indices_buffer_view");
        this._bindings.method_get_sparse_indices_buffer_view = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("set_sparse_indices_buffer_view");
        this._bindings.method_set_sparse_indices_buffer_view = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("get_sparse_indices_byte_offset");
        this._bindings.method_get_sparse_indices_byte_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("set_sparse_indices_byte_offset");
        this._bindings.method_set_sparse_indices_byte_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("get_sparse_indices_component_type");
        this._bindings.method_get_sparse_indices_component_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("set_sparse_indices_component_type");
        this._bindings.method_set_sparse_indices_component_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("get_sparse_values_buffer_view");
        this._bindings.method_get_sparse_values_buffer_view = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("set_sparse_values_buffer_view");
        this._bindings.method_set_sparse_values_buffer_view = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("get_sparse_values_byte_offset");
        this._bindings.method_get_sparse_values_byte_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("GLTFAccessor");
        let methodname = new StringName("set_sparse_values_byte_offset");
        this._bindings.method_set_sparse_values_byte_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
  }
  get_buffer_view() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_buffer_view,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_buffer_view(_buffer_view) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_buffer_view,
      this._owner,
      _buffer_view
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
  get_component_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_component_type,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_component_type(_component_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_component_type,
      this._owner,
      _component_type
    );
    
  }
  get_normalized() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_normalized,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_normalized(_normalized) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_normalized,
      this._owner,
      _normalized
    );
    
  }
  get_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_count(_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_count,
      this._owner,
      _count
    );
    
  }
  get_accessor_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_accessor_type,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_accessor_type(_accessor_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_accessor_type,
      this._owner,
      _accessor_type
    );
    
  }
  get_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_type,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_type(_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_type,
      this._owner,
      _type
    );
    
  }
  get_min() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_min,
      this._owner,
			Variant.Type.PACKED_FLOAT64_ARRAY
    ,
      
    );
    
  }
  set_min(_min) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_min,
      this._owner,
      _min
    );
    
  }
  get_max() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max,
      this._owner,
			Variant.Type.PACKED_FLOAT64_ARRAY
    ,
      
    );
    
  }
  set_max(_max) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max,
      this._owner,
      _max
    );
    
  }
  get_sparse_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sparse_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_sparse_count(_sparse_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sparse_count,
      this._owner,
      _sparse_count
    );
    
  }
  get_sparse_indices_buffer_view() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sparse_indices_buffer_view,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_sparse_indices_buffer_view(_sparse_indices_buffer_view) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sparse_indices_buffer_view,
      this._owner,
      _sparse_indices_buffer_view
    );
    
  }
  get_sparse_indices_byte_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sparse_indices_byte_offset,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_sparse_indices_byte_offset(_sparse_indices_byte_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sparse_indices_byte_offset,
      this._owner,
      _sparse_indices_byte_offset
    );
    
  }
  get_sparse_indices_component_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sparse_indices_component_type,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_sparse_indices_component_type(_sparse_indices_component_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sparse_indices_component_type,
      this._owner,
      _sparse_indices_component_type
    );
    
  }
  get_sparse_values_buffer_view() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sparse_values_buffer_view,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_sparse_values_buffer_view(_sparse_values_buffer_view) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sparse_values_buffer_view,
      this._owner,
      _sparse_values_buffer_view
    );
    
  }
  get_sparse_values_byte_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sparse_values_byte_offset,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_sparse_values_byte_offset(_sparse_values_byte_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sparse_values_byte_offset,
      this._owner,
      _sparse_values_byte_offset
    );
    
  }
  static GLTFAccessorType = {
    TYPE_SCALAR: 0,
    TYPE_VEC2: 1,
    TYPE_VEC3: 2,
    TYPE_VEC4: 3,
    TYPE_MAT2: 4,
    TYPE_MAT3: 5,
    TYPE_MAT4: 6,
  }
}