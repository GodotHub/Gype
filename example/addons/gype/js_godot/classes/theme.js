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
  method_set_icon;
  method_get_icon;
  method_has_icon;
  method_rename_icon;
  method_clear_icon;
  method_get_icon_list;
  method_get_icon_type_list;
  method_set_stylebox;
  method_get_stylebox;
  method_has_stylebox;
  method_rename_stylebox;
  method_clear_stylebox;
  method_get_stylebox_list;
  method_get_stylebox_type_list;
  method_set_font;
  method_get_font;
  method_has_font;
  method_rename_font;
  method_clear_font;
  method_get_font_list;
  method_get_font_type_list;
  method_set_font_size;
  method_get_font_size;
  method_has_font_size;
  method_rename_font_size;
  method_clear_font_size;
  method_get_font_size_list;
  method_get_font_size_type_list;
  method_set_color;
  method_get_color;
  method_has_color;
  method_rename_color;
  method_clear_color;
  method_get_color_list;
  method_get_color_type_list;
  method_set_constant;
  method_get_constant;
  method_has_constant;
  method_rename_constant;
  method_clear_constant;
  method_get_constant_list;
  method_get_constant_type_list;
  method_set_default_base_scale;
  method_get_default_base_scale;
  method_has_default_base_scale;
  method_set_default_font;
  method_get_default_font;
  method_has_default_font;
  method_set_default_font_size;
  method_get_default_font_size;
  method_has_default_font_size;
  method_set_theme_item;
  method_get_theme_item;
  method_has_theme_item;
  method_rename_theme_item;
  method_clear_theme_item;
  method_get_theme_item_list;
  method_get_theme_item_type_list;
  method_set_type_variation;
  method_is_type_variation;
  method_clear_type_variation;
  method_get_type_variation_base;
  method_get_type_variation_list;
  method_add_type;
  method_remove_type;
  method_get_type_list;
  method_merge_with;
  method_clear;
}
@GodotClass
export class Theme extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Theme");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_icon() {
    if (!this._bindings.method_set_icon) {
      let classname = new StringName("Theme");
      let methodname = new StringName("set_icon");
      this._bindings.method_set_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2188371082
      );
    }
  }
  static init_method_get_icon() {
    if (!this._bindings.method_get_icon) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_icon");
      this._bindings.method_get_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        934555193
      );
    }
  }
  static init_method_has_icon() {
    if (!this._bindings.method_has_icon) {
      let classname = new StringName("Theme");
      let methodname = new StringName("has_icon");
      this._bindings.method_has_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        471820014
      );
    }
  }
  static init_method_rename_icon() {
    if (!this._bindings.method_rename_icon) {
      let classname = new StringName("Theme");
      let methodname = new StringName("rename_icon");
      this._bindings.method_rename_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        642128662
      );
    }
  }
  static init_method_clear_icon() {
    if (!this._bindings.method_clear_icon) {
      let classname = new StringName("Theme");
      let methodname = new StringName("clear_icon");
      this._bindings.method_clear_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3740211285
      );
    }
  }
  static init_method_get_icon_list() {
    if (!this._bindings.method_get_icon_list) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_icon_list");
      this._bindings.method_get_icon_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4291131558
      );
    }
  }
  static init_method_get_icon_type_list() {
    if (!this._bindings.method_get_icon_type_list) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_icon_type_list");
      this._bindings.method_get_icon_type_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_set_stylebox() {
    if (!this._bindings.method_set_stylebox) {
      let classname = new StringName("Theme");
      let methodname = new StringName("set_stylebox");
      this._bindings.method_set_stylebox = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2075907568
      );
    }
  }
  static init_method_get_stylebox() {
    if (!this._bindings.method_get_stylebox) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_stylebox");
      this._bindings.method_get_stylebox = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3405608165
      );
    }
  }
  static init_method_has_stylebox() {
    if (!this._bindings.method_has_stylebox) {
      let classname = new StringName("Theme");
      let methodname = new StringName("has_stylebox");
      this._bindings.method_has_stylebox = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        471820014
      );
    }
  }
  static init_method_rename_stylebox() {
    if (!this._bindings.method_rename_stylebox) {
      let classname = new StringName("Theme");
      let methodname = new StringName("rename_stylebox");
      this._bindings.method_rename_stylebox = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        642128662
      );
    }
  }
  static init_method_clear_stylebox() {
    if (!this._bindings.method_clear_stylebox) {
      let classname = new StringName("Theme");
      let methodname = new StringName("clear_stylebox");
      this._bindings.method_clear_stylebox = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3740211285
      );
    }
  }
  static init_method_get_stylebox_list() {
    if (!this._bindings.method_get_stylebox_list) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_stylebox_list");
      this._bindings.method_get_stylebox_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4291131558
      );
    }
  }
  static init_method_get_stylebox_type_list() {
    if (!this._bindings.method_get_stylebox_type_list) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_stylebox_type_list");
      this._bindings.method_get_stylebox_type_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_set_font() {
    if (!this._bindings.method_set_font) {
      let classname = new StringName("Theme");
      let methodname = new StringName("set_font");
      this._bindings.method_set_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        177292320
      );
    }
  }
  static init_method_get_font() {
    if (!this._bindings.method_get_font) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_font");
      this._bindings.method_get_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3445063586
      );
    }
  }
  static init_method_has_font() {
    if (!this._bindings.method_has_font) {
      let classname = new StringName("Theme");
      let methodname = new StringName("has_font");
      this._bindings.method_has_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        471820014
      );
    }
  }
  static init_method_rename_font() {
    if (!this._bindings.method_rename_font) {
      let classname = new StringName("Theme");
      let methodname = new StringName("rename_font");
      this._bindings.method_rename_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        642128662
      );
    }
  }
  static init_method_clear_font() {
    if (!this._bindings.method_clear_font) {
      let classname = new StringName("Theme");
      let methodname = new StringName("clear_font");
      this._bindings.method_clear_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3740211285
      );
    }
  }
  static init_method_get_font_list() {
    if (!this._bindings.method_get_font_list) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_font_list");
      this._bindings.method_get_font_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4291131558
      );
    }
  }
  static init_method_get_font_type_list() {
    if (!this._bindings.method_get_font_type_list) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_font_type_list");
      this._bindings.method_get_font_type_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_set_font_size() {
    if (!this._bindings.method_set_font_size) {
      let classname = new StringName("Theme");
      let methodname = new StringName("set_font_size");
      this._bindings.method_set_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        281601298
      );
    }
  }
  static init_method_get_font_size() {
    if (!this._bindings.method_get_font_size) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_font_size");
      this._bindings.method_get_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2419549490
      );
    }
  }
  static init_method_has_font_size() {
    if (!this._bindings.method_has_font_size) {
      let classname = new StringName("Theme");
      let methodname = new StringName("has_font_size");
      this._bindings.method_has_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        471820014
      );
    }
  }
  static init_method_rename_font_size() {
    if (!this._bindings.method_rename_font_size) {
      let classname = new StringName("Theme");
      let methodname = new StringName("rename_font_size");
      this._bindings.method_rename_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        642128662
      );
    }
  }
  static init_method_clear_font_size() {
    if (!this._bindings.method_clear_font_size) {
      let classname = new StringName("Theme");
      let methodname = new StringName("clear_font_size");
      this._bindings.method_clear_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3740211285
      );
    }
  }
  static init_method_get_font_size_list() {
    if (!this._bindings.method_get_font_size_list) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_font_size_list");
      this._bindings.method_get_font_size_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4291131558
      );
    }
  }
  static init_method_get_font_size_type_list() {
    if (!this._bindings.method_get_font_size_type_list) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_font_size_type_list");
      this._bindings.method_get_font_size_type_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_set_color() {
    if (!this._bindings.method_set_color) {
      let classname = new StringName("Theme");
      let methodname = new StringName("set_color");
      this._bindings.method_set_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4111215154
      );
    }
  }
  static init_method_get_color() {
    if (!this._bindings.method_get_color) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_color");
      this._bindings.method_get_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2015923404
      );
    }
  }
  static init_method_has_color() {
    if (!this._bindings.method_has_color) {
      let classname = new StringName("Theme");
      let methodname = new StringName("has_color");
      this._bindings.method_has_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        471820014
      );
    }
  }
  static init_method_rename_color() {
    if (!this._bindings.method_rename_color) {
      let classname = new StringName("Theme");
      let methodname = new StringName("rename_color");
      this._bindings.method_rename_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        642128662
      );
    }
  }
  static init_method_clear_color() {
    if (!this._bindings.method_clear_color) {
      let classname = new StringName("Theme");
      let methodname = new StringName("clear_color");
      this._bindings.method_clear_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3740211285
      );
    }
  }
  static init_method_get_color_list() {
    if (!this._bindings.method_get_color_list) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_color_list");
      this._bindings.method_get_color_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4291131558
      );
    }
  }
  static init_method_get_color_type_list() {
    if (!this._bindings.method_get_color_type_list) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_color_type_list");
      this._bindings.method_get_color_type_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_set_constant() {
    if (!this._bindings.method_set_constant) {
      let classname = new StringName("Theme");
      let methodname = new StringName("set_constant");
      this._bindings.method_set_constant = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        281601298
      );
    }
  }
  static init_method_get_constant() {
    if (!this._bindings.method_get_constant) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_constant");
      this._bindings.method_get_constant = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2419549490
      );
    }
  }
  static init_method_has_constant() {
    if (!this._bindings.method_has_constant) {
      let classname = new StringName("Theme");
      let methodname = new StringName("has_constant");
      this._bindings.method_has_constant = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        471820014
      );
    }
  }
  static init_method_rename_constant() {
    if (!this._bindings.method_rename_constant) {
      let classname = new StringName("Theme");
      let methodname = new StringName("rename_constant");
      this._bindings.method_rename_constant = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        642128662
      );
    }
  }
  static init_method_clear_constant() {
    if (!this._bindings.method_clear_constant) {
      let classname = new StringName("Theme");
      let methodname = new StringName("clear_constant");
      this._bindings.method_clear_constant = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3740211285
      );
    }
  }
  static init_method_get_constant_list() {
    if (!this._bindings.method_get_constant_list) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_constant_list");
      this._bindings.method_get_constant_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4291131558
      );
    }
  }
  static init_method_get_constant_type_list() {
    if (!this._bindings.method_get_constant_type_list) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_constant_type_list");
      this._bindings.method_get_constant_type_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_set_default_base_scale() {
    if (!this._bindings.method_set_default_base_scale) {
      let classname = new StringName("Theme");
      let methodname = new StringName("set_default_base_scale");
      this._bindings.method_set_default_base_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_default_base_scale() {
    if (!this._bindings.method_get_default_base_scale) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_default_base_scale");
      this._bindings.method_get_default_base_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_has_default_base_scale() {
    if (!this._bindings.method_has_default_base_scale) {
      let classname = new StringName("Theme");
      let methodname = new StringName("has_default_base_scale");
      this._bindings.method_has_default_base_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_default_font() {
    if (!this._bindings.method_set_default_font) {
      let classname = new StringName("Theme");
      let methodname = new StringName("set_default_font");
      this._bindings.method_set_default_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1262170328
      );
    }
  }
  static init_method_get_default_font() {
    if (!this._bindings.method_get_default_font) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_default_font");
      this._bindings.method_get_default_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3229501585
      );
    }
  }
  static init_method_has_default_font() {
    if (!this._bindings.method_has_default_font) {
      let classname = new StringName("Theme");
      let methodname = new StringName("has_default_font");
      this._bindings.method_has_default_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_default_font_size() {
    if (!this._bindings.method_set_default_font_size) {
      let classname = new StringName("Theme");
      let methodname = new StringName("set_default_font_size");
      this._bindings.method_set_default_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_default_font_size() {
    if (!this._bindings.method_get_default_font_size) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_default_font_size");
      this._bindings.method_get_default_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_has_default_font_size() {
    if (!this._bindings.method_has_default_font_size) {
      let classname = new StringName("Theme");
      let methodname = new StringName("has_default_font_size");
      this._bindings.method_has_default_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_theme_item() {
    if (!this._bindings.method_set_theme_item) {
      let classname = new StringName("Theme");
      let methodname = new StringName("set_theme_item");
      this._bindings.method_set_theme_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2492983623
      );
    }
  }
  static init_method_get_theme_item() {
    if (!this._bindings.method_get_theme_item) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_theme_item");
      this._bindings.method_get_theme_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2191024021
      );
    }
  }
  static init_method_has_theme_item() {
    if (!this._bindings.method_has_theme_item) {
      let classname = new StringName("Theme");
      let methodname = new StringName("has_theme_item");
      this._bindings.method_has_theme_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1739311056
      );
    }
  }
  static init_method_rename_theme_item() {
    if (!this._bindings.method_rename_theme_item) {
      let classname = new StringName("Theme");
      let methodname = new StringName("rename_theme_item");
      this._bindings.method_rename_theme_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3900867553
      );
    }
  }
  static init_method_clear_theme_item() {
    if (!this._bindings.method_clear_theme_item) {
      let classname = new StringName("Theme");
      let methodname = new StringName("clear_theme_item");
      this._bindings.method_clear_theme_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2965505587
      );
    }
  }
  static init_method_get_theme_item_list() {
    if (!this._bindings.method_get_theme_item_list) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_theme_item_list");
      this._bindings.method_get_theme_item_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3726716710
      );
    }
  }
  static init_method_get_theme_item_type_list() {
    if (!this._bindings.method_get_theme_item_type_list) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_theme_item_type_list");
      this._bindings.method_get_theme_item_type_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1316004935
      );
    }
  }
  static init_method_set_type_variation() {
    if (!this._bindings.method_set_type_variation) {
      let classname = new StringName("Theme");
      let methodname = new StringName("set_type_variation");
      this._bindings.method_set_type_variation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3740211285
      );
    }
  }
  static init_method_is_type_variation() {
    if (!this._bindings.method_is_type_variation) {
      let classname = new StringName("Theme");
      let methodname = new StringName("is_type_variation");
      this._bindings.method_is_type_variation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        471820014
      );
    }
  }
  static init_method_clear_type_variation() {
    if (!this._bindings.method_clear_type_variation) {
      let classname = new StringName("Theme");
      let methodname = new StringName("clear_type_variation");
      this._bindings.method_clear_type_variation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_type_variation_base() {
    if (!this._bindings.method_get_type_variation_base) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_type_variation_base");
      this._bindings.method_get_type_variation_base = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1965194235
      );
    }
  }
  static init_method_get_type_variation_list() {
    if (!this._bindings.method_get_type_variation_list) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_type_variation_list");
      this._bindings.method_get_type_variation_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1761182771
      );
    }
  }
  static init_method_add_type() {
    if (!this._bindings.method_add_type) {
      let classname = new StringName("Theme");
      let methodname = new StringName("add_type");
      this._bindings.method_add_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_remove_type() {
    if (!this._bindings.method_remove_type) {
      let classname = new StringName("Theme");
      let methodname = new StringName("remove_type");
      this._bindings.method_remove_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_type_list() {
    if (!this._bindings.method_get_type_list) {
      let classname = new StringName("Theme");
      let methodname = new StringName("get_type_list");
      this._bindings.method_get_type_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_merge_with() {
    if (!this._bindings.method_merge_with) {
      let classname = new StringName("Theme");
      let methodname = new StringName("merge_with");
      this._bindings.method_merge_with = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2326690814
      );
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("Theme");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  set_icon(_name, _theme_type, _texture) {
    Theme.init_method_set_icon();
    return _call_native_mb_no_ret(
      Theme._bindings.method_set_icon,
      this._owner,
      _name, _theme_type, _texture
    );
    
  }
  get_icon(_name, _theme_type) {
    Theme.init_method_get_icon();
    return _call_native_mb_ret(
      Theme._bindings.method_get_icon,
      this._owner,
			Variant.Type.OBJECT,
      _name, _theme_type
    );
    
  }
  has_icon(_name, _theme_type) {
    Theme.init_method_has_icon();
    return _call_native_mb_ret(
      Theme._bindings.method_has_icon,
      this._owner,
			Variant.Type.BOOL,
    
      _name, _theme_type
    );
    
  }
  rename_icon(_old_name, _name, _theme_type) {
    Theme.init_method_rename_icon();
    return _call_native_mb_no_ret(
      Theme._bindings.method_rename_icon,
      this._owner,
      _old_name, _name, _theme_type
    );
    
  }
  clear_icon(_name, _theme_type) {
    Theme.init_method_clear_icon();
    return _call_native_mb_no_ret(
      Theme._bindings.method_clear_icon,
      this._owner,
      _name, _theme_type
    );
    
  }
  get_icon_list(_theme_type) {
    Theme.init_method_get_icon_list();
    return _call_native_mb_ret(
      Theme._bindings.method_get_icon_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _theme_type
    );
    
  }
  get_icon_type_list() {
    Theme.init_method_get_icon_type_list();
    return _call_native_mb_ret(
      Theme._bindings.method_get_icon_type_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_stylebox(_name, _theme_type, _texture) {
    Theme.init_method_set_stylebox();
    return _call_native_mb_no_ret(
      Theme._bindings.method_set_stylebox,
      this._owner,
      _name, _theme_type, _texture
    );
    
  }
  get_stylebox(_name, _theme_type) {
    Theme.init_method_get_stylebox();
    return _call_native_mb_ret(
      Theme._bindings.method_get_stylebox,
      this._owner,
			Variant.Type.OBJECT,
      _name, _theme_type
    );
    
  }
  has_stylebox(_name, _theme_type) {
    Theme.init_method_has_stylebox();
    return _call_native_mb_ret(
      Theme._bindings.method_has_stylebox,
      this._owner,
			Variant.Type.BOOL,
    
      _name, _theme_type
    );
    
  }
  rename_stylebox(_old_name, _name, _theme_type) {
    Theme.init_method_rename_stylebox();
    return _call_native_mb_no_ret(
      Theme._bindings.method_rename_stylebox,
      this._owner,
      _old_name, _name, _theme_type
    );
    
  }
  clear_stylebox(_name, _theme_type) {
    Theme.init_method_clear_stylebox();
    return _call_native_mb_no_ret(
      Theme._bindings.method_clear_stylebox,
      this._owner,
      _name, _theme_type
    );
    
  }
  get_stylebox_list(_theme_type) {
    Theme.init_method_get_stylebox_list();
    return _call_native_mb_ret(
      Theme._bindings.method_get_stylebox_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _theme_type
    );
    
  }
  get_stylebox_type_list() {
    Theme.init_method_get_stylebox_type_list();
    return _call_native_mb_ret(
      Theme._bindings.method_get_stylebox_type_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_font(_name, _theme_type, _font) {
    Theme.init_method_set_font();
    return _call_native_mb_no_ret(
      Theme._bindings.method_set_font,
      this._owner,
      _name, _theme_type, _font
    );
    
  }
  get_font(_name, _theme_type) {
    Theme.init_method_get_font();
    return _call_native_mb_ret(
      Theme._bindings.method_get_font,
      this._owner,
			Variant.Type.OBJECT,
      _name, _theme_type
    );
    
  }
  has_font(_name, _theme_type) {
    Theme.init_method_has_font();
    return _call_native_mb_ret(
      Theme._bindings.method_has_font,
      this._owner,
			Variant.Type.BOOL,
    
      _name, _theme_type
    );
    
  }
  rename_font(_old_name, _name, _theme_type) {
    Theme.init_method_rename_font();
    return _call_native_mb_no_ret(
      Theme._bindings.method_rename_font,
      this._owner,
      _old_name, _name, _theme_type
    );
    
  }
  clear_font(_name, _theme_type) {
    Theme.init_method_clear_font();
    return _call_native_mb_no_ret(
      Theme._bindings.method_clear_font,
      this._owner,
      _name, _theme_type
    );
    
  }
  get_font_list(_theme_type) {
    Theme.init_method_get_font_list();
    return _call_native_mb_ret(
      Theme._bindings.method_get_font_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _theme_type
    );
    
  }
  get_font_type_list() {
    Theme.init_method_get_font_type_list();
    return _call_native_mb_ret(
      Theme._bindings.method_get_font_type_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_font_size(_name, _theme_type, _font_size) {
    Theme.init_method_set_font_size();
    return _call_native_mb_no_ret(
      Theme._bindings.method_set_font_size,
      this._owner,
      _name, _theme_type, _font_size
    );
    
  }
  get_font_size(_name, _theme_type) {
    Theme.init_method_get_font_size();
    return _call_native_mb_ret(
      Theme._bindings.method_get_font_size,
      this._owner,
			Variant.Type.INT,
    
      _name, _theme_type
    );
    
  }
  has_font_size(_name, _theme_type) {
    Theme.init_method_has_font_size();
    return _call_native_mb_ret(
      Theme._bindings.method_has_font_size,
      this._owner,
			Variant.Type.BOOL,
    
      _name, _theme_type
    );
    
  }
  rename_font_size(_old_name, _name, _theme_type) {
    Theme.init_method_rename_font_size();
    return _call_native_mb_no_ret(
      Theme._bindings.method_rename_font_size,
      this._owner,
      _old_name, _name, _theme_type
    );
    
  }
  clear_font_size(_name, _theme_type) {
    Theme.init_method_clear_font_size();
    return _call_native_mb_no_ret(
      Theme._bindings.method_clear_font_size,
      this._owner,
      _name, _theme_type
    );
    
  }
  get_font_size_list(_theme_type) {
    Theme.init_method_get_font_size_list();
    return _call_native_mb_ret(
      Theme._bindings.method_get_font_size_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _theme_type
    );
    
  }
  get_font_size_type_list() {
    Theme.init_method_get_font_size_type_list();
    return _call_native_mb_ret(
      Theme._bindings.method_get_font_size_type_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_color(_name, _theme_type, _color) {
    Theme.init_method_set_color();
    return _call_native_mb_no_ret(
      Theme._bindings.method_set_color,
      this._owner,
      _name, _theme_type, _color
    );
    
  }
  get_color(_name, _theme_type) {
    Theme.init_method_get_color();
    return _call_native_mb_ret(
      Theme._bindings.method_get_color,
      this._owner,
			Variant.Type.COLOR,
    
      _name, _theme_type
    );
    
  }
  has_color(_name, _theme_type) {
    Theme.init_method_has_color();
    return _call_native_mb_ret(
      Theme._bindings.method_has_color,
      this._owner,
			Variant.Type.BOOL,
    
      _name, _theme_type
    );
    
  }
  rename_color(_old_name, _name, _theme_type) {
    Theme.init_method_rename_color();
    return _call_native_mb_no_ret(
      Theme._bindings.method_rename_color,
      this._owner,
      _old_name, _name, _theme_type
    );
    
  }
  clear_color(_name, _theme_type) {
    Theme.init_method_clear_color();
    return _call_native_mb_no_ret(
      Theme._bindings.method_clear_color,
      this._owner,
      _name, _theme_type
    );
    
  }
  get_color_list(_theme_type) {
    Theme.init_method_get_color_list();
    return _call_native_mb_ret(
      Theme._bindings.method_get_color_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _theme_type
    );
    
  }
  get_color_type_list() {
    Theme.init_method_get_color_type_list();
    return _call_native_mb_ret(
      Theme._bindings.method_get_color_type_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_constant(_name, _theme_type, _constant) {
    Theme.init_method_set_constant();
    return _call_native_mb_no_ret(
      Theme._bindings.method_set_constant,
      this._owner,
      _name, _theme_type, _constant
    );
    
  }
  get_constant(_name, _theme_type) {
    Theme.init_method_get_constant();
    return _call_native_mb_ret(
      Theme._bindings.method_get_constant,
      this._owner,
			Variant.Type.INT,
    
      _name, _theme_type
    );
    
  }
  has_constant(_name, _theme_type) {
    Theme.init_method_has_constant();
    return _call_native_mb_ret(
      Theme._bindings.method_has_constant,
      this._owner,
			Variant.Type.BOOL,
    
      _name, _theme_type
    );
    
  }
  rename_constant(_old_name, _name, _theme_type) {
    Theme.init_method_rename_constant();
    return _call_native_mb_no_ret(
      Theme._bindings.method_rename_constant,
      this._owner,
      _old_name, _name, _theme_type
    );
    
  }
  clear_constant(_name, _theme_type) {
    Theme.init_method_clear_constant();
    return _call_native_mb_no_ret(
      Theme._bindings.method_clear_constant,
      this._owner,
      _name, _theme_type
    );
    
  }
  get_constant_list(_theme_type) {
    Theme.init_method_get_constant_list();
    return _call_native_mb_ret(
      Theme._bindings.method_get_constant_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _theme_type
    );
    
  }
  get_constant_type_list() {
    Theme.init_method_get_constant_type_list();
    return _call_native_mb_ret(
      Theme._bindings.method_get_constant_type_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_default_base_scale(_base_scale) {
    Theme.init_method_set_default_base_scale();
    return _call_native_mb_no_ret(
      Theme._bindings.method_set_default_base_scale,
      this._owner,
      _base_scale
    );
    
  }
  get_default_base_scale() {
    Theme.init_method_get_default_base_scale();
    return _call_native_mb_ret(
      Theme._bindings.method_get_default_base_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  has_default_base_scale() {
    Theme.init_method_has_default_base_scale();
    return _call_native_mb_ret(
      Theme._bindings.method_has_default_base_scale,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_default_font(_font) {
    Theme.init_method_set_default_font();
    return _call_native_mb_no_ret(
      Theme._bindings.method_set_default_font,
      this._owner,
      _font
    );
    
  }
  get_default_font() {
    Theme.init_method_get_default_font();
    return _call_native_mb_ret(
      Theme._bindings.method_get_default_font,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  has_default_font() {
    Theme.init_method_has_default_font();
    return _call_native_mb_ret(
      Theme._bindings.method_has_default_font,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_default_font_size(_font_size) {
    Theme.init_method_set_default_font_size();
    return _call_native_mb_no_ret(
      Theme._bindings.method_set_default_font_size,
      this._owner,
      _font_size
    );
    
  }
  get_default_font_size() {
    Theme.init_method_get_default_font_size();
    return _call_native_mb_ret(
      Theme._bindings.method_get_default_font_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  has_default_font_size() {
    Theme.init_method_has_default_font_size();
    return _call_native_mb_ret(
      Theme._bindings.method_has_default_font_size,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_theme_item(_data_type, _name, _theme_type, _value) {
    Theme.init_method_set_theme_item();
    return _call_native_mb_no_ret(
      Theme._bindings.method_set_theme_item,
      this._owner,
      _data_type, _name, _theme_type, _value
    );
    
  }
  get_theme_item(_data_type, _name, _theme_type) {
    Theme.init_method_get_theme_item();
    return _call_native_mb_ret(
      Theme._bindings.method_get_theme_item,
      this._owner,
			Variant.Type.VARIANT,
    
      _data_type, _name, _theme_type
    );
    
  }
  has_theme_item(_data_type, _name, _theme_type) {
    Theme.init_method_has_theme_item();
    return _call_native_mb_ret(
      Theme._bindings.method_has_theme_item,
      this._owner,
			Variant.Type.BOOL,
    
      _data_type, _name, _theme_type
    );
    
  }
  rename_theme_item(_data_type, _old_name, _name, _theme_type) {
    Theme.init_method_rename_theme_item();
    return _call_native_mb_no_ret(
      Theme._bindings.method_rename_theme_item,
      this._owner,
      _data_type, _old_name, _name, _theme_type
    );
    
  }
  clear_theme_item(_data_type, _name, _theme_type) {
    Theme.init_method_clear_theme_item();
    return _call_native_mb_no_ret(
      Theme._bindings.method_clear_theme_item,
      this._owner,
      _data_type, _name, _theme_type
    );
    
  }
  get_theme_item_list(_data_type, _theme_type) {
    Theme.init_method_get_theme_item_list();
    return _call_native_mb_ret(
      Theme._bindings.method_get_theme_item_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _data_type, _theme_type
    );
    
  }
  get_theme_item_type_list(_data_type) {
    Theme.init_method_get_theme_item_type_list();
    return _call_native_mb_ret(
      Theme._bindings.method_get_theme_item_type_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _data_type
    );
    
  }
  set_type_variation(_theme_type, _base_type) {
    Theme.init_method_set_type_variation();
    return _call_native_mb_no_ret(
      Theme._bindings.method_set_type_variation,
      this._owner,
      _theme_type, _base_type
    );
    
  }
  is_type_variation(_theme_type, _base_type) {
    Theme.init_method_is_type_variation();
    return _call_native_mb_ret(
      Theme._bindings.method_is_type_variation,
      this._owner,
			Variant.Type.BOOL,
    
      _theme_type, _base_type
    );
    
  }
  clear_type_variation(_theme_type) {
    Theme.init_method_clear_type_variation();
    return _call_native_mb_no_ret(
      Theme._bindings.method_clear_type_variation,
      this._owner,
      _theme_type
    );
    
  }
  get_type_variation_base(_theme_type) {
    Theme.init_method_get_type_variation_base();
    return _call_native_mb_ret(
      Theme._bindings.method_get_type_variation_base,
      this._owner,
			Variant.Type.STRING_NAME,
    
      _theme_type
    );
    
  }
  get_type_variation_list(_base_type) {
    Theme.init_method_get_type_variation_list();
    return _call_native_mb_ret(
      Theme._bindings.method_get_type_variation_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _base_type
    );
    
  }
  add_type(_theme_type) {
    Theme.init_method_add_type();
    return _call_native_mb_no_ret(
      Theme._bindings.method_add_type,
      this._owner,
      _theme_type
    );
    
  }
  remove_type(_theme_type) {
    Theme.init_method_remove_type();
    return _call_native_mb_no_ret(
      Theme._bindings.method_remove_type,
      this._owner,
      _theme_type
    );
    
  }
  get_type_list() {
    Theme.init_method_get_type_list();
    return _call_native_mb_ret(
      Theme._bindings.method_get_type_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  merge_with(_other) {
    Theme.init_method_merge_with();
    return _call_native_mb_no_ret(
      Theme._bindings.method_merge_with,
      this._owner,
      _other
    );
    
  }
  clear() {
    Theme.init_method_clear();
    return _call_native_mb_no_ret(
      Theme._bindings.method_clear,
      this._owner,
      
    );
    
  }
  
get default_base_scale () {
  return this.get_default_base_scale();
}
set default_base_scale (new_value) {
  this.set_default_base_scale(new_value);
}
get default_font () {
  return this.get_default_font();
}
set default_font (new_value) {
  this.set_default_font(new_value);
}
get default_font_size () {
  return this.get_default_font_size();
}
set default_font_size (new_value) {
  this.set_default_font_size(new_value);
}

  static DataType = {
    DATA_TYPE_COLOR: 0,
    DATA_TYPE_CONSTANT: 1,
    DATA_TYPE_FONT: 2,
    DATA_TYPE_FONT_SIZE: 3,
    DATA_TYPE_ICON: 4,
    DATA_TYPE_STYLEBOX: 5,
    DATA_TYPE_MAX: 6,
  }
}