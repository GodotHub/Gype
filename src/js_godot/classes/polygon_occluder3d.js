import * as internal from '__internal__';
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import { Occluder3D } from 'src/js_godot/classes/occluder3d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_polygon;
    method_get_polygon;
}


export class PolygonOccluder3D extends Occluder3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PolygonOccluder3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("PolygonOccluder3D");
        let methodname = new StringName("set_polygon");
        this._bindings.method_set_polygon = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1509147220
        );
      }
      {
        let classname = new StringName("PolygonOccluder3D");
        let methodname = new StringName("get_polygon");
        this._bindings.method_get_polygon = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2961356807
        );
      }
  }
  set_polygon(_polygon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_polygon,
      this._owner,
      _polygon
    );
    
  }
  get_polygon() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_polygon,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      
    );
    
  }
}