import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Button } from '@js_godot/classes/button'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_popup;
  method_show_popup;
  method_set_switch_on_hover;
  method_is_switch_on_hover;
  method_set_disable_shortcuts;
  method_set_item_count;
  method_get_item_count;
}
export class MenuButton extends Button{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MenuButton");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_popup() {
    if (!this.#_bindings.method_get_popup) {
      let classname = new StringName("MenuButton");
      let methodname = new StringName("get_popup");
      this.#_bindings.method_get_popup = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        229722558
      );
    }
  }
  static init_method_show_popup() {
    if (!this.#_bindings.method_show_popup) {
      let classname = new StringName("MenuButton");
      let methodname = new StringName("show_popup");
      this.#_bindings.method_show_popup = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_switch_on_hover() {
    if (!this.#_bindings.method_set_switch_on_hover) {
      let classname = new StringName("MenuButton");
      let methodname = new StringName("set_switch_on_hover");
      this.#_bindings.method_set_switch_on_hover = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_switch_on_hover() {
    if (!this.#_bindings.method_is_switch_on_hover) {
      let classname = new StringName("MenuButton");
      let methodname = new StringName("is_switch_on_hover");
      this.#_bindings.method_is_switch_on_hover = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_disable_shortcuts() {
    if (!this.#_bindings.method_set_disable_shortcuts) {
      let classname = new StringName("MenuButton");
      let methodname = new StringName("set_disable_shortcuts");
      this.#_bindings.method_set_disable_shortcuts = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_item_count() {
    if (!this.#_bindings.method_set_item_count) {
      let classname = new StringName("MenuButton");
      let methodname = new StringName("set_item_count");
      this.#_bindings.method_set_item_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_item_count() {
    if (!this.#_bindings.method_get_item_count) {
      let classname = new StringName("MenuButton");
      let methodname = new StringName("get_item_count");
      this.#_bindings.method_get_item_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  get_popup() {
    MenuButton.init_method_get_popup();
    return _call_native_mb_ret(
      MenuButton.#_bindings.method_get_popup,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  show_popup() {
    MenuButton.init_method_show_popup();
    return _call_native_mb_no_ret(
      MenuButton.#_bindings.method_show_popup,
      this._owner,
      
    );
    
  }
  set_switch_on_hover(_enable) {
    MenuButton.init_method_set_switch_on_hover();
    return _call_native_mb_no_ret(
      MenuButton.#_bindings.method_set_switch_on_hover,
      this._owner,
      _enable
    );
    
  }
  is_switch_on_hover() {
    MenuButton.init_method_is_switch_on_hover();
    return _call_native_mb_ret(
      MenuButton.#_bindings.method_is_switch_on_hover,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_disable_shortcuts(_disabled) {
    MenuButton.init_method_set_disable_shortcuts();
    return _call_native_mb_no_ret(
      MenuButton.#_bindings.method_set_disable_shortcuts,
      this._owner,
      _disabled
    );
    
  }
  set_item_count(_count) {
    MenuButton.init_method_set_item_count();
    return _call_native_mb_no_ret(
      MenuButton.#_bindings.method_set_item_count,
      this._owner,
      _count
    );
    
  }
  get_item_count() {
    MenuButton.init_method_get_item_count();
    return _call_native_mb_ret(
      MenuButton.#_bindings.method_get_item_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get switch_on_hover () {
  return this.is_switch_on_hover();
}
set switch_on_hover (new_value) {
  this.set_switch_on_hover(new_value);
}
get item_count () {
  return this.get_item_count();
}
set item_count (new_value) {
  this.set_item_count(new_value);
}

}