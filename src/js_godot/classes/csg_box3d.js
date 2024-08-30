import * as internal from '__internal__';
import { CSGPrimitive3D } from 'src/js_godot/classes/csg_primitive3d'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_size;
    method_get_size;
    method_set_material;
    method_get_material;
}


export class CSGBox3D extends CSGPrimitive3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CSGBox3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CSGBox3D");
        let methodname = new StringName("set_size");
        this._bindings.method_set_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3460891852
        );
      }
      {
        let classname = new StringName("CSGBox3D");
        let methodname = new StringName("get_size");
        this._bindings.method_get_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("CSGBox3D");
        let methodname = new StringName("set_material");
        this._bindings.method_set_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2757459619
        );
      }
      {
        let classname = new StringName("CSGBox3D");
        let methodname = new StringName("get_material");
        this._bindings.method_get_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          5934680
        );
      }
  }
  set_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
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