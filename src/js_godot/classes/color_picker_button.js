import * as internal from '__internal__';
import { Button } from 'src/js_godot/classesbutton'
import { Color } from 'src/js_godot/variant/color'
class _MethodBindings {
    method_set_pick_color;
    method_get_pick_color;
    method_get_picker;
    method_get_popup;
    method_set_edit_alpha;
    method_is_editing_alpha;
}


export class ColorPickerButton extends Button{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ColorPickerButton");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ColorPickerButton");
      let methodname = new StringName("set_pick_color");
      this._bindings.method_set_pick_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("ColorPickerButton");
      let methodname = new StringName("get_pick_color");
      this._bindings.method_get_pick_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("ColorPickerButton");
      let methodname = new StringName("get_picker");
      this._bindings.method_get_picker = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        331835996
      );
    }
    {
      let classname = new StringName("ColorPickerButton");
      let methodname = new StringName("get_popup");
      this._bindings.method_get_popup = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1322440207
      );
    }
    {
      let classname = new StringName("ColorPickerButton");
      let methodname = new StringName("set_edit_alpha");
      this._bindings.method_set_edit_alpha = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pick_color,
      this._owner,
      _color
    );
  }
  get_pick_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pick_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  get_picker() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_picker,
      this._owner,
			Variant.INT,
      
    );
  }
  get_popup() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_popup,
      this._owner,
			Variant.INT,
      
    );
  }
  set_edit_alpha(_show) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_edit_alpha,
      this._owner,
      _show
    );
  }
  is_editing_alpha() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_editing_alpha,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}