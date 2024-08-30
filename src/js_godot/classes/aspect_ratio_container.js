import * as internal from '__internal__';
import { Container } from 'src/js_godot/classes/container'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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


export class AspectRatioContainer extends Container{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AspectRatioContainer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("AspectRatioContainer");
        let methodname = new StringName("set_ratio");
        this._bindings.method_set_ratio = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AspectRatioContainer");
        let methodname = new StringName("get_ratio");
        this._bindings.method_get_ratio = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AspectRatioContainer");
        let methodname = new StringName("set_stretch_mode");
        this._bindings.method_set_stretch_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1876743467
        );
      }
      {
        let classname = new StringName("AspectRatioContainer");
        let methodname = new StringName("get_stretch_mode");
        this._bindings.method_get_stretch_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3416449033
        );
      }
      {
        let classname = new StringName("AspectRatioContainer");
        let methodname = new StringName("set_alignment_horizontal");
        this._bindings.method_set_alignment_horizontal = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2147829016
        );
      }
      {
        let classname = new StringName("AspectRatioContainer");
        let methodname = new StringName("get_alignment_horizontal");
        this._bindings.method_get_alignment_horizontal = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3838875429
        );
      }
      {
        let classname = new StringName("AspectRatioContainer");
        let methodname = new StringName("set_alignment_vertical");
        this._bindings.method_set_alignment_vertical = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2147829016
        );
      }
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ratio,
      this._owner,
      _ratio
    );
    
  }
  get_ratio() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ratio,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_stretch_mode(_stretch_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_stretch_mode,
      this._owner,
      _stretch_mode
    );
    
  }
  get_stretch_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stretch_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_alignment_horizontal(_alignment_horizontal) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alignment_horizontal,
      this._owner,
      _alignment_horizontal
    );
    
  }
  get_alignment_horizontal() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alignment_horizontal,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_alignment_vertical(_alignment_vertical) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alignment_vertical,
      this._owner,
      _alignment_vertical
    );
    
  }
  get_alignment_vertical() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alignment_vertical,
      this._owner,
			Variant.INT,
      
    );
    
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