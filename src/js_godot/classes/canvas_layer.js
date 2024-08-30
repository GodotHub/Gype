import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { StringName } from 'src/js_godot/variant/string_name'
import { Transform2D } from 'src/js_godot/variant/transform2d'
import { RID } from 'src/js_godot/variant/rid'
import { Node } from 'src/js_godot/classes/node'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_layer;
    method_get_layer;
    method_set_visible;
    method_is_visible;
    method_show;
    method_hide;
    method_set_transform;
    method_get_transform;
    method_get_final_transform;
    method_set_offset;
    method_get_offset;
    method_set_rotation;
    method_get_rotation;
    method_set_scale;
    method_get_scale;
    method_set_follow_viewport;
    method_is_following_viewport;
    method_set_follow_viewport_scale;
    method_get_follow_viewport_scale;
    method_set_custom_viewport;
    method_get_custom_viewport;
    method_get_canvas;
}


export class CanvasLayer extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CanvasLayer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("set_layer");
        this._bindings.method_set_layer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("get_layer");
        this._bindings.method_get_layer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("set_visible");
        this._bindings.method_set_visible = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("is_visible");
        this._bindings.method_is_visible = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("show");
        this._bindings.method_show = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("hide");
        this._bindings.method_hide = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("set_transform");
        this._bindings.method_set_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2761652528
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("get_transform");
        this._bindings.method_get_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3814499831
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("get_final_transform");
        this._bindings.method_get_final_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3814499831
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("set_offset");
        this._bindings.method_set_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("get_offset");
        this._bindings.method_get_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("set_rotation");
        this._bindings.method_set_rotation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("get_rotation");
        this._bindings.method_get_rotation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("set_scale");
        this._bindings.method_set_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("get_scale");
        this._bindings.method_get_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("set_follow_viewport");
        this._bindings.method_set_follow_viewport = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("is_following_viewport");
        this._bindings.method_is_following_viewport = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("set_follow_viewport_scale");
        this._bindings.method_set_follow_viewport_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("get_follow_viewport_scale");
        this._bindings.method_get_follow_viewport_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("set_custom_viewport");
        this._bindings.method_set_custom_viewport = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1078189570
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("get_custom_viewport");
        this._bindings.method_get_custom_viewport = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3160264692
        );
      }
      {
        let classname = new StringName("CanvasLayer");
        let methodname = new StringName("get_canvas");
        this._bindings.method_get_canvas = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2944877500
        );
      }
  }
  set_layer(_layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_layer,
      this._owner,
      _layer
    );
    
  }
  get_layer() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_layer,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_visible(_visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visible,
      this._owner,
      _visible
    );
    
  }
  is_visible() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_visible,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  show() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_show,
      this._owner,
      
    );
    
  }
  hide() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_hide,
      this._owner,
      
    );
    
  }
  set_transform(_transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_transform,
      this._owner,
      _transform
    );
    
  }
  get_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transform,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      
    );
    
  }
  get_final_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_final_transform,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      
    );
    
  }
  set_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_offset,
      this._owner,
      _offset
    );
    
  }
  get_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  set_rotation(_radians) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rotation,
      this._owner,
      _radians
    );
    
  }
  get_rotation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rotation,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_scale(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scale,
      this._owner,
      _scale
    );
    
  }
  get_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scale,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  set_follow_viewport(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_follow_viewport,
      this._owner,
      _enable
    );
    
  }
  is_following_viewport() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_following_viewport,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_follow_viewport_scale(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_follow_viewport_scale,
      this._owner,
      _scale
    );
    
  }
  get_follow_viewport_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_follow_viewport_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_custom_viewport(_viewport) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_custom_viewport,
      this._owner,
      _viewport
    );
    
  }
  get_custom_viewport() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_custom_viewport,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_canvas() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_canvas,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
}