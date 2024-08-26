import * as internal from '__internal__';
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import { GodotObject } from 'src/js_godot/classesgodot_object'
import { RID } from 'src/js_godot/variant/rid'
import { Vector2 } from 'src/js_godot/variant/vector2'
class _MethodBindings {
    method_get_vrs_min_radius;
    method_set_vrs_min_radius;
    method_get_vrs_strength;
    method_set_vrs_strength;
    method_make_vrs_texture;
}


export class XRVRS extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("XRVRS");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("XRVRS");
      let methodname = new StringName("get_vrs_min_radius");
      this._bindings.method_get_vrs_min_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("XRVRS");
      let methodname = new StringName("set_vrs_min_radius");
      this._bindings.method_set_vrs_min_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("XRVRS");
      let methodname = new StringName("get_vrs_strength");
      this._bindings.method_get_vrs_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("XRVRS");
      let methodname = new StringName("set_vrs_strength");
      this._bindings.method_set_vrs_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("XRVRS");
      let methodname = new StringName("make_vrs_texture");
      this._bindings.method_make_vrs_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3647044786
      );
    }
  }
  get_vrs_min_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vrs_min_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_vrs_min_radius(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vrs_min_radius,
      this._owner,
      _radius
    );
  }
  get_vrs_strength() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vrs_strength,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_vrs_strength(_strength) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vrs_strength,
      this._owner,
      _strength
    );
  }
  make_vrs_texture(_target_size, _eye_foci) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_make_vrs_texture,
      this._owner,
			Variant.Type.RID
    ,
      _target_size, _eye_foci
    );
  }
}