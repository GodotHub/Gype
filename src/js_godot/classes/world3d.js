import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { RID } from 'src/js_godot/variant/rid'
class _MethodBindings {
    method_get_space;
    method_get_navigation_map;
    method_get_scenario;
    method_set_environment;
    method_get_environment;
    method_set_fallback_environment;
    method_get_fallback_environment;
    method_set_camera_attributes;
    method_get_camera_attributes;
    method_get_direct_space_state;
}


export class World3D extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("World3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("World3D");
      let methodname = new StringName("get_space");
      this._bindings.method_get_space = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("World3D");
      let methodname = new StringName("get_navigation_map");
      this._bindings.method_get_navigation_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("World3D");
      let methodname = new StringName("get_scenario");
      this._bindings.method_get_scenario = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("World3D");
      let methodname = new StringName("set_environment");
      this._bindings.method_set_environment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4143518816
      );
    }
    {
      let classname = new StringName("World3D");
      let methodname = new StringName("get_environment");
      this._bindings.method_get_environment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3082064660
      );
    }
    {
      let classname = new StringName("World3D");
      let methodname = new StringName("set_fallback_environment");
      this._bindings.method_set_fallback_environment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4143518816
      );
    }
    {
      let classname = new StringName("World3D");
      let methodname = new StringName("get_fallback_environment");
      this._bindings.method_get_fallback_environment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3082064660
      );
    }
    {
      let classname = new StringName("World3D");
      let methodname = new StringName("set_camera_attributes");
      this._bindings.method_set_camera_attributes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2817810567
      );
    }
    {
      let classname = new StringName("World3D");
      let methodname = new StringName("get_camera_attributes");
      this._bindings.method_get_camera_attributes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3921283215
      );
    }
    {
      let classname = new StringName("World3D");
      let methodname = new StringName("get_direct_space_state");
      this._bindings.method_get_direct_space_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2069328350
      );
    }
  }
  get_space() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_space,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  get_navigation_map() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_navigation_map,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  get_scenario() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scenario,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  set_environment(_env) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_environment,
      this._owner,
      _env
    );
  }
  get_environment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_environment,
      this._owner,
			Variant.INT,
      
    );
  }
  set_fallback_environment(_env) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fallback_environment,
      this._owner,
      _env
    );
  }
  get_fallback_environment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fallback_environment,
      this._owner,
			Variant.INT,
      
    );
  }
  set_camera_attributes(_attributes) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_camera_attributes,
      this._owner,
      _attributes
    );
  }
  get_camera_attributes() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_camera_attributes,
      this._owner,
			Variant.INT,
      
    );
  }
  get_direct_space_state() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_direct_space_state,
      this._owner,
			Variant.INT,
      
    );
  }
}