import * as internal from '__internal__';
import { CSGPrimitive3D } from 'src/js_godot/classes/csg_primitive3d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_mesh;
    method_get_mesh;
    method_set_material;
    method_get_material;
}


export class CSGMesh3D extends CSGPrimitive3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CSGMesh3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CSGMesh3D");
        let methodname = new StringName("set_mesh");
        this._bindings.method_set_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          194775623
        );
      }
      {
        let classname = new StringName("CSGMesh3D");
        let methodname = new StringName("get_mesh");
        this._bindings.method_get_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4081188045
        );
      }
      {
        let classname = new StringName("CSGMesh3D");
        let methodname = new StringName("set_material");
        this._bindings.method_set_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2757459619
        );
      }
      {
        let classname = new StringName("CSGMesh3D");
        let methodname = new StringName("get_material");
        this._bindings.method_get_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          5934680
        );
      }
  }
  set_mesh(_mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mesh,
      this._owner,
      _mesh
    );
    
  }
  get_mesh() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mesh,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_material(_material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_material,
      this._owner,
      _material
    );
    
  }
  get_material() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_material,
      this._owner,
			Variant.INT,
      
    );
    
  }
}