import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFLight");
    } else {
      super(godot_object);
    }
  }
  static init_method_from_node() {
    if (!this.#_bindings.method_from_node) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("from_node");
      this.#_bindings.method_from_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3907677874
      );
    }
  }
  static init_method_to_node() {
    if (!this.#_bindings.method_to_node) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("to_node");
      this.#_bindings.method_to_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2040811672
      );
    }
  }
  static init_method_from_dictionary() {
    if (!this.#_bindings.method_from_dictionary) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("from_dictionary");
      this.#_bindings.method_from_dictionary = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4057087208
      );
    }
  }
  static init_method_to_dictionary() {
    if (!this.#_bindings.method_to_dictionary) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("to_dictionary");
      this.#_bindings.method_to_dictionary = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3102165223
      );
    }
  }
  static init_method_get_color() {
    if (!this.#_bindings.method_get_color) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("get_color");
      this.#_bindings.method_get_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3200896285
      );
    }
  }
  static init_method_set_color() {
    if (!this.#_bindings.method_set_color) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("set_color");
      this.#_bindings.method_set_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_intensity() {
    if (!this.#_bindings.method_get_intensity) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("get_intensity");
      this.#_bindings.method_get_intensity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_intensity() {
    if (!this.#_bindings.method_set_intensity) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("set_intensity");
      this.#_bindings.method_set_intensity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_light_type() {
    if (!this.#_bindings.method_get_light_type) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("get_light_type");
      this.#_bindings.method_get_light_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2841200299
      );
    }
  }
  static init_method_set_light_type() {
    if (!this.#_bindings.method_set_light_type) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("set_light_type");
      this.#_bindings.method_set_light_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_range() {
    if (!this.#_bindings.method_get_range) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("get_range");
      this.#_bindings.method_get_range = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_range() {
    if (!this.#_bindings.method_set_range) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("set_range");
      this.#_bindings.method_set_range = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_inner_cone_angle() {
    if (!this.#_bindings.method_get_inner_cone_angle) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("get_inner_cone_angle");
      this.#_bindings.method_get_inner_cone_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_inner_cone_angle() {
    if (!this.#_bindings.method_set_inner_cone_angle) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("set_inner_cone_angle");
      this.#_bindings.method_set_inner_cone_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_outer_cone_angle() {
    if (!this.#_bindings.method_get_outer_cone_angle) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("get_outer_cone_angle");
      this.#_bindings.method_get_outer_cone_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_outer_cone_angle() {
    if (!this.#_bindings.method_set_outer_cone_angle) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("set_outer_cone_angle");
      this.#_bindings.method_set_outer_cone_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_additional_data() {
    if (!this.#_bindings.method_get_additional_data) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("get_additional_data");
      this.#_bindings.method_get_additional_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2138907829
      );
    }
  }
  static init_method_set_additional_data() {
    if (!this.#_bindings.method_set_additional_data) {
      let classname = new StringName("GLTFLight");
      let methodname = new StringName("set_additional_data");
      this.#_bindings.method_set_additional_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3776071444
      );
    }
  }

  
  
  from_node(_light_node) {
    GLTFLight.init_method_from_node();
    return _call_native_mb_ret(
      GLTFLight.#_bindings.method_from_node,
      this._owner,
			Variant.Type.OBJECT,
      _light_node
    );
    
  }
  to_node() {
    GLTFLight.init_method_to_node();
    return _call_native_mb_ret(
      GLTFLight.#_bindings.method_to_node,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  from_dictionary(_dictionary) {
    GLTFLight.init_method_from_dictionary();
    return _call_native_mb_ret(
      GLTFLight.#_bindings.method_from_dictionary,
      this._owner,
			Variant.Type.OBJECT,
      _dictionary
    );
    
  }
  to_dictionary() {
    GLTFLight.init_method_to_dictionary();
    return _call_native_mb_ret(
      GLTFLight.#_bindings.method_to_dictionary,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  get_color() {
    GLTFLight.init_method_get_color();
    return _call_native_mb_ret(
      GLTFLight.#_bindings.method_get_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_color(_color) {
    GLTFLight.init_method_set_color();
    return _call_native_mb_no_ret(
      GLTFLight.#_bindings.method_set_color,
      this._owner,
      _color
    );
    
  }
  get_intensity() {
    GLTFLight.init_method_get_intensity();
    return _call_native_mb_ret(
      GLTFLight.#_bindings.method_get_intensity,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_intensity(_intensity) {
    GLTFLight.init_method_set_intensity();
    return _call_native_mb_no_ret(
      GLTFLight.#_bindings.method_set_intensity,
      this._owner,
      _intensity
    );
    
  }
  get_light_type() {
    GLTFLight.init_method_get_light_type();
    return _call_native_mb_ret(
      GLTFLight.#_bindings.method_get_light_type,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_light_type(_light_type) {
    GLTFLight.init_method_set_light_type();
    return _call_native_mb_no_ret(
      GLTFLight.#_bindings.method_set_light_type,
      this._owner,
      _light_type
    );
    
  }
  get_range() {
    GLTFLight.init_method_get_range();
    return _call_native_mb_ret(
      GLTFLight.#_bindings.method_get_range,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_range(_range) {
    GLTFLight.init_method_set_range();
    return _call_native_mb_no_ret(
      GLTFLight.#_bindings.method_set_range,
      this._owner,
      _range
    );
    
  }
  get_inner_cone_angle() {
    GLTFLight.init_method_get_inner_cone_angle();
    return _call_native_mb_ret(
      GLTFLight.#_bindings.method_get_inner_cone_angle,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_inner_cone_angle(_inner_cone_angle) {
    GLTFLight.init_method_set_inner_cone_angle();
    return _call_native_mb_no_ret(
      GLTFLight.#_bindings.method_set_inner_cone_angle,
      this._owner,
      _inner_cone_angle
    );
    
  }
  get_outer_cone_angle() {
    GLTFLight.init_method_get_outer_cone_angle();
    return _call_native_mb_ret(
      GLTFLight.#_bindings.method_get_outer_cone_angle,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_outer_cone_angle(_outer_cone_angle) {
    GLTFLight.init_method_set_outer_cone_angle();
    return _call_native_mb_no_ret(
      GLTFLight.#_bindings.method_set_outer_cone_angle,
      this._owner,
      _outer_cone_angle
    );
    
  }
  get_additional_data(_extension_name) {
    GLTFLight.init_method_get_additional_data();
    return _call_native_mb_ret(
      GLTFLight.#_bindings.method_get_additional_data,
      this._owner,
			Variant.Type.VARIANT,
    
      _extension_name
    );
    
  }
  set_additional_data(_extension_name, _additional_data) {
    GLTFLight.init_method_set_additional_data();
    return _call_native_mb_no_ret(
      GLTFLight.#_bindings.method_set_additional_data,
      this._owner,
      _extension_name, _additional_data
    );
    
  }
  
get color () {
  return this.get_color();
}
set color (new_value) {
  this.set_color(new_value);
}
get intensity () {
  return this.get_intensity();
}
set intensity (new_value) {
  this.set_intensity(new_value);
}
get light_type () {
  return this.get_light_type();
}
set light_type (new_value) {
  this.set_light_type(new_value);
}
get range () {
  return this.get_range();
}
set range (new_value) {
  this.set_range(new_value);
}
get inner_cone_angle () {
  return this.get_inner_cone_angle();
}
set inner_cone_angle (new_value) {
  this.set_inner_cone_angle(new_value);
}
get outer_cone_angle () {
  return this.get_outer_cone_angle();
}
set outer_cone_angle (new_value) {
  this.set_outer_cone_angle(new_value);
}

}