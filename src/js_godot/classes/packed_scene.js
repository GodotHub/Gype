import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
class _MethodBindings {
    method_pack;
    method_instantiate;
    method_can_instantiate;
    method_get_state;
}


export class PackedScene extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PackedScene");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("PackedScene");
      let methodname = new StringName("pack");
      this._bindings.method_pack = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2584678054
      );
    }
    {
      let classname = new StringName("PackedScene");
      let methodname = new StringName("instantiate");
      this._bindings.method_instantiate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2628778455
      );
    }
    {
      let classname = new StringName("PackedScene");
      let methodname = new StringName("can_instantiate");
      this._bindings.method_can_instantiate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PackedScene");
      let methodname = new StringName("get_state");
      this._bindings.method_get_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3479783971
      );
    }
  }
  pack(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_pack,
      this._owner,
			Variant.INT,
      _path
    );
  }
  instantiate(_edit_state) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_instantiate,
      this._owner,
			Variant.INT,
      _edit_state
    );
  }
  can_instantiate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_can_instantiate,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_state() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_state,
      this._owner,
			Variant.INT,
      
    );
  }
  static GenEditState = {
    GEN_EDIT_STATE_DISABLED: 0,
    GEN_EDIT_STATE_INSTANCE: 1,
    GEN_EDIT_STATE_MAIN: 2,
    GEN_EDIT_STATE_MAIN_INHERITED: 3,
  }
}