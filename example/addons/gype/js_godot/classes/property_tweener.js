import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Tweener } from '@js_godot/classes/tweener'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_from;
  method_from_current;
  method_as_relative;
  method_set_trans;
  method_set_ease;
  method_set_custom_interpolator;
  method_set_delay;
}
@GodotClass
export class PropertyTweener extends Tweener{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PropertyTweener");
    } else {
      super(godot_object);
    }
  }
  static init_method_from() {
    if (!this._bindings.method_from) {
      let classname = new StringName("PropertyTweener");
      let methodname = new StringName("from");
      this._bindings.method_from = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4190193059
      );
    }
  }
  static init_method_from_current() {
    if (!this._bindings.method_from_current) {
      let classname = new StringName("PropertyTweener");
      let methodname = new StringName("from_current");
      this._bindings.method_from_current = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4279177709
      );
    }
  }
  static init_method_as_relative() {
    if (!this._bindings.method_as_relative) {
      let classname = new StringName("PropertyTweener");
      let methodname = new StringName("as_relative");
      this._bindings.method_as_relative = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4279177709
      );
    }
  }
  static init_method_set_trans() {
    if (!this._bindings.method_set_trans) {
      let classname = new StringName("PropertyTweener");
      let methodname = new StringName("set_trans");
      this._bindings.method_set_trans = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1899107404
      );
    }
  }
  static init_method_set_ease() {
    if (!this._bindings.method_set_ease) {
      let classname = new StringName("PropertyTweener");
      let methodname = new StringName("set_ease");
      this._bindings.method_set_ease = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1080455622
      );
    }
  }
  static init_method_set_custom_interpolator() {
    if (!this._bindings.method_set_custom_interpolator) {
      let classname = new StringName("PropertyTweener");
      let methodname = new StringName("set_custom_interpolator");
      this._bindings.method_set_custom_interpolator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3174170268
      );
    }
  }
  static init_method_set_delay() {
    if (!this._bindings.method_set_delay) {
      let classname = new StringName("PropertyTweener");
      let methodname = new StringName("set_delay");
      this._bindings.method_set_delay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2171559331
      );
    }
  }

  
  
  from(_value) {
    PropertyTweener.init_method_from();
    return _call_native_mb_ret(
      PropertyTweener._bindings.method_from,
      this._owner,
			Variant.Type.OBJECT,
      _value
    );
    
  }
  from_current() {
    PropertyTweener.init_method_from_current();
    return _call_native_mb_ret(
      PropertyTweener._bindings.method_from_current,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  as_relative() {
    PropertyTweener.init_method_as_relative();
    return _call_native_mb_ret(
      PropertyTweener._bindings.method_as_relative,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_trans(_trans) {
    PropertyTweener.init_method_set_trans();
    return _call_native_mb_ret(
      PropertyTweener._bindings.method_set_trans,
      this._owner,
			Variant.Type.OBJECT,
      _trans
    );
    
  }
  set_ease(_ease) {
    PropertyTweener.init_method_set_ease();
    return _call_native_mb_ret(
      PropertyTweener._bindings.method_set_ease,
      this._owner,
			Variant.Type.OBJECT,
      _ease
    );
    
  }
  set_custom_interpolator(_interpolator_method) {
    PropertyTweener.init_method_set_custom_interpolator();
    return _call_native_mb_ret(
      PropertyTweener._bindings.method_set_custom_interpolator,
      this._owner,
			Variant.Type.OBJECT,
      _interpolator_method
    );
    
  }
  set_delay(_delay) {
    PropertyTweener.init_method_set_delay();
    return _call_native_mb_ret(
      PropertyTweener._bindings.method_set_delay,
      this._owner,
			Variant.Type.OBJECT,
      _delay
    );
    
  }
  

}