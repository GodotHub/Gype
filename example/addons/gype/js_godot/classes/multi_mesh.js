import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Transform3D } from '@js_godot/variant/transform3d'
import { Resource } from '@js_godot/classes/resource'
import { StringName } from '@js_godot/variant/string_name'
import { AABB } from '@js_godot/variant/aabb'
import { Color } from '@js_godot/variant/color'
import { PackedFloat32Array } from '@js_godot/variant/packed_float32_array'
import { Transform2D } from '@js_godot/variant/transform2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_mesh;
  method_get_mesh;
  method_set_use_colors;
  method_is_using_colors;
  method_set_use_custom_data;
  method_is_using_custom_data;
  method_set_transform_format;
  method_get_transform_format;
  method_set_instance_count;
  method_get_instance_count;
  method_set_visible_instance_count;
  method_get_visible_instance_count;
  method_set_instance_transform;
  method_set_instance_transform_2d;
  method_get_instance_transform;
  method_get_instance_transform_2d;
  method_set_instance_color;
  method_get_instance_color;
  method_set_instance_custom_data;
  method_get_instance_custom_data;
  method_set_custom_aabb;
  method_get_custom_aabb;
  method_get_aabb;
  method_get_buffer;
  method_set_buffer;
}
export class MultiMesh extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MultiMesh");
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
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("set_mesh");
      this._bindings.method_set_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        194775623
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("get_mesh");
      this._bindings.method_get_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1808005922
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("set_use_colors");
      this._bindings.method_set_use_colors = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("is_using_colors");
      this._bindings.method_is_using_colors = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("set_use_custom_data");
      this._bindings.method_set_use_custom_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("is_using_custom_data");
      this._bindings.method_is_using_custom_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("set_transform_format");
      this._bindings.method_set_transform_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2404750322
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("get_transform_format");
      this._bindings.method_get_transform_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2444156481
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("set_instance_count");
      this._bindings.method_set_instance_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("get_instance_count");
      this._bindings.method_get_instance_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("set_visible_instance_count");
      this._bindings.method_set_visible_instance_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("get_visible_instance_count");
      this._bindings.method_get_visible_instance_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("set_instance_transform");
      this._bindings.method_set_instance_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3616898986
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("set_instance_transform_2d");
      this._bindings.method_set_instance_transform_2d = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        30160968
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("get_instance_transform");
      this._bindings.method_get_instance_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1965739696
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("get_instance_transform_2d");
      this._bindings.method_get_instance_transform_2d = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3836996910
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("set_instance_color");
      this._bindings.method_set_instance_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2878471219
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("get_instance_color");
      this._bindings.method_get_instance_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3457211756
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("set_instance_custom_data");
      this._bindings.method_set_instance_custom_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2878471219
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("get_instance_custom_data");
      this._bindings.method_get_instance_custom_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3457211756
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("set_custom_aabb");
      this._bindings.method_set_custom_aabb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        259215842
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("get_custom_aabb");
      this._bindings.method_get_custom_aabb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1068685055
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("get_aabb");
      this._bindings.method_get_aabb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1068685055
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("get_buffer");
      this._bindings.method_get_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        675695659
      );
    }
    {
      let classname = new StringName("MultiMesh");
      let methodname = new StringName("set_buffer");
      this._bindings.method_set_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2899603908
      );
    }
  }
  set_mesh(_mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mesh,
      this._owner,
      _mesh
    );
    
  }
  get_mesh() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mesh,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_use_colors(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_colors,
      this._owner,
      _enable
    );
    
  }
  is_using_colors() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_using_colors,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_use_custom_data(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_custom_data,
      this._owner,
      _enable
    );
    
  }
  is_using_custom_data() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_using_custom_data,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_transform_format(_format) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_transform_format,
      this._owner,
      _format
    );
    
  }
  get_transform_format() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transform_format,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_instance_count(_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_instance_count,
      this._owner,
      _count
    );
    
  }
  get_instance_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_instance_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_visible_instance_count(_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visible_instance_count,
      this._owner,
      _count
    );
    
  }
  get_visible_instance_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visible_instance_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_instance_transform(_instance, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_instance_transform,
      this._owner,
      _instance, _transform
    );
    
  }
  set_instance_transform_2d(_instance, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_instance_transform_2d,
      this._owner,
      _instance, _transform
    );
    
  }
  get_instance_transform(_instance) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_instance_transform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      _instance
    );
    
  }
  get_instance_transform_2d(_instance) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_instance_transform_2d,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      _instance
    );
    
  }
  set_instance_color(_instance, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_instance_color,
      this._owner,
      _instance, _color
    );
    
  }
  get_instance_color(_instance) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_instance_color,
      this._owner,
			Variant.Type.COLOR,
    
      _instance
    );
    
  }
  set_instance_custom_data(_instance, _custom_data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_instance_custom_data,
      this._owner,
      _instance, _custom_data
    );
    
  }
  get_instance_custom_data(_instance) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_instance_custom_data,
      this._owner,
			Variant.Type.COLOR,
    
      _instance
    );
    
  }
  set_custom_aabb(_aabb) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_custom_aabb,
      this._owner,
      _aabb
    );
    
  }
  get_custom_aabb() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_custom_aabb,
      this._owner,
			Variant.Type.AABB,
    
      
    );
    
  }
  get_aabb() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_aabb,
      this._owner,
			Variant.Type.AABB,
    
      
    );
    
  }
  get_buffer() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_buffer,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY,
    
      
    );
    
  }
  set_buffer(_buffer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_buffer,
      this._owner,
      _buffer
    );
    
  }
  
get transform_format () {
  return this.get_transform_format();
}
set transform_format (new_value) {
  this.set_transform_format(new_value);
}
get use_colors () {
  return this.is_using_colors();
}
set use_colors (new_value) {
  this.set_use_colors(new_value);
}
get use_custom_data () {
  return this.is_using_custom_data();
}
set use_custom_data (new_value) {
  this.set_use_custom_data(new_value);
}
get custom_aabb () {
  return this.get_custom_aabb();
}
set custom_aabb (new_value) {
  this.set_custom_aabb(new_value);
}
get instance_count () {
  return this.get_instance_count();
}
set instance_count (new_value) {
  this.set_instance_count(new_value);
}
get visible_instance_count () {
  return this.get_visible_instance_count();
}
set visible_instance_count (new_value) {
  this.set_visible_instance_count(new_value);
}
get mesh () {
  return this.get_mesh();
}
set mesh (new_value) {
  this.set_mesh(new_value);
}
get buffer () {
  return this.get_buffer();
}
set buffer (new_value) {
  this.set_buffer(new_value);
}
get transform_array () {
  return this._get_transform_array();
}
set transform_array (new_value) {
  this._set_transform_array(new_value);
}
get transform_2d_array () {
  return this._get_transform_2d_array();
}
set transform_2d_array (new_value) {
  this._set_transform_2d_array(new_value);
}
get color_array () {
  return this._get_color_array();
}
set color_array (new_value) {
  this._set_color_array(new_value);
}
get custom_data_array () {
  return this._get_custom_data_array();
}
set custom_data_array (new_value) {
  this._set_custom_data_array(new_value);
}

  static TransformFormat = {
    TRANSFORM_2D: 0,
    TRANSFORM_3D: 1,
  }

  static {
    this._init_bindings();
  }
}