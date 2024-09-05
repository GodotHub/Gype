import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Button } from '@js_godot/classes/button'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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
export class OptionButton extends Button{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("OptionButton");
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
      let classname = new StringName("OptionButton");
      let methodname = new StringName("add_item");
      this._bindings.method_add_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2697778442
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("add_icon_item");
      this._bindings.method_add_icon_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3781678508
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_item_text");
      this._bindings.method_set_item_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_item_icon");
      this._bindings.method_set_item_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        666127730
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_item_disabled");
      this._bindings.method_set_item_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_item_id");
      this._bindings.method_set_item_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_item_metadata");
      this._bindings.method_set_item_metadata = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2152698145
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_item_tooltip");
      this._bindings.method_set_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_item_text");
      this._bindings.method_get_item_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_item_icon");
      this._bindings.method_get_item_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3536238170
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_item_id");
      this._bindings.method_get_item_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_item_index");
      this._bindings.method_get_item_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_item_metadata");
      this._bindings.method_get_item_metadata = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4227898402
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_item_tooltip");
      this._bindings.method_get_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("is_item_disabled");
      this._bindings.method_is_item_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("is_item_separator");
      this._bindings.method_is_item_separator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("add_separator");
      this._bindings.method_add_separator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3005725572
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("select");
      this._bindings.method_select = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_selected");
      this._bindings.method_get_selected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_selected_id");
      this._bindings.method_get_selected_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_selected_metadata");
      this._bindings.method_get_selected_metadata = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1214101251
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("remove_item");
      this._bindings.method_remove_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_popup");
      this._bindings.method_get_popup = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        229722558
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("show_popup");
      this._bindings.method_show_popup = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_item_count");
      this._bindings.method_set_item_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_item_count");
      this._bindings.method_get_item_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("has_selectable_items");
      this._bindings.method_has_selectable_items = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_selectable_item");
      this._bindings.method_get_selectable_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        894402480
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_fit_to_longest_item");
      this._bindings.method_set_fit_to_longest_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("is_fit_to_longest_item");
      this._bindings.method_is_fit_to_longest_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("set_allow_reselect");
      this._bindings.method_set_allow_reselect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("OptionButton");
      let methodname = new StringName("get_allow_reselect");
      this._bindings.method_get_allow_reselect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
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
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_add_item,
      this._owner,
      _label, _id
    );
    
  }
  add_icon_item(_texture, _label, _id) {
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_add_icon_item,
      this._owner,
      _texture, _label, _id
    );
    
  }
  set_item_text(_idx, _text) {
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_item_text,
      this._owner,
      _idx, _text
    );
    
  }
  set_item_icon(_idx, _texture) {
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_item_icon,
      this._owner,
      _idx, _texture
    );
    
  }
  set_item_disabled(_idx, _disabled) {
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_item_disabled,
      this._owner,
      _idx, _disabled
    );
    
  }
  set_item_id(_idx, _id) {
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_item_id,
      this._owner,
      _idx, _id
    );
    
  }
  set_item_metadata(_idx, _metadata) {
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_item_metadata,
      this._owner,
      _idx, _metadata
    );
    
  }
  set_item_tooltip(_idx, _tooltip) {
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_item_tooltip,
      this._owner,
      _idx, _tooltip
    );
    
  }
  get_item_text(_idx) {
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_item_text,
      this._owner,
			Variant.Type.STRING,
    
      _idx
    );
    
  }
  get_item_icon(_idx) {
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_item_icon,
      this._owner,
			Variant.INT,
      _idx
    );
    
  }
  get_item_id(_idx) {
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_item_id,
      this._owner,
			Variant.Type.INT,
      _idx
    );
    
  }
  get_item_index(_id) {
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_item_index,
      this._owner,
			Variant.Type.INT,
      _id
    );
    
  }
  get_item_metadata(_idx) {
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_item_metadata,
      this._owner,
			Variant.Type.VARIANT,
    
      _idx
    );
    
  }
  get_item_tooltip(_idx) {
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_item_tooltip,
      this._owner,
			Variant.Type.STRING,
    
      _idx
    );
    
  }
  is_item_disabled(_idx) {
    return _call_native_mb_ret(
      OptionButton._bindings.method_is_item_disabled,
      this._owner,
			Variant.Type.BOOL,
      _idx
    );
    
  }
  is_item_separator(_idx) {
    return _call_native_mb_ret(
      OptionButton._bindings.method_is_item_separator,
      this._owner,
			Variant.Type.BOOL,
      _idx
    );
    
  }
  add_separator(_text) {
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_add_separator,
      this._owner,
      _text
    );
    
  }
  clear() {
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_clear,
      this._owner,
      
    );
    
  }
  select(_idx) {
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_select,
      this._owner,
      _idx
    );
    
  }
  get_selected() {
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_selected,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_selected_id() {
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_selected_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_selected_metadata() {
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_selected_metadata,
      this._owner,
			Variant.Type.VARIANT,
    
      
    );
    
  }
  remove_item(_idx) {
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_remove_item,
      this._owner,
      _idx
    );
    
  }
  get_popup() {
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_popup,
      this._owner,
			Variant.INT,
      
    );
    
  }
  show_popup() {
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_show_popup,
      this._owner,
      
    );
    
  }
  set_item_count(_count) {
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_item_count,
      this._owner,
      _count
    );
    
  }
  get_item_count() {
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_item_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  has_selectable_items() {
    return _call_native_mb_ret(
      OptionButton._bindings.method_has_selectable_items,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_selectable_item(_from_last) {
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_selectable_item,
      this._owner,
			Variant.Type.INT,
      _from_last
    );
    
  }
  set_fit_to_longest_item(_fit) {
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_fit_to_longest_item,
      this._owner,
      _fit
    );
    
  }
  is_fit_to_longest_item() {
    return _call_native_mb_ret(
      OptionButton._bindings.method_is_fit_to_longest_item,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_allow_reselect(_allow) {
    return _call_native_mb_no_ret(
      OptionButton._bindings.method_set_allow_reselect,
      this._owner,
      _allow
    );
    
  }
  get_allow_reselect() {
    return _call_native_mb_ret(
      OptionButton._bindings.method_get_allow_reselect,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_disable_shortcuts(_disabled) {
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


  static {
    this._init_bindings();
  }
}