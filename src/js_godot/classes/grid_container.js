import * as internal from '__internal__';
import { Container } from 'src/js_godot/classescontainer'
class _MethodBindings {
    method_set_columns;
    method_get_columns;
}


export class GridContainer extends Container{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GridContainer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("GridContainer");
      let methodname = new StringName("set_columns");
      this._bindings.method_set_columns = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GridContainer");
      let methodname = new StringName("get_columns");
      this._bindings.method_get_columns = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  set_columns(_columns) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_columns,
      this._owner,
      _columns
    );
  }
  get_columns() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_columns,
      this._owner,
			Variant.Type.INT,
      
    );
  }
}