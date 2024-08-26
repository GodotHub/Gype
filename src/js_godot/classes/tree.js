import * as internal from '__internal__';
import { Control } from 'src/js_godot/classescontrol'
import { Rect2 } from 'src/js_godot/variant/rect2'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_clear;
    method_create_item;
    method_get_root;
    method_set_column_custom_minimum_width;
    method_set_column_expand;
    method_set_column_expand_ratio;
    method_set_column_clip_content;
    method_is_column_expanding;
    method_is_column_clipping_content;
    method_get_column_expand_ratio;
    method_get_column_width;
    method_set_hide_root;
    method_is_root_hidden;
    method_get_next_selected;
    method_get_selected;
    method_set_selected;
    method_get_selected_column;
    method_get_pressed_button;
    method_set_select_mode;
    method_get_select_mode;
    method_deselect_all;
    method_set_columns;
    method_get_columns;
    method_get_edited;
    method_get_edited_column;
    method_edit_selected;
    method_get_custom_popup_rect;
    method_get_item_area_rect;
    method_get_item_at_position;
    method_get_column_at_position;
    method_get_drop_section_at_position;
    method_get_button_id_at_position;
    method_ensure_cursor_is_visible;
    method_set_column_titles_visible;
    method_are_column_titles_visible;
    method_set_column_title;
    method_get_column_title;
    method_set_column_title_alignment;
    method_get_column_title_alignment;
    method_set_column_title_direction;
    method_get_column_title_direction;
    method_set_column_title_language;
    method_get_column_title_language;
    method_get_scroll;
    method_scroll_to_item;
    method_set_h_scroll_enabled;
    method_is_h_scroll_enabled;
    method_set_v_scroll_enabled;
    method_is_v_scroll_enabled;
    method_set_hide_folding;
    method_is_folding_hidden;
    method_set_enable_recursive_folding;
    method_is_recursive_folding_enabled;
    method_set_drop_mode_flags;
    method_get_drop_mode_flags;
    method_set_allow_rmb_select;
    method_get_allow_rmb_select;
    method_set_allow_reselect;
    method_get_allow_reselect;
    method_set_allow_search;
    method_get_allow_search;
}


