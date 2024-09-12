import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Texture2D } from '@js_godot/classes/texture2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_atlas;
  method_get_atlas;
  method_set_region;
  method_get_region;
  method_set_margin;
  method_get_margin;
  method_set_filter_clip;
  method_has_filter_clip;
}
export class AtlasTexture extends Texture2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AtlasTexture");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_atlas() {
    if (!this.#_bindings.method_set_atlas) {
      let classname = new StringName("AtlasTexture");
      let methodname = new StringName("set_atlas");
      this.#_bindings.method_set_atlas = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_atlas() {
    if (!this.#_bindings.method_get_atlas) {
      let classname = new StringName("AtlasTexture");
      let methodname = new StringName("get_atlas");
      this.#_bindings.method_get_atlas = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_region() {
    if (!this.#_bindings.method_set_region) {
      let classname = new StringName("AtlasTexture");
      let methodname = new StringName("set_region");
      this.#_bindings.method_set_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2046264180
      );
    }
  }
  static init_method_get_region() {
    if (!this.#_bindings.method_get_region) {
      let classname = new StringName("AtlasTexture");
      let methodname = new StringName("get_region");
      this.#_bindings.method_get_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1639390495
      );
    }
  }
  static init_method_set_margin() {
    if (!this.#_bindings.method_set_margin) {
      let classname = new StringName("AtlasTexture");
      let methodname = new StringName("set_margin");
      this.#_bindings.method_set_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2046264180
      );
    }
  }
  static init_method_get_margin() {
    if (!this.#_bindings.method_get_margin) {
      let classname = new StringName("AtlasTexture");
      let methodname = new StringName("get_margin");
      this.#_bindings.method_get_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1639390495
      );
    }
  }
  static init_method_set_filter_clip() {
    if (!this.#_bindings.method_set_filter_clip) {
      let classname = new StringName("AtlasTexture");
      let methodname = new StringName("set_filter_clip");
      this.#_bindings.method_set_filter_clip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_has_filter_clip() {
    if (!this.#_bindings.method_has_filter_clip) {
      let classname = new StringName("AtlasTexture");
      let methodname = new StringName("has_filter_clip");
      this.#_bindings.method_has_filter_clip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_atlas(_atlas) {
    AtlasTexture.init_method_set_atlas();
    return _call_native_mb_no_ret(
      AtlasTexture.#_bindings.method_set_atlas,
      this._owner,
      _atlas
    );
    
  }
  get_atlas() {
    AtlasTexture.init_method_get_atlas();
    return _call_native_mb_ret(
      AtlasTexture.#_bindings.method_get_atlas,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_region(_region) {
    AtlasTexture.init_method_set_region();
    return _call_native_mb_no_ret(
      AtlasTexture.#_bindings.method_set_region,
      this._owner,
      _region
    );
    
  }
  get_region() {
    AtlasTexture.init_method_get_region();
    return _call_native_mb_ret(
      AtlasTexture.#_bindings.method_get_region,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  set_margin(_margin) {
    AtlasTexture.init_method_set_margin();
    return _call_native_mb_no_ret(
      AtlasTexture.#_bindings.method_set_margin,
      this._owner,
      _margin
    );
    
  }
  get_margin() {
    AtlasTexture.init_method_get_margin();
    return _call_native_mb_ret(
      AtlasTexture.#_bindings.method_get_margin,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  set_filter_clip(_enable) {
    AtlasTexture.init_method_set_filter_clip();
    return _call_native_mb_no_ret(
      AtlasTexture.#_bindings.method_set_filter_clip,
      this._owner,
      _enable
    );
    
  }
  has_filter_clip() {
    AtlasTexture.init_method_has_filter_clip();
    return _call_native_mb_ret(
      AtlasTexture.#_bindings.method_has_filter_clip,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get atlas () {
  return this.get_atlas();
}
set atlas (new_value) {
  this.set_atlas(new_value);
}
get region () {
  return this.get_region();
}
set region (new_value) {
  this.set_region(new_value);
}
get margin () {
  return this.get_margin();
}
set margin (new_value) {
  this.set_margin(new_value);
}
get filter_clip () {
  return this.has_filter_clip();
}
set filter_clip (new_value) {
  this.set_filter_clip(new_value);
}

}