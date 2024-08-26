import * as internal from '__internal__';
import { Shape2D } from 'src/js_godot/classesshape2d'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
class _MethodBindings {
    method_set_segments;
    method_get_segments;
}


export class ConcavePolygonShape2D extends Shape2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ConcavePolygonShape2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ConcavePolygonShape2D");
      let methodname = new StringName("set_segments");
      this._bindings.method_set_segments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1509147220
      );
    }
    {
      let classname = new StringName("ConcavePolygonShape2D");
      let methodname = new StringName("get_segments");
      this._bindings.method_get_segments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2961356807
      );
    }
  }
  set_segments(_segments) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_segments,
      this._owner,
      _segments
    );
  }
  get_segments() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_segments,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      
    );
  }
}