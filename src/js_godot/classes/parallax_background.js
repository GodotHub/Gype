import * as internal from '__internal__';
import { CanvasLayer } from 'src/js_godot/classes/canvas_layer'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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


export class ParallaxBackground extends CanvasLayer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ParallaxBackground");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("ParallaxBackground");
        let methodname = new StringName("set_scroll_offset");
        this._bindings.method_set_scroll_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("ParallaxBackground");
        let methodname = new StringName("get_scroll_offset");
        this._bindings.method_get_scroll_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("ParallaxBackground");
        let methodname = new StringName("set_scroll_base_offset");
        this._bindings.method_set_scroll_base_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("ParallaxBackground");
        let methodname = new StringName("get_scroll_base_offset");
        this._bindings.method_get_scroll_base_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("ParallaxBackground");
        let methodname = new StringName("set_scroll_base_scale");
        this._bindings.method_set_scroll_base_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("ParallaxBackground");
        let methodname = new StringName("get_scroll_base_scale");
        this._bindings.method_get_scroll_base_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("ParallaxBackground");
        let methodname = new StringName("set_limit_begin");
        this._bindings.method_set_limit_begin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("ParallaxBackground");
        let methodname = new StringName("get_limit_begin");
        this._bindings.method_get_limit_begin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("ParallaxBackground");
        let methodname = new StringName("set_limit_end");
        this._bindings.method_set_limit_end = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("ParallaxBackground");
        let methodname = new StringName("get_limit_end");
        this._bindings.method_get_limit_end = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("ParallaxBackground");
        let methodname = new StringName("set_ignore_camera_zoom");
        this._bindings.method_set_ignore_camera_zoom = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
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
  set_scroll_base_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scroll_base_offset,
      this._owner,
      _offset
    );
    
  }
  get_scroll_base_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scroll_base_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  set_scroll_base_scale(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scroll_base_scale,
      this._owner,
      _scale
    );
    
  }
  get_scroll_base_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scroll_base_scale,
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
  set_ignore_camera_zoom(_ignore) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ignore_camera_zoom,
      this._owner,
      _ignore
    );
    
  }
  is_ignore_camera_zoom() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_ignore_camera_zoom,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}