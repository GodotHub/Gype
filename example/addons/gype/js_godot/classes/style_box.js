import * as internal from '__internal__';
import { Vector2 } from '@js_godot/variant/vector2'
import { Resource } from '@js_godot/classes/resource'
import { StringName } from '@js_godot/variant/string_name'
import { RID } from '@js_godot/variant/rid'
import { Variant } from '@js_godot/variant/variant'
import { Rect2 } from '@js_godot/variant/rect2'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_minimum_size;
  method_set_content_margin;
  method_set_content_margin_all;
  method_get_content_margin;
  method_get_margin;
  method_get_offset;
  method_draw;
  method_get_current_item_drawn;
  method_test_mask;
}
export class StyleBox extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("StyleBox");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("get_minimum_size");
      this._bindings.method_get_minimum_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("set_content_margin");
      this._bindings.method_set_content_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4290182280
      );
    }
    {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("set_content_margin_all");
      this._bindings.method_set_content_margin_all = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("get_content_margin");
      this._bindings.method_get_content_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2869120046
      );
    }
    {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("get_margin");
      this._bindings.method_get_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2869120046
      );
    }
    {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("get_offset");
      this._bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("draw");
      this._bindings.method_draw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2275962004
      );
    }
    {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("get_current_item_drawn");
      this._bindings.method_get_current_item_drawn = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3213695180
      );
    }
    {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("test_mask");
      this._bindings.method_test_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3735564539
      );
    }
  }
  
  _draw(_to_canvas_item, _rect) {
  }
  _get_draw_rect(_rect) {
  }
  _get_minimum_size() {
  }
  _test_mask(_point, _rect) {
  }
  get_minimum_size() {
    return _call_native_mb_ret(
      StyleBox._bindings.method_get_minimum_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_content_margin(_margin, _offset) {
    return _call_native_mb_no_ret(
      StyleBox._bindings.method_set_content_margin,
      this._owner,
      _margin, _offset
    );
    
  }
  set_content_margin_all(_offset) {
    return _call_native_mb_no_ret(
      StyleBox._bindings.method_set_content_margin_all,
      this._owner,
      _offset
    );
    
  }
  get_content_margin(_margin) {
    return _call_native_mb_ret(
      StyleBox._bindings.method_get_content_margin,
      this._owner,
			Variant.Type.FLOAT,
      _margin
    );
    
  }
  get_margin(_margin) {
    return _call_native_mb_ret(
      StyleBox._bindings.method_get_margin,
      this._owner,
			Variant.Type.FLOAT,
      _margin
    );
    
  }
  get_offset() {
    return _call_native_mb_ret(
      StyleBox._bindings.method_get_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  draw(_canvas_item, _rect) {
    return _call_native_mb_no_ret(
      StyleBox._bindings.method_draw,
      this._owner,
      _canvas_item, _rect
    );
    
  }
  get_current_item_drawn() {
    return _call_native_mb_ret(
      StyleBox._bindings.method_get_current_item_drawn,
      this._owner,
			Variant.INT,
      
    );
    
  }
  test_mask(_point, _rect) {
    return _call_native_mb_ret(
      StyleBox._bindings.method_test_mask,
      this._owner,
			Variant.Type.BOOL,
      _point, _rect
    );
    
  }
  
get content_margin_left () {
  return this.get_content_margin();
}
set content_margin_left (new_value) {
  this.set_content_margin(new_value);
}
get content_margin_top () {
  return this.get_content_margin();
}
set content_margin_top (new_value) {
  this.set_content_margin(new_value);
}
get content_margin_right () {
  return this.get_content_margin();
}
set content_margin_right (new_value) {
  this.set_content_margin(new_value);
}
get content_margin_bottom () {
  return this.get_content_margin();
}
set content_margin_bottom (new_value) {
  this.set_content_margin(new_value);
}


  static {
    this._init_bindings();
  }
}