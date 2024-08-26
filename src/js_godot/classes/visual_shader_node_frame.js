import * as internal from '__internal__';
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { Color } from 'src/js_godot/variant/color'
import { VisualShaderNodeResizableBase } from 'src/js_godot/classesvisual_shader_node_resizable_base'
import { GDString } from 'src/js_godot/variant/gd_string'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeFrame");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("set_title");
      this._bindings.method_set_title = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("get_title");
      this._bindings.method_get_title = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("set_tint_color_enabled");
      this._bindings.method_set_tint_color_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("is_tint_color_enabled");
      this._bindings.method_is_tint_color_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("set_tint_color");
      this._bindings.method_set_tint_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("get_tint_color");
      this._bindings.method_get_tint_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("set_autoshrink_enabled");
      this._bindings.method_set_autoshrink_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("is_autoshrink_enabled");
      this._bindings.method_is_autoshrink_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("add_attached_node");
      this._bindings.method_add_attached_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("remove_attached_node");
      this._bindings.method_remove_attached_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("set_attached_nodes");
      this._bindings.method_set_attached_nodes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3614634198
      );
    }
    {
      let classname = new StringName("VisualShaderNodeFrame");
      let methodname = new StringName("get_attached_nodes");
      this._bindings.method_get_attached_nodes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1930428628
      );
    }
  }
  set_title(_title) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_title,
      this._owner,
      _title
    );
  }
  get_title() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_title,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_tint_color_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tint_color_enabled,
      this._owner,
      _enable
    );
  }
  is_tint_color_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_tint_color_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_tint_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tint_color,
      this._owner,
      _color
    );
  }
  get_tint_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tint_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_autoshrink_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_autoshrink_enabled,
      this._owner,
      _enable
    );
  }
  is_autoshrink_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_autoshrink_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  add_attached_node(_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_attached_node,
      this._owner,
      _node
    );
  }
  remove_attached_node(_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_attached_node,
      this._owner,
      _node
    );
  }
  set_attached_nodes(_attached_nodes) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_attached_nodes,
      this._owner,
      _attached_nodes
    );
  }
  get_attached_nodes() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_attached_nodes,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
  }
}