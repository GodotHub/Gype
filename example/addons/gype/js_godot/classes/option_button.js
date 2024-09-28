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
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_add_item;
  method_add_icon_item;
  method_set_item_text;
  method_set_item_icon;
  method_set_item_disabled;
  method_set_item_id;
  method_set_item_metadata;
  method_set_item_tooltip;
  method_get_item_text;
  method_get_item_icon;
  method_get_item_id;
  method_get_item_index;
  method_get_item_metadata;
  method_get_item_tooltip;
  method_is_item_disabled;
  method_is_item_separator;
  method_add_separator;
  method_clear;
  method_select;
  method_get_selected;
  method_get_selected_id;
  method_get_selected_metadata;
  method_remove_item;
  method_get_popup;
  method_show_popup;
  method_set_item_count;
  method_get_item_count;
  method_has_selectable_items;
  method_get_selectable_item;
  method_set_fit_to_longest_item;
  method_is_fit_to_longest_item;
  method_set_allow_reselect;
  method_get_allow_reselect;
  method_set_disable_shortcuts;
}
@GodotClass
export class OptionButton extends Button{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OptionButton");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_item() {
    if (!this._bindings.method_add_item) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("add_item");
      this._bindings.method_add_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2697778442
      );
    }
  }
  static init_method_add_icon_item() {
    if (!this._bindings.method_add_icon_item) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("add_icon_item");
      this._bindings.method_add_icon_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3781678508
      );
    }
  }
  static init_method_set_item_text() {
    if (!this._bindings.method_set_item_text) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_item_text");
      this._bindings.method_set_item_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_set_item_icon() {
    if (!this._bindings.method_set_item_icon) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_item_icon");
      this._bindings.method_set_item_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        666127730
      );
    }
  }
  static init_method_set_item_disabled() {
    if (!this._bindings.method_set_item_disabled) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_item_disabled");
      this._bindings.method_set_item_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_set_item_id() {
    if (!this._bindings.method_set_item_id) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_item_id");
      this._bindings.method_set_item_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_set_item_metadata() {
    if (!this._bindings.method_set_item_metadata) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_item_metadata");
      this._bindings.method_set_item_metadata = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2152698145
      );
    }
  }
  static init_method_set_item_tooltip() {
    if (!this._bindings.method_set_item_tooltip) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_item_tooltip");
      this._bindings.method_set_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_item_text() {
    if (!this._bindings.method_get_item_text) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_item_text");
      this._bindings.method_get_item_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_item_icon() {
    if (!this._bindings.method_get_item_icon) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_item_icon");
      this._bindings.method_get_item_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3536238170
      );
    }
  }
  static init_method_get_item_id() {
    if (!this._bindings.method_get_item_id) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_item_id");
      this._bindings.method_get_item_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_get_item_index() {
    if (!this._bindings.method_get_item_index) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_item_index");
      this._bindings.method_get_item_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_get_item_metadata() {
    if (!this._bindings.method_get_item_metadata) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_item_metadata");
      this._bindings.method_get_item_metadata = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4227898402
      );
    }
  }
  static init_method_get_item_tooltip() {
    if (!this._bindings.method_get_item_tooltip) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_item_tooltip");
      this._bindings.method_get_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_is_item_disabled() {
    if (!this._bindings.method_is_item_disabled) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("is_item_disabled");
      this._bindings.method_is_item_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_is_item_separator() {
    if (!this._bindings.method_is_item_separator) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("is_item_separator");
      this._bindings.method_is_item_separator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_add_separator() {
    if (!this._bindings.method_add_separator) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("add_separator");
      this._bindings.method_add_separator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3005725572
      );
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_select() {
    if (!this._bindings.method_select) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("select");
      this._bindings.method_select = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_selected() {
    if (!this._bindings.method_get_selected) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_selected");
      this._bindings.method_get_selected = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_selected_id() {
    if (!this._bindings.method_get_selected_id) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_selected_id");
      this._bindings.method_get_selected_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_selected_metadata() {
    if (!this._bindings.method_get_selected_metadata) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_selected_metadata");
      this._bindings.method_get_selected_metadata = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1214101251
      );
    }
  }
  static init_method_remove_item() {
    if (!this._bindings.method_remove_item) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("remove_item");
      this._bindings.method_remove_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_popup() {
    if (!this._bindings.method_get_popup) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_popup");
      this._bindings.method_get_popup = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        229722558
      );
    }
  }
  static init_method_show_popup() {
    if (!this._bindings.method_show_popup) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("show_popup");
      this._bindings.method_show_popup = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_item_count() {
    if (!this._bindings.method_set_item_count) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_item_count");
      this._bindings.method_set_item_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_item_count() {
    if (!this._bindings.method_get_item_count) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_item_count");
      this._bindings.method_get_item_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_has_selectable_items() {
    if (!this._bindings.method_has_selectable_items) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("has_selectable_items");
      this._bindings.method_has_selectable_items = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_selectable_item() {
    if (!this._bindings.method_get_selectable_item) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_selectable_item");
      this._bindings.method_get_selectable_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        894402480
      );
    }
  }
  static init_method_set_fit_to_longest_item() {
    if (!this._bindings.method_set_fit_to_longest_item) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_fit_to_longest_item");
      this._bindings.method_set_fit_to_longest_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_fit_to_longest_item() {
    if (!this._bindings.method_is_fit_to_longest_item) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("is_fit_to_longest_item");
      this._bindings.method_is_fit_to_longest_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_allow_reselect() {
    if (!this._bindings.method_set_allow_reselect) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_allow_reselect");
      this._bindings.method_set_allow_reselect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_allow_reselect() {
    if (!this._bindings.method_get_allow_reselect) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_allow_reselect");
      this._bindings.method_get_allow_reselect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_disable_shortcuts() {
    if (!this._bindings.method_set_disable_shortcuts) {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_disable_shortcuts");
      this._bindings.method_set_disable_shortcuts = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }

  
  
  add_item(_label, _id) {
    OptionButton.init_method_add_item();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_add_item,
      this._owner,
      _label, _id
    );
    
  }
  add_icon_item(_texture, _label, _id) {
    OptionButton.init_method_add_icon_item();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_add_icon_item,
      this._owner,
      _texture, _label, _id
    );
    
  }
  set_item_text(_idx, _text) {
    OptionButton.init_method_set_item_text();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_item_text,
      this._owner,
      _idx, _text
    );
    
  }
  set_item_icon(_idx, _texture) {
    OptionButton.init_method_set_item_icon();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_item_icon,
      this._owner,
      _idx, _texture
    );
    
  }
  set_item_disabled(_idx, _disabled) {
    OptionButton.init_method_set_item_disabled();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_item_disabled,
      this._owner,
      _idx, _disabled
    );
    
  }
  set_item_id(_idx, _id) {
    OptionButton.init_method_set_item_id();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_item_id,
      this._owner,
      _idx, _id
    );
    
  }
  set_item_metadata(_idx, _metadata) {
    OptionButton.init_method_set_item_metadata();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_item_metadata,
      this._owner,
      _idx, _metadata
    );
    
  }
  set_item_tooltip(_idx, _tooltip) {
    OptionButton.init_method_set_item_tooltip();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_item_tooltip,
      this._owner,
      _idx, _tooltip
    );
    
  }
  get_item_text(_idx) {
    OptionButton.init_method_get_item_text();
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_item_text,
      this._owner,
			Variant.Type.STRING,
    
      _idx
    );
    
  }
  get_item_icon(_idx) {
    OptionButton.init_method_get_item_icon();
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_item_icon,
      this._owner,
			Variant.Type.OBJECT,
      _idx
    );
    
  }
  get_item_id(_idx) {
    OptionButton.init_method_get_item_id();
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_item_id,
      this._owner,
			Variant.Type.INT,
    
      _idx
    );
    
  }
  get_item_index(_id) {
    OptionButton.init_method_get_item_index();
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_item_index,
      this._owner,
			Variant.Type.INT,
    
      _id
    );
    
  }
  get_item_metadata(_idx) {
    OptionButton.init_method_get_item_metadata();
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_item_metadata,
      this._owner,
			Variant.Type.VARIANT,
    
      _idx
    );
    
  }
  get_item_tooltip(_idx) {
    OptionButton.init_method_get_item_tooltip();
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_item_tooltip,
      this._owner,
			Variant.Type.STRING,
    
      _idx
    );
    
  }
  is_item_disabled(_idx) {
    OptionButton.init_method_is_item_disabled();
    return _call_native_mb_ret(
      OptionButton._bindings.method_is_item_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      _idx
    );
    
  }
  is_item_separator(_idx) {
    OptionButton.init_method_is_item_separator();
    return _call_native_mb_ret(
      OptionButton._bindings.method_is_item_separator,
      this._owner,
			Variant.Type.BOOL,
    
      _idx
    );
    
  }
  add_separator(_text) {
    OptionButton.init_method_add_separator();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_add_separator,
      this._owner,
      _text
    );
    
  }
  clear() {
    OptionButton.init_method_clear();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_clear,
      this._owner,
      
    );
    
  }
  select(_idx) {
    OptionButton.init_method_select();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_select,
      this._owner,
      _idx
    );
    
  }
  get_selected() {
    OptionButton.init_method_get_selected();
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_selected,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_selected_id() {
    OptionButton.init_method_get_selected_id();
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_selected_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_selected_metadata() {
    OptionButton.init_method_get_selected_metadata();
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_selected_metadata,
      this._owner,
			Variant.Type.VARIANT,
    
      
    );
    
  }
  remove_item(_idx) {
    OptionButton.init_method_remove_item();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_remove_item,
      this._owner,
      _idx
    );
    
  }
  get_popup() {
    OptionButton.init_method_get_popup();
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_popup,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  show_popup() {
    OptionButton.init_method_show_popup();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_show_popup,
      this._owner,
      
    );
    
  }
  set_item_count(_count) {
    OptionButton.init_method_set_item_count();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_item_count,
      this._owner,
      _count
    );
    
  }
  get_item_count() {
    OptionButton.init_method_get_item_count();
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_item_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  has_selectable_items() {
    OptionButton.init_method_has_selectable_items();
    return _call_native_mb_ret(
      OptionButton._bindings.method_has_selectable_items,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_selectable_item(_from_last) {
    OptionButton.init_method_get_selectable_item();
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_selectable_item,
      this._owner,
			Variant.Type.INT,
    
      _from_last
    );
    
  }
  set_fit_to_longest_item(_fit) {
    OptionButton.init_method_set_fit_to_longest_item();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_fit_to_longest_item,
      this._owner,
      _fit
    );
    
  }
  is_fit_to_longest_item() {
    OptionButton.init_method_is_fit_to_longest_item();
    return _call_native_mb_ret(
      OptionButton._bindings.method_is_fit_to_longest_item,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_allow_reselect(_allow) {
    OptionButton.init_method_set_allow_reselect();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_allow_reselect,
      this._owner,
      _allow
    );
    
  }
  get_allow_reselect() {
    OptionButton.init_method_get_allow_reselect();
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_allow_reselect,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_disable_shortcuts(_disabled) {
    OptionButton.init_method_set_disable_shortcuts();
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_disable_shortcuts,
      this._owner,
      _disabled
    );
    
  }
  
get selected () {
  return this.get_selected();
}
set selected (new_value) {
  this._select_int(new_value);
}
get fit_to_longest_item () {
  return this.is_fit_to_longest_item();
}
set fit_to_longest_item (new_value) {
  this.set_fit_to_longest_item(new_value);
}
get allow_reselect () {
  return this.get_allow_reselect();
}
set allow_reselect (new_value) {
  this.set_allow_reselect(new_value);
}
get item_count () {
  return this.get_item_count();
}
set item_count (new_value) {
  this.set_item_count(new_value);
}

}