import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { Dictionary } from 'src/js_godot/variant/dictionary'
class _MethodBindings {
    method_from_node;
    method_to_node;
    method_from_dictionary;
    method_to_dictionary;
    method_get_perspective;
    method_set_perspective;
    method_get_fov;
    method_set_fov;
    method_get_size_mag;
    method_set_size_mag;
    method_get_depth_far;
    method_set_depth_far;
    method_get_depth_near;
    method_set_depth_near;
}


export class GLTFCamera extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFCamera");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("from_node");
      this._bindings.method_from_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        237784
      );
    }
    {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("to_node");
      this._bindings.method_to_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2285090890
      );
    }
    {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("from_dictionary");
      this._bindings.method_from_dictionary = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2495512509
      );
    }
    {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("to_dictionary");
      this._bindings.method_to_dictionary = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3102165223
      );
    }
    {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("get_perspective");
      this._bindings.method_get_perspective = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("set_perspective");
      this._bindings.method_set_perspective = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("get_fov");
      this._bindings.method_get_fov = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("set_fov");
      this._bindings.method_set_fov = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("get_size_mag");
      this._bindings.method_get_size_mag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("set_size_mag");
      this._bindings.method_set_size_mag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("get_depth_far");
      this._bindings.method_get_depth_far = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("set_depth_far");
      this._bindings.method_set_depth_far = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("get_depth_near");
      this._bindings.method_get_depth_near = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("set_depth_near");
      this._bindings.method_set_depth_near = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
  }
  from_node(_camera_node) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_from_node,
      this._owner,
			Variant.INT,
      _camera_node
    );
  }
  to_node() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_to_node,
      this._owner,
			Variant.INT,
      
    );
  }
  from_dictionary(_dictionary) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_from_dictionary,
      this._owner,
			Variant.INT,
      _dictionary
    );
  }
  to_dictionary() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_to_dictionary,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
  }
  get_perspective() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_perspective,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_perspective(_perspective) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_perspective,
      this._owner,
      _perspective
    );
  }
  get_fov() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fov,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_fov(_fov) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fov,
      this._owner,
      _fov
    );
  }
  get_size_mag() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size_mag,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_size_mag(_size_mag) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_size_mag,
      this._owner,
      _size_mag
    );
  }
  get_depth_far() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth_far,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_depth_far(_zdepth_far) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth_far,
      this._owner,
      _zdepth_far
    );
  }
  get_depth_near() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth_near,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_depth_near(_zdepth_near) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth_near,
      this._owner,
      _zdepth_near
    );
  }
}