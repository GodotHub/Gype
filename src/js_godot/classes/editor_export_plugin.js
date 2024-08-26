import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import { Variant } from 'src/js_godot/variant/variant'
import { StringName } from 'src/js_godot/variant/string_name'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { Dictionary } from 'src/js_godot/variant/dictionary'
class _MethodBindings {
    method__export_file;
    method__export_begin;
    method__export_end;
    method__begin_customize_resources;
    method__customize_resource;
    method__begin_customize_scenes;
    method__customize_scene;
    method__get_customization_configuration_hash;
    method__end_customize_scenes;
    method__end_customize_resources;
    method__get_export_options;
    method__get_export_options_overrides;
    method__should_update_export_options;
    method__get_export_option_warning;
    method__get_export_features;
    method__get_name;
    method__supports_platform;
    method__get_android_dependencies;
    method__get_android_dependencies_maven_repos;
    method__get_android_libraries;
    method__get_android_manifest_activity_element_contents;
    method__get_android_manifest_application_element_contents;
    method__get_android_manifest_element_contents;
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
      let methodname = new StringName("_export_file");
      this._bindings.method__export_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_export_begin");
      this._bindings.method__export_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_export_end");
      this._bindings.method__export_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_begin_customize_resources");
      this._bindings.method__begin_customize_resources = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_customize_resource");
      this._bindings.method__customize_resource = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_begin_customize_scenes");
      this._bindings.method__begin_customize_scenes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_customize_scene");
      this._bindings.method__customize_scene = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_get_customization_configuration_hash");
      this._bindings.method__get_customization_configuration_hash = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_end_customize_scenes");
      this._bindings.method__end_customize_scenes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_end_customize_resources");
      this._bindings.method__end_customize_resources = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_get_export_options");
      this._bindings.method__get_export_options = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_get_export_options_overrides");
      this._bindings.method__get_export_options_overrides = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_should_update_export_options");
      this._bindings.method__should_update_export_options = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_get_export_option_warning");
      this._bindings.method__get_export_option_warning = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_get_export_features");
      this._bindings.method__get_export_features = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_get_name");
      this._bindings.method__get_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_supports_platform");
      this._bindings.method__supports_platform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_get_android_dependencies");
      this._bindings.method__get_android_dependencies = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_get_android_dependencies_maven_repos");
      this._bindings.method__get_android_dependencies_maven_repos = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_get_android_libraries");
      this._bindings.method__get_android_libraries = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_get_android_manifest_activity_element_contents");
      this._bindings.method__get_android_manifest_activity_element_contents = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_get_android_manifest_application_element_contents");
      this._bindings.method__get_android_manifest_application_element_contents = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorExportPlugin");
      let methodname = new StringName("_get_android_manifest_element_contents");
      this._bindings.method__get_android_manifest_element_contents = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__export_file,
      this._owner,
      _path, _type, _features
    );
  }
  _export_begin(_features, _is_debug, _path, _flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__export_begin,
      this._owner,
      _features, _is_debug, _path, _flags
    );
  }
  _export_end() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__export_end,
      this._owner,
      
    );
  }
  _begin_customize_resources(_platform, _features) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__begin_customize_resources,
      this._owner,
			Variant.Type.BOOL,
      _platform, _features
    );
  }
  _customize_resource(_resource, _path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__customize_resource,
      this._owner,
			Variant.INT,
      _resource, _path
    );
  }
  _begin_customize_scenes(_platform, _features) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__begin_customize_scenes,
      this._owner,
			Variant.Type.BOOL,
      _platform, _features
    );
  }
  _customize_scene(_scene, _path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__customize_scene,
      this._owner,
			Variant.INT,
      _scene, _path
    );
  }
  _get_customization_configuration_hash() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_customization_configuration_hash,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _end_customize_scenes() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__end_customize_scenes,
      this._owner,
      
    );
  }
  _end_customize_resources() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__end_customize_resources,
      this._owner,
      
    );
  }
  _get_export_options(_platform) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_export_options,
      this._owner,
			Variant.INT,
      _platform
    );
  }
  _get_export_options_overrides(_platform) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_export_options_overrides,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _platform
    );
  }
  _should_update_export_options(_platform) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__should_update_export_options,
      this._owner,
			Variant.Type.BOOL,
      _platform
    );
  }
  _get_export_option_warning(_platform, _option) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_export_option_warning,
      this._owner,
			Variant.Type.STRING
    ,
      _platform, _option
    );
  }
  _get_export_features(_platform, _debug) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_export_features,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _platform, _debug
    );
  }
  _get_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _supports_platform(_platform) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__supports_platform,
      this._owner,
			Variant.Type.BOOL,
      _platform
    );
  }
  _get_android_dependencies(_platform, _debug) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_android_dependencies,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _platform, _debug
    );
  }
  _get_android_dependencies_maven_repos(_platform, _debug) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_android_dependencies_maven_repos,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _platform, _debug
    );
  }
  _get_android_libraries(_platform, _debug) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_android_libraries,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _platform, _debug
    );
  }
  _get_android_manifest_activity_element_contents(_platform, _debug) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_android_manifest_activity_element_contents,
      this._owner,
			Variant.Type.STRING
    ,
      _platform, _debug
    );
  }
  _get_android_manifest_application_element_contents(_platform, _debug) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_android_manifest_application_element_contents,
      this._owner,
			Variant.Type.STRING
    ,
      _platform, _debug
    );
  }
  _get_android_manifest_element_contents(_platform, _debug) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_android_manifest_element_contents,
      this._owner,
			Variant.Type.STRING
    ,
      _platform, _debug
    );
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