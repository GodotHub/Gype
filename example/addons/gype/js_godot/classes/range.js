import * as internal from '__internal__';
import { Control } from '@js_godot/classes/control'
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
  method_get_value;
  method_get_min;
  method_get_max;
  method_get_step;
  method_get_page;
  method_get_as_ratio;
  method_set_value;
  method_set_value_no_signal;
  method_set_min;
  method_set_max;
  method_set_step;
  method_set_page;
  method_set_as_ratio;
  method_set_use_rounded_values;
  method_is_using_rounded_values;
  method_set_exp_ratio;
  method_is_ratio_exp;
  method_set_allow_greater;
  method_is_greater_allowed;
  method_set_allow_lesser;
  method_is_lesser_allowed;
  method_share;
  method_unshare;
}
@GodotClass
export class Range extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Range");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_value() {
    if (!this._bindings.method_get_value) {
      let classname = new StringName("Range");
      let methodname = new StringName("get_value");
      this._bindings.method_get_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_min() {
    if (!this._bindings.method_get_min) {
      let classname = new StringName("Range");
      let methodname = new StringName("get_min");
      this._bindings.method_get_min = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_max() {
    if (!this._bindings.method_get_max) {
      let classname = new StringName("Range");
      let methodname = new StringName("get_max");
      this._bindings.method_get_max = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_step() {
    if (!this._bindings.method_get_step) {
      let classname = new StringName("Range");
      let methodname = new StringName("get_step");
      this._bindings.method_get_step = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_page() {
    if (!this._bindings.method_get_page) {
      let classname = new StringName("Range");
      let methodname = new StringName("get_page");
      this._bindings.method_get_page = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_as_ratio() {
    if (!this._bindings.method_get_as_ratio) {
      let classname = new StringName("Range");
      let methodname = new StringName("get_as_ratio");
      this._bindings.method_get_as_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_value() {
    if (!this._bindings.method_set_value) {
      let classname = new StringName("Range");
      let methodname = new StringName("set_value");
      this._bindings.method_set_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_value_no_signal() {
    if (!this._bindings.method_set_value_no_signal) {
      let classname = new StringName("Range");
      let methodname = new StringName("set_value_no_signal");
      this._bindings.method_set_value_no_signal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_min() {
    if (!this._bindings.method_set_min) {
      let classname = new StringName("Range");
      let methodname = new StringName("set_min");
      this._bindings.method_set_min = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_max() {
    if (!this._bindings.method_set_max) {
      let classname = new StringName("Range");
      let methodname = new StringName("set_max");
      this._bindings.method_set_max = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_step() {
    if (!this._bindings.method_set_step) {
      let classname = new StringName("Range");
      let methodname = new StringName("set_step");
      this._bindings.method_set_step = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_page() {
    if (!this._bindings.method_set_page) {
      let classname = new StringName("Range");
      let methodname = new StringName("set_page");
      this._bindings.method_set_page = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_as_ratio() {
    if (!this._bindings.method_set_as_ratio) {
      let classname = new StringName("Range");
      let methodname = new StringName("set_as_ratio");
      this._bindings.method_set_as_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_use_rounded_values() {
    if (!this._bindings.method_set_use_rounded_values) {
      let classname = new StringName("Range");
      let methodname = new StringName("set_use_rounded_values");
      this._bindings.method_set_use_rounded_values = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_rounded_values() {
    if (!this._bindings.method_is_using_rounded_values) {
      let classname = new StringName("Range");
      let methodname = new StringName("is_using_rounded_values");
      this._bindings.method_is_using_rounded_values = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_exp_ratio() {
    if (!this._bindings.method_set_exp_ratio) {
      let classname = new StringName("Range");
      let methodname = new StringName("set_exp_ratio");
      this._bindings.method_set_exp_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_ratio_exp() {
    if (!this._bindings.method_is_ratio_exp) {
      let classname = new StringName("Range");
      let methodname = new StringName("is_ratio_exp");
      this._bindings.method_is_ratio_exp = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_allow_greater() {
    if (!this._bindings.method_set_allow_greater) {
      let classname = new StringName("Range");
      let methodname = new StringName("set_allow_greater");
      this._bindings.method_set_allow_greater = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_greater_allowed() {
    if (!this._bindings.method_is_greater_allowed) {
      let classname = new StringName("Range");
      let methodname = new StringName("is_greater_allowed");
      this._bindings.method_is_greater_allowed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_allow_lesser() {
    if (!this._bindings.method_set_allow_lesser) {
      let classname = new StringName("Range");
      let methodname = new StringName("set_allow_lesser");
      this._bindings.method_set_allow_lesser = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_lesser_allowed() {
    if (!this._bindings.method_is_lesser_allowed) {
      let classname = new StringName("Range");
      let methodname = new StringName("is_lesser_allowed");
      this._bindings.method_is_lesser_allowed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_share() {
    if (!this._bindings.method_share) {
      let classname = new StringName("Range");
      let methodname = new StringName("share");
      this._bindings.method_share = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }
  static init_method_unshare() {
    if (!this._bindings.method_unshare) {
      let classname = new StringName("Range");
      let methodname = new StringName("unshare");
      this._bindings.method_unshare = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  _value_changed(_new_value) {
  }
  get_value() {
    Range.init_method_get_value();
    return _call_native_mb_ret(
      Range._bindings.method_get_value,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_min() {
    Range.init_method_get_min();
    return _call_native_mb_ret(
      Range._bindings.method_get_min,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_max() {
    Range.init_method_get_max();
    return _call_native_mb_ret(
      Range._bindings.method_get_max,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_step() {
    Range.init_method_get_step();
    return _call_native_mb_ret(
      Range._bindings.method_get_step,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_page() {
    Range.init_method_get_page();
    return _call_native_mb_ret(
      Range._bindings.method_get_page,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_as_ratio() {
    Range.init_method_get_as_ratio();
    return _call_native_mb_ret(
      Range._bindings.method_get_as_ratio,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_value(_value) {
    Range.init_method_set_value();
    return _call_native_mb_no_ret(
      Range._bindings.method_set_value,
      this._owner,
      _value
    );
    
  }
  set_value_no_signal(_value) {
    Range.init_method_set_value_no_signal();
    return _call_native_mb_no_ret(
      Range._bindings.method_set_value_no_signal,
      this._owner,
      _value
    );
    
  }
  set_min(_minimum) {
    Range.init_method_set_min();
    return _call_native_mb_no_ret(
      Range._bindings.method_set_min,
      this._owner,
      _minimum
    );
    
  }
  set_max(_maximum) {
    Range.init_method_set_max();
    return _call_native_mb_no_ret(
      Range._bindings.method_set_max,
      this._owner,
      _maximum
    );
    
  }
  set_step(_step) {
    Range.init_method_set_step();
    return _call_native_mb_no_ret(
      Range._bindings.method_set_step,
      this._owner,
      _step
    );
    
  }
  set_page(_pagesize) {
    Range.init_method_set_page();
    return _call_native_mb_no_ret(
      Range._bindings.method_set_page,
      this._owner,
      _pagesize
    );
    
  }
  set_as_ratio(_value) {
    Range.init_method_set_as_ratio();
    return _call_native_mb_no_ret(
      Range._bindings.method_set_as_ratio,
      this._owner,
      _value
    );
    
  }
  set_use_rounded_values(_enabled) {
    Range.init_method_set_use_rounded_values();
    return _call_native_mb_no_ret(
      Range._bindings.method_set_use_rounded_values,
      this._owner,
      _enabled
    );
    
  }
  is_using_rounded_values() {
    Range.init_method_is_using_rounded_values();
    return _call_native_mb_ret(
      Range._bindings.method_is_using_rounded_values,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_exp_ratio(_enabled) {
    Range.init_method_set_exp_ratio();
    return _call_native_mb_no_ret(
      Range._bindings.method_set_exp_ratio,
      this._owner,
      _enabled
    );
    
  }
  is_ratio_exp() {
    Range.init_method_is_ratio_exp();
    return _call_native_mb_ret(
      Range._bindings.method_is_ratio_exp,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_allow_greater(_allow) {
    Range.init_method_set_allow_greater();
    return _call_native_mb_no_ret(
      Range._bindings.method_set_allow_greater,
      this._owner,
      _allow
    );
    
  }
  is_greater_allowed() {
    Range.init_method_is_greater_allowed();
    return _call_native_mb_ret(
      Range._bindings.method_is_greater_allowed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_allow_lesser(_allow) {
    Range.init_method_set_allow_lesser();
    return _call_native_mb_no_ret(
      Range._bindings.method_set_allow_lesser,
      this._owner,
      _allow
    );
    
  }
  is_lesser_allowed() {
    Range.init_method_is_lesser_allowed();
    return _call_native_mb_ret(
      Range._bindings.method_is_lesser_allowed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  share(_with) {
    Range.init_method_share();
    return _call_native_mb_no_ret(
      Range._bindings.method_share,
      this._owner,
      _with
    );
    
  }
  unshare() {
    Range.init_method_unshare();
    return _call_native_mb_no_ret(
      Range._bindings.method_unshare,
      this._owner,
      
    );
    
  }
  
get min_value () {
  return this.get_min();
}
set min_value (new_value) {
  this.set_min(new_value);
}
get max_value () {
  return this.get_max();
}
set max_value (new_value) {
  this.set_max(new_value);
}
get step () {
  return this.get_step();
}
set step (new_value) {
  this.set_step(new_value);
}
get page () {
  return this.get_page();
}
set page (new_value) {
  this.set_page(new_value);
}
get value () {
  return this.get_value();
}
set value (new_value) {
  this.set_value(new_value);
}
get ratio () {
  return this.get_as_ratio();
}
set ratio (new_value) {
  this.set_as_ratio(new_value);
}
get exp_edit () {
  return this.is_ratio_exp();
}
set exp_edit (new_value) {
  this.set_exp_ratio(new_value);
}
get rounded () {
  return this.is_using_rounded_values();
}
set rounded (new_value) {
  this.set_use_rounded_values(new_value);
}
get allow_greater () {
  return this.is_greater_allowed();
}
set allow_greater (new_value) {
  this.set_allow_greater(new_value);
}
get allow_lesser () {
  return this.is_lesser_allowed();
}
set allow_lesser (new_value) {
  this.set_allow_lesser(new_value);
}

}