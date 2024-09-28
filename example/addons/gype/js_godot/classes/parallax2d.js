import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_scroll_scale;
  method_get_scroll_scale;
  method_set_repeat_size;
  method_get_repeat_size;
  method_set_repeat_times;
  method_get_repeat_times;
  method_set_autoscroll;
  method_get_autoscroll;
  method_set_scroll_offset;
  method_get_scroll_offset;
  method_set_screen_offset;
  method_get_screen_offset;
  method_set_limit_begin;
  method_get_limit_begin;
  method_set_limit_end;
  method_get_limit_end;
  method_set_follow_viewport;
  method_get_follow_viewport;
  method_set_ignore_camera_scroll;
  method_is_ignore_camera_scroll;
}
@GodotClass
export class Parallax2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Parallax2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_scroll_scale() {
    if (!this._bindings.method_set_scroll_scale) {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_scroll_scale");
      this._bindings.method_set_scroll_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_scroll_scale() {
    if (!this._bindings.method_get_scroll_scale) {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_scroll_scale");
      this._bindings.method_get_scroll_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_repeat_size() {
    if (!this._bindings.method_set_repeat_size) {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_repeat_size");
      this._bindings.method_set_repeat_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_repeat_size() {
    if (!this._bindings.method_get_repeat_size) {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_repeat_size");
      this._bindings.method_get_repeat_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_repeat_times() {
    if (!this._bindings.method_set_repeat_times) {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_repeat_times");
      this._bindings.method_set_repeat_times = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_repeat_times() {
    if (!this._bindings.method_get_repeat_times) {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_repeat_times");
      this._bindings.method_get_repeat_times = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_autoscroll() {
    if (!this._bindings.method_set_autoscroll) {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_autoscroll");
      this._bindings.method_set_autoscroll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_autoscroll() {
    if (!this._bindings.method_get_autoscroll) {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_autoscroll");
      this._bindings.method_get_autoscroll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_scroll_offset() {
    if (!this._bindings.method_set_scroll_offset) {
      let classname = new StringName("Parallax2D");
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
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_scroll_offset");
      this._bindings.method_get_scroll_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_screen_offset() {
    if (!this._bindings.method_set_screen_offset) {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_screen_offset");
      this._bindings.method_set_screen_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_screen_offset() {
    if (!this._bindings.method_get_screen_offset) {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_screen_offset");
      this._bindings.method_get_screen_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_limit_begin() {
    if (!this._bindings.method_set_limit_begin) {
      let classname = new StringName("Parallax2D");
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
      let classname = new StringName("Parallax2D");
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
      let classname = new StringName("Parallax2D");
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
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_limit_end");
      this._bindings.method_get_limit_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_follow_viewport() {
    if (!this._bindings.method_set_follow_viewport) {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_follow_viewport");
      this._bindings.method_set_follow_viewport = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_follow_viewport() {
    if (!this._bindings.method_get_follow_viewport) {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_follow_viewport");
      this._bindings.method_get_follow_viewport = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_ignore_camera_scroll() {
    if (!this._bindings.method_set_ignore_camera_scroll) {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_ignore_camera_scroll");
      this._bindings.method_set_ignore_camera_scroll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_ignore_camera_scroll() {
    if (!this._bindings.method_is_ignore_camera_scroll) {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("is_ignore_camera_scroll");
      this._bindings.method_is_ignore_camera_scroll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }

  
  
  set_scroll_scale(_scale) {
    Parallax2D.init_method_set_scroll_scale();
    return _call_native_mb_no_ret(
      Parallax2D._bindings.method_set_scroll_scale,
      this._owner,
      _scale
    );
    
  }
  get_scroll_scale() {
    Parallax2D.init_method_get_scroll_scale();
    return _call_native_mb_ret(
      Parallax2D._bindings.method_get_scroll_scale,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_repeat_size(_repeat_size) {
    Parallax2D.init_method_set_repeat_size();
    return _call_native_mb_no_ret(
      Parallax2D._bindings.method_set_repeat_size,
      this._owner,
      _repeat_size
    );
    
  }
  get_repeat_size() {
    Parallax2D.init_method_get_repeat_size();
    return _call_native_mb_ret(
      Parallax2D._bindings.method_get_repeat_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_repeat_times(_repeat_times) {
    Parallax2D.init_method_set_repeat_times();
    return _call_native_mb_no_ret(
      Parallax2D._bindings.method_set_repeat_times,
      this._owner,
      _repeat_times
    );
    
  }
  get_repeat_times() {
    Parallax2D.init_method_get_repeat_times();
    return _call_native_mb_ret(
      Parallax2D._bindings.method_get_repeat_times,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_autoscroll(_autoscroll) {
    Parallax2D.init_method_set_autoscroll();
    return _call_native_mb_no_ret(
      Parallax2D._bindings.method_set_autoscroll,
      this._owner,
      _autoscroll
    );
    
  }
  get_autoscroll() {
    Parallax2D.init_method_get_autoscroll();
    return _call_native_mb_ret(
      Parallax2D._bindings.method_get_autoscroll,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_scroll_offset(_offset) {
    Parallax2D.init_method_set_scroll_offset();
    return _call_native_mb_no_ret(
      Parallax2D._bindings.method_set_scroll_offset,
      this._owner,
      _offset
    );
    
  }
  get_scroll_offset() {
    Parallax2D.init_method_get_scroll_offset();
    return _call_native_mb_ret(
      Parallax2D._bindings.method_get_scroll_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_screen_offset(_offset) {
    Parallax2D.init_method_set_screen_offset();
    return _call_native_mb_no_ret(
      Parallax2D._bindings.method_set_screen_offset,
      this._owner,
      _offset
    );
    
  }
  get_screen_offset() {
    Parallax2D.init_method_get_screen_offset();
    return _call_native_mb_ret(
      Parallax2D._bindings.method_get_screen_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_limit_begin(_offset) {
    Parallax2D.init_method_set_limit_begin();
    return _call_native_mb_no_ret(
      Parallax2D._bindings.method_set_limit_begin,
      this._owner,
      _offset
    );
    
  }
  get_limit_begin() {
    Parallax2D.init_method_get_limit_begin();
    return _call_native_mb_ret(
      Parallax2D._bindings.method_get_limit_begin,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_limit_end(_offset) {
    Parallax2D.init_method_set_limit_end();
    return _call_native_mb_no_ret(
      Parallax2D._bindings.method_set_limit_end,
      this._owner,
      _offset
    );
    
  }
  get_limit_end() {
    Parallax2D.init_method_get_limit_end();
    return _call_native_mb_ret(
      Parallax2D._bindings.method_get_limit_end,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_follow_viewport(_follow) {
    Parallax2D.init_method_set_follow_viewport();
    return _call_native_mb_no_ret(
      Parallax2D._bindings.method_set_follow_viewport,
      this._owner,
      _follow
    );
    
  }
  get_follow_viewport() {
    Parallax2D.init_method_get_follow_viewport();
    return _call_native_mb_ret(
      Parallax2D._bindings.method_get_follow_viewport,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_ignore_camera_scroll(_ignore) {
    Parallax2D.init_method_set_ignore_camera_scroll();
    return _call_native_mb_no_ret(
      Parallax2D._bindings.method_set_ignore_camera_scroll,
      this._owner,
      _ignore
    );
    
  }
  is_ignore_camera_scroll() {
    Parallax2D.init_method_is_ignore_camera_scroll();
    return _call_native_mb_ret(
      Parallax2D._bindings.method_is_ignore_camera_scroll,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get scroll_scale () {
  return this.get_scroll_scale();
}
set scroll_scale (new_value) {
  this.set_scroll_scale(new_value);
}
get scroll_offset () {
  return this.get_scroll_offset();
}
set scroll_offset (new_value) {
  this.set_scroll_offset(new_value);
}
get repeat_size () {
  return this.get_repeat_size();
}
set repeat_size (new_value) {
  this.set_repeat_size(new_value);
}
get autoscroll () {
  return this.get_autoscroll();
}
set autoscroll (new_value) {
  this.set_autoscroll(new_value);
}
get repeat_times () {
  return this.get_repeat_times();
}
set repeat_times (new_value) {
  this.set_repeat_times(new_value);
}
get limit_begin () {
  return this.get_limit_begin();
}
set limit_begin (new_value) {
  this.set_limit_begin(new_value);
}
get limit_end () {
  return this.get_limit_end();
}
set limit_end (new_value) {
  this.set_limit_end(new_value);
}
get follow_viewport () {
  return this.get_follow_viewport();
}
set follow_viewport (new_value) {
  this.set_follow_viewport(new_value);
}
get ignore_camera_scroll () {
  return this.is_ignore_camera_scroll();
}
set ignore_camera_scroll (new_value) {
  this.set_ignore_camera_scroll(new_value);
}
get screen_offset () {
  return this.get_screen_offset();
}
set screen_offset (new_value) {
  this.set_screen_offset(new_value);
}

}