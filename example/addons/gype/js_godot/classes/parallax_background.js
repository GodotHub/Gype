import * as internal from '__internal__';
import { CanvasLayer } from '@js_godot/classes/canvas_layer'
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
  method_set_scroll_offset;
  method_get_scroll_offset;
  method_set_scroll_base_offset;
  method_get_scroll_base_offset;
  method_set_scroll_base_scale;
  method_get_scroll_base_scale;
  method_set_limit_begin;
  method_get_limit_begin;
  method_set_limit_end;
  method_get_limit_end;
  method_set_ignore_camera_zoom;
  method_is_ignore_camera_zoom;
}
@GodotClass
export class ParallaxBackground extends CanvasLayer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ParallaxBackground");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_scroll_offset() {
    if (!this._bindings.method_set_scroll_offset) {
      let classname = new StringName("ParallaxBackground");
      let methodname = new StringName("set_scroll_offset");
      this._bindings.method_set_scroll_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_scroll_offset() {
    if (!this._bindings.method_get_scroll_offset) {
      let classname = new StringName("ParallaxBackground");
      let methodname = new StringName("get_scroll_offset");
      this._bindings.method_get_scroll_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_scroll_base_offset() {
    if (!this._bindings.method_set_scroll_base_offset) {
      let classname = new StringName("ParallaxBackground");
      let methodname = new StringName("set_scroll_base_offset");
      this._bindings.method_set_scroll_base_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_scroll_base_offset() {
    if (!this._bindings.method_get_scroll_base_offset) {
      let classname = new StringName("ParallaxBackground");
      let methodname = new StringName("get_scroll_base_offset");
      this._bindings.method_get_scroll_base_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_scroll_base_scale() {
    if (!this._bindings.method_set_scroll_base_scale) {
      let classname = new StringName("ParallaxBackground");
      let methodname = new StringName("set_scroll_base_scale");
      this._bindings.method_set_scroll_base_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_scroll_base_scale() {
    if (!this._bindings.method_get_scroll_base_scale) {
      let classname = new StringName("ParallaxBackground");
      let methodname = new StringName("get_scroll_base_scale");
      this._bindings.method_get_scroll_base_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_limit_begin() {
    if (!this._bindings.method_set_limit_begin) {
      let classname = new StringName("ParallaxBackground");
      let methodname = new StringName("set_limit_begin");
      this._bindings.method_set_limit_begin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_limit_begin() {
    if (!this._bindings.method_get_limit_begin) {
      let classname = new StringName("ParallaxBackground");
      let methodname = new StringName("get_limit_begin");
      this._bindings.method_get_limit_begin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_limit_end() {
    if (!this._bindings.method_set_limit_end) {
      let classname = new StringName("ParallaxBackground");
      let methodname = new StringName("set_limit_end");
      this._bindings.method_set_limit_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_limit_end() {
    if (!this._bindings.method_get_limit_end) {
      let classname = new StringName("ParallaxBackground");
      let methodname = new StringName("get_limit_end");
      this._bindings.method_get_limit_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_ignore_camera_zoom() {
    if (!this._bindings.method_set_ignore_camera_zoom) {
      let classname = new StringName("ParallaxBackground");
      let methodname = new StringName("set_ignore_camera_zoom");
      this._bindings.method_set_ignore_camera_zoom = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_ignore_camera_zoom() {
    if (!this._bindings.method_is_ignore_camera_zoom) {
      let classname = new StringName("ParallaxBackground");
      let methodname = new StringName("is_ignore_camera_zoom");
      this._bindings.method_is_ignore_camera_zoom = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }

  
  
  set_scroll_offset(_offset) {
    ParallaxBackground.init_method_set_scroll_offset();
    return _call_native_mb_no_ret(
      ParallaxBackground._bindings.method_set_scroll_offset,
      this._owner,
      _offset
    );
    
  }
  get_scroll_offset() {
    ParallaxBackground.init_method_get_scroll_offset();
    return _call_native_mb_ret(
      ParallaxBackground._bindings.method_get_scroll_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_scroll_base_offset(_offset) {
    ParallaxBackground.init_method_set_scroll_base_offset();
    return _call_native_mb_no_ret(
      ParallaxBackground._bindings.method_set_scroll_base_offset,
      this._owner,
      _offset
    );
    
  }
  get_scroll_base_offset() {
    ParallaxBackground.init_method_get_scroll_base_offset();
    return _call_native_mb_ret(
      ParallaxBackground._bindings.method_get_scroll_base_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_scroll_base_scale(_scale) {
    ParallaxBackground.init_method_set_scroll_base_scale();
    return _call_native_mb_no_ret(
      ParallaxBackground._bindings.method_set_scroll_base_scale,
      this._owner,
      _scale
    );
    
  }
  get_scroll_base_scale() {
    ParallaxBackground.init_method_get_scroll_base_scale();
    return _call_native_mb_ret(
      ParallaxBackground._bindings.method_get_scroll_base_scale,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_limit_begin(_offset) {
    ParallaxBackground.init_method_set_limit_begin();
    return _call_native_mb_no_ret(
      ParallaxBackground._bindings.method_set_limit_begin,
      this._owner,
      _offset
    );
    
  }
  get_limit_begin() {
    ParallaxBackground.init_method_get_limit_begin();
    return _call_native_mb_ret(
      ParallaxBackground._bindings.method_get_limit_begin,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_limit_end(_offset) {
    ParallaxBackground.init_method_set_limit_end();
    return _call_native_mb_no_ret(
      ParallaxBackground._bindings.method_set_limit_end,
      this._owner,
      _offset
    );
    
  }
  get_limit_end() {
    ParallaxBackground.init_method_get_limit_end();
    return _call_native_mb_ret(
      ParallaxBackground._bindings.method_get_limit_end,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_ignore_camera_zoom(_ignore) {
    ParallaxBackground.init_method_set_ignore_camera_zoom();
    return _call_native_mb_no_ret(
      ParallaxBackground._bindings.method_set_ignore_camera_zoom,
      this._owner,
      _ignore
    );
    
  }
  is_ignore_camera_zoom() {
    ParallaxBackground.init_method_is_ignore_camera_zoom();
    return _call_native_mb_ret(
      ParallaxBackground._bindings.method_is_ignore_camera_zoom,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get scroll_offset () {
  return this.get_scroll_offset();
}
set scroll_offset (new_value) {
  this.set_scroll_offset(new_value);
}
get scroll_base_offset () {
  return this.get_scroll_base_offset();
}
set scroll_base_offset (new_value) {
  this.set_scroll_base_offset(new_value);
}
get scroll_base_scale () {
  return this.get_scroll_base_scale();
}
set scroll_base_scale (new_value) {
  this.set_scroll_base_scale(new_value);
}
get scroll_limit_begin () {
  return this.get_limit_begin();
}
set scroll_limit_begin (new_value) {
  this.set_limit_begin(new_value);
}
get scroll_limit_end () {
  return this.get_limit_end();
}
set scroll_limit_end (new_value) {
  this.set_limit_end(new_value);
}
get scroll_ignore_camera_zoom () {
  return this.is_ignore_camera_zoom();
}
set scroll_ignore_camera_zoom (new_value) {
  this.set_ignore_camera_zoom(new_value);
}

}