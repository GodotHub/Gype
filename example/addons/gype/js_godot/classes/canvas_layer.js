import * as internal from '__internal__';
import { Node } from '@js_godot/classes/node'
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
@GodotClass
export class CanvasLayer extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CanvasLayer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_layer() {
    if (!this._bindings.method_set_layer) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("set_layer");
      this._bindings.method_set_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_layer() {
    if (!this._bindings.method_get_layer) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("get_layer");
      this._bindings.method_get_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_visible() {
    if (!this._bindings.method_set_visible) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("set_visible");
      this._bindings.method_set_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_visible() {
    if (!this._bindings.method_is_visible) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("is_visible");
      this._bindings.method_is_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_show() {
    if (!this._bindings.method_show) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("show");
      this._bindings.method_show = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_hide() {
    if (!this._bindings.method_hide) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("hide");
      this._bindings.method_hide = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_transform() {
    if (!this._bindings.method_set_transform) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("set_transform");
      this._bindings.method_set_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2761652528
      );
    }
  }
  static init_method_get_transform() {
    if (!this._bindings.method_get_transform) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("get_transform");
      this._bindings.method_get_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814499831
      );
    }
  }
  static init_method_get_final_transform() {
    if (!this._bindings.method_get_final_transform) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("get_final_transform");
      this._bindings.method_get_final_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814499831
      );
    }
  }
  static init_method_set_offset() {
    if (!this._bindings.method_set_offset) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("set_offset");
      this._bindings.method_set_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_offset() {
    if (!this._bindings.method_get_offset) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("get_offset");
      this._bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_rotation() {
    if (!this._bindings.method_set_rotation) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("set_rotation");
      this._bindings.method_set_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_rotation() {
    if (!this._bindings.method_get_rotation) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("get_rotation");
      this._bindings.method_get_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_scale() {
    if (!this._bindings.method_set_scale) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("set_scale");
      this._bindings.method_set_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_scale() {
    if (!this._bindings.method_get_scale) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("get_scale");
      this._bindings.method_get_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_follow_viewport() {
    if (!this._bindings.method_set_follow_viewport) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("set_follow_viewport");
      this._bindings.method_set_follow_viewport = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_following_viewport() {
    if (!this._bindings.method_is_following_viewport) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("is_following_viewport");
      this._bindings.method_is_following_viewport = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_follow_viewport_scale() {
    if (!this._bindings.method_set_follow_viewport_scale) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("set_follow_viewport_scale");
      this._bindings.method_set_follow_viewport_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_follow_viewport_scale() {
    if (!this._bindings.method_get_follow_viewport_scale) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("get_follow_viewport_scale");
      this._bindings.method_get_follow_viewport_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_custom_viewport() {
    if (!this._bindings.method_set_custom_viewport) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("set_custom_viewport");
      this._bindings.method_set_custom_viewport = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }
  static init_method_get_custom_viewport() {
    if (!this._bindings.method_get_custom_viewport) {
      let classname = new StringName("CanvasLayer");
      let methodname = new StringName("get_custom_viewport");
      this._bindings.method_get_custom_viewport = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3160264692
      );
    }
  }
  static init_method_get_canvas() {
    if (!this._bindings.method_get_canvas) {
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
    CanvasLayer.init_method_set_layer();
    return _call_native_mb_no_ret(
      CanvasLayer._bindings.method_set_layer,
      this._owner,
      _layer
    );
    
  }
  get_layer() {
    CanvasLayer.init_method_get_layer();
    return _call_native_mb_ret(
      CanvasLayer._bindings.method_get_layer,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_visible(_visible) {
    CanvasLayer.init_method_set_visible();
    return _call_native_mb_no_ret(
      CanvasLayer._bindings.method_set_visible,
      this._owner,
      _visible
    );
    
  }
  is_visible() {
    CanvasLayer.init_method_is_visible();
    return _call_native_mb_ret(
      CanvasLayer._bindings.method_is_visible,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  show() {
    CanvasLayer.init_method_show();
    return _call_native_mb_no_ret(
      CanvasLayer._bindings.method_show,
      this._owner,
      
    );
    
  }
  hide() {
    CanvasLayer.init_method_hide();
    return _call_native_mb_no_ret(
      CanvasLayer._bindings.method_hide,
      this._owner,
      
    );
    
  }
  set_transform(_transform) {
    CanvasLayer.init_method_set_transform();
    return _call_native_mb_no_ret(
      CanvasLayer._bindings.method_set_transform,
      this._owner,
      _transform
    );
    
  }
  get_transform() {
    CanvasLayer.init_method_get_transform();
    return _call_native_mb_ret(
      CanvasLayer._bindings.method_get_transform,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      
    );
    
  }
  get_final_transform() {
    CanvasLayer.init_method_get_final_transform();
    return _call_native_mb_ret(
      CanvasLayer._bindings.method_get_final_transform,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      
    );
    
  }
  set_offset(_offset) {
    CanvasLayer.init_method_set_offset();
    return _call_native_mb_no_ret(
      CanvasLayer._bindings.method_set_offset,
      this._owner,
      _offset
    );
    
  }
  get_offset() {
    CanvasLayer.init_method_get_offset();
    return _call_native_mb_ret(
      CanvasLayer._bindings.method_get_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_rotation(_radians) {
    CanvasLayer.init_method_set_rotation();
    return _call_native_mb_no_ret(
      CanvasLayer._bindings.method_set_rotation,
      this._owner,
      _radians
    );
    
  }
  get_rotation() {
    CanvasLayer.init_method_get_rotation();
    return _call_native_mb_ret(
      CanvasLayer._bindings.method_get_rotation,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_scale(_scale) {
    CanvasLayer.init_method_set_scale();
    return _call_native_mb_no_ret(
      CanvasLayer._bindings.method_set_scale,
      this._owner,
      _scale
    );
    
  }
  get_scale() {
    CanvasLayer.init_method_get_scale();
    return _call_native_mb_ret(
      CanvasLayer._bindings.method_get_scale,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_follow_viewport(_enable) {
    CanvasLayer.init_method_set_follow_viewport();
    return _call_native_mb_no_ret(
      CanvasLayer._bindings.method_set_follow_viewport,
      this._owner,
      _enable
    );
    
  }
  is_following_viewport() {
    CanvasLayer.init_method_is_following_viewport();
    return _call_native_mb_ret(
      CanvasLayer._bindings.method_is_following_viewport,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_follow_viewport_scale(_scale) {
    CanvasLayer.init_method_set_follow_viewport_scale();
    return _call_native_mb_no_ret(
      CanvasLayer._bindings.method_set_follow_viewport_scale,
      this._owner,
      _scale
    );
    
  }
  get_follow_viewport_scale() {
    CanvasLayer.init_method_get_follow_viewport_scale();
    return _call_native_mb_ret(
      CanvasLayer._bindings.method_get_follow_viewport_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_custom_viewport(_viewport) {
    CanvasLayer.init_method_set_custom_viewport();
    return _call_native_mb_no_ret(
      CanvasLayer._bindings.method_set_custom_viewport,
      this._owner,
      _viewport
    );
    
  }
  get_custom_viewport() {
    CanvasLayer.init_method_get_custom_viewport();
    return _call_native_mb_ret(
      CanvasLayer._bindings.method_get_custom_viewport,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_canvas() {
    CanvasLayer.init_method_get_canvas();
    return _call_native_mb_ret(
      CanvasLayer._bindings.method_get_canvas,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  
get layer () {
  return this.get_layer();
}
set layer (new_value) {
  this.set_layer(new_value);
}
get visible () {
  return this.is_visible();
}
set visible (new_value) {
  this.set_visible(new_value);
}
get offset () {
  return this.get_offset();
}
set offset (new_value) {
  this.set_offset(new_value);
}
get rotation () {
  return this.get_rotation();
}
set rotation (new_value) {
  this.set_rotation(new_value);
}
get scale () {
  return this.get_scale();
}
set scale (new_value) {
  this.set_scale(new_value);
}
get transform () {
  return this.get_transform();
}
set transform (new_value) {
  this.set_transform(new_value);
}
get custom_viewport () {
  return this.get_custom_viewport();
}
set custom_viewport (new_value) {
  this.set_custom_viewport(new_value);
}
get follow_viewport_enabled () {
  return this.is_following_viewport();
}
set follow_viewport_enabled (new_value) {
  this.set_follow_viewport(new_value);
}
get follow_viewport_scale () {
  return this.get_follow_viewport_scale();
}
set follow_viewport_scale (new_value) {
  this.set_follow_viewport_scale(new_value);
}

}