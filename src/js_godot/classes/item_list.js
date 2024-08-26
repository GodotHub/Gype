import * as internal from '__internal__';
import { Control } from 'src/js_godot/classescontrol'
import { Color } from 'src/js_godot/variant/color'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { GDString } from 'src/js_godot/variant/gd_string'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { Rect2 } from 'src/js_godot/variant/rect2'
import { Variant } from 'src/js_godot/variant/variant'
import { Vector2i } from 'src/js_godot/variant/vector2i'
class _MethodBindings {
    method_add_item;
    method_add_icon_item;
    method_set_item_text;
    method_get_item_text;
    method_set_item_icon;
    method_get_item_icon;
    method_set_item_text_direction;
    method_get_item_text_direction;
    method_set_item_language;
    method_get_item_language;
    method_set_item_icon_transposed;
    method_is_item_icon_transposed;
    method_set_item_icon_region;
    method_get_item_icon_region;
    method_set_item_icon_modulate;
    method_get_item_icon_modulate;
    method_set_item_selectable;
    method_is_item_selectable;
    method_set_item_disabled;
    method_is_item_disabled;
    method_set_item_metadata;
    method_get_item_metadata;
    method_set_item_custom_bg_color;
    method_get_item_custom_bg_color;
    method_set_item_custom_fg_color;
    method_get_item_custom_fg_color;
    method_get_item_rect;
    method_set_item_tooltip_enabled;
    method_is_item_tooltip_enabled;
    method_set_item_tooltip;
    method_get_item_tooltip;
    method_select;
    method_deselect;
    method_deselect_all;
    method_is_selected;
    method_get_selected_items;
    method_move_item;
    method_set_item_count;
    method_get_item_count;
    method_remove_item;
    method_clear;
    method_sort_items_by_text;
    method_set_fixed_column_width;
    method_get_fixed_column_width;
    method_set_same_column_width;
    method_is_same_column_width;
    method_set_max_text_lines;
    method_get_max_text_lines;
    method_set_max_columns;
    method_get_max_columns;
    method_set_select_mode;
    method_get_select_mode;
    method_set_icon_mode;
    method_get_icon_mode;
    method_set_fixed_icon_size;
    method_get_fixed_icon_size;
    method_set_icon_scale;
    method_get_icon_scale;
    method_set_allow_rmb_select;
    method_get_allow_rmb_select;
    method_set_allow_reselect;
    method_get_allow_reselect;
    method_set_allow_search;
    method_get_allow_search;
    method_set_auto_height;
    method_has_auto_height;
    method_is_anything_selected;
    method_get_item_at_position;
    method_ensure_current_is_visible;
    method_get_v_scroll_bar;
    method_set_text_overrun_behavior;
    method_get_text_overrun_behavior;
    method_force_update_list_size;
}


