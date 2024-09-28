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
  method_set_tooltip;
  method_get_tooltip;
  method_set_icon;
  method_get_icon;
  method_set_visible;
  method_is_visible;
  method_set_menu;
  method_get_menu;
  method_get_rect;
}
@GodotClass
export class StatusIndicator extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("StatusIndicator");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_tooltip() {
    if (!this._bindings.method_set_tooltip) {
      let classname = new StringName("StatusIndicator");
      let methodname = new StringName("set_tooltip");
      this._bindings.method_set_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_tooltip() {
    if (!this._bindings.method_get_tooltip) {
      let classname = new StringName("StatusIndicator");
      let methodname = new StringName("get_tooltip");
      this._bindings.method_get_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_icon() {
    if (!this._bindings.method_set_icon) {
      let classname = new StringName("StatusIndicator");
      let methodname = new StringName("set_icon");
      this._bindings.method_set_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_icon() {
    if (!this._bindings.method_get_icon) {
      let classname = new StringName("StatusIndicator");
      let methodname = new StringName("get_icon");
      this._bindings.method_get_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_visible() {
    if (!this._bindings.method_set_visible) {
      let classname = new StringName("StatusIndicator");
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
      let classname = new StringName("StatusIndicator");
      let methodname = new StringName("is_visible");
      this._bindings.method_is_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_menu() {
    if (!this._bindings.method_set_menu) {
      let classname = new StringName("StatusIndicator");
      let methodname = new StringName("set_menu");
      this._bindings.method_set_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_menu() {
    if (!this._bindings.method_get_menu) {
      let classname = new StringName("StatusIndicator");
      let methodname = new StringName("get_menu");
      this._bindings.method_get_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_get_rect() {
    if (!this._bindings.method_get_rect) {
      let classname = new StringName("StatusIndicator");
      let methodname = new StringName("get_rect");
      this._bindings.method_get_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1639390495
      );
    }
  }

  
  
  set_tooltip(_tooltip) {
    StatusIndicator.init_method_set_tooltip();
    return _call_native_mb_no_ret(
      StatusIndicator._bindings.method_set_tooltip,
      this._owner,
      _tooltip
    );
    
  }
  get_tooltip() {
    StatusIndicator.init_method_get_tooltip();
    return _call_native_mb_ret(
      StatusIndicator._bindings.method_get_tooltip,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_icon(_texture) {
    StatusIndicator.init_method_set_icon();
    return _call_native_mb_no_ret(
      StatusIndicator._bindings.method_set_icon,
      this._owner,
      _texture
    );
    
  }
  get_icon() {
    StatusIndicator.init_method_get_icon();
    return _call_native_mb_ret(
      StatusIndicator._bindings.method_get_icon,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_visible(_visible) {
    StatusIndicator.init_method_set_visible();
    return _call_native_mb_no_ret(
      StatusIndicator._bindings.method_set_visible,
      this._owner,
      _visible
    );
    
  }
  is_visible() {
    StatusIndicator.init_method_is_visible();
    return _call_native_mb_ret(
      StatusIndicator._bindings.method_is_visible,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_menu(_menu) {
    StatusIndicator.init_method_set_menu();
    return _call_native_mb_no_ret(
      StatusIndicator._bindings.method_set_menu,
      this._owner,
      _menu
    );
    
  }
  get_menu() {
    StatusIndicator.init_method_get_menu();
    return _call_native_mb_ret(
      StatusIndicator._bindings.method_get_menu,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  get_rect() {
    StatusIndicator.init_method_get_rect();
    return _call_native_mb_ret(
      StatusIndicator._bindings.method_get_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  
get tooltip () {
  return this.get_tooltip();
}
set tooltip (new_value) {
  this.set_tooltip(new_value);
}
get icon () {
  return this.get_icon();
}
set icon (new_value) {
  this.set_icon(new_value);
}
get menu () {
  return this.get_menu();
}
set menu (new_value) {
  this.set_menu(new_value);
}
get visible () {
  return this.is_visible();
}
set visible (new_value) {
  this.set_visible(new_value);
}

}