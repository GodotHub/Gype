import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

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
@GodotClass
export class StyleBox extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("StyleBox");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_minimum_size() {
    if (!this._bindings.method_get_minimum_size) {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("get_minimum_size");
      this._bindings.method_get_minimum_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_content_margin() {
    if (!this._bindings.method_set_content_margin) {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("set_content_margin");
      this._bindings.method_set_content_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4290182280
      );
    }
  }
  static init_method_set_content_margin_all() {
    if (!this._bindings.method_set_content_margin_all) {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("set_content_margin_all");
      this._bindings.method_set_content_margin_all = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_content_margin() {
    if (!this._bindings.method_get_content_margin) {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("get_content_margin");
      this._bindings.method_get_content_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2869120046
      );
    }
  }
  static init_method_get_margin() {
    if (!this._bindings.method_get_margin) {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("get_margin");
      this._bindings.method_get_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2869120046
      );
    }
  }
  static init_method_get_offset() {
    if (!this._bindings.method_get_offset) {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("get_offset");
      this._bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_draw() {
    if (!this._bindings.method_draw) {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("draw");
      this._bindings.method_draw = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2275962004
      );
    }
  }
  static init_method_get_current_item_drawn() {
    if (!this._bindings.method_get_current_item_drawn) {
      let classname = new StringName("StyleBox");
      let methodname = new StringName("get_current_item_drawn");
      this._bindings.method_get_current_item_drawn = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3213695180
      );
    }
  }
  static init_method_test_mask() {
    if (!this._bindings.method_test_mask) {
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
    StyleBox.init_method_get_minimum_size();
    return _call_native_mb_ret(
      StyleBox._bindings.method_get_minimum_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_content_margin(_margin, _offset) {
    StyleBox.init_method_set_content_margin();
    return _call_native_mb_no_ret(
      StyleBox._bindings.method_set_content_margin,
      this._owner,
      _margin, _offset
    );
    
  }
  set_content_margin_all(_offset) {
    StyleBox.init_method_set_content_margin_all();
    return _call_native_mb_no_ret(
      StyleBox._bindings.method_set_content_margin_all,
      this._owner,
      _offset
    );
    
  }
  get_content_margin(_margin) {
    StyleBox.init_method_get_content_margin();
    return _call_native_mb_ret(
      StyleBox._bindings.method_get_content_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      _margin
    );
    
  }
  get_margin(_margin) {
    StyleBox.init_method_get_margin();
    return _call_native_mb_ret(
      StyleBox._bindings.method_get_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      _margin
    );
    
  }
  get_offset() {
    StyleBox.init_method_get_offset();
    return _call_native_mb_ret(
      StyleBox._bindings.method_get_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  draw(_canvas_item, _rect) {
    StyleBox.init_method_draw();
    return _call_native_mb_no_ret(
      StyleBox._bindings.method_draw,
      this._owner,
      _canvas_item, _rect
    );
    
  }
  get_current_item_drawn() {
    StyleBox.init_method_get_current_item_drawn();
    return _call_native_mb_ret(
      StyleBox._bindings.method_get_current_item_drawn,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  test_mask(_point, _rect) {
    StyleBox.init_method_test_mask();
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

}