import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Button } from '@js_godot/classes/button'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_pick_color;
  method_get_pick_color;
  method_get_picker;
  method_get_popup;
  method_set_edit_alpha;
  method_is_editing_alpha;
}
@GodotClass
export class ColorPickerButton extends Button{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ColorPickerButton");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_pick_color() {
    if (!this._bindings.method_set_pick_color) {
      let classname = new StringName("ColorPickerButton");
      let methodname = new StringName("set_pick_color");
      this._bindings.method_set_pick_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_pick_color() {
    if (!this._bindings.method_get_pick_color) {
      let classname = new StringName("ColorPickerButton");
      let methodname = new StringName("get_pick_color");
      this._bindings.method_get_pick_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_get_picker() {
    if (!this._bindings.method_get_picker) {
      let classname = new StringName("ColorPickerButton");
      let methodname = new StringName("get_picker");
      this._bindings.method_get_picker = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        331835996
      );
    }
  }
  static init_method_get_popup() {
    if (!this._bindings.method_get_popup) {
      let classname = new StringName("ColorPickerButton");
      let methodname = new StringName("get_popup");
      this._bindings.method_get_popup = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1322440207
      );
    }
  }
  static init_method_set_edit_alpha() {
    if (!this._bindings.method_set_edit_alpha) {
      let classname = new StringName("ColorPickerButton");
      let methodname = new StringName("set_edit_alpha");
      this._bindings.method_set_edit_alpha = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_editing_alpha() {
    if (!this._bindings.method_is_editing_alpha) {
      let classname = new StringName("ColorPickerButton");
      let methodname = new StringName("is_editing_alpha");
      this._bindings.method_is_editing_alpha = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_pick_color(_color) {
    ColorPickerButton.init_method_set_pick_color();
    return _call_native_mb_no_ret(
      ColorPickerButton._bindings.method_set_pick_color,
      this._owner,
      _color
    );
    
  }
  get_pick_color() {
    ColorPickerButton.init_method_get_pick_color();
    return _call_native_mb_ret(
      ColorPickerButton._bindings.method_get_pick_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  get_picker() {
    ColorPickerButton.init_method_get_picker();
    return _call_native_mb_ret(
      ColorPickerButton._bindings.method_get_picker,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_popup() {
    ColorPickerButton.init_method_get_popup();
    return _call_native_mb_ret(
      ColorPickerButton._bindings.method_get_popup,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_edit_alpha(_show) {
    ColorPickerButton.init_method_set_edit_alpha();
    return _call_native_mb_no_ret(
      ColorPickerButton._bindings.method_set_edit_alpha,
      this._owner,
      _show
    );
    
  }
  is_editing_alpha() {
    ColorPickerButton.init_method_is_editing_alpha();
    return _call_native_mb_ret(
      ColorPickerButton._bindings.method_is_editing_alpha,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get color () {
  return this.get_pick_color();
}
set color (new_value) {
  this.set_pick_color(new_value);
}
get edit_alpha () {
  return this.is_editing_alpha();
}
set edit_alpha (new_value) {
  this.set_edit_alpha(new_value);
}

}