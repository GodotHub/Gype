import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { GodotObject } from '@js_godot/classes/godot_object'
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
  method_get_class_list;
  method_get_inheriters_from_class;
  method_get_parent_class;
  method_class_exists;
  method_is_parent_class;
  method_can_instantiate;
  method_instantiate;
  method_class_has_signal;
  method_class_get_signal;
  method_class_get_signal_list;
  method_class_get_property_list;
  method_class_get_property;
  method_class_set_property;
  method_class_get_property_default_value;
  method_class_has_method;
  method_class_get_method_argument_count;
  method_class_get_method_list;
  method_class_get_integer_constant_list;
  method_class_has_integer_constant;
  method_class_get_integer_constant;
  method_class_has_enum;
  method_class_get_enum_list;
  method_class_get_enum_constants;
  method_class_get_integer_constant_enum;
  method_is_class_enum_bitfield;
  method_is_class_enabled;
}class _ClassDB extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ClassDB");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_class_list() {
    if (!this._bindings.method_get_class_list) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("get_class_list");
      this._bindings.method_get_class_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_get_inheriters_from_class() {
    if (!this._bindings.method_get_inheriters_from_class) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("get_inheriters_from_class");
      this._bindings.method_get_inheriters_from_class = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1761182771
      );
    }
  }
  static init_method_get_parent_class() {
    if (!this._bindings.method_get_parent_class) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("get_parent_class");
      this._bindings.method_get_parent_class = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1965194235
      );
    }
  }
  static init_method_class_exists() {
    if (!this._bindings.method_class_exists) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_exists");
      this._bindings.method_class_exists = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2619796661
      );
    }
  }
  static init_method_is_parent_class() {
    if (!this._bindings.method_is_parent_class) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("is_parent_class");
      this._bindings.method_is_parent_class = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        471820014
      );
    }
  }
  static init_method_can_instantiate() {
    if (!this._bindings.method_can_instantiate) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("can_instantiate");
      this._bindings.method_can_instantiate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2619796661
      );
    }
  }
  static init_method_instantiate() {
    if (!this._bindings.method_instantiate) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("instantiate");
      this._bindings.method_instantiate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2760726917
      );
    }
  }
  static init_method_class_has_signal() {
    if (!this._bindings.method_class_has_signal) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_has_signal");
      this._bindings.method_class_has_signal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        471820014
      );
    }
  }
  static init_method_class_get_signal() {
    if (!this._bindings.method_class_get_signal) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_get_signal");
      this._bindings.method_class_get_signal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3061114238
      );
    }
  }
  static init_method_class_get_signal_list() {
    if (!this._bindings.method_class_get_signal_list) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_get_signal_list");
      this._bindings.method_class_get_signal_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3504980660
      );
    }
  }
  static init_method_class_get_property_list() {
    if (!this._bindings.method_class_get_property_list) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_get_property_list");
      this._bindings.method_class_get_property_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3504980660
      );
    }
  }
  static init_method_class_get_property() {
    if (!this._bindings.method_class_get_property) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_get_property");
      this._bindings.method_class_get_property = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2498641674
      );
    }
  }
  static init_method_class_set_property() {
    if (!this._bindings.method_class_set_property) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_set_property");
      this._bindings.method_class_set_property = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1690314931
      );
    }
  }
  static init_method_class_get_property_default_value() {
    if (!this._bindings.method_class_get_property_default_value) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_get_property_default_value");
      this._bindings.method_class_get_property_default_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2718203076
      );
    }
  }
  static init_method_class_has_method() {
    if (!this._bindings.method_class_has_method) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_has_method");
      this._bindings.method_class_has_method = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3860701026
      );
    }
  }
  static init_method_class_get_method_argument_count() {
    if (!this._bindings.method_class_get_method_argument_count) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_get_method_argument_count");
      this._bindings.method_class_get_method_argument_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3885694822
      );
    }
  }
  static init_method_class_get_method_list() {
    if (!this._bindings.method_class_get_method_list) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_get_method_list");
      this._bindings.method_class_get_method_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3504980660
      );
    }
  }
  static init_method_class_get_integer_constant_list() {
    if (!this._bindings.method_class_get_integer_constant_list) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_get_integer_constant_list");
      this._bindings.method_class_get_integer_constant_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3031669221
      );
    }
  }
  static init_method_class_has_integer_constant() {
    if (!this._bindings.method_class_has_integer_constant) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_has_integer_constant");
      this._bindings.method_class_has_integer_constant = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        471820014
      );
    }
  }
  static init_method_class_get_integer_constant() {
    if (!this._bindings.method_class_get_integer_constant) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_get_integer_constant");
      this._bindings.method_class_get_integer_constant = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2419549490
      );
    }
  }
  static init_method_class_has_enum() {
    if (!this._bindings.method_class_has_enum) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_has_enum");
      this._bindings.method_class_has_enum = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3860701026
      );
    }
  }
  static init_method_class_get_enum_list() {
    if (!this._bindings.method_class_get_enum_list) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_get_enum_list");
      this._bindings.method_class_get_enum_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3031669221
      );
    }
  }
  static init_method_class_get_enum_constants() {
    if (!this._bindings.method_class_get_enum_constants) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_get_enum_constants");
      this._bindings.method_class_get_enum_constants = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        661528303
      );
    }
  }
  static init_method_class_get_integer_constant_enum() {
    if (!this._bindings.method_class_get_integer_constant_enum) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("class_get_integer_constant_enum");
      this._bindings.method_class_get_integer_constant_enum = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2457504236
      );
    }
  }
  static init_method_is_class_enum_bitfield() {
    if (!this._bindings.method_is_class_enum_bitfield) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("is_class_enum_bitfield");
      this._bindings.method_is_class_enum_bitfield = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3860701026
      );
    }
  }
  static init_method_is_class_enabled() {
    if (!this._bindings.method_is_class_enabled) {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("is_class_enabled");
      this._bindings.method_is_class_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2619796661
      );
    }
  }

  
  
  get_class_list() {
    ClassDB.init_method_get_class_list();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_get_class_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_inheriters_from_class(_class) {
    ClassDB.init_method_get_inheriters_from_class();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_get_inheriters_from_class,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _class
    );
    
  }
  get_parent_class(_class) {
    ClassDB.init_method_get_parent_class();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_get_parent_class,
      this._owner,
			Variant.Type.STRING_NAME,
    
      _class
    );
    
  }
  class_exists(_class) {
    ClassDB.init_method_class_exists();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_exists,
      this._owner,
			Variant.Type.BOOL,
    
      _class
    );
    
  }
  is_parent_class(_class, _inherits) {
    ClassDB.init_method_is_parent_class();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_is_parent_class,
      this._owner,
			Variant.Type.BOOL,
    
      _class, _inherits
    );
    
  }
  can_instantiate(_class) {
    ClassDB.init_method_can_instantiate();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_can_instantiate,
      this._owner,
			Variant.Type.BOOL,
    
      _class
    );
    
  }
  instantiate(_class) {
    ClassDB.init_method_instantiate();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_instantiate,
      this._owner,
			Variant.Type.VARIANT,
    
      _class
    );
    
  }
  class_has_signal(_class, _signal) {
    ClassDB.init_method_class_has_signal();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_has_signal,
      this._owner,
			Variant.Type.BOOL,
    
      _class, _signal
    );
    
  }
  class_get_signal(_class, _signal) {
    ClassDB.init_method_class_get_signal();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_get_signal,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _class, _signal
    );
    
  }
  class_get_signal_list(_class, _no_inheritance) {
    ClassDB.init_method_class_get_signal_list();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_get_signal_list,
      this._owner,
			Variant.Type.ARRAY,
      _class, _no_inheritance
    );
    
  }
  class_get_property_list(_class, _no_inheritance) {
    ClassDB.init_method_class_get_property_list();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_get_property_list,
      this._owner,
			Variant.Type.ARRAY,
      _class, _no_inheritance
    );
    
  }
  class_get_property(_object, _property) {
    ClassDB.init_method_class_get_property();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_get_property,
      this._owner,
			Variant.Type.VARIANT,
    
      _object, _property
    );
    
  }
  class_set_property(_object, _property, _value) {
    ClassDB.init_method_class_set_property();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_set_property,
      this._owner,
			Variant.Type.INT,
    
      _object, _property, _value
    );
    
  }
  class_get_property_default_value(_class, _property) {
    ClassDB.init_method_class_get_property_default_value();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_get_property_default_value,
      this._owner,
			Variant.Type.VARIANT,
    
      _class, _property
    );
    
  }
  class_has_method(_class, _method, _no_inheritance) {
    ClassDB.init_method_class_has_method();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_has_method,
      this._owner,
			Variant.Type.BOOL,
    
      _class, _method, _no_inheritance
    );
    
  }
  class_get_method_argument_count(_class, _method, _no_inheritance) {
    ClassDB.init_method_class_get_method_argument_count();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_get_method_argument_count,
      this._owner,
			Variant.Type.INT,
    
      _class, _method, _no_inheritance
    );
    
  }
  class_get_method_list(_class, _no_inheritance) {
    ClassDB.init_method_class_get_method_list();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_get_method_list,
      this._owner,
			Variant.Type.ARRAY,
      _class, _no_inheritance
    );
    
  }
  class_get_integer_constant_list(_class, _no_inheritance) {
    ClassDB.init_method_class_get_integer_constant_list();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_get_integer_constant_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _class, _no_inheritance
    );
    
  }
  class_has_integer_constant(_class, _name) {
    ClassDB.init_method_class_has_integer_constant();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_has_integer_constant,
      this._owner,
			Variant.Type.BOOL,
    
      _class, _name
    );
    
  }
  class_get_integer_constant(_class, _name) {
    ClassDB.init_method_class_get_integer_constant();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_get_integer_constant,
      this._owner,
			Variant.Type.INT,
    
      _class, _name
    );
    
  }
  class_has_enum(_class, _name, _no_inheritance) {
    ClassDB.init_method_class_has_enum();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_has_enum,
      this._owner,
			Variant.Type.BOOL,
    
      _class, _name, _no_inheritance
    );
    
  }
  class_get_enum_list(_class, _no_inheritance) {
    ClassDB.init_method_class_get_enum_list();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_get_enum_list,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _class, _no_inheritance
    );
    
  }
  class_get_enum_constants(_class, _enum, _no_inheritance) {
    ClassDB.init_method_class_get_enum_constants();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_get_enum_constants,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _class, _enum, _no_inheritance
    );
    
  }
  class_get_integer_constant_enum(_class, _name, _no_inheritance) {
    ClassDB.init_method_class_get_integer_constant_enum();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_class_get_integer_constant_enum,
      this._owner,
			Variant.Type.STRING_NAME,
    
      _class, _name, _no_inheritance
    );
    
  }
  is_class_enum_bitfield(_class, _enum, _no_inheritance) {
    ClassDB.init_method_is_class_enum_bitfield();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_is_class_enum_bitfield,
      this._owner,
			Variant.Type.BOOL,
    
      _class, _enum, _no_inheritance
    );
    
  }
  is_class_enabled(_class) {
    ClassDB.init_method_is_class_enabled();
    return _call_native_mb_ret(
      _ClassDB._bindings.method_is_class_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      _class
    );
    
  }
  

}
export const ClassDB = (function () {
  let _instance;
  function create_instance() {
    return new _ClassDB();
  }
  return {
    instance: function () {
      if (!_instance) {
        _instance = create_instance();
      }
      return _instance;
    },
  };
})();