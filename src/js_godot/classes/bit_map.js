import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_create;
  method_create_from_image_alpha;
  method_set_bitv;
  method_set_bit;
  method_get_bitv;
  method_get_bit;
  method_set_bit_rect;
  method_get_true_bit_count;
  method_get_size;
  method_resize;
  method_grow_mask;
  method_convert_to_image;
  method_opaque_to_polygons;
}
export class BitMap extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("BitMap");
    } else {
      super(godot_object);
    }
  }
  static init_method_create() {
    if (!this.#_bindings.method_create) {
      let classname = new StringName("BitMap");
      let methodname = new StringName("create");
      this.#_bindings.method_create = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_create_from_image_alpha() {
    if (!this.#_bindings.method_create_from_image_alpha) {
      let classname = new StringName("BitMap");
      let methodname = new StringName("create_from_image_alpha");
      this.#_bindings.method_create_from_image_alpha = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        106271684
      );
    }
  }
  static init_method_set_bitv() {
    if (!this.#_bindings.method_set_bitv) {
      let classname = new StringName("BitMap");
      let methodname = new StringName("set_bitv");
      this.#_bindings.method_set_bitv = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4153096796
      );
    }
  }
  static init_method_set_bit() {
    if (!this.#_bindings.method_set_bit) {
      let classname = new StringName("BitMap");
      let methodname = new StringName("set_bit");
      this.#_bindings.method_set_bit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1383440665
      );
    }
  }
  static init_method_get_bitv() {
    if (!this.#_bindings.method_get_bitv) {
      let classname = new StringName("BitMap");
      let methodname = new StringName("get_bitv");
      this.#_bindings.method_get_bitv = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3900751641
      );
    }
  }
  static init_method_get_bit() {
    if (!this.#_bindings.method_get_bit) {
      let classname = new StringName("BitMap");
      let methodname = new StringName("get_bit");
      this.#_bindings.method_get_bit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2522259332
      );
    }
  }
  static init_method_set_bit_rect() {
    if (!this.#_bindings.method_set_bit_rect) {
      let classname = new StringName("BitMap");
      let methodname = new StringName("set_bit_rect");
      this.#_bindings.method_set_bit_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        472162941
      );
    }
  }
  static init_method_get_true_bit_count() {
    if (!this.#_bindings.method_get_true_bit_count) {
      let classname = new StringName("BitMap");
      let methodname = new StringName("get_true_bit_count");
      this.#_bindings.method_get_true_bit_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_size() {
    if (!this.#_bindings.method_get_size) {
      let classname = new StringName("BitMap");
      let methodname = new StringName("get_size");
      this.#_bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_resize() {
    if (!this.#_bindings.method_resize) {
      let classname = new StringName("BitMap");
      let methodname = new StringName("resize");
      this.#_bindings.method_resize = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_grow_mask() {
    if (!this.#_bindings.method_grow_mask) {
      let classname = new StringName("BitMap");
      let methodname = new StringName("grow_mask");
      this.#_bindings.method_grow_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3317281434
      );
    }
  }
  static init_method_convert_to_image() {
    if (!this.#_bindings.method_convert_to_image) {
      let classname = new StringName("BitMap");
      let methodname = new StringName("convert_to_image");
      this.#_bindings.method_convert_to_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4190603485
      );
    }
  }
  static init_method_opaque_to_polygons() {
    if (!this.#_bindings.method_opaque_to_polygons) {
      let classname = new StringName("BitMap");
      let methodname = new StringName("opaque_to_polygons");
      this.#_bindings.method_opaque_to_polygons = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        48478126
      );
    }
  }

  
  
  create(_size) {
    BitMap.init_method_create();
    return _call_native_mb_no_ret(
      BitMap.#_bindings.method_create,
      this._owner,
      _size
    );
    
  }
  create_from_image_alpha(_image, _threshold) {
    BitMap.init_method_create_from_image_alpha();
    return _call_native_mb_no_ret(
      BitMap.#_bindings.method_create_from_image_alpha,
      this._owner,
      _image, _threshold
    );
    
  }
  set_bitv(_position, _bit) {
    BitMap.init_method_set_bitv();
    return _call_native_mb_no_ret(
      BitMap.#_bindings.method_set_bitv,
      this._owner,
      _position, _bit
    );
    
  }
  set_bit(_x, _y, _bit) {
    BitMap.init_method_set_bit();
    return _call_native_mb_no_ret(
      BitMap.#_bindings.method_set_bit,
      this._owner,
      _x, _y, _bit
    );
    
  }
  get_bitv(_position) {
    BitMap.init_method_get_bitv();
    return _call_native_mb_ret(
      BitMap.#_bindings.method_get_bitv,
      this._owner,
			Variant.Type.BOOL,
    
      _position
    );
    
  }
  get_bit(_x, _y) {
    BitMap.init_method_get_bit();
    return _call_native_mb_ret(
      BitMap.#_bindings.method_get_bit,
      this._owner,
			Variant.Type.BOOL,
    
      _x, _y
    );
    
  }
  set_bit_rect(_rect, _bit) {
    BitMap.init_method_set_bit_rect();
    return _call_native_mb_no_ret(
      BitMap.#_bindings.method_set_bit_rect,
      this._owner,
      _rect, _bit
    );
    
  }
  get_true_bit_count() {
    BitMap.init_method_get_true_bit_count();
    return _call_native_mb_ret(
      BitMap.#_bindings.method_get_true_bit_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_size() {
    BitMap.init_method_get_size();
    return _call_native_mb_ret(
      BitMap.#_bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  resize(_new_size) {
    BitMap.init_method_resize();
    return _call_native_mb_no_ret(
      BitMap.#_bindings.method_resize,
      this._owner,
      _new_size
    );
    
  }
  grow_mask(_pixels, _rect) {
    BitMap.init_method_grow_mask();
    return _call_native_mb_no_ret(
      BitMap.#_bindings.method_grow_mask,
      this._owner,
      _pixels, _rect
    );
    
  }
  convert_to_image() {
    BitMap.init_method_convert_to_image();
    return _call_native_mb_ret(
      BitMap.#_bindings.method_convert_to_image,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  opaque_to_polygons(_rect, _epsilon) {
    BitMap.init_method_opaque_to_polygons();
    return _call_native_mb_ret(
      BitMap.#_bindings.method_opaque_to_polygons,
      this._owner,
			Variant.Type.ARRAY,
      _rect, _epsilon
    );
    
  }
  
get data () {
  return this._get_data();
}
set data (new_value) {
  this._set_data(new_value);
}

}