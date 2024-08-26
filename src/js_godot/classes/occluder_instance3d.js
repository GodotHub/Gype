import * as internal from '__internal__';
import { VisualInstance3D } from 'src/js_godot/classesvisual_instance3d'
class _MethodBindings {
    method_set_bake_mask;
    method_get_bake_mask;
    method_set_bake_mask_value;
    method_get_bake_mask_value;
    method_set_bake_simplification_distance;
    method_get_bake_simplification_distance;
    method_set_occluder;
    method_get_occluder;
}


export class OccluderInstance3D extends VisualInstance3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OccluderInstance3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("OccluderInstance3D");
      let methodname = new StringName("set_bake_mask");
      this._bindings.method_set_bake_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("OccluderInstance3D");
      let methodname = new StringName("get_bake_mask");
      this._bindings.method_get_bake_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("OccluderInstance3D");
      let methodname = new StringName("set_bake_mask_value");
      this._bindings.method_set_bake_mask_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("OccluderInstance3D");
      let methodname = new StringName("get_bake_mask_value");
      this._bindings.method_get_bake_mask_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("OccluderInstance3D");
      let methodname = new StringName("set_bake_simplification_distance");
      this._bindings.method_set_bake_simplification_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("OccluderInstance3D");
      let methodname = new StringName("get_bake_simplification_distance");
      this._bindings.method_get_bake_simplification_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("OccluderInstance3D");
      let methodname = new StringName("set_occluder");
      this._bindings.method_set_occluder = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1664878165
      );
    }
    {
      let classname = new StringName("OccluderInstance3D");
      let methodname = new StringName("get_occluder");
      this._bindings.method_get_occluder = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1696836198
      );
    }
  }
  set_bake_mask(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bake_mask,
      this._owner,
      _mask
    );
  }
  get_bake_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bake_mask,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_bake_mask_value(_layer_number, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bake_mask_value,
      this._owner,
      _layer_number, _value
    );
  }
  get_bake_mask_value(_layer_number) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bake_mask_value,
      this._owner,
			Variant.Type.BOOL,
      _layer_number
    );
  }
  set_bake_simplification_distance(_simplification_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bake_simplification_distance,
      this._owner,
      _simplification_distance
    );
  }
  get_bake_simplification_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bake_simplification_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_occluder(_occluder) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_occluder,
      this._owner,
      _occluder
    );
  }
  get_occluder() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_occluder,
      this._owner,
			Variant.INT,
      
    );
  }
}