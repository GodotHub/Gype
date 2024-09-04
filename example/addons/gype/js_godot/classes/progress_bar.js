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

class _MethodBindings {
  method_set_fill_mode;
  method_get_fill_mode;
  method_set_show_percentage;
  method_is_percentage_shown;
  method_set_indeterminate;
  method_is_indeterminate;
  method_set_editor_preview_indeterminate;
  method_is_editor_preview_indeterminate_enabled;
}
export class ProgressBar extends Range{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ProgressBar");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("ProgressBar");
      let methodname = new StringName("set_fill_mode");
      this._bindings.method_set_fill_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("ProgressBar");
      let methodname = new StringName("get_fill_mode");
      this._bindings.method_get_fill_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("ProgressBar");
      let methodname = new StringName("set_show_percentage");
      this._bindings.method_set_show_percentage = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ProgressBar");
      let methodname = new StringName("is_percentage_shown");
      this._bindings.method_is_percentage_shown = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ProgressBar");
      let methodname = new StringName("set_indeterminate");
      this._bindings.method_set_indeterminate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ProgressBar");
      let methodname = new StringName("is_indeterminate");
      this._bindings.method_is_indeterminate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ProgressBar");
      let methodname = new StringName("set_editor_preview_indeterminate");
      this._bindings.method_set_editor_preview_indeterminate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ProgressBar");
      let methodname = new StringName("is_editor_preview_indeterminate_enabled");
      this._bindings.method_is_editor_preview_indeterminate_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_fill_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fill_mode,
      this._owner,
      _mode
    );
    
  }
  get_fill_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fill_mode,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_show_percentage(_visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_show_percentage,
      this._owner,
      _visible
    );
    
  }
  is_percentage_shown() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_percentage_shown,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_indeterminate(_indeterminate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_indeterminate,
      this._owner,
      _indeterminate
    );
    
  }
  is_indeterminate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_indeterminate,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_editor_preview_indeterminate(_preview_indeterminate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_editor_preview_indeterminate,
      this._owner,
      _preview_indeterminate
    );
    
  }
  is_editor_preview_indeterminate_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_editor_preview_indeterminate_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  
get fill_mode () {
  return this.get_fill_mode();
}
set fill_mode (new_value) {
  this.set_fill_mode(new_value);
}
get show_percentage () {
  return this.is_percentage_shown();
}
set show_percentage (new_value) {
  this.set_show_percentage(new_value);
}
get indeterminate () {
  return this.is_indeterminate();
}
set indeterminate (new_value) {
  this.set_indeterminate(new_value);
}
get editor_preview_indeterminate () {
  return this.is_editor_preview_indeterminate_enabled();
}
set editor_preview_indeterminate (new_value) {
  this.set_editor_preview_indeterminate(new_value);
}

  static FillMode = {
    FILL_BEGIN_TO_END: 0,
    FILL_END_TO_BEGIN: 1,
    FILL_TOP_TO_BOTTOM: 2,
    FILL_BOTTOM_TO_TOP: 3,
  }

  static {
    this._init_bindings();
  }
}