export class ItemList extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ItemList");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("add_item");
      this._bindings.method_add_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        359861678
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("add_icon_item");
      this._bindings.method_add_icon_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4256579627
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_text");
      this._bindings.method_set_item_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_text");
      this._bindings.method_get_item_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_icon");
      this._bindings.method_set_item_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        666127730
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_icon");
      this._bindings.method_get_item_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3536238170
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_text_direction");
      this._bindings.method_set_item_text_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1707680378
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_text_direction");
      this._bindings.method_get_item_text_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4235602388
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_language");
      this._bindings.method_set_item_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_language");
      this._bindings.method_get_item_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_icon_transposed");
      this._bindings.method_set_item_icon_transposed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("is_item_icon_transposed");
      this._bindings.method_is_item_icon_transposed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_icon_region");
      this._bindings.method_set_item_icon_region = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1356297692
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_icon_region");
      this._bindings.method_get_item_icon_region = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3327874267
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_icon_modulate");
      this._bindings.method_set_item_icon_modulate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2878471219
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_icon_modulate");
      this._bindings.method_get_item_icon_modulate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3457211756
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_selectable");
      this._bindings.method_set_item_selectable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("is_item_selectable");
      this._bindings.method_is_item_selectable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_disabled");
      this._bindings.method_set_item_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("is_item_disabled");
      this._bindings.method_is_item_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_metadata");
      this._bindings.method_set_item_metadata = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2152698145
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_metadata");
      this._bindings.method_get_item_metadata = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4227898402
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_custom_bg_color");
      this._bindings.method_set_item_custom_bg_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2878471219
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_custom_bg_color");
      this._bindings.method_get_item_custom_bg_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3457211756
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_custom_fg_color");
      this._bindings.method_set_item_custom_fg_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2878471219
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_custom_fg_color");
      this._bindings.method_get_item_custom_fg_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3457211756
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_rect");
      this._bindings.method_get_item_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        159227807
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_tooltip_enabled");
      this._bindings.method_set_item_tooltip_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("is_item_tooltip_enabled");
      this._bindings.method_is_item_tooltip_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_tooltip");
      this._bindings.method_set_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_tooltip");
      this._bindings.method_get_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("select");
      this._bindings.method_select = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        972357352
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("deselect");
      this._bindings.method_deselect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("deselect_all");
      this._bindings.method_deselect_all = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("is_selected");
      this._bindings.method_is_selected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_selected_items");
      this._bindings.method_get_selected_items = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        969006518
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("move_item");
      this._bindings.method_move_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_count");
      this._bindings.method_set_item_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_count");
      this._bindings.method_get_item_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("remove_item");
      this._bindings.method_remove_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("sort_items_by_text");
      this._bindings.method_sort_items_by_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_fixed_column_width");
      this._bindings.method_set_fixed_column_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_fixed_column_width");
      this._bindings.method_get_fixed_column_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_same_column_width");
      this._bindings.method_set_same_column_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("is_same_column_width");
      this._bindings.method_is_same_column_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_max_text_lines");
      this._bindings.method_set_max_text_lines = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_max_text_lines");
      this._bindings.method_get_max_text_lines = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_max_columns");
      this._bindings.method_set_max_columns = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_max_columns");
      this._bindings.method_get_max_columns = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_select_mode");
      this._bindings.method_set_select_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        928267388
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_select_mode");
      this._bindings.method_get_select_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1191945842
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_icon_mode");
      this._bindings.method_set_icon_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2025053633
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_icon_mode");
      this._bindings.method_get_icon_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3353929232
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_fixed_icon_size");
      this._bindings.method_set_fixed_icon_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1130785943
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_fixed_icon_size");
      this._bindings.method_get_fixed_icon_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_icon_scale");
      this._bindings.method_set_icon_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_icon_scale");
      this._bindings.method_get_icon_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_allow_rmb_select");
      this._bindings.method_set_allow_rmb_select = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_allow_rmb_select");
      this._bindings.method_get_allow_rmb_select = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_allow_reselect");
      this._bindings.method_set_allow_reselect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_allow_reselect");
      this._bindings.method_get_allow_reselect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_allow_search");
      this._bindings.method_set_allow_search = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_allow_search");
      this._bindings.method_get_allow_search = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_auto_height");
      this._bindings.method_set_auto_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("has_auto_height");
      this._bindings.method_has_auto_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("is_anything_selected");
      this._bindings.method_is_anything_selected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_at_position");
      this._bindings.method_get_item_at_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2300324924
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("ensure_current_is_visible");
      this._bindings.method_ensure_current_is_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_v_scroll_bar");
      this._bindings.method_get_v_scroll_bar = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2630340773
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_text_overrun_behavior");
      this._bindings.method_set_text_overrun_behavior = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1008890932
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_text_overrun_behavior");
      this._bindings.method_get_text_overrun_behavior = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3779142101
      );
    }
    {
      let classname = new StringName("ItemList");
      let methodname = new StringName("force_update_list_size");
      this._bindings.method_force_update_list_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
  }
  add_item(_text, _icon, _selectable) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_add_item,
      this._owner,
			Variant.Type.INT,
      _text, _icon, _selectable
    );
  }
  add_icon_item(_icon, _selectable) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_add_icon_item,
      this._owner,
			Variant.Type.INT,
      _icon, _selectable
    );
  }
  set_item_text(_idx, _text) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_text,
      this._owner,
      _idx, _text
    );
  }
  get_item_text(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_text,
      this._owner,
			Variant.Type.STRING
    ,
      _idx
    );
  }
  set_item_icon(_idx, _icon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_icon,
      this._owner,
      _idx, _icon
    );
  }
  get_item_icon(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_icon,
      this._owner,
			Variant.INT,
      _idx
    );
  }
  set_item_text_direction(_idx, _direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_text_direction,
      this._owner,
      _idx, _direction
    );
  }
  get_item_text_direction(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_text_direction,
      this._owner,
			Variant.INT,
      _idx
    );
  }
  set_item_language(_idx, _language) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_language,
      this._owner,
      _idx, _language
    );
  }
  get_item_language(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_language,
      this._owner,
			Variant.Type.STRING
    ,
      _idx
    );
  }
  set_item_icon_transposed(_idx, _transposed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_icon_transposed,
      this._owner,
      _idx, _transposed
    );
  }
  is_item_icon_transposed(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_item_icon_transposed,
      this._owner,
			Variant.Type.BOOL,
      _idx
    );
  }
  set_item_icon_region(_idx, _rect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_icon_region,
      this._owner,
      _idx, _rect
    );
  }
  get_item_icon_region(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_icon_region,
      this._owner,
			Variant.Type.RECT2
    ,
      _idx
    );
  }
  set_item_icon_modulate(_idx, _modulate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_icon_modulate,
      this._owner,
      _idx, _modulate
    );
  }
  get_item_icon_modulate(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_icon_modulate,
      this._owner,
			Variant.Type.COLOR
    ,
      _idx
    );
  }
  set_item_selectable(_idx, _selectable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_selectable,
      this._owner,
      _idx, _selectable
    );
  }
  is_item_selectable(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_item_selectable,
      this._owner,
			Variant.Type.BOOL,
      _idx
    );
  }
  set_item_disabled(_idx, _disabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_disabled,
      this._owner,
      _idx, _disabled
    );
  }
  is_item_disabled(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_item_disabled,
      this._owner,
			Variant.Type.BOOL,
      _idx
    );
  }
  set_item_metadata(_idx, _metadata) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_metadata,
      this._owner,
      _idx, _metadata
    );
  }
  get_item_metadata(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_metadata,
      this._owner,
			Variant.Type.VARIANT
    ,
      _idx
    );
  }
  set_item_custom_bg_color(_idx, _custom_bg_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_custom_bg_color,
      this._owner,
      _idx, _custom_bg_color
    );
  }
  get_item_custom_bg_color(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_custom_bg_color,
      this._owner,
			Variant.Type.COLOR
    ,
      _idx
    );
  }
  set_item_custom_fg_color(_idx, _custom_fg_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_custom_fg_color,
      this._owner,
      _idx, _custom_fg_color
    );
  }
  get_item_custom_fg_color(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_custom_fg_color,
      this._owner,
			Variant.Type.COLOR
    ,
      _idx
    );
  }
  get_item_rect(_idx, _expand) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_rect,
      this._owner,
			Variant.Type.RECT2
    ,
      _idx, _expand
    );
  }
  set_item_tooltip_enabled(_idx, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_tooltip_enabled,
      this._owner,
      _idx, _enable
    );
  }
  is_item_tooltip_enabled(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_item_tooltip_enabled,
      this._owner,
			Variant.Type.BOOL,
      _idx
    );
  }
  set_item_tooltip(_idx, _tooltip) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_tooltip,
      this._owner,
      _idx, _tooltip
    );
  }
  get_item_tooltip(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_tooltip,
      this._owner,
			Variant.Type.STRING
    ,
      _idx
    );
  }
  select(_idx, _single) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_select,
      this._owner,
      _idx, _single
    );
  }
  deselect(_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_deselect,
      this._owner,
      _idx
    );
  }
  deselect_all() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_deselect_all,
      this._owner,
      
    );
  }
  is_selected(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_selected,
      this._owner,
			Variant.Type.BOOL,
      _idx
    );
  }
  get_selected_items() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selected_items,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
  }
  move_item(_from_idx, _to_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_move_item,
      this._owner,
      _from_idx, _to_idx
    );
  }
  set_item_count(_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_count,
      this._owner,
      _count
    );
  }
  get_item_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  remove_item(_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_item,
      this._owner,
      _idx
    );
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
  }
  sort_items_by_text() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_sort_items_by_text,
      this._owner,
      
    );
  }
  set_fixed_column_width(_width) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fixed_column_width,
      this._owner,
      _width
    );
  }
  get_fixed_column_width() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fixed_column_width,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_same_column_width(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_same_column_width,
      this._owner,
      _enable
    );
  }
  is_same_column_width() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_same_column_width,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_max_text_lines(_lines) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_text_lines,
      this._owner,
      _lines
    );
  }
  get_max_text_lines() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_text_lines,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_max_columns(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_columns,
      this._owner,
      _amount
    );
  }
  get_max_columns() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_columns,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_select_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_select_mode,
      this._owner,
      _mode
    );
  }
  get_select_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_select_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_icon_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_icon_mode,
      this._owner,
      _mode
    );
  }
  get_icon_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_icon_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_fixed_icon_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fixed_icon_size,
      this._owner,
      _size
    );
  }
  get_fixed_icon_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fixed_icon_size,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
  }
  set_icon_scale(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_icon_scale,
      this._owner,
      _scale
    );
  }
  get_icon_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_icon_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_allow_rmb_select(_allow) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_allow_rmb_select,
      this._owner,
      _allow
    );
  }
  get_allow_rmb_select() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_allow_rmb_select,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_allow_reselect(_allow) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_allow_reselect,
      this._owner,
      _allow
    );
  }
  get_allow_reselect() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_allow_reselect,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_allow_search(_allow) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_allow_search,
      this._owner,
      _allow
    );
  }
  get_allow_search() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_allow_search,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_auto_height(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_auto_height,
      this._owner,
      _enable
    );
  }
  has_auto_height() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_auto_height,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  is_anything_selected() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_anything_selected,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_item_at_position(_position, _exact) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_at_position,
      this._owner,
			Variant.Type.INT,
      _position, _exact
    );
  }
  ensure_current_is_visible() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_ensure_current_is_visible,
      this._owner,
      
    );
  }
  get_v_scroll_bar() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_v_scroll_bar,
      this._owner,
			Variant.INT,
      
    );
  }
  set_text_overrun_behavior(_overrun_behavior) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_text_overrun_behavior,
      this._owner,
      _overrun_behavior
    );
  }
  get_text_overrun_behavior() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_text_overrun_behavior,
      this._owner,
			Variant.INT,
      
    );
  }
  force_update_list_size() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_force_update_list_size,
      this._owner,
      
    );
  }
  static IconMode = {
    ICON_MODE_TOP: 0,
    ICON_MODE_LEFT: 1,
  }
  static SelectMode = {
    SELECT_SINGLE: 0,
    SELECT_MULTI: 1,
  }
}