import * as internal from '__internal__';
import { GodotObject } from '@js_godot/classes/godot_object'
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
  method_get_render_scene_buffers;
  method_get_render_scene_data;
  method_get_environment;
  method_get_camera_attributes;
}
@GodotClass
export class RenderData extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderData");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_render_scene_buffers() {
    if (!this._bindings.method_get_render_scene_buffers) {
      let classname = new StringName("RenderData");
      let methodname = new StringName("get_render_scene_buffers");
      this._bindings.method_get_render_scene_buffers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2793216201
      );
    }
  }
  static init_method_get_render_scene_data() {
    if (!this._bindings.method_get_render_scene_data) {
      let classname = new StringName("RenderData");
      let methodname = new StringName("get_render_scene_data");
      this._bindings.method_get_render_scene_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1288715698
      );
    }
  }
  static init_method_get_environment() {
    if (!this._bindings.method_get_environment) {
      let classname = new StringName("RenderData");
      let methodname = new StringName("get_environment");
      this._bindings.method_get_environment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_get_camera_attributes() {
    if (!this._bindings.method_get_camera_attributes) {
      let classname = new StringName("RenderData");
      let methodname = new StringName("get_camera_attributes");
      this._bindings.method_get_camera_attributes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }

  
  
  get_render_scene_buffers() {
    RenderData.init_method_get_render_scene_buffers();
    return _call_native_mb_ret(
      RenderData._bindings.method_get_render_scene_buffers,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_render_scene_data() {
    RenderData.init_method_get_render_scene_data();
    return _call_native_mb_ret(
      RenderData._bindings.method_get_render_scene_data,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_environment() {
    RenderData.init_method_get_environment();
    return _call_native_mb_ret(
      RenderData._bindings.method_get_environment,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  get_camera_attributes() {
    RenderData.init_method_get_camera_attributes();
    return _call_native_mb_ret(
      RenderData._bindings.method_get_camera_attributes,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  

}