import * as internal from '__internal__';
import { Range } from 'src/js_godot/classes/range'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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


export class SpinBox extends Range{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SpinBox");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("SpinBox");
        let methodname = new StringName("set_horizontal_alignment");
        this._bindings.method_set_horizontal_alignment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2312603777
        );
      }
      {
        let classname = new StringName("SpinBox");
        let methodname = new StringName("get_horizontal_alignment");
        this._bindings.method_get_horizontal_alignment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          341400642
        );
      }
      {
        let classname = new StringName("SpinBox");
        let methodname = new StringName("set_suffix");
        this._bindings.method_set_suffix = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("SpinBox");
        let methodname = new StringName("get_suffix");
        this._bindings.method_get_suffix = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("SpinBox");
        let methodname = new StringName("set_prefix");
        this._bindings.method_set_prefix = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("SpinBox");
        let methodname = new StringName("get_prefix");
        this._bindings.method_get_prefix = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("SpinBox");
        let methodname = new StringName("set_editable");
        this._bindings.method_set_editable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("SpinBox");
        let methodname = new StringName("set_custom_arrow_step");
        this._bindings.method_set_custom_arrow_step = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("SpinBox");
        let methodname = new StringName("get_custom_arrow_step");
        this._bindings.method_get_custom_arrow_step = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("SpinBox");
        let methodname = new StringName("is_editable");
        this._bindings.method_is_editable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("SpinBox");
        let methodname = new StringName("set_update_on_text_changed");
        this._bindings.method_set_update_on_text_changed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("SpinBox");
        let methodname = new StringName("get_update_on_text_changed");
        this._bindings.method_get_update_on_text_changed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("SpinBox");
        let methodname = new StringName("set_select_all_on_focus");
        this._bindings.method_set_select_all_on_focus = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("SpinBox");
        let methodname = new StringName("is_select_all_on_focus");
        this._bindings.method_is_select_all_on_focus = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("SpinBox");
        let methodname = new StringName("apply");
        this._bindings.method_apply = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_horizontal_alignment,
      this._owner,
      _alignment
    );
    
  }
  get_horizontal_alignment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_horizontal_alignment,
      this._owner,
			Variant.INT,
      
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
  set_prefix(_prefix) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_prefix,
      this._owner,
      _prefix
    );
    
  }
  get_prefix() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_prefix,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  set_editable(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_editable,
      this._owner,
      _enabled
    );
    
  }
  set_custom_arrow_step(_arrow_step) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_custom_arrow_step,
      this._owner,
      _arrow_step
    );
    
  }
  get_custom_arrow_step() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_custom_arrow_step,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  is_editable() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_editable,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_update_on_text_changed(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_update_on_text_changed,
      this._owner,
      _enabled
    );
    
  }
  get_update_on_text_changed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_update_on_text_changed,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_select_all_on_focus(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_select_all_on_focus,
      this._owner,
      _enabled
    );
    
  }
  is_select_all_on_focus() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_select_all_on_focus,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  apply() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_apply,
      this._owner,
      
    );
    
  }
  get_line_edit() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_edit,
      this._owner,
			Variant.INT,
      
    );
    
  }
}