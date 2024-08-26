import * as internal from '__internal__';
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { HBoxContainer } from 'src/js_godot/classesh_box_container'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__set_create_options;
    method__handle_menu_selected;
    method_set_base_type;
    method_get_base_type;
    method_get_allowed_types;
    method_set_edited_resource;
    method_get_edited_resource;
    method_set_toggle_mode;
    method_is_toggle_mode;
    method_set_toggle_pressed;
    method_set_editable;
    method_is_editable;
}


export class EditorResourcePicker extends HBoxContainer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorResourcePicker");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("_set_create_options");
      this._bindings.method__set_create_options = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("_handle_menu_selected");
      this._bindings.method__handle_menu_selected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("set_base_type");
      this._bindings.method_set_base_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("get_base_type");
      this._bindings.method_get_base_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("get_allowed_types");
      this._bindings.method_get_allowed_types = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("set_edited_resource");
      this._bindings.method_set_edited_resource = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        968641751
      );
    }
    {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("get_edited_resource");
      this._bindings.method_get_edited_resource = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2674603643
      );
    }
    {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("set_toggle_mode");
      this._bindings.method_set_toggle_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("is_toggle_mode");
      this._bindings.method_is_toggle_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("set_toggle_pressed");
      this._bindings.method_set_toggle_pressed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("set_editable");
      this._bindings.method_set_editable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("is_editable");
      this._bindings.method_is_editable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  _set_create_options(_menu_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_create_options,
      this._owner,
      _menu_node
    );
  }
  _handle_menu_selected(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__handle_menu_selected,
      this._owner,
			Variant.Type.BOOL,
      _id
    );
  }
  set_base_type(_base_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_base_type,
      this._owner,
      _base_type
    );
  }
  get_base_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_base_type,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  get_allowed_types() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_allowed_types,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  set_edited_resource(_resource) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_edited_resource,
      this._owner,
      _resource
    );
  }
  get_edited_resource() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_edited_resource,
      this._owner,
			Variant.INT,
      
    );
  }
  set_toggle_mode(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_toggle_mode,
      this._owner,
      _enable
    );
  }
  is_toggle_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_toggle_mode,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_toggle_pressed(_pressed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_toggle_pressed,
      this._owner,
      _pressed
    );
  }
  set_editable(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_editable,
      this._owner,
      _enable
    );
  }
  is_editable() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_editable,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}