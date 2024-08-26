import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { Rect2 } from 'src/js_godot/variant/rect2'
import { GDString } from 'src/js_godot/variant/gd_string'
import { Node } from 'src/js_godot/classesnode'
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

  constructor(godot_object) {
    if (!godot_object) {
      super("StatusIndicator");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_set_tooltip,
      this._owner,
      _tooltip
    );
  }
  get_tooltip() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tooltip,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_icon(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_icon,
      this._owner,
      _texture
    );
  }
  get_icon() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_icon,
      this._owner,
			Variant.INT,
      
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
  set_menu(_menu) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_menu,
      this._owner,
      _menu
    );
  }
  get_menu() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_menu,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
  }
  get_rect() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rect,
      this._owner,
			Variant.Type.RECT2
    ,
      
    );
  }
}