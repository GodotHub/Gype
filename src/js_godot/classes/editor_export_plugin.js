import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { Variant } from 'src/js_godot/variant/variant'
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_add_shared_object;
    method_add_ios_project_static_lib;
    method_add_file;
    method_add_ios_framework;
    method_add_ios_embedded_framework;
    method_add_ios_plist_content;
    method_add_ios_linker_flags;
    method_add_ios_bundle_file;
    method_add_ios_cpp_code;
    method_add_macos_plugin_file;
    method_skip;
    method_get_option;
}


export class EditorExportPlugin extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorExportPlugin");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("EditorExportPlugin");
        let methodname = new StringName("add_shared_object");
        this._bindings.method_add_shared_object = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3098291045
        );
      }
      {
        let classname = new StringName("EditorExportPlugin");
        let methodname = new StringName("add_ios_project_static_lib");
        this._bindings.method_add_ios_project_static_lib = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("EditorExportPlugin");
        let methodname = new StringName("add_file");
        this._bindings.method_add_file = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          527928637
        );
      }
      {
        let classname = new StringName("EditorExportPlugin");
        let methodname = new StringName("add_ios_framework");
        this._bindings.method_add_ios_framework = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("EditorExportPlugin");
        let methodname = new StringName("add_ios_embedded_framework");
        this._bindings.method_add_ios_embedded_framework = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("EditorExportPlugin");
        let methodname = new StringName("add_ios_plist_content");
        this._bindings.method_add_ios_plist_content = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("EditorExportPlugin");
        let methodname = new StringName("add_ios_linker_flags");
        this._bindings.method_add_ios_linker_flags = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("EditorExportPlugin");
        let methodname = new StringName("add_ios_bundle_file");
        this._bindings.method_add_ios_bundle_file = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("EditorExportPlugin");
        let methodname = new StringName("add_ios_cpp_code");
        this._bindings.method_add_ios_cpp_code = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("EditorExportPlugin");
        let methodname = new StringName("add_macos_plugin_file");
        this._bindings.method_add_macos_plugin_file = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("EditorExportPlugin");
        let methodname = new StringName("skip");
        this._bindings.method_skip = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("EditorExportPlugin");
        let methodname = new StringName("get_option");
        this._bindings.method_get_option = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2760726917
        );
      }
  }
  _export_file(_path, _type, _features) {
  }
  _export_begin(_features, _is_debug, _path, _flags) {
  }
  _export_end() {
  }
  _begin_customize_resources(_platform, _features) {
  }
  _customize_resource(_resource, _path) {
  }
  _begin_customize_scenes(_platform, _features) {
  }
  _customize_scene(_scene, _path) {
  }
  _get_customization_configuration_hash() {
  }
  _end_customize_scenes() {
  }
  _end_customize_resources() {
  }
  _get_export_options(_platform) {
  }
  _get_export_options_overrides(_platform) {
  }
  _should_update_export_options(_platform) {
  }
  _get_export_option_warning(_platform, _option) {
  }
  _get_export_features(_platform, _debug) {
  }
  _get_name() {
  }
  _supports_platform(_platform) {
  }
  _get_android_dependencies(_platform, _debug) {
  }
  _get_android_dependencies_maven_repos(_platform, _debug) {
  }
  _get_android_libraries(_platform, _debug) {
  }
  _get_android_manifest_activity_element_contents(_platform, _debug) {
  }
  _get_android_manifest_application_element_contents(_platform, _debug) {
  }
  _get_android_manifest_element_contents(_platform, _debug) {
  }
  add_shared_object(_path, _tags, _target) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_shared_object,
      this._owner,
      _path, _tags, _target
    );
    
  }
  add_ios_project_static_lib(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_ios_project_static_lib,
      this._owner,
      _path
    );
    
  }
  add_file(_path, _file, _remap) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_file,
      this._owner,
      _path, _file, _remap
    );
    
  }
  add_ios_framework(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_ios_framework,
      this._owner,
      _path
    );
    
  }
  add_ios_embedded_framework(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_ios_embedded_framework,
      this._owner,
      _path
    );
    
  }
  add_ios_plist_content(_plist_content) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_ios_plist_content,
      this._owner,
      _plist_content
    );
    
  }
  add_ios_linker_flags(_flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_ios_linker_flags,
      this._owner,
      _flags
    );
    
  }
  add_ios_bundle_file(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_ios_bundle_file,
      this._owner,
      _path
    );
    
  }
  add_ios_cpp_code(_code) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_ios_cpp_code,
      this._owner,
      _code
    );
    
  }
  add_macos_plugin_file(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_macos_plugin_file,
      this._owner,
      _path
    );
    
  }
  skip() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_skip,
      this._owner,
      
    );
    
  }
  get_option(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_option,
      this._owner,
			Variant.Type.VARIANT
    ,
      _name
    );
    
  }
}