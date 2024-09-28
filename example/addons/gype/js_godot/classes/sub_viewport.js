import * as internal from '__internal__';
import { Viewport } from '@js_godot/classes/viewport'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_size;
  method_get_size;
  method_set_size_2d_override;
  method_get_size_2d_override;
  method_set_size_2d_override_stretch;
  method_is_size_2d_override_stretch_enabled;
  method_set_update_mode;
  method_get_update_mode;
  method_set_clear_mode;
  method_get_clear_mode;
}
@GodotClass
export class SubViewport extends Viewport{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SubViewport");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_size() {
    if (!this._bindings.method_set_size) {
      let classname = new StringName("SubViewport");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_get_size() {
    if (!this._bindings.method_get_size) {
      let classname = new StringName("SubViewport");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_set_size_2d_override() {
    if (!this._bindings.method_set_size_2d_override) {
      let classname = new StringName("SubViewport");
      let methodname = new StringName("set_size_2d_override");
      this._bindings.method_set_size_2d_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_get_size_2d_override() {
    if (!this._bindings.method_get_size_2d_override) {
      let classname = new StringName("SubViewport");
      let methodname = new StringName("get_size_2d_override");
      this._bindings.method_get_size_2d_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_set_size_2d_override_stretch() {
    if (!this._bindings.method_set_size_2d_override_stretch) {
      let classname = new StringName("SubViewport");
      let methodname = new StringName("set_size_2d_override_stretch");
      this._bindings.method_set_size_2d_override_stretch = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_size_2d_override_stretch_enabled() {
    if (!this._bindings.method_is_size_2d_override_stretch_enabled) {
      let classname = new StringName("SubViewport");
      let methodname = new StringName("is_size_2d_override_stretch_enabled");
      this._bindings.method_is_size_2d_override_stretch_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_update_mode() {
    if (!this._bindings.method_set_update_mode) {
      let classname = new StringName("SubViewport");
      let methodname = new StringName("set_update_mode");
      this._bindings.method_set_update_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1295690030
      );
    }
  }
  static init_method_get_update_mode() {
    if (!this._bindings.method_get_update_mode) {
      let classname = new StringName("SubViewport");
      let methodname = new StringName("get_update_mode");
      this._bindings.method_get_update_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2980171553
      );
    }
  }
  static init_method_set_clear_mode() {
    if (!this._bindings.method_set_clear_mode) {
      let classname = new StringName("SubViewport");
      let methodname = new StringName("set_clear_mode");
      this._bindings.method_set_clear_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2834454712
      );
    }
  }
  static init_method_get_clear_mode() {
    if (!this._bindings.method_get_clear_mode) {
      let classname = new StringName("SubViewport");
      let methodname = new StringName("get_clear_mode");
      this._bindings.method_get_clear_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        331324495
      );
    }
  }

  
  
  set_size(_size) {
    SubViewport.init_method_set_size();
    return _call_native_mb_no_ret(
      SubViewport._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    SubViewport.init_method_get_size();
    return _call_native_mb_ret(
      SubViewport._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  set_size_2d_override(_size) {
    SubViewport.init_method_set_size_2d_override();
    return _call_native_mb_no_ret(
      SubViewport._bindings.method_set_size_2d_override,
      this._owner,
      _size
    );
    
  }
  get_size_2d_override() {
    SubViewport.init_method_get_size_2d_override();
    return _call_native_mb_ret(
      SubViewport._bindings.method_get_size_2d_override,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  set_size_2d_override_stretch(_enable) {
    SubViewport.init_method_set_size_2d_override_stretch();
    return _call_native_mb_no_ret(
      SubViewport._bindings.method_set_size_2d_override_stretch,
      this._owner,
      _enable
    );
    
  }
  is_size_2d_override_stretch_enabled() {
    SubViewport.init_method_is_size_2d_override_stretch_enabled();
    return _call_native_mb_ret(
      SubViewport._bindings.method_is_size_2d_override_stretch_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_update_mode(_mode) {
    SubViewport.init_method_set_update_mode();
    return _call_native_mb_no_ret(
      SubViewport._bindings.method_set_update_mode,
      this._owner,
      _mode
    );
    
  }
  get_update_mode() {
    SubViewport.init_method_get_update_mode();
    return _call_native_mb_ret(
      SubViewport._bindings.method_get_update_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_clear_mode(_mode) {
    SubViewport.init_method_set_clear_mode();
    return _call_native_mb_no_ret(
      SubViewport._bindings.method_set_clear_mode,
      this._owner,
      _mode
    );
    
  }
  get_clear_mode() {
    SubViewport.init_method_get_clear_mode();
    return _call_native_mb_ret(
      SubViewport._bindings.method_get_clear_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}
get size_2d_override () {
  return this.get_size_2d_override();
}
set size_2d_override (new_value) {
  this.set_size_2d_override(new_value);
}
get size_2d_override_stretch () {
  return this.is_size_2d_override_stretch_enabled();
}
set size_2d_override_stretch (new_value) {
  this.set_size_2d_override_stretch(new_value);
}
get render_target_clear_mode () {
  return this.get_clear_mode();
}
set render_target_clear_mode (new_value) {
  this.set_clear_mode(new_value);
}
get render_target_update_mode () {
  return this.get_update_mode();
}
set render_target_update_mode (new_value) {
  this.set_update_mode(new_value);
}

  static ClearMode = {
    CLEAR_MODE_ALWAYS: 0,
    CLEAR_MODE_NEVER: 1,
    CLEAR_MODE_ONCE: 2,
  }
  static UpdateMode = {
    UPDATE_DISABLED: 0,
    UPDATE_ONCE: 1,
    UPDATE_WHEN_VISIBLE: 2,
    UPDATE_WHEN_PARENT_VISIBLE: 3,
    UPDATE_ALWAYS: 4,
  }
}