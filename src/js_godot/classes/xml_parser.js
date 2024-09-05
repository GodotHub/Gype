import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
import { Variant } from '@js_godot/variant/variant'
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_read;
  method_get_node_type;
  method_get_node_name;
  method_get_node_data;
  method_get_node_offset;
  method_get_attribute_count;
  method_get_attribute_name;
  method_get_attribute_value;
  method_has_attribute;
  method_get_named_attribute_value;
  method_get_named_attribute_value_safe;
  method_is_empty;
  method_get_current_line;
  method_skip_section;
  method_seek;
  method_open;
  method_open_buffer;
}
export class XMLParser extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("XMLParser");
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
      let classname = new StringName("XMLParser");
      let methodname = new StringName("read");
      this._bindings.method_read = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        166280745
      );
    }
    {
      let classname = new StringName("XMLParser");
      let methodname = new StringName("get_node_type");
      this._bindings.method_get_node_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2984359541
      );
    }
    {
      let classname = new StringName("XMLParser");
      let methodname = new StringName("get_node_name");
      this._bindings.method_get_node_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("XMLParser");
      let methodname = new StringName("get_node_data");
      this._bindings.method_get_node_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("XMLParser");
      let methodname = new StringName("get_node_offset");
      this._bindings.method_get_node_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("XMLParser");
      let methodname = new StringName("get_attribute_count");
      this._bindings.method_get_attribute_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("XMLParser");
      let methodname = new StringName("get_attribute_name");
      this._bindings.method_get_attribute_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("XMLParser");
      let methodname = new StringName("get_attribute_value");
      this._bindings.method_get_attribute_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("XMLParser");
      let methodname = new StringName("has_attribute");
      this._bindings.method_has_attribute = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3927539163
      );
    }
    {
      let classname = new StringName("XMLParser");
      let methodname = new StringName("get_named_attribute_value");
      this._bindings.method_get_named_attribute_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3135753539
      );
    }
    {
      let classname = new StringName("XMLParser");
      let methodname = new StringName("get_named_attribute_value_safe");
      this._bindings.method_get_named_attribute_value_safe = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3135753539
      );
    }
    {
      let classname = new StringName("XMLParser");
      let methodname = new StringName("is_empty");
      this._bindings.method_is_empty = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("XMLParser");
      let methodname = new StringName("get_current_line");
      this._bindings.method_get_current_line = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("XMLParser");
      let methodname = new StringName("skip_section");
      this._bindings.method_skip_section = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("XMLParser");
      let methodname = new StringName("seek");
      this._bindings.method_seek = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844576869
      );
    }
    {
      let classname = new StringName("XMLParser");
      let methodname = new StringName("open");
      this._bindings.method_open = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        166001499
      );
    }
    {
      let classname = new StringName("XMLParser");
      let methodname = new StringName("open_buffer");
      this._bindings.method_open_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        680677267
      );
    }
  }
  
  read() {
    return _call_native_mb_ret(
      XMLParser._bindings.method_read,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_node_type() {
    return _call_native_mb_ret(
      XMLParser._bindings.method_get_node_type,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_node_name() {
    return _call_native_mb_ret(
      XMLParser._bindings.method_get_node_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_node_data() {
    return _call_native_mb_ret(
      XMLParser._bindings.method_get_node_data,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_node_offset() {
    return _call_native_mb_ret(
      XMLParser._bindings.method_get_node_offset,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_attribute_count() {
    return _call_native_mb_ret(
      XMLParser._bindings.method_get_attribute_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_attribute_name(_idx) {
    return _call_native_mb_ret(
      XMLParser._bindings.method_get_attribute_name,
      this._owner,
			Variant.Type.STRING,
    
      _idx
    );
    
  }
  get_attribute_value(_idx) {
    return _call_native_mb_ret(
      XMLParser._bindings.method_get_attribute_value,
      this._owner,
			Variant.Type.STRING,
    
      _idx
    );
    
  }
  has_attribute(_name) {
    return _call_native_mb_ret(
      XMLParser._bindings.method_has_attribute,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  get_named_attribute_value(_name) {
    return _call_native_mb_ret(
      XMLParser._bindings.method_get_named_attribute_value,
      this._owner,
			Variant.Type.STRING,
    
      _name
    );
    
  }
  get_named_attribute_value_safe(_name) {
    return _call_native_mb_ret(
      XMLParser._bindings.method_get_named_attribute_value_safe,
      this._owner,
			Variant.Type.STRING,
    
      _name
    );
    
  }
  is_empty() {
    return _call_native_mb_ret(
      XMLParser._bindings.method_is_empty,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_current_line() {
    return _call_native_mb_ret(
      XMLParser._bindings.method_get_current_line,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  skip_section() {
    return _call_native_mb_no_ret(
      XMLParser._bindings.method_skip_section,
      this._owner,
      
    );
    
  }
  seek(_position) {
    return _call_native_mb_ret(
      XMLParser._bindings.method_seek,
      this._owner,
			Variant.INT,
      _position
    );
    
  }
  open(_file) {
    return _call_native_mb_ret(
      XMLParser._bindings.method_open,
      this._owner,
			Variant.INT,
      _file
    );
    
  }
  open_buffer(_buffer) {
    return _call_native_mb_ret(
      XMLParser._bindings.method_open_buffer,
      this._owner,
			Variant.INT,
      _buffer
    );
    
  }
  

  static NodeType = {
    NODE_NONE: 0,
    NODE_ELEMENT: 1,
    NODE_ELEMENT_END: 2,
    NODE_TEXT: 3,
    NODE_COMMENT: 4,
    NODE_CDATA: 5,
    NODE_UNKNOWN: 6,
  }

  static {
    this._init_bindings();
  }
}