import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { HBoxContainer } from '@js_godot/classes/h_box_container'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorResourcePicker");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_base_type() {
    if (!this.#_bindings.method_set_base_type) {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("set_base_type");
      this.#_bindings.method_set_base_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_base_type() {
    if (!this.#_bindings.method_get_base_type) {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("get_base_type");
      this.#_bindings.method_get_base_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_allowed_types() {
    if (!this.#_bindings.method_get_allowed_types) {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("get_allowed_types");
      this.#_bindings.method_get_allowed_types = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_set_edited_resource() {
    if (!this.#_bindings.method_set_edited_resource) {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("set_edited_resource");
      this.#_bindings.method_set_edited_resource = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        968641751
      );
    }
  }
  static init_method_get_edited_resource() {
    if (!this.#_bindings.method_get_edited_resource) {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("get_edited_resource");
      this.#_bindings.method_get_edited_resource = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2674603643
      );
    }
  }
  static init_method_set_toggle_mode() {
    if (!this.#_bindings.method_set_toggle_mode) {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("set_toggle_mode");
      this.#_bindings.method_set_toggle_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_toggle_mode() {
    if (!this.#_bindings.method_is_toggle_mode) {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("is_toggle_mode");
      this.#_bindings.method_is_toggle_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_toggle_pressed() {
    if (!this.#_bindings.method_set_toggle_pressed) {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("set_toggle_pressed");
      this.#_bindings.method_set_toggle_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_editable() {
    if (!this.#_bindings.method_set_editable) {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("set_editable");
      this.#_bindings.method_set_editable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_editable() {
    if (!this.#_bindings.method_is_editable) {
      let classname = new StringName("EditorResourcePicker");
      let methodname = new StringName("is_editable");
      this.#_bindings.method_is_editable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  _set_create_options(_menu_node) {
  }
  _handle_menu_selected(_id) {
  }
  set_base_type(_base_type) {
    EditorResourcePicker.init_method_set_base_type();
    return _call_native_mb_no_ret(
      EditorResourcePicker.#_bindings.method_set_base_type,
      this._owner,
      _base_type
    );
    
  }
  get_base_type() {
    EditorResourcePicker.init_method_get_base_type();
    return _call_native_mb_ret(
      EditorResourcePicker.#_bindings.method_get_base_type,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_allowed_types() {
    EditorResourcePicker.init_method_get_allowed_types();
    return _call_native_mb_ret(
      EditorResourcePicker.#_bindings.method_get_allowed_types,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_edited_resource(_resource) {
    EditorResourcePicker.init_method_set_edited_resource();
    return _call_native_mb_no_ret(
      EditorResourcePicker.#_bindings.method_set_edited_resource,
      this._owner,
      _resource
    );
    
  }
  get_edited_resource() {
    EditorResourcePicker.init_method_get_edited_resource();
    return _call_native_mb_ret(
      EditorResourcePicker.#_bindings.method_get_edited_resource,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_toggle_mode(_enable) {
    EditorResourcePicker.init_method_set_toggle_mode();
    return _call_native_mb_no_ret(
      EditorResourcePicker.#_bindings.method_set_toggle_mode,
      this._owner,
      _enable
    );
    
  }
  is_toggle_mode() {
    EditorResourcePicker.init_method_is_toggle_mode();
    return _call_native_mb_ret(
      EditorResourcePicker.#_bindings.method_is_toggle_mode,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_toggle_pressed(_pressed) {
    EditorResourcePicker.init_method_set_toggle_pressed();
    return _call_native_mb_no_ret(
      EditorResourcePicker.#_bindings.method_set_toggle_pressed,
      this._owner,
      _pressed
    );
    
  }
  set_editable(_enable) {
    EditorResourcePicker.init_method_set_editable();
    return _call_native_mb_no_ret(
      EditorResourcePicker.#_bindings.method_set_editable,
      this._owner,
      _enable
    );
    
  }
  is_editable() {
    EditorResourcePicker.init_method_is_editable();
    return _call_native_mb_ret(
      EditorResourcePicker.#_bindings.method_is_editable,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get base_type () {
  return this.get_base_type();
}
set base_type (new_value) {
  this.set_base_type(new_value);
}
get edited_resource () {
  return this.get_edited_resource();
}
set edited_resource (new_value) {
  this.set_edited_resource(new_value);
}
get editable () {
  return this.is_editable();
}
set editable (new_value) {
  this.set_editable(new_value);
}
get toggle_mode () {
  return this.is_toggle_mode();
}
set toggle_mode (new_value) {
  this.set_toggle_mode(new_value);
}

}