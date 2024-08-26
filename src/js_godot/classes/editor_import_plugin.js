import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { Variant } from 'src/js_godot/variant/variant'
import { StringName } from 'src/js_godot/variant/string_name'
import { ResourceImporter } from 'src/js_godot/classesresource_importer'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { Dictionary } from 'src/js_godot/variant/dictionary'
class _MethodBindings {
    method__get_importer_name;
    method__get_visible_name;
    method__get_preset_count;
    method__get_preset_name;
    method__get_recognized_extensions;
    method__get_import_options;
    method__get_save_extension;
    method__get_resource_type;
    method__get_priority;
    method__get_import_order;
    method__get_option_visibility;
    method__import;
    method__can_import_threaded;
    method_append_import_external_resource;
}


export class EditorImportPlugin extends ResourceImporter{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorImportPlugin");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorImportPlugin");
      let methodname = new StringName("_get_importer_name");
      this._bindings.method__get_importer_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorImportPlugin");
      let methodname = new StringName("_get_visible_name");
      this._bindings.method__get_visible_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorImportPlugin");
      let methodname = new StringName("_get_preset_count");
      this._bindings.method__get_preset_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorImportPlugin");
      let methodname = new StringName("_get_preset_name");
      this._bindings.method__get_preset_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorImportPlugin");
      let methodname = new StringName("_get_recognized_extensions");
      this._bindings.method__get_recognized_extensions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorImportPlugin");
      let methodname = new StringName("_get_import_options");
      this._bindings.method__get_import_options = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorImportPlugin");
      let methodname = new StringName("_get_save_extension");
      this._bindings.method__get_save_extension = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorImportPlugin");
      let methodname = new StringName("_get_resource_type");
      this._bindings.method__get_resource_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorImportPlugin");
      let methodname = new StringName("_get_priority");
      this._bindings.method__get_priority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorImportPlugin");
      let methodname = new StringName("_get_import_order");
      this._bindings.method__get_import_order = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorImportPlugin");
      let methodname = new StringName("_get_option_visibility");
      this._bindings.method__get_option_visibility = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorImportPlugin");
      let methodname = new StringName("_import");
      this._bindings.method__import = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorImportPlugin");
      let methodname = new StringName("_can_import_threaded");
      this._bindings.method__can_import_threaded = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorImportPlugin");
      let methodname = new StringName("append_import_external_resource");
      this._bindings.method_append_import_external_resource = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        320493106
      );
    }
  }
  _get_importer_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_importer_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _get_visible_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_visible_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _get_preset_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_preset_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_preset_name(_preset_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_preset_name,
      this._owner,
			Variant.Type.STRING
    ,
      _preset_index
    );
  }
  _get_recognized_extensions() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_recognized_extensions,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  _get_import_options(_path, _preset_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_import_options,
      this._owner,
			Variant.INT,
      _path, _preset_index
    );
  }
  _get_save_extension() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_save_extension,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _get_resource_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_resource_type,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _get_priority() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_priority,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  _get_import_order() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_import_order,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_option_visibility(_path, _option_name, _options) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_option_visibility,
      this._owner,
			Variant.Type.BOOL,
      _path, _option_name, _options
    );
  }
  _import(_source_file, _save_path, _options, _platform_variants, _gen_files) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__import,
      this._owner,
			Variant.INT,
      _source_file, _save_path, _options, _platform_variants, _gen_files
    );
  }
  _can_import_threaded() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__can_import_threaded,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  append_import_external_resource(_path, _custom_options, _custom_importer, _generator_parameters) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_append_import_external_resource,
      this._owner,
			Variant.INT,
      _path, _custom_options, _custom_importer, _generator_parameters
    );
  }
}