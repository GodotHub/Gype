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
  method_register_profile_rename;
  method_register_top_level_path;
  method_register_interaction_profile;
  method_register_io_path;
}
@GodotClass
export class OpenXRInteractionProfileMetadata extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRInteractionProfileMetadata");
    } else {
      super(godot_object);
    }
  }
  static init_method_register_profile_rename() {
    if (!this._bindings.method_register_profile_rename) {
      let classname = new StringName("OpenXRInteractionProfileMetadata");
      let methodname = new StringName("register_profile_rename");
      this._bindings.method_register_profile_rename = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3186203200
      );
    }
  }
  static init_method_register_top_level_path() {
    if (!this._bindings.method_register_top_level_path) {
      let classname = new StringName("OpenXRInteractionProfileMetadata");
      let methodname = new StringName("register_top_level_path");
      this._bindings.method_register_top_level_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        254767734
      );
    }
  }
  static init_method_register_interaction_profile() {
    if (!this._bindings.method_register_interaction_profile) {
      let classname = new StringName("OpenXRInteractionProfileMetadata");
      let methodname = new StringName("register_interaction_profile");
      this._bindings.method_register_interaction_profile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        254767734
      );
    }
  }
  static init_method_register_io_path() {
    if (!this._bindings.method_register_io_path) {
      let classname = new StringName("OpenXRInteractionProfileMetadata");
      let methodname = new StringName("register_io_path");
      this._bindings.method_register_io_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3443511926
      );
    }
  }

  
  
  register_profile_rename(_old_name, _new_name) {
    OpenXRInteractionProfileMetadata.init_method_register_profile_rename();
    return _call_native_mb_no_ret(
      OpenXRInteractionProfileMetadata._bindings.method_register_profile_rename,
      this._owner,
      _old_name, _new_name
    );
    
  }
  register_top_level_path(_display_name, _openxr_path, _openxr_extension_name) {
    OpenXRInteractionProfileMetadata.init_method_register_top_level_path();
    return _call_native_mb_no_ret(
      OpenXRInteractionProfileMetadata._bindings.method_register_top_level_path,
      this._owner,
      _display_name, _openxr_path, _openxr_extension_name
    );
    
  }
  register_interaction_profile(_display_name, _openxr_path, _openxr_extension_name) {
    OpenXRInteractionProfileMetadata.init_method_register_interaction_profile();
    return _call_native_mb_no_ret(
      OpenXRInteractionProfileMetadata._bindings.method_register_interaction_profile,
      this._owner,
      _display_name, _openxr_path, _openxr_extension_name
    );
    
  }
  register_io_path(_interaction_profile, _display_name, _toplevel_path, _openxr_path, _openxr_extension_name, _action_type) {
    OpenXRInteractionProfileMetadata.init_method_register_io_path();
    return _call_native_mb_no_ret(
      OpenXRInteractionProfileMetadata._bindings.method_register_io_path,
      this._owner,
      _interaction_profile, _display_name, _toplevel_path, _openxr_path, _openxr_extension_name, _action_type
    );
    
  }
  

}