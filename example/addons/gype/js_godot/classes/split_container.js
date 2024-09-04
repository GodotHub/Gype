import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Container } from '@js_godot/classes/container'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_split_offset;
  method_get_split_offset;
  method_clamp_split_offset;
  method_set_collapsed;
  method_is_collapsed;
  method_set_dragger_visibility;
  method_get_dragger_visibility;
  method_set_vertical;
  method_is_vertical;
}
export class SplitContainer extends Container{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("SplitContainer");
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
      let classname = new StringName("SplitContainer");
      let methodname = new StringName("set_split_offset");
      this._bindings.method_set_split_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("SplitContainer");
      let methodname = new StringName("get_split_offset");
      this._bindings.method_get_split_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("SplitContainer");
      let methodname = new StringName("clamp_split_offset");
      this._bindings.method_clamp_split_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("SplitContainer");
      let methodname = new StringName("set_collapsed");
      this._bindings.method_set_collapsed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SplitContainer");
      let methodname = new StringName("is_collapsed");
      this._bindings.method_is_collapsed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("SplitContainer");
      let methodname = new StringName("set_dragger_visibility");
      this._bindings.method_set_dragger_visibility = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1168273952
      );
    }
    {
      let classname = new StringName("SplitContainer");
      let methodname = new StringName("get_dragger_visibility");
      this._bindings.method_get_dragger_visibility = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        967297479
      );
    }
    {
      let classname = new StringName("SplitContainer");
      let methodname = new StringName("set_vertical");
      this._bindings.method_set_vertical = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SplitContainer");
      let methodname = new StringName("is_vertical");
      this._bindings.method_is_vertical = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_split_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_split_offset,
      this._owner,
      _offset
    );
    
  }
  get_split_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_split_offset,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  clamp_split_offset() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clamp_split_offset,
      this._owner,
      
    );
    
  }
  set_collapsed(_collapsed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collapsed,
      this._owner,
      _collapsed
    );
    
  }
  is_collapsed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_collapsed,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_dragger_visibility(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_dragger_visibility,
      this._owner,
      _mode
    );
    
  }
  get_dragger_visibility() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_dragger_visibility,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_vertical(_vertical) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertical,
      this._owner,
      _vertical
    );
    
  }
  is_vertical() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_vertical,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  
get split_offset () {
  return this.get_split_offset();
}
set split_offset (new_value) {
  this.set_split_offset(new_value);
}
get collapsed () {
  return this.is_collapsed();
}
set collapsed (new_value) {
  this.set_collapsed(new_value);
}
get dragger_visibility () {
  return this.get_dragger_visibility();
}
set dragger_visibility (new_value) {
  this.set_dragger_visibility(new_value);
}
get vertical () {
  return this.is_vertical();
}
set vertical (new_value) {
  this.set_vertical(new_value);
}

  static DraggerVisibility = {
    DRAGGER_VISIBLE: 0,
    DRAGGER_HIDDEN: 1,
    DRAGGER_HIDDEN_COLLAPSED: 2,
  }

  static {
    this._init_bindings();
  }
}