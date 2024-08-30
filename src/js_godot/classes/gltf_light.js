import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classes/resource'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { Variant } from 'src/js_godot/variant/variant'
import { Color } from 'src/js_godot/variant/color'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_from_node;
    method_to_node;
    method_from_dictionary;
    method_to_dictionary;
    method_get_color;
    method_set_color;
    method_get_intensity;
    method_set_intensity;
    method_get_light_type;
    method_set_light_type;
    method_get_range;
    method_set_range;
    method_get_inner_cone_angle;
    method_set_inner_cone_angle;
    method_get_outer_cone_angle;
    method_set_outer_cone_angle;
    method_get_additional_data;
    method_set_additional_data;
}


export class GLTFLight extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFLight");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("from_node");
        this._bindings.method_from_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3907677874
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("to_node");
        this._bindings.method_to_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2040811672
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("from_dictionary");
        this._bindings.method_from_dictionary = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4057087208
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("to_dictionary");
        this._bindings.method_to_dictionary = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3102165223
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("get_color");
        this._bindings.method_get_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3200896285
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("set_color");
        this._bindings.method_set_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("get_intensity");
        this._bindings.method_get_intensity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          191475506
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("set_intensity");
        this._bindings.method_set_intensity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("get_light_type");
        this._bindings.method_get_light_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2841200299
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("set_light_type");
        this._bindings.method_set_light_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("get_range");
        this._bindings.method_get_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          191475506
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("set_range");
        this._bindings.method_set_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("get_inner_cone_angle");
        this._bindings.method_get_inner_cone_angle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          191475506
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("set_inner_cone_angle");
        this._bindings.method_set_inner_cone_angle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("get_outer_cone_angle");
        this._bindings.method_get_outer_cone_angle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          191475506
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("set_outer_cone_angle");
        this._bindings.method_set_outer_cone_angle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("get_additional_data");
        this._bindings.method_get_additional_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2138907829
        );
      }
      {
        let classname = new StringName("GLTFLight");
        let methodname = new StringName("set_additional_data");
        this._bindings.method_set_additional_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3776071444
        );
      }
  }
  from_node(_light_node) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_from_node,
      this._owner,
			Variant.INT,
      _light_node
    );
    
  }
  to_node() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_to_node,
      this._owner,
			Variant.INT,
      
    );
    
  }
  from_dictionary(_dictionary) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_from_dictionary,
      this._owner,
			Variant.INT,
      _dictionary
    );
    
  }
  to_dictionary() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_to_dictionary,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
    
  }
  get_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_color,
      this._owner,
      _color
    );
    
  }
  get_intensity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_intensity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_intensity(_intensity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_intensity,
      this._owner,
      _intensity
    );
    
  }
  get_light_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_light_type,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  set_light_type(_light_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_light_type,
      this._owner,
      _light_type
    );
    
  }
  get_range() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_range,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_range(_range) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_range,
      this._owner,
      _range
    );
    
  }
  get_inner_cone_angle() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_inner_cone_angle,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_inner_cone_angle(_inner_cone_angle) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_inner_cone_angle,
      this._owner,
      _inner_cone_angle
    );
    
  }
  get_outer_cone_angle() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_outer_cone_angle,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_outer_cone_angle(_outer_cone_angle) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_outer_cone_angle,
      this._owner,
      _outer_cone_angle
    );
    
  }
  get_additional_data(_extension_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_additional_data,
      this._owner,
			Variant.Type.VARIANT
    ,
      _extension_name
    );
    
  }
  set_additional_data(_extension_name, _additional_data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_additional_data,
      this._owner,
      _extension_name, _additional_data
    );
    
  }
}