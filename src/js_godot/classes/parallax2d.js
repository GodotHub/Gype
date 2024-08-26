import * as internal from '__internal__';
import { Node2D } from 'src/js_godot/classesnode2d'
import { Vector2 } from 'src/js_godot/variant/vector2'
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


export class Parallax2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Parallax2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_scroll_scale");
      this._bindings.method_set_scroll_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_scroll_scale");
      this._bindings.method_get_scroll_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_repeat_size");
      this._bindings.method_set_repeat_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_repeat_size");
      this._bindings.method_get_repeat_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_repeat_times");
      this._bindings.method_set_repeat_times = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_repeat_times");
      this._bindings.method_get_repeat_times = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_autoscroll");
      this._bindings.method_set_autoscroll = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_autoscroll");
      this._bindings.method_get_autoscroll = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_scroll_offset");
      this._bindings.method_set_scroll_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_scroll_offset");
      this._bindings.method_get_scroll_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_screen_offset");
      this._bindings.method_set_screen_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_screen_offset");
      this._bindings.method_get_screen_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_limit_begin");
      this._bindings.method_set_limit_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_limit_begin");
      this._bindings.method_get_limit_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_limit_end");
      this._bindings.method_set_limit_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_limit_end");
      this._bindings.method_get_limit_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_follow_viewport");
      this._bindings.method_set_follow_viewport = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("get_follow_viewport");
      this._bindings.method_get_follow_viewport = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("Parallax2D");
      let methodname = new StringName("set_ignore_camera_scroll");
      this._bindings.method_set_ignore_camera_scroll = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scroll_scale,
      this._owner,
      _scale
    );
  }
  get_scroll_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scroll_scale,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_repeat_size(_repeat_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_repeat_size,
      this._owner,
      _repeat_size
    );
  }
  get_repeat_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_repeat_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_repeat_times(_repeat_times) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_repeat_times,
      this._owner,
      _repeat_times
    );
  }
  get_repeat_times() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_repeat_times,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_autoscroll(_autoscroll) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_autoscroll,
      this._owner,
      _autoscroll
    );
  }
  get_autoscroll() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_autoscroll,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_scroll_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scroll_offset,
      this._owner,
      _offset
    );
  }
  get_scroll_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scroll_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_screen_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_screen_offset,
      this._owner,
      _offset
    );
  }
  get_screen_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_screen_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_limit_begin(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_limit_begin,
      this._owner,
      _offset
    );
  }
  get_limit_begin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_limit_begin,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_limit_end(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_limit_end,
      this._owner,
      _offset
    );
  }
  get_limit_end() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_limit_end,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_follow_viewport(_follow) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_follow_viewport,
      this._owner,
      _follow
    );
  }
  get_follow_viewport() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_follow_viewport,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_ignore_camera_scroll(_ignore) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ignore_camera_scroll,
      this._owner,
      _ignore
    );
  }
  is_ignore_camera_scroll() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_ignore_camera_scroll,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}