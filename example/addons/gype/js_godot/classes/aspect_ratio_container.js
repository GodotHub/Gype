import * as internal from '__internal__';
import { Container } from '@js_godot/classes/container'
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
  method_set_ratio;
  method_get_ratio;
  method_set_stretch_mode;
  method_get_stretch_mode;
  method_set_alignment_horizontal;
  method_get_alignment_horizontal;
  method_set_alignment_vertical;
  method_get_alignment_vertical;
}
@GodotClass
export class AspectRatioContainer extends Container{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AspectRatioContainer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_ratio() {
    if (!this._bindings.method_set_ratio) {
      let classname = new StringName("AspectRatioContainer");
      let methodname = new StringName("set_ratio");
      this._bindings.method_set_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ratio() {
    if (!this._bindings.method_get_ratio) {
      let classname = new StringName("AspectRatioContainer");
      let methodname = new StringName("get_ratio");
      this._bindings.method_get_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_stretch_mode() {
    if (!this._bindings.method_set_stretch_mode) {
      let classname = new StringName("AspectRatioContainer");
      let methodname = new StringName("set_stretch_mode");
      this._bindings.method_set_stretch_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1876743467
      );
    }
  }
  static init_method_get_stretch_mode() {
    if (!this._bindings.method_get_stretch_mode) {
      let classname = new StringName("AspectRatioContainer");
      let methodname = new StringName("get_stretch_mode");
      this._bindings.method_get_stretch_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3416449033
      );
    }
  }
  static init_method_set_alignment_horizontal() {
    if (!this._bindings.method_set_alignment_horizontal) {
      let classname = new StringName("AspectRatioContainer");
      let methodname = new StringName("set_alignment_horizontal");
      this._bindings.method_set_alignment_horizontal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2147829016
      );
    }
  }
  static init_method_get_alignment_horizontal() {
    if (!this._bindings.method_get_alignment_horizontal) {
      let classname = new StringName("AspectRatioContainer");
      let methodname = new StringName("get_alignment_horizontal");
      this._bindings.method_get_alignment_horizontal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3838875429
      );
    }
  }
  static init_method_set_alignment_vertical() {
    if (!this._bindings.method_set_alignment_vertical) {
      let classname = new StringName("AspectRatioContainer");
      let methodname = new StringName("set_alignment_vertical");
      this._bindings.method_set_alignment_vertical = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2147829016
      );
    }
  }
  static init_method_get_alignment_vertical() {
    if (!this._bindings.method_get_alignment_vertical) {
      let classname = new StringName("AspectRatioContainer");
      let methodname = new StringName("get_alignment_vertical");
      this._bindings.method_get_alignment_vertical = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3838875429
      );
    }
  }

  
  
  set_ratio(_ratio) {
    AspectRatioContainer.init_method_set_ratio();
    return _call_native_mb_no_ret(
      AspectRatioContainer._bindings.method_set_ratio,
      this._owner,
      _ratio
    );
    
  }
  get_ratio() {
    AspectRatioContainer.init_method_get_ratio();
    return _call_native_mb_ret(
      AspectRatioContainer._bindings.method_get_ratio,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_stretch_mode(_stretch_mode) {
    AspectRatioContainer.init_method_set_stretch_mode();
    return _call_native_mb_no_ret(
      AspectRatioContainer._bindings.method_set_stretch_mode,
      this._owner,
      _stretch_mode
    );
    
  }
  get_stretch_mode() {
    AspectRatioContainer.init_method_get_stretch_mode();
    return _call_native_mb_ret(
      AspectRatioContainer._bindings.method_get_stretch_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_alignment_horizontal(_alignment_horizontal) {
    AspectRatioContainer.init_method_set_alignment_horizontal();
    return _call_native_mb_no_ret(
      AspectRatioContainer._bindings.method_set_alignment_horizontal,
      this._owner,
      _alignment_horizontal
    );
    
  }
  get_alignment_horizontal() {
    AspectRatioContainer.init_method_get_alignment_horizontal();
    return _call_native_mb_ret(
      AspectRatioContainer._bindings.method_get_alignment_horizontal,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_alignment_vertical(_alignment_vertical) {
    AspectRatioContainer.init_method_set_alignment_vertical();
    return _call_native_mb_no_ret(
      AspectRatioContainer._bindings.method_set_alignment_vertical,
      this._owner,
      _alignment_vertical
    );
    
  }
  get_alignment_vertical() {
    AspectRatioContainer.init_method_get_alignment_vertical();
    return _call_native_mb_ret(
      AspectRatioContainer._bindings.method_get_alignment_vertical,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get ratio () {
  return this.get_ratio();
}
set ratio (new_value) {
  this.set_ratio(new_value);
}
get stretch_mode () {
  return this.get_stretch_mode();
}
set stretch_mode (new_value) {
  this.set_stretch_mode(new_value);
}
get alignment_horizontal () {
  return this.get_alignment_horizontal();
}
set alignment_horizontal (new_value) {
  this.set_alignment_horizontal(new_value);
}
get alignment_vertical () {
  return this.get_alignment_vertical();
}
set alignment_vertical (new_value) {
  this.set_alignment_vertical(new_value);
}

  static StretchMode = {
    STRETCH_WIDTH_CONTROLS_HEIGHT: 0,
    STRETCH_HEIGHT_CONTROLS_WIDTH: 1,
    STRETCH_FIT: 2,
    STRETCH_COVER: 3,
  }
  static AlignmentMode = {
    ALIGNMENT_BEGIN: 0,
    ALIGNMENT_CENTER: 1,
    ALIGNMENT_END: 2,
  }
}