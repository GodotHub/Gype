import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Container } from '@js_godot/classes/container'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_columns;
  method_get_columns;
}
export class GridContainer extends Container{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GridContainer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_columns() {
    if (!this.#_bindings.method_set_columns) {
      let classname = new StringName("GridContainer");
      let methodname = new StringName("set_columns");
      this.#_bindings.method_set_columns = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_columns() {
    if (!this.#_bindings.method_get_columns) {
      let classname = new StringName("GridContainer");
      let methodname = new StringName("get_columns");
      this.#_bindings.method_get_columns = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  set_columns(_columns) {
    GridContainer.init_method_set_columns();
    return _call_native_mb_no_ret(
      GridContainer.#_bindings.method_set_columns,
      this._owner,
      _columns
    );
    
  }
  get_columns() {
    GridContainer.init_method_get_columns();
    return _call_native_mb_ret(
      GridContainer.#_bindings.method_get_columns,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get columns () {
  return this.get_columns();
}
set columns (new_value) {
  this.set_columns(new_value);
}

}