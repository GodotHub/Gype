import * as internal from '__internal__';
import { Callable } from '@js_godot/variant/callable'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Tweener } from '@js_godot/classes/tweener'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_from;
  method_from_current;
  method_as_relative;
  method_set_trans;
  method_set_ease;
  method_set_custom_interpolator;
  method_set_delay;
}
export class PropertyTweener extends Tweener{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PropertyTweener");
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
      let classname = new StringName("PropertyTweener");
      let methodname = new StringName("from");
      this._bindings.method_from = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4190193059
      );
    }
    {
      let classname = new StringName("PropertyTweener");
      let methodname = new StringName("from_current");
      this._bindings.method_from_current = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4279177709
      );
    }
    {
      let classname = new StringName("PropertyTweener");
      let methodname = new StringName("as_relative");
      this._bindings.method_as_relative = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4279177709
      );
    }
    {
      let classname = new StringName("PropertyTweener");
      let methodname = new StringName("set_trans");
      this._bindings.method_set_trans = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1899107404
      );
    }
    {
      let classname = new StringName("PropertyTweener");
      let methodname = new StringName("set_ease");
      this._bindings.method_set_ease = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1080455622
      );
    }
    {
      let classname = new StringName("PropertyTweener");
      let methodname = new StringName("set_custom_interpolator");
      this._bindings.method_set_custom_interpolator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3174170268
      );
    }
    {
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
    return _call_native_mb_ret(
      PropertyTweener._bindings.method_from,
      this._owner,
			Variant.INT,
      _value
    );
    
  }
  from_current() {
    return _call_native_mb_ret(
      PropertyTweener._bindings.method_from_current,
      this._owner,
			Variant.INT,
      
    );
    
  }
  as_relative() {
    return _call_native_mb_ret(
      PropertyTweener._bindings.method_as_relative,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_trans(_trans) {
    return _call_native_mb_ret(
      PropertyTweener._bindings.method_set_trans,
      this._owner,
			Variant.INT,
      _trans
    );
    
  }
  set_ease(_ease) {
    return _call_native_mb_ret(
      PropertyTweener._bindings.method_set_ease,
      this._owner,
			Variant.INT,
      _ease
    );
    
  }
  set_custom_interpolator(_interpolator_method) {
    return _call_native_mb_ret(
      PropertyTweener._bindings.method_set_custom_interpolator,
      this._owner,
			Variant.INT,
      _interpolator_method
    );
    
  }
  set_delay(_delay) {
    return _call_native_mb_ret(
      PropertyTweener._bindings.method_set_delay,
      this._owner,
			Variant.INT,
      _delay
    );
    
  }
  


  static {
    this._init_bindings();
  }
}