import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Range } from '@js_godot/classes/range'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_horizontal_alignment;
  method_get_horizontal_alignment;
  method_set_suffix;
  method_get_suffix;
  method_set_prefix;
  method_get_prefix;
  method_set_editable;
  method_set_custom_arrow_step;
  method_get_custom_arrow_step;
  method_is_editable;
  method_set_update_on_text_changed;
  method_get_update_on_text_changed;
  method_set_select_all_on_focus;
  method_is_select_all_on_focus;
  method_apply;
  method_get_line_edit;
}
@GodotClass
export class SpinBox extends Range{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SpinBox");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_horizontal_alignment() {
    if (!this._bindings.method_set_horizontal_alignment) {
      let classname = new StringName("SpinBox");
      let methodname = new StringName("set_horizontal_alignment");
      this._bindings.method_set_horizontal_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2312603777
      );
    }
  }
  static init_method_get_horizontal_alignment() {
    if (!this._bindings.method_get_horizontal_alignment) {
      let classname = new StringName("SpinBox");
      let methodname = new StringName("get_horizontal_alignment");
      this._bindings.method_get_horizontal_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        341400642
      );
    }
  }
  static init_method_set_suffix() {
    if (!this._bindings.method_set_suffix) {
      let classname = new StringName("SpinBox");
      let methodname = new StringName("set_suffix");
      this._bindings.method_set_suffix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_suffix() {
    if (!this._bindings.method_get_suffix) {
      let classname = new StringName("SpinBox");
      let methodname = new StringName("get_suffix");
      this._bindings.method_get_suffix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_prefix() {
    if (!this._bindings.method_set_prefix) {
      let classname = new StringName("SpinBox");
      let methodname = new StringName("set_prefix");
      this._bindings.method_set_prefix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_prefix() {
    if (!this._bindings.method_get_prefix) {
      let classname = new StringName("SpinBox");
      let methodname = new StringName("get_prefix");
      this._bindings.method_get_prefix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_editable() {
    if (!this._bindings.method_set_editable) {
      let classname = new StringName("SpinBox");
      let methodname = new StringName("set_editable");
      this._bindings.method_set_editable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_custom_arrow_step() {
    if (!this._bindings.method_set_custom_arrow_step) {
      let classname = new StringName("SpinBox");
      let methodname = new StringName("set_custom_arrow_step");
      this._bindings.method_set_custom_arrow_step = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_custom_arrow_step() {
    if (!this._bindings.method_get_custom_arrow_step) {
      let classname = new StringName("SpinBox");
      let methodname = new StringName("get_custom_arrow_step");
      this._bindings.method_get_custom_arrow_step = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_is_editable() {
    if (!this._bindings.method_is_editable) {
      let classname = new StringName("SpinBox");
      let methodname = new StringName("is_editable");
      this._bindings.method_is_editable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_update_on_text_changed() {
    if (!this._bindings.method_set_update_on_text_changed) {
      let classname = new StringName("SpinBox");
      let methodname = new StringName("set_update_on_text_changed");
      this._bindings.method_set_update_on_text_changed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_update_on_text_changed() {
    if (!this._bindings.method_get_update_on_text_changed) {
      let classname = new StringName("SpinBox");
      let methodname = new StringName("get_update_on_text_changed");
      this._bindings.method_get_update_on_text_changed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_select_all_on_focus() {
    if (!this._bindings.method_set_select_all_on_focus) {
      let classname = new StringName("SpinBox");
      let methodname = new StringName("set_select_all_on_focus");
      this._bindings.method_set_select_all_on_focus = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_select_all_on_focus() {
    if (!this._bindings.method_is_select_all_on_focus) {
      let classname = new StringName("SpinBox");
      let methodname = new StringName("is_select_all_on_focus");
      this._bindings.method_is_select_all_on_focus = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_apply() {
    if (!this._bindings.method_apply) {
      let classname = new StringName("SpinBox");
      let methodname = new StringName("apply");
      this._bindings.method_apply = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_line_edit() {
    if (!this._bindings.method_get_line_edit) {
      let classname = new StringName("SpinBox");
      let methodname = new StringName("get_line_edit");
      this._bindings.method_get_line_edit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4071694264
      );
    }
  }

  
  
  set_horizontal_alignment(_alignment) {
    SpinBox.init_method_set_horizontal_alignment();
    return _call_native_mb_no_ret(
      SpinBox._bindings.method_set_horizontal_alignment,
      this._owner,
      _alignment
    );
    
  }
  get_horizontal_alignment() {
    SpinBox.init_method_get_horizontal_alignment();
    return _call_native_mb_ret(
      SpinBox._bindings.method_get_horizontal_alignment,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_suffix(_suffix) {
    SpinBox.init_method_set_suffix();
    return _call_native_mb_no_ret(
      SpinBox._bindings.method_set_suffix,
      this._owner,
      _suffix
    );
    
  }
  get_suffix() {
    SpinBox.init_method_get_suffix();
    return _call_native_mb_ret(
      SpinBox._bindings.method_get_suffix,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_prefix(_prefix) {
    SpinBox.init_method_set_prefix();
    return _call_native_mb_no_ret(
      SpinBox._bindings.method_set_prefix,
      this._owner,
      _prefix
    );
    
  }
  get_prefix() {
    SpinBox.init_method_get_prefix();
    return _call_native_mb_ret(
      SpinBox._bindings.method_get_prefix,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_editable(_enabled) {
    SpinBox.init_method_set_editable();
    return _call_native_mb_no_ret(
      SpinBox._bindings.method_set_editable,
      this._owner,
      _enabled
    );
    
  }
  set_custom_arrow_step(_arrow_step) {
    SpinBox.init_method_set_custom_arrow_step();
    return _call_native_mb_no_ret(
      SpinBox._bindings.method_set_custom_arrow_step,
      this._owner,
      _arrow_step
    );
    
  }
  get_custom_arrow_step() {
    SpinBox.init_method_get_custom_arrow_step();
    return _call_native_mb_ret(
      SpinBox._bindings.method_get_custom_arrow_step,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  is_editable() {
    SpinBox.init_method_is_editable();
    return _call_native_mb_ret(
      SpinBox._bindings.method_is_editable,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_update_on_text_changed(_enabled) {
    SpinBox.init_method_set_update_on_text_changed();
    return _call_native_mb_no_ret(
      SpinBox._bindings.method_set_update_on_text_changed,
      this._owner,
      _enabled
    );
    
  }
  get_update_on_text_changed() {
    SpinBox.init_method_get_update_on_text_changed();
    return _call_native_mb_ret(
      SpinBox._bindings.method_get_update_on_text_changed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_select_all_on_focus(_enabled) {
    SpinBox.init_method_set_select_all_on_focus();
    return _call_native_mb_no_ret(
      SpinBox._bindings.method_set_select_all_on_focus,
      this._owner,
      _enabled
    );
    
  }
  is_select_all_on_focus() {
    SpinBox.init_method_is_select_all_on_focus();
    return _call_native_mb_ret(
      SpinBox._bindings.method_is_select_all_on_focus,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  apply() {
    SpinBox.init_method_apply();
    return _call_native_mb_no_ret(
      SpinBox._bindings.method_apply,
      this._owner,
      
    );
    
  }
  get_line_edit() {
    SpinBox.init_method_get_line_edit();
    return _call_native_mb_ret(
      SpinBox._bindings.method_get_line_edit,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get alignment () {
  return this.get_horizontal_alignment();
}
set alignment (new_value) {
  this.set_horizontal_alignment(new_value);
}
get editable () {
  return this.is_editable();
}
set editable (new_value) {
  this.set_editable(new_value);
}
get update_on_text_changed () {
  return this.get_update_on_text_changed();
}
set update_on_text_changed (new_value) {
  this.set_update_on_text_changed(new_value);
}
get prefix () {
  return this.get_prefix();
}
set prefix (new_value) {
  this.set_prefix(new_value);
}
get suffix () {
  return this.get_suffix();
}
set suffix (new_value) {
  this.set_suffix(new_value);
}
get custom_arrow_step () {
  return this.get_custom_arrow_step();
}
set custom_arrow_step (new_value) {
  this.set_custom_arrow_step(new_value);
}
get select_all_on_focus () {
  return this.is_select_all_on_focus();
}
set select_all_on_focus (new_value) {
  this.set_select_all_on_focus(new_value);
}

}