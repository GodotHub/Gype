import * as internal from '__internal__';
import { Range } from '@js_godot/classes/range'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorSpinSlider");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_label() {
    if (!this.#_bindings.method_set_label) {
      let classname = new StringName("EditorSpinSlider");
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
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("get_label");
      this.#_bindings.method_get_label = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_suffix() {
    if (!this.#_bindings.method_set_suffix) {
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("set_suffix");
      this.#_bindings.method_set_suffix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_suffix() {
    if (!this.#_bindings.method_get_suffix) {
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("get_suffix");
      this.#_bindings.method_get_suffix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_read_only() {
    if (!this.#_bindings.method_set_read_only) {
      let classname = new StringName("EditorSpinSlider");
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
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("is_read_only");
      this.#_bindings.method_is_read_only = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_flat() {
    if (!this.#_bindings.method_set_flat) {
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("set_flat");
      this.#_bindings.method_set_flat = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_flat() {
    if (!this.#_bindings.method_is_flat) {
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("is_flat");
      this.#_bindings.method_is_flat = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_hide_slider() {
    if (!this.#_bindings.method_set_hide_slider) {
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("set_hide_slider");
      this.#_bindings.method_set_hide_slider = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_hiding_slider() {
    if (!this.#_bindings.method_is_hiding_slider) {
      let classname = new StringName("EditorSpinSlider");
      let methodname = new StringName("is_hiding_slider");
      this.#_bindings.method_is_hiding_slider = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_label(_label) {
    EditorSpinSlider.init_method_set_label();
    return _call_native_mb_no_ret(
      EditorSpinSlider.#_bindings.method_set_label,
      this._owner,
      _label
    );
    
  }
  get_label() {
    EditorSpinSlider.init_method_get_label();
    return _call_native_mb_ret(
      EditorSpinSlider.#_bindings.method_get_label,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_suffix(_suffix) {
    EditorSpinSlider.init_method_set_suffix();
    return _call_native_mb_no_ret(
      EditorSpinSlider.#_bindings.method_set_suffix,
      this._owner,
      _suffix
    );
    
  }
  get_suffix() {
    EditorSpinSlider.init_method_get_suffix();
    return _call_native_mb_ret(
      EditorSpinSlider.#_bindings.method_get_suffix,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_read_only(_read_only) {
    EditorSpinSlider.init_method_set_read_only();
    return _call_native_mb_no_ret(
      EditorSpinSlider.#_bindings.method_set_read_only,
      this._owner,
      _read_only
    );
    
  }
  is_read_only() {
    EditorSpinSlider.init_method_is_read_only();
    return _call_native_mb_ret(
      EditorSpinSlider.#_bindings.method_is_read_only,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_flat(_flat) {
    EditorSpinSlider.init_method_set_flat();
    return _call_native_mb_no_ret(
      EditorSpinSlider.#_bindings.method_set_flat,
      this._owner,
      _flat
    );
    
  }
  is_flat() {
    EditorSpinSlider.init_method_is_flat();
    return _call_native_mb_ret(
      EditorSpinSlider.#_bindings.method_is_flat,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_hide_slider(_hide_slider) {
    EditorSpinSlider.init_method_set_hide_slider();
    return _call_native_mb_no_ret(
      EditorSpinSlider.#_bindings.method_set_hide_slider,
      this._owner,
      _hide_slider
    );
    
  }
  is_hiding_slider() {
    EditorSpinSlider.init_method_is_hiding_slider();
    return _call_native_mb_ret(
      EditorSpinSlider.#_bindings.method_is_hiding_slider,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get label () {
  return this.get_label();
}
set label (new_value) {
  this.set_label(new_value);
}
get suffix () {
  return this.get_suffix();
}
set suffix (new_value) {
  this.set_suffix(new_value);
}
get read_only () {
  return this.is_read_only();
}
set read_only (new_value) {
  this.set_read_only(new_value);
}
get flat () {
  return this.is_flat();
}
set flat (new_value) {
  this.set_flat(new_value);
}
get hide_slider () {
  return this.is_hiding_slider();
}
set hide_slider (new_value) {
  this.set_hide_slider(new_value);
}

}