import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { VisualShaderNodeResizableBase } from '@js_godot/classes/visual_shader_node_resizable_base'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_title;
  method_get_title;
  method_set_tint_color_enabled;
  method_is_tint_color_enabled;
  method_set_tint_color;
  method_get_tint_color;
  method_set_autoshrink_enabled;
  method_is_autoshrink_enabled;
  method_add_attached_node;
  method_remove_attached_node;
  method_set_attached_nodes;
  method_get_attached_nodes;
}
export class VisualShaderNodeFrame extends VisualShaderNodeResizableBase{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeFrame");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_title() {
    if (!this.#_bindings.method_set_title) {
      let classname = new StringName("VisualShaderNodeFrame");
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
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("get_title");
      this.#_bindings.method_get_title = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_tint_color_enabled() {
    if (!this.#_bindings.method_set_tint_color_enabled) {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("set_tint_color_enabled");
      this.#_bindings.method_set_tint_color_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_tint_color_enabled() {
    if (!this.#_bindings.method_is_tint_color_enabled) {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("is_tint_color_enabled");
      this.#_bindings.method_is_tint_color_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_tint_color() {
    if (!this.#_bindings.method_set_tint_color) {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("set_tint_color");
      this.#_bindings.method_set_tint_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_tint_color() {
    if (!this.#_bindings.method_get_tint_color) {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("get_tint_color");
      this.#_bindings.method_get_tint_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_autoshrink_enabled() {
    if (!this.#_bindings.method_set_autoshrink_enabled) {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("set_autoshrink_enabled");
      this.#_bindings.method_set_autoshrink_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_autoshrink_enabled() {
    if (!this.#_bindings.method_is_autoshrink_enabled) {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("is_autoshrink_enabled");
      this.#_bindings.method_is_autoshrink_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_add_attached_node() {
    if (!this.#_bindings.method_add_attached_node) {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("add_attached_node");
      this.#_bindings.method_add_attached_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_remove_attached_node() {
    if (!this.#_bindings.method_remove_attached_node) {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("remove_attached_node");
      this.#_bindings.method_remove_attached_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_attached_nodes() {
    if (!this.#_bindings.method_set_attached_nodes) {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("set_attached_nodes");
      this.#_bindings.method_set_attached_nodes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3614634198
      );
    }
  }
  static init_method_get_attached_nodes() {
    if (!this.#_bindings.method_get_attached_nodes) {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("get_attached_nodes");
      this.#_bindings.method_get_attached_nodes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1930428628
      );
    }
  }

  
  
  set_title(_title) {
    VisualShaderNodeFrame.init_method_set_title();
    return _call_native_mb_no_ret(
      VisualShaderNodeFrame.#_bindings.method_set_title,
      this._owner,
      _title
    );
    
  }
  get_title() {
    VisualShaderNodeFrame.init_method_get_title();
    return _call_native_mb_ret(
      VisualShaderNodeFrame.#_bindings.method_get_title,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_tint_color_enabled(_enable) {
    VisualShaderNodeFrame.init_method_set_tint_color_enabled();
    return _call_native_mb_no_ret(
      VisualShaderNodeFrame.#_bindings.method_set_tint_color_enabled,
      this._owner,
      _enable
    );
    
  }
  is_tint_color_enabled() {
    VisualShaderNodeFrame.init_method_is_tint_color_enabled();
    return _call_native_mb_ret(
      VisualShaderNodeFrame.#_bindings.method_is_tint_color_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_tint_color(_color) {
    VisualShaderNodeFrame.init_method_set_tint_color();
    return _call_native_mb_no_ret(
      VisualShaderNodeFrame.#_bindings.method_set_tint_color,
      this._owner,
      _color
    );
    
  }
  get_tint_color() {
    VisualShaderNodeFrame.init_method_get_tint_color();
    return _call_native_mb_ret(
      VisualShaderNodeFrame.#_bindings.method_get_tint_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_autoshrink_enabled(_enable) {
    VisualShaderNodeFrame.init_method_set_autoshrink_enabled();
    return _call_native_mb_no_ret(
      VisualShaderNodeFrame.#_bindings.method_set_autoshrink_enabled,
      this._owner,
      _enable
    );
    
  }
  is_autoshrink_enabled() {
    VisualShaderNodeFrame.init_method_is_autoshrink_enabled();
    return _call_native_mb_ret(
      VisualShaderNodeFrame.#_bindings.method_is_autoshrink_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  add_attached_node(_node) {
    VisualShaderNodeFrame.init_method_add_attached_node();
    return _call_native_mb_no_ret(
      VisualShaderNodeFrame.#_bindings.method_add_attached_node,
      this._owner,
      _node
    );
    
  }
  remove_attached_node(_node) {
    VisualShaderNodeFrame.init_method_remove_attached_node();
    return _call_native_mb_no_ret(
      VisualShaderNodeFrame.#_bindings.method_remove_attached_node,
      this._owner,
      _node
    );
    
  }
  set_attached_nodes(_attached_nodes) {
    VisualShaderNodeFrame.init_method_set_attached_nodes();
    return _call_native_mb_no_ret(
      VisualShaderNodeFrame.#_bindings.method_set_attached_nodes,
      this._owner,
      _attached_nodes
    );
    
  }
  get_attached_nodes() {
    VisualShaderNodeFrame.init_method_get_attached_nodes();
    return _call_native_mb_ret(
      VisualShaderNodeFrame.#_bindings.method_get_attached_nodes,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  
get title () {
  return this.get_title();
}
set title (new_value) {
  this.set_title(new_value);
}
get tint_color_enabled () {
  return this.is_tint_color_enabled();
}
set tint_color_enabled (new_value) {
  this.set_tint_color_enabled(new_value);
}
get tint_color () {
  return this.get_tint_color();
}
set tint_color (new_value) {
  this.set_tint_color(new_value);
}
get autoshrink () {
  return this.is_autoshrink_enabled();
}
set autoshrink (new_value) {
  this.set_autoshrink_enabled(new_value);
}
get attached_nodes () {
  return this.get_attached_nodes();
}
set attached_nodes (new_value) {
  this.set_attached_nodes(new_value);
}

}