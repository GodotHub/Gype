import * as internal from '__internal__';
import { Occluder3D } from '@js_godot/classes/occluder3d'
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
  method_set_polygon;
  method_get_polygon;
}
@GodotClass
export class PolygonOccluder3D extends Occluder3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PolygonOccluder3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_polygon() {
    if (!this._bindings.method_set_polygon) {
      let classname = new StringName("PolygonOccluder3D");
      let methodname = new StringName("set_polygon");
      this._bindings.method_set_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1509147220
      );
    }
  }
  static init_method_get_polygon() {
    if (!this._bindings.method_get_polygon) {
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
    PolygonOccluder3D.init_method_set_polygon();
    return _call_native_mb_no_ret(
      PolygonOccluder3D._bindings.method_set_polygon,
      this._owner,
      _polygon
    );
    
  }
  get_polygon() {
    PolygonOccluder3D.init_method_get_polygon();
    return _call_native_mb_ret(
      PolygonOccluder3D._bindings.method_get_polygon,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      
    );
    
  }
  
get polygon () {
  return this.get_polygon();
}
set polygon (new_value) {
  this.set_polygon(new_value);
}

}