export class Tree extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Tree");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("create_item");
      this._bindings.method_create_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        528467046
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_root");
      this._bindings.method_get_root = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1514277247
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_custom_minimum_width");
      this._bindings.method_set_column_custom_minimum_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_expand");
      this._bindings.method_set_column_expand = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_expand_ratio");
      this._bindings.method_set_column_expand_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_clip_content");
      this._bindings.method_set_column_clip_content = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("is_column_expanding");
      this._bindings.method_is_column_expanding = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("is_column_clipping_content");
      this._bindings.method_is_column_clipping_content = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_column_expand_ratio");
      this._bindings.method_get_column_expand_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_column_width");
      this._bindings.method_get_column_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_hide_root");
      this._bindings.method_set_hide_root = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("is_root_hidden");
      this._bindings.method_is_root_hidden = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_next_selected");
      this._bindings.method_get_next_selected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        873446299
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_selected");
      this._bindings.method_get_selected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1514277247
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_selected");
      this._bindings.method_set_selected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2662547442
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_selected_column");
      this._bindings.method_get_selected_column = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_pressed_button");
      this._bindings.method_get_pressed_button = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_select_mode");
      this._bindings.method_set_select_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3223887270
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_select_mode");
      this._bindings.method_get_select_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        100748571
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("deselect_all");
      this._bindings.method_deselect_all = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_columns");
      this._bindings.method_set_columns = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_columns");
      this._bindings.method_get_columns = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_edited");
      this._bindings.method_get_edited = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1514277247
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_edited_column");
      this._bindings.method_get_edited_column = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("edit_selected");
      this._bindings.method_edit_selected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2595650253
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_custom_popup_rect");
      this._bindings.method_get_custom_popup_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1639390495
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_item_area_rect");
      this._bindings.method_get_item_area_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        47968679
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_item_at_position");
      this._bindings.method_get_item_at_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4193340126
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_column_at_position");
      this._bindings.method_get_column_at_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3820158470
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_drop_section_at_position");
      this._bindings.method_get_drop_section_at_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3820158470
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_button_id_at_position");
      this._bindings.method_get_button_id_at_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3820158470
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("ensure_cursor_is_visible");
      this._bindings.method_ensure_cursor_is_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_titles_visible");
      this._bindings.method_set_column_titles_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("are_column_titles_visible");
      this._bindings.method_are_column_titles_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_title");
      this._bindings.method_set_column_title = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_column_title");
      this._bindings.method_get_column_title = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_title_alignment");
      this._bindings.method_set_column_title_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3276431499
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_column_title_alignment");
      this._bindings.method_get_column_title_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4171562184
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_title_direction");
      this._bindings.method_set_column_title_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1707680378
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_column_title_direction");
      this._bindings.method_get_column_title_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4235602388
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_title_language");
      this._bindings.method_set_column_title_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_column_title_language");
      this._bindings.method_get_column_title_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_scroll");
      this._bindings.method_get_scroll = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("scroll_to_item");
      this._bindings.method_scroll_to_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1314737213
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_h_scroll_enabled");
      this._bindings.method_set_h_scroll_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("is_h_scroll_enabled");
      this._bindings.method_is_h_scroll_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_v_scroll_enabled");
      this._bindings.method_set_v_scroll_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("is_v_scroll_enabled");
      this._bindings.method_is_v_scroll_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_hide_folding");
      this._bindings.method_set_hide_folding = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("is_folding_hidden");
      this._bindings.method_is_folding_hidden = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_enable_recursive_folding");
      this._bindings.method_set_enable_recursive_folding = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("is_recursive_folding_enabled");
      this._bindings.method_is_recursive_folding_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_drop_mode_flags");
      this._bindings.method_set_drop_mode_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_drop_mode_flags");
      this._bindings.method_get_drop_mode_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_allow_rmb_select");
      this._bindings.method_set_allow_rmb_select = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_allow_rmb_select");
      this._bindings.method_get_allow_rmb_select = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_allow_reselect");
      this._bindings.method_set_allow_reselect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_allow_reselect");
      this._bindings.method_get_allow_reselect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_allow_search");
      this._bindings.method_set_allow_search = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_allow_search");
      this._bindings.method_get_allow_search = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
  }
  create_item(_parent, _index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_item,
      this._owner,
			Variant.INT,
      _parent, _index
    );
  }
  get_root() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_root,
      this._owner,
			Variant.INT,
      
    );
  }
  set_column_custom_minimum_width(_column, _min_width) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_column_custom_minimum_width,
      this._owner,
      _column, _min_width
    );
  }
  set_column_expand(_column, _expand) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_column_expand,
      this._owner,
      _column, _expand
    );
  }
  set_column_expand_ratio(_column, _ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_column_expand_ratio,
      this._owner,
      _column, _ratio
    );
  }
  set_column_clip_content(_column, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_column_clip_content,
      this._owner,
      _column, _enable
    );
  }
  is_column_expanding(_column) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_column_expanding,
      this._owner,
			Variant.Type.BOOL,
      _column
    );
  }
  is_column_clipping_content(_column) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_column_clipping_content,
      this._owner,
			Variant.Type.BOOL,
      _column
    );
  }
  get_column_expand_ratio(_column) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_column_expand_ratio,
      this._owner,
			Variant.Type.INT,
      _column
    );
  }
  get_column_width(_column) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_column_width,
      this._owner,
			Variant.Type.INT,
      _column
    );
  }
  set_hide_root(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hide_root,
      this._owner,
      _enable
    );
  }
  is_root_hidden() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_root_hidden,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_next_selected(_from) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_next_selected,
      this._owner,
			Variant.INT,
      _from
    );
  }
  get_selected() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selected,
      this._owner,
			Variant.INT,
      
    );
  }
  set_selected(_item, _column) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_selected,
      this._owner,
      _item, _column
    );
  }
  get_selected_column() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selected_column,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_pressed_button() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pressed_button,
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
  deselect_all() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_deselect_all,
      this._owner,
      
    );
  }
  set_columns(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_columns,
      this._owner,
      _amount
    );
  }
  get_columns() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_columns,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_edited() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_edited,
      this._owner,
			Variant.INT,
      
    );
  }
  get_edited_column() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_edited_column,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  edit_selected(_force_edit) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_edit_selected,
      this._owner,
			Variant.Type.BOOL,
      _force_edit
    );
  }
  get_custom_popup_rect() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_custom_popup_rect,
      this._owner,
			Variant.Type.RECT2
    ,
      
    );
  }
  get_item_area_rect(_item, _column, _button_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_area_rect,
      this._owner,
			Variant.Type.RECT2
    ,
      _item, _column, _button_index
    );
  }
  get_item_at_position(_position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_at_position,
      this._owner,
			Variant.INT,
      _position
    );
  }
  get_column_at_position(_position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_column_at_position,
      this._owner,
			Variant.Type.INT,
      _position
    );
  }
  get_drop_section_at_position(_position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_drop_section_at_position,
      this._owner,
			Variant.Type.INT,
      _position
    );
  }
  get_button_id_at_position(_position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_button_id_at_position,
      this._owner,
			Variant.Type.INT,
      _position
    );
  }
  ensure_cursor_is_visible() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_ensure_cursor_is_visible,
      this._owner,
      
    );
  }
  set_column_titles_visible(_visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_column_titles_visible,
      this._owner,
      _visible
    );
  }
  are_column_titles_visible() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_are_column_titles_visible,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_column_title(_column, _title) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_column_title,
      this._owner,
      _column, _title
    );
  }
  get_column_title(_column) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_column_title,
      this._owner,
			Variant.Type.STRING
    ,
      _column
    );
  }
  set_column_title_alignment(_column, _title_alignment) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_column_title_alignment,
      this._owner,
      _column, _title_alignment
    );
  }
  get_column_title_alignment(_column) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_column_title_alignment,
      this._owner,
			Variant.INT,
      _column
    );
  }
  set_column_title_direction(_column, _direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_column_title_direction,
      this._owner,
      _column, _direction
    );
  }
  get_column_title_direction(_column) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_column_title_direction,
      this._owner,
			Variant.INT,
      _column
    );
  }
  set_column_title_language(_column, _language) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_column_title_language,
      this._owner,
      _column, _language
    );
  }
  get_column_title_language(_column) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_column_title_language,
      this._owner,
			Variant.Type.STRING
    ,
      _column
    );
  }
  get_scroll() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scroll,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  scroll_to_item(_item, _center_on_item) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_scroll_to_item,
      this._owner,
      _item, _center_on_item
    );
  }
  set_h_scroll_enabled(_h_scroll) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_h_scroll_enabled,
      this._owner,
      _h_scroll
    );
  }
  is_h_scroll_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_h_scroll_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_v_scroll_enabled(_h_scroll) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_v_scroll_enabled,
      this._owner,
      _h_scroll
    );
  }
  is_v_scroll_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_v_scroll_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_hide_folding(_hide) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hide_folding,
      this._owner,
      _hide
    );
  }
  is_folding_hidden() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_folding_hidden,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_enable_recursive_folding(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enable_recursive_folding,
      this._owner,
      _enable
    );
  }
  is_recursive_folding_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_recursive_folding_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_drop_mode_flags(_flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_drop_mode_flags,
      this._owner,
      _flags
    );
  }
  get_drop_mode_flags() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_drop_mode_flags,
      this._owner,
			Variant.Type.INT,
      
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
  static SelectMode = {
    SELECT_SINGLE: 0,
    SELECT_ROW: 1,
    SELECT_MULTI: 2,
  }
  static DropModeFlags = {
    DROP_MODE_DISABLED: 0,
    DROP_MODE_ON_ITEM: 1,
    DROP_MODE_INBETWEEN: 2,
  }
}