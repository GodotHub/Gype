import * as internal from '__internal__';
import { Range } from 'src/js_godot/classesrange'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_set_label;
    method_get_label;
    method_set_suffix;
    method_get_suffix;
    method_set_read_only;
    method_is_read_only;
    method_set_flat;
    method_is_flat;
    method_set_hide_slider;
    method_is_hiding_slider;
}


export class EditorSpinSlider extends Range{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorSpinSlider");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("set_label");
      this._bindings.method_set_label = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("get_label");
      this._bindings.method_get_label = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("set_suffix");
      this._bindings.method_set_suffix = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("get_suffix");
      this._bindings.method_get_suffix = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("set_read_only");
      this._bindings.method_set_read_only = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("is_read_only");
      this._bindings.method_is_read_only = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("set_flat");
      this._bindings.method_set_flat = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("is_flat");
      this._bindings.method_is_flat = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("set_hide_slider");
      this._bindings.method_set_hide_slider = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("is_hiding_slider");
      this._bindings.method_is_hiding_slider = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_label(_label) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_label,
      this._owner,
      _label
    );
  }
  get_label() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_label,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_suffix(_suffix) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_suffix,
      this._owner,
      _suffix
    );
  }
  get_suffix() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_suffix,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_read_only(_read_only) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_read_only,
      this._owner,
      _read_only
    );
  }
  is_read_only() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_read_only,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_flat(_flat) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_flat,
      this._owner,
      _flat
    );
  }
  is_flat() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_flat,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_hide_slider(_hide_slider) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hide_slider,
      this._owner,
      _hide_slider
    );
  }
  is_hiding_slider() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_hiding_slider,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}