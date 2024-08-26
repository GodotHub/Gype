import * as internal from '__internal__';
import { GLTFState } from 'src/js_godot/classesgltf_state'
class _MethodBindings {
    method_get_allow_geometry_helper_nodes;
    method_set_allow_geometry_helper_nodes;
}


export class FBXState extends GLTFState{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("FBXState");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("FBXState");
      let methodname = new StringName("get_allow_geometry_helper_nodes");
      this._bindings.method_get_allow_geometry_helper_nodes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("FBXState");
      let methodname = new StringName("set_allow_geometry_helper_nodes");
      this._bindings.method_set_allow_geometry_helper_nodes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
  }
  get_allow_geometry_helper_nodes() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_allow_geometry_helper_nodes,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_allow_geometry_helper_nodes(_allow) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_allow_geometry_helper_nodes,
      this._owner,
      _allow
    );
  }
}