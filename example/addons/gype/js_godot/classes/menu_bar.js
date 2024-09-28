import * as internal from '__internal__';
import { Control } from '@js_godot/classes/control'
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
  method_set_switch_on_hover;
  method_is_switch_on_hover;
  method_set_disable_shortcuts;
  method_set_prefer_global_menu;
  method_is_prefer_global_menu;
  method_is_native_menu;
  method_get_menu_count;
  method_set_text_direction;
  method_get_text_direction;
  method_set_language;
  method_get_language;
  method_set_flat;
  method_is_flat;
  method_set_start_index;
  method_get_start_index;
  method_set_menu_title;
  method_get_menu_title;
  method_set_menu_tooltip;
  method_get_menu_tooltip;
  method_set_menu_disabled;
  method_is_menu_disabled;
  method_set_menu_hidden;
  method_is_menu_hidden;
  method_get_menu_popup;
}
@GodotClass
export class MenuBar extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MenuBar");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_switch_on_hover() {
    if (!this._bindings.method_set_switch_on_hover) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("set_switch_on_hover");
      this._bindings.method_set_switch_on_hover = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_switch_on_hover() {
    if (!this._bindings.method_is_switch_on_hover) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("is_switch_on_hover");
      this._bindings.method_is_switch_on_hover = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_disable_shortcuts() {
    if (!this._bindings.method_set_disable_shortcuts) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("set_disable_shortcuts");
      this._bindings.method_set_disable_shortcuts = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_prefer_global_menu() {
    if (!this._bindings.method_set_prefer_global_menu) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("set_prefer_global_menu");
      this._bindings.method_set_prefer_global_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_prefer_global_menu() {
    if (!this._bindings.method_is_prefer_global_menu) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("is_prefer_global_menu");
      this._bindings.method_is_prefer_global_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_native_menu() {
    if (!this._bindings.method_is_native_menu) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("is_native_menu");
      this._bindings.method_is_native_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_menu_count() {
    if (!this._bindings.method_get_menu_count) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("get_menu_count");
      this._bindings.method_get_menu_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_text_direction() {
    if (!this._bindings.method_set_text_direction) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("set_text_direction");
      this._bindings.method_set_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        119160795
      );
    }
  }
  static init_method_get_text_direction() {
    if (!this._bindings.method_get_text_direction) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("get_text_direction");
      this._bindings.method_get_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        797257663
      );
    }
  }
  static init_method_set_language() {
    if (!this._bindings.method_set_language) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("set_language");
      this._bindings.method_set_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_language() {
    if (!this._bindings.method_get_language) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("get_language");
      this._bindings.method_get_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_flat() {
    if (!this._bindings.method_set_flat) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("set_flat");
      this._bindings.method_set_flat = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_flat() {
    if (!this._bindings.method_is_flat) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("is_flat");
      this._bindings.method_is_flat = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_start_index() {
    if (!this._bindings.method_set_start_index) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("set_start_index");
      this._bindings.method_set_start_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_start_index() {
    if (!this._bindings.method_get_start_index) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("get_start_index");
      this._bindings.method_get_start_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_menu_title() {
    if (!this._bindings.method_set_menu_title) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("set_menu_title");
      this._bindings.method_set_menu_title = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_menu_title() {
    if (!this._bindings.method_get_menu_title) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("get_menu_title");
      this._bindings.method_get_menu_title = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_set_menu_tooltip() {
    if (!this._bindings.method_set_menu_tooltip) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("set_menu_tooltip");
      this._bindings.method_set_menu_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_menu_tooltip() {
    if (!this._bindings.method_get_menu_tooltip) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("get_menu_tooltip");
      this._bindings.method_get_menu_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_set_menu_disabled() {
    if (!this._bindings.method_set_menu_disabled) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("set_menu_disabled");
      this._bindings.method_set_menu_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_menu_disabled() {
    if (!this._bindings.method_is_menu_disabled) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("is_menu_disabled");
      this._bindings.method_is_menu_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_menu_hidden() {
    if (!this._bindings.method_set_menu_hidden) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("set_menu_hidden");
      this._bindings.method_set_menu_hidden = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_menu_hidden() {
    if (!this._bindings.method_is_menu_hidden) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("is_menu_hidden");
      this._bindings.method_is_menu_hidden = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_get_menu_popup() {
    if (!this._bindings.method_get_menu_popup) {
      let classname = new StringName("MenuBar");
      let methodname = new StringName("get_menu_popup");
      this._bindings.method_get_menu_popup = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2100501353
      );
    }
  }

  
  
  set_switch_on_hover(_enable) {
    MenuBar.init_method_set_switch_on_hover();
    return _call_native_mb_no_ret(
      MenuBar._bindings.method_set_switch_on_hover,
      this._owner,
      _enable
    );
    
  }
  is_switch_on_hover() {
    MenuBar.init_method_is_switch_on_hover();
    return _call_native_mb_ret(
      MenuBar._bindings.method_is_switch_on_hover,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_disable_shortcuts(_disabled) {
    MenuBar.init_method_set_disable_shortcuts();
    return _call_native_mb_no_ret(
      MenuBar._bindings.method_set_disable_shortcuts,
      this._owner,
      _disabled
    );
    
  }
  set_prefer_global_menu(_enabled) {
    MenuBar.init_method_set_prefer_global_menu();
    return _call_native_mb_no_ret(
      MenuBar._bindings.method_set_prefer_global_menu,
      this._owner,
      _enabled
    );
    
  }
  is_prefer_global_menu() {
    MenuBar.init_method_is_prefer_global_menu();
    return _call_native_mb_ret(
      MenuBar._bindings.method_is_prefer_global_menu,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_native_menu() {
    MenuBar.init_method_is_native_menu();
    return _call_native_mb_ret(
      MenuBar._bindings.method_is_native_menu,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_menu_count() {
    MenuBar.init_method_get_menu_count();
    return _call_native_mb_ret(
      MenuBar._bindings.method_get_menu_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_text_direction(_direction) {
    MenuBar.init_method_set_text_direction();
    return _call_native_mb_no_ret(
      MenuBar._bindings.method_set_text_direction,
      this._owner,
      _direction
    );
    
  }
  get_text_direction() {
    MenuBar.init_method_get_text_direction();
    return _call_native_mb_ret(
      MenuBar._bindings.method_get_text_direction,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_language(_language) {
    MenuBar.init_method_set_language();
    return _call_native_mb_no_ret(
      MenuBar._bindings.method_set_language,
      this._owner,
      _language
    );
    
  }
  get_language() {
    MenuBar.init_method_get_language();
    return _call_native_mb_ret(
      MenuBar._bindings.method_get_language,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_flat(_enabled) {
    MenuBar.init_method_set_flat();
    return _call_native_mb_no_ret(
      MenuBar._bindings.method_set_flat,
      this._owner,
      _enabled
    );
    
  }
  is_flat() {
    MenuBar.init_method_is_flat();
    return _call_native_mb_ret(
      MenuBar._bindings.method_is_flat,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_start_index(_enabled) {
    MenuBar.init_method_set_start_index();
    return _call_native_mb_no_ret(
      MenuBar._bindings.method_set_start_index,
      this._owner,
      _enabled
    );
    
  }
  get_start_index() {
    MenuBar.init_method_get_start_index();
    return _call_native_mb_ret(
      MenuBar._bindings.method_get_start_index,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_menu_title(_menu, _title) {
    MenuBar.init_method_set_menu_title();
    return _call_native_mb_no_ret(
      MenuBar._bindings.method_set_menu_title,
      this._owner,
      _menu, _title
    );
    
  }
  get_menu_title(_menu) {
    MenuBar.init_method_get_menu_title();
    return _call_native_mb_ret(
      MenuBar._bindings.method_get_menu_title,
      this._owner,
			Variant.Type.STRING,
    
      _menu
    );
    
  }
  set_menu_tooltip(_menu, _tooltip) {
    MenuBar.init_method_set_menu_tooltip();
    return _call_native_mb_no_ret(
      MenuBar._bindings.method_set_menu_tooltip,
      this._owner,
      _menu, _tooltip
    );
    
  }
  get_menu_tooltip(_menu) {
    MenuBar.init_method_get_menu_tooltip();
    return _call_native_mb_ret(
      MenuBar._bindings.method_get_menu_tooltip,
      this._owner,
			Variant.Type.STRING,
    
      _menu
    );
    
  }
  set_menu_disabled(_menu, _disabled) {
    MenuBar.init_method_set_menu_disabled();
    return _call_native_mb_no_ret(
      MenuBar._bindings.method_set_menu_disabled,
      this._owner,
      _menu, _disabled
    );
    
  }
  is_menu_disabled(_menu) {
    MenuBar.init_method_is_menu_disabled();
    return _call_native_mb_ret(
      MenuBar._bindings.method_is_menu_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      _menu
    );
    
  }
  set_menu_hidden(_menu, _hidden) {
    MenuBar.init_method_set_menu_hidden();
    return _call_native_mb_no_ret(
      MenuBar._bindings.method_set_menu_hidden,
      this._owner,
      _menu, _hidden
    );
    
  }
  is_menu_hidden(_menu) {
    MenuBar.init_method_is_menu_hidden();
    return _call_native_mb_ret(
      MenuBar._bindings.method_is_menu_hidden,
      this._owner,
			Variant.Type.BOOL,
    
      _menu
    );
    
  }
  get_menu_popup(_menu) {
    MenuBar.init_method_get_menu_popup();
    return _call_native_mb_ret(
      MenuBar._bindings.method_get_menu_popup,
      this._owner,
			Variant.Type.OBJECT,
      _menu
    );
    
  }
  
get flat () {
  return this.is_flat();
}
set flat (new_value) {
  this.set_flat(new_value);
}
get start_index () {
  return this.get_start_index();
}
set start_index (new_value) {
  this.set_start_index(new_value);
}
get switch_on_hover () {
  return this.is_switch_on_hover();
}
set switch_on_hover (new_value) {
  this.set_switch_on_hover(new_value);
}
get prefer_global_menu () {
  return this.is_prefer_global_menu();
}
set prefer_global_menu (new_value) {
  this.set_prefer_global_menu(new_value);
}
get text_direction () {
  return this.get_text_direction();
}
set text_direction (new_value) {
  this.set_text_direction(new_value);
}
get language () {
  return this.get_language();
}
set language (new_value) {
  this.set_language(new_value);
}

}