import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GraphElement } from '@js_godot/classes/graph_element'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_title;
  method_get_title;
  method_get_titlebar_hbox;
  method_set_slot;
  method_clear_slot;
  method_clear_all_slots;
  method_is_slot_enabled_left;
  method_set_slot_enabled_left;
  method_set_slot_type_left;
  method_get_slot_type_left;
  method_set_slot_color_left;
  method_get_slot_color_left;
  method_set_slot_custom_icon_left;
  method_get_slot_custom_icon_left;
  method_is_slot_enabled_right;
  method_set_slot_enabled_right;
  method_set_slot_type_right;
  method_get_slot_type_right;
  method_set_slot_color_right;
  method_get_slot_color_right;
  method_set_slot_custom_icon_right;
  method_get_slot_custom_icon_right;
  method_is_slot_draw_stylebox;
  method_set_slot_draw_stylebox;
  method_set_ignore_invalid_connection_type;
  method_is_ignoring_valid_connection_type;
  method_get_input_port_count;
  method_get_input_port_position;
  method_get_input_port_type;
  method_get_input_port_color;
  method_get_input_port_slot;
  method_get_output_port_count;
  method_get_output_port_position;
  method_get_output_port_type;
  method_get_output_port_color;
  method_get_output_port_slot;
}
export class GraphNode extends GraphElement{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GraphNode");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_title() {
    if (!this.#_bindings.method_set_title) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("set_title");
      this.#_bindings.method_set_title = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_title() {
    if (!this.#_bindings.method_get_title) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_title");
      this.#_bindings.method_get_title = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_titlebar_hbox() {
    if (!this.#_bindings.method_get_titlebar_hbox) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_titlebar_hbox");
      this.#_bindings.method_get_titlebar_hbox = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3590609951
      );
    }
  }
  static init_method_set_slot() {
    if (!this.#_bindings.method_set_slot) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("set_slot");
      this.#_bindings.method_set_slot = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2873310869
      );
    }
  }
  static init_method_clear_slot() {
    if (!this.#_bindings.method_clear_slot) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("clear_slot");
      this.#_bindings.method_clear_slot = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_clear_all_slots() {
    if (!this.#_bindings.method_clear_all_slots) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("clear_all_slots");
      this.#_bindings.method_clear_all_slots = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_is_slot_enabled_left() {
    if (!this.#_bindings.method_is_slot_enabled_left) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("is_slot_enabled_left");
      this.#_bindings.method_is_slot_enabled_left = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_slot_enabled_left() {
    if (!this.#_bindings.method_set_slot_enabled_left) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("set_slot_enabled_left");
      this.#_bindings.method_set_slot_enabled_left = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_set_slot_type_left() {
    if (!this.#_bindings.method_set_slot_type_left) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("set_slot_type_left");
      this.#_bindings.method_set_slot_type_left = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_slot_type_left() {
    if (!this.#_bindings.method_get_slot_type_left) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_slot_type_left");
      this.#_bindings.method_get_slot_type_left = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_set_slot_color_left() {
    if (!this.#_bindings.method_set_slot_color_left) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("set_slot_color_left");
      this.#_bindings.method_set_slot_color_left = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2878471219
      );
    }
  }
  static init_method_get_slot_color_left() {
    if (!this.#_bindings.method_get_slot_color_left) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_slot_color_left");
      this.#_bindings.method_get_slot_color_left = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3457211756
      );
    }
  }
  static init_method_set_slot_custom_icon_left() {
    if (!this.#_bindings.method_set_slot_custom_icon_left) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("set_slot_custom_icon_left");
      this.#_bindings.method_set_slot_custom_icon_left = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        666127730
      );
    }
  }
  static init_method_get_slot_custom_icon_left() {
    if (!this.#_bindings.method_get_slot_custom_icon_left) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_slot_custom_icon_left");
      this.#_bindings.method_get_slot_custom_icon_left = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3536238170
      );
    }
  }
  static init_method_is_slot_enabled_right() {
    if (!this.#_bindings.method_is_slot_enabled_right) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("is_slot_enabled_right");
      this.#_bindings.method_is_slot_enabled_right = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_slot_enabled_right() {
    if (!this.#_bindings.method_set_slot_enabled_right) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("set_slot_enabled_right");
      this.#_bindings.method_set_slot_enabled_right = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_set_slot_type_right() {
    if (!this.#_bindings.method_set_slot_type_right) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("set_slot_type_right");
      this.#_bindings.method_set_slot_type_right = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_slot_type_right() {
    if (!this.#_bindings.method_get_slot_type_right) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_slot_type_right");
      this.#_bindings.method_get_slot_type_right = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_set_slot_color_right() {
    if (!this.#_bindings.method_set_slot_color_right) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("set_slot_color_right");
      this.#_bindings.method_set_slot_color_right = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2878471219
      );
    }
  }
  static init_method_get_slot_color_right() {
    if (!this.#_bindings.method_get_slot_color_right) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_slot_color_right");
      this.#_bindings.method_get_slot_color_right = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3457211756
      );
    }
  }
  static init_method_set_slot_custom_icon_right() {
    if (!this.#_bindings.method_set_slot_custom_icon_right) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("set_slot_custom_icon_right");
      this.#_bindings.method_set_slot_custom_icon_right = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        666127730
      );
    }
  }
  static init_method_get_slot_custom_icon_right() {
    if (!this.#_bindings.method_get_slot_custom_icon_right) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_slot_custom_icon_right");
      this.#_bindings.method_get_slot_custom_icon_right = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3536238170
      );
    }
  }
  static init_method_is_slot_draw_stylebox() {
    if (!this.#_bindings.method_is_slot_draw_stylebox) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("is_slot_draw_stylebox");
      this.#_bindings.method_is_slot_draw_stylebox = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_slot_draw_stylebox() {
    if (!this.#_bindings.method_set_slot_draw_stylebox) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("set_slot_draw_stylebox");
      this.#_bindings.method_set_slot_draw_stylebox = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_set_ignore_invalid_connection_type() {
    if (!this.#_bindings.method_set_ignore_invalid_connection_type) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("set_ignore_invalid_connection_type");
      this.#_bindings.method_set_ignore_invalid_connection_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_ignoring_valid_connection_type() {
    if (!this.#_bindings.method_is_ignoring_valid_connection_type) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("is_ignoring_valid_connection_type");
      this.#_bindings.method_is_ignoring_valid_connection_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_input_port_count() {
    if (!this.#_bindings.method_get_input_port_count) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_input_port_count");
      this.#_bindings.method_get_input_port_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_get_input_port_position() {
    if (!this.#_bindings.method_get_input_port_position) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_input_port_position");
      this.#_bindings.method_get_input_port_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3114997196
      );
    }
  }
  static init_method_get_input_port_type() {
    if (!this.#_bindings.method_get_input_port_type) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_input_port_type");
      this.#_bindings.method_get_input_port_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3744713108
      );
    }
  }
  static init_method_get_input_port_color() {
    if (!this.#_bindings.method_get_input_port_color) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_input_port_color");
      this.#_bindings.method_get_input_port_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2624840992
      );
    }
  }
  static init_method_get_input_port_slot() {
    if (!this.#_bindings.method_get_input_port_slot) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_input_port_slot");
      this.#_bindings.method_get_input_port_slot = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3744713108
      );
    }
  }
  static init_method_get_output_port_count() {
    if (!this.#_bindings.method_get_output_port_count) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_output_port_count");
      this.#_bindings.method_get_output_port_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_get_output_port_position() {
    if (!this.#_bindings.method_get_output_port_position) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_output_port_position");
      this.#_bindings.method_get_output_port_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3114997196
      );
    }
  }
  static init_method_get_output_port_type() {
    if (!this.#_bindings.method_get_output_port_type) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_output_port_type");
      this.#_bindings.method_get_output_port_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3744713108
      );
    }
  }
  static init_method_get_output_port_color() {
    if (!this.#_bindings.method_get_output_port_color) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_output_port_color");
      this.#_bindings.method_get_output_port_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2624840992
      );
    }
  }
  static init_method_get_output_port_slot() {
    if (!this.#_bindings.method_get_output_port_slot) {
      let classname = new StringName("GraphNode");
      let methodname = new StringName("get_output_port_slot");
      this.#_bindings.method_get_output_port_slot = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3744713108
      );
    }
  }

  
  
  _draw_port(_slot_index, _position, _left, _color) {
  }
  set_title(_title) {
    GraphNode.init_method_set_title();
    return _call_native_mb_no_ret(
      GraphNode.#_bindings.method_set_title,
      this._owner,
      _title
    );
    
  }
  get_title() {
    GraphNode.init_method_get_title();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_title,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_titlebar_hbox() {
    GraphNode.init_method_get_titlebar_hbox();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_titlebar_hbox,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_slot(_slot_index, _enable_left_port, _type_left, _color_left, _enable_right_port, _type_right, _color_right, _custom_icon_left, _custom_icon_right, _draw_stylebox) {
    GraphNode.init_method_set_slot();
    return _call_native_mb_no_ret(
      GraphNode.#_bindings.method_set_slot,
      this._owner,
      _slot_index, _enable_left_port, _type_left, _color_left, _enable_right_port, _type_right, _color_right, _custom_icon_left, _custom_icon_right, _draw_stylebox
    );
    
  }
  clear_slot(_slot_index) {
    GraphNode.init_method_clear_slot();
    return _call_native_mb_no_ret(
      GraphNode.#_bindings.method_clear_slot,
      this._owner,
      _slot_index
    );
    
  }
  clear_all_slots() {
    GraphNode.init_method_clear_all_slots();
    return _call_native_mb_no_ret(
      GraphNode.#_bindings.method_clear_all_slots,
      this._owner,
      
    );
    
  }
  is_slot_enabled_left(_slot_index) {
    GraphNode.init_method_is_slot_enabled_left();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_is_slot_enabled_left,
      this._owner,
			Variant.Type.BOOL,
    
      _slot_index
    );
    
  }
  set_slot_enabled_left(_slot_index, _enable) {
    GraphNode.init_method_set_slot_enabled_left();
    return _call_native_mb_no_ret(
      GraphNode.#_bindings.method_set_slot_enabled_left,
      this._owner,
      _slot_index, _enable
    );
    
  }
  set_slot_type_left(_slot_index, _type) {
    GraphNode.init_method_set_slot_type_left();
    return _call_native_mb_no_ret(
      GraphNode.#_bindings.method_set_slot_type_left,
      this._owner,
      _slot_index, _type
    );
    
  }
  get_slot_type_left(_slot_index) {
    GraphNode.init_method_get_slot_type_left();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_slot_type_left,
      this._owner,
			Variant.Type.INT,
    
      _slot_index
    );
    
  }
  set_slot_color_left(_slot_index, _color) {
    GraphNode.init_method_set_slot_color_left();
    return _call_native_mb_no_ret(
      GraphNode.#_bindings.method_set_slot_color_left,
      this._owner,
      _slot_index, _color
    );
    
  }
  get_slot_color_left(_slot_index) {
    GraphNode.init_method_get_slot_color_left();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_slot_color_left,
      this._owner,
			Variant.Type.COLOR,
    
      _slot_index
    );
    
  }
  set_slot_custom_icon_left(_slot_index, _custom_icon) {
    GraphNode.init_method_set_slot_custom_icon_left();
    return _call_native_mb_no_ret(
      GraphNode.#_bindings.method_set_slot_custom_icon_left,
      this._owner,
      _slot_index, _custom_icon
    );
    
  }
  get_slot_custom_icon_left(_slot_index) {
    GraphNode.init_method_get_slot_custom_icon_left();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_slot_custom_icon_left,
      this._owner,
			Variant.Type.OBJECT,
      _slot_index
    );
    
  }
  is_slot_enabled_right(_slot_index) {
    GraphNode.init_method_is_slot_enabled_right();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_is_slot_enabled_right,
      this._owner,
			Variant.Type.BOOL,
    
      _slot_index
    );
    
  }
  set_slot_enabled_right(_slot_index, _enable) {
    GraphNode.init_method_set_slot_enabled_right();
    return _call_native_mb_no_ret(
      GraphNode.#_bindings.method_set_slot_enabled_right,
      this._owner,
      _slot_index, _enable
    );
    
  }
  set_slot_type_right(_slot_index, _type) {
    GraphNode.init_method_set_slot_type_right();
    return _call_native_mb_no_ret(
      GraphNode.#_bindings.method_set_slot_type_right,
      this._owner,
      _slot_index, _type
    );
    
  }
  get_slot_type_right(_slot_index) {
    GraphNode.init_method_get_slot_type_right();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_slot_type_right,
      this._owner,
			Variant.Type.INT,
    
      _slot_index
    );
    
  }
  set_slot_color_right(_slot_index, _color) {
    GraphNode.init_method_set_slot_color_right();
    return _call_native_mb_no_ret(
      GraphNode.#_bindings.method_set_slot_color_right,
      this._owner,
      _slot_index, _color
    );
    
  }
  get_slot_color_right(_slot_index) {
    GraphNode.init_method_get_slot_color_right();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_slot_color_right,
      this._owner,
			Variant.Type.COLOR,
    
      _slot_index
    );
    
  }
  set_slot_custom_icon_right(_slot_index, _custom_icon) {
    GraphNode.init_method_set_slot_custom_icon_right();
    return _call_native_mb_no_ret(
      GraphNode.#_bindings.method_set_slot_custom_icon_right,
      this._owner,
      _slot_index, _custom_icon
    );
    
  }
  get_slot_custom_icon_right(_slot_index) {
    GraphNode.init_method_get_slot_custom_icon_right();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_slot_custom_icon_right,
      this._owner,
			Variant.Type.OBJECT,
      _slot_index
    );
    
  }
  is_slot_draw_stylebox(_slot_index) {
    GraphNode.init_method_is_slot_draw_stylebox();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_is_slot_draw_stylebox,
      this._owner,
			Variant.Type.BOOL,
    
      _slot_index
    );
    
  }
  set_slot_draw_stylebox(_slot_index, _enable) {
    GraphNode.init_method_set_slot_draw_stylebox();
    return _call_native_mb_no_ret(
      GraphNode.#_bindings.method_set_slot_draw_stylebox,
      this._owner,
      _slot_index, _enable
    );
    
  }
  set_ignore_invalid_connection_type(_ignore) {
    GraphNode.init_method_set_ignore_invalid_connection_type();
    return _call_native_mb_no_ret(
      GraphNode.#_bindings.method_set_ignore_invalid_connection_type,
      this._owner,
      _ignore
    );
    
  }
  is_ignoring_valid_connection_type() {
    GraphNode.init_method_is_ignoring_valid_connection_type();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_is_ignoring_valid_connection_type,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_input_port_count() {
    GraphNode.init_method_get_input_port_count();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_input_port_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_input_port_position(_port_idx) {
    GraphNode.init_method_get_input_port_position();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_input_port_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _port_idx
    );
    
  }
  get_input_port_type(_port_idx) {
    GraphNode.init_method_get_input_port_type();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_input_port_type,
      this._owner,
			Variant.Type.INT,
    
      _port_idx
    );
    
  }
  get_input_port_color(_port_idx) {
    GraphNode.init_method_get_input_port_color();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_input_port_color,
      this._owner,
			Variant.Type.COLOR,
    
      _port_idx
    );
    
  }
  get_input_port_slot(_port_idx) {
    GraphNode.init_method_get_input_port_slot();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_input_port_slot,
      this._owner,
			Variant.Type.INT,
    
      _port_idx
    );
    
  }
  get_output_port_count() {
    GraphNode.init_method_get_output_port_count();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_output_port_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_output_port_position(_port_idx) {
    GraphNode.init_method_get_output_port_position();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_output_port_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _port_idx
    );
    
  }
  get_output_port_type(_port_idx) {
    GraphNode.init_method_get_output_port_type();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_output_port_type,
      this._owner,
			Variant.Type.INT,
    
      _port_idx
    );
    
  }
  get_output_port_color(_port_idx) {
    GraphNode.init_method_get_output_port_color();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_output_port_color,
      this._owner,
			Variant.Type.COLOR,
    
      _port_idx
    );
    
  }
  get_output_port_slot(_port_idx) {
    GraphNode.init_method_get_output_port_slot();
    return _call_native_mb_ret(
      GraphNode.#_bindings.method_get_output_port_slot,
      this._owner,
			Variant.Type.INT,
    
      _port_idx
    );
    
  }
  
get title () {
  return this.get_title();
}
set title (new_value) {
  this.set_title(new_value);
}
get ignore_invalid_connection_type () {
  return this.is_ignoring_valid_connection_type();
}
set ignore_invalid_connection_type (new_value) {
  this.set_ignore_invalid_connection_type(new_value);
}

}