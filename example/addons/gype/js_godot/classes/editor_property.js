import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Container } from '@js_godot/classes/container'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_label;
  method_get_label;
  method_set_read_only;
  method_is_read_only;
  method_set_checkable;
  method_is_checkable;
  method_set_checked;
  method_is_checked;
  method_set_draw_warning;
  method_is_draw_warning;
  method_set_keying;
  method_is_keying;
  method_set_deletable;
  method_is_deletable;
  method_get_edited_property;
  method_get_edited_object;
  method_update_property;
  method_add_focusable;
  method_set_bottom_editor;
  method_emit_changed;
}
export class EditorProperty extends Container{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorProperty");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_label() {
    if (!this.#_bindings.method_set_label) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("set_label");
      this.#_bindings.method_set_label = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_label() {
    if (!this.#_bindings.method_get_label) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("get_label");
      this.#_bindings.method_get_label = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_read_only() {
    if (!this.#_bindings.method_set_read_only) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("set_read_only");
      this.#_bindings.method_set_read_only = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_read_only() {
    if (!this.#_bindings.method_is_read_only) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("is_read_only");
      this.#_bindings.method_is_read_only = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_checkable() {
    if (!this.#_bindings.method_set_checkable) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("set_checkable");
      this.#_bindings.method_set_checkable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_checkable() {
    if (!this.#_bindings.method_is_checkable) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("is_checkable");
      this.#_bindings.method_is_checkable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_checked() {
    if (!this.#_bindings.method_set_checked) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("set_checked");
      this.#_bindings.method_set_checked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_checked() {
    if (!this.#_bindings.method_is_checked) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("is_checked");
      this.#_bindings.method_is_checked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_draw_warning() {
    if (!this.#_bindings.method_set_draw_warning) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("set_draw_warning");
      this.#_bindings.method_set_draw_warning = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_draw_warning() {
    if (!this.#_bindings.method_is_draw_warning) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("is_draw_warning");
      this.#_bindings.method_is_draw_warning = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_keying() {
    if (!this.#_bindings.method_set_keying) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("set_keying");
      this.#_bindings.method_set_keying = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_keying() {
    if (!this.#_bindings.method_is_keying) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("is_keying");
      this.#_bindings.method_is_keying = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_deletable() {
    if (!this.#_bindings.method_set_deletable) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("set_deletable");
      this.#_bindings.method_set_deletable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_deletable() {
    if (!this.#_bindings.method_is_deletable) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("is_deletable");
      this.#_bindings.method_is_deletable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_edited_property() {
    if (!this.#_bindings.method_get_edited_property) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("get_edited_property");
      this.#_bindings.method_get_edited_property = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_get_edited_object() {
    if (!this.#_bindings.method_get_edited_object) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("get_edited_object");
      this.#_bindings.method_get_edited_object = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2050059866
      );
    }
  }
  static init_method_update_property() {
    if (!this.#_bindings.method_update_property) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("update_property");
      this.#_bindings.method_update_property = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_add_focusable() {
    if (!this.#_bindings.method_add_focusable) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("add_focusable");
      this.#_bindings.method_add_focusable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1496901182
      );
    }
  }
  static init_method_set_bottom_editor() {
    if (!this.#_bindings.method_set_bottom_editor) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("set_bottom_editor");
      this.#_bindings.method_set_bottom_editor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1496901182
      );
    }
  }
  static init_method_emit_changed() {
    if (!this.#_bindings.method_emit_changed) {
      let classname = new StringName("EditorProperty");
      let methodname = new StringName("emit_changed");
      this.#_bindings.method_emit_changed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3069422438
      );
    }
  }

  
  
  _update_property() {
  }
  _set_read_only(_read_only) {
  }
  set_label(_text) {
    EditorProperty.init_method_set_label();
    return _call_native_mb_no_ret(
      EditorProperty.#_bindings.method_set_label,
      this._owner,
      _text
    );
    
  }
  get_label() {
    EditorProperty.init_method_get_label();
    return _call_native_mb_ret(
      EditorProperty.#_bindings.method_get_label,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_read_only(_read_only) {
    EditorProperty.init_method_set_read_only();
    return _call_native_mb_no_ret(
      EditorProperty.#_bindings.method_set_read_only,
      this._owner,
      _read_only
    );
    
  }
  is_read_only() {
    EditorProperty.init_method_is_read_only();
    return _call_native_mb_ret(
      EditorProperty.#_bindings.method_is_read_only,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_checkable(_checkable) {
    EditorProperty.init_method_set_checkable();
    return _call_native_mb_no_ret(
      EditorProperty.#_bindings.method_set_checkable,
      this._owner,
      _checkable
    );
    
  }
  is_checkable() {
    EditorProperty.init_method_is_checkable();
    return _call_native_mb_ret(
      EditorProperty.#_bindings.method_is_checkable,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_checked(_checked) {
    EditorProperty.init_method_set_checked();
    return _call_native_mb_no_ret(
      EditorProperty.#_bindings.method_set_checked,
      this._owner,
      _checked
    );
    
  }
  is_checked() {
    EditorProperty.init_method_is_checked();
    return _call_native_mb_ret(
      EditorProperty.#_bindings.method_is_checked,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_draw_warning(_draw_warning) {
    EditorProperty.init_method_set_draw_warning();
    return _call_native_mb_no_ret(
      EditorProperty.#_bindings.method_set_draw_warning,
      this._owner,
      _draw_warning
    );
    
  }
  is_draw_warning() {
    EditorProperty.init_method_is_draw_warning();
    return _call_native_mb_ret(
      EditorProperty.#_bindings.method_is_draw_warning,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_keying(_keying) {
    EditorProperty.init_method_set_keying();
    return _call_native_mb_no_ret(
      EditorProperty.#_bindings.method_set_keying,
      this._owner,
      _keying
    );
    
  }
  is_keying() {
    EditorProperty.init_method_is_keying();
    return _call_native_mb_ret(
      EditorProperty.#_bindings.method_is_keying,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_deletable(_deletable) {
    EditorProperty.init_method_set_deletable();
    return _call_native_mb_no_ret(
      EditorProperty.#_bindings.method_set_deletable,
      this._owner,
      _deletable
    );
    
  }
  is_deletable() {
    EditorProperty.init_method_is_deletable();
    return _call_native_mb_ret(
      EditorProperty.#_bindings.method_is_deletable,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_edited_property() {
    EditorProperty.init_method_get_edited_property();
    return _call_native_mb_ret(
      EditorProperty.#_bindings.method_get_edited_property,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  get_edited_object() {
    EditorProperty.init_method_get_edited_object();
    return _call_native_mb_ret(
      EditorProperty.#_bindings.method_get_edited_object,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  update_property() {
    EditorProperty.init_method_update_property();
    return _call_native_mb_no_ret(
      EditorProperty.#_bindings.method_update_property,
      this._owner,
      
    );
    
  }
  add_focusable(_control) {
    EditorProperty.init_method_add_focusable();
    return _call_native_mb_no_ret(
      EditorProperty.#_bindings.method_add_focusable,
      this._owner,
      _control
    );
    
  }
  set_bottom_editor(_editor) {
    EditorProperty.init_method_set_bottom_editor();
    return _call_native_mb_no_ret(
      EditorProperty.#_bindings.method_set_bottom_editor,
      this._owner,
      _editor
    );
    
  }
  emit_changed(_property, _value, _field, _changing) {
    EditorProperty.init_method_emit_changed();
    return _call_native_mb_no_ret(
      EditorProperty.#_bindings.method_emit_changed,
      this._owner,
      _property, _value, _field, _changing
    );
    
  }
  
get label () {
  return this.get_label();
}
set label (new_value) {
  this.set_label(new_value);
}
get read_only () {
  return this.is_read_only();
}
set read_only (new_value) {
  this.set_read_only(new_value);
}
get checkable () {
  return this.is_checkable();
}
set checkable (new_value) {
  this.set_checkable(new_value);
}
get checked () {
  return this.is_checked();
}
set checked (new_value) {
  this.set_checked(new_value);
}
get draw_warning () {
  return this.is_draw_warning();
}
set draw_warning (new_value) {
  this.set_draw_warning(new_value);
}
get keying () {
  return this.is_keying();
}
set keying (new_value) {
  this.set_keying(new_value);
}
get deletable () {
  return this.is_deletable();
}
set deletable (new_value) {
  this.set_deletable(new_value);
}

}