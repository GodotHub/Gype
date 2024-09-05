import * as internal from '__internal__';
import { NodePath } from '@js_godot/variant/node_path'
import { Variant } from '@js_godot/variant/variant'
import { Node } from '@js_godot/classes/node'
import { StringName } from '@js_godot/variant/string_name'
import { Rect2 } from '@js_godot/variant/rect2'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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
export class StatusIndicator extends Node{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("StatusIndicator");
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
      let classname = new StringName("StatusIndicator");
      let methodname = new StringName("set_tooltip");
      this._bindings.method_set_tooltip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("StatusIndicator");
      let methodname = new StringName("get_tooltip");
      this._bindings.method_get_tooltip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("StatusIndicator");
      let methodname = new StringName("set_icon");
      this._bindings.method_set_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("StatusIndicator");
      let methodname = new StringName("get_icon");
      this._bindings.method_get_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("StatusIndicator");
      let methodname = new StringName("set_visible");
      this._bindings.method_set_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("StatusIndicator");
      let methodname = new StringName("is_visible");
      this._bindings.method_is_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("StatusIndicator");
      let methodname = new StringName("set_menu");
      this._bindings.method_set_menu = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("StatusIndicator");
      let methodname = new StringName("get_menu");
      this._bindings.method_get_menu = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
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
    return _call_native_mb_no_ret(
      StatusIndicator._bindings.method_set_tooltip,
      this._owner,
      _tooltip
    );
    
  }
  get_tooltip() {
    return _call_native_mb_ret(
      StatusIndicator._bindings.method_get_tooltip,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_icon(_texture) {
    return _call_native_mb_no_ret(
      StatusIndicator._bindings.method_set_icon,
      this._owner,
      _texture
    );
    
  }
  get_icon() {
    return _call_native_mb_ret(
      StatusIndicator._bindings.method_get_icon,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_visible(_visible) {
    return _call_native_mb_no_ret(
      StatusIndicator._bindings.method_set_visible,
      this._owner,
      _visible
    );
    
  }
  is_visible() {
    return _call_native_mb_ret(
      StatusIndicator._bindings.method_is_visible,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_menu(_menu) {
    return _call_native_mb_no_ret(
      StatusIndicator._bindings.method_set_menu,
      this._owner,
      _menu
    );
    
  }
  get_menu() {
    return _call_native_mb_ret(
      StatusIndicator._bindings.method_get_menu,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  get_rect() {
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


  static {
    this._init_bindings();
  }
}