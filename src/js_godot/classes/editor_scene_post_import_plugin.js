import * as internal from '__internal__';
import { Variant } from 'src/js_godot/variant/variant'
import { StringName } from 'src/js_godot/variant/string_name'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__get_internal_import_options;
    method__get_internal_option_visibility;
    method__get_internal_option_update_view_required;
    method__internal_process;
    method__get_import_options;
    method__get_option_visibility;
    method__pre_process;
    method__post_process;
    method_get_option_value;
    method_add_import_option;
    method_add_import_option_advanced;
}


export class EditorScenePostImportPlugin extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorScenePostImportPlugin");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorScenePostImportPlugin");
      let methodname = new StringName("_get_internal_import_options");
      this._bindings.method__get_internal_import_options = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorScenePostImportPlugin");
      let methodname = new StringName("_get_internal_option_visibility");
      this._bindings.method__get_internal_option_visibility = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorScenePostImportPlugin");
      let methodname = new StringName("_get_internal_option_update_view_required");
      this._bindings.method__get_internal_option_update_view_required = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorScenePostImportPlugin");
      let methodname = new StringName("_internal_process");
      this._bindings.method__internal_process = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorScenePostImportPlugin");
      let methodname = new StringName("_get_import_options");
      this._bindings.method__get_import_options = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorScenePostImportPlugin");
      let methodname = new StringName("_get_option_visibility");
      this._bindings.method__get_option_visibility = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorScenePostImportPlugin");
      let methodname = new StringName("_pre_process");
      this._bindings.method__pre_process = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorScenePostImportPlugin");
      let methodname = new StringName("_post_process");
      this._bindings.method__post_process = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorScenePostImportPlugin");
      let methodname = new StringName("get_option_value");
      this._bindings.method_get_option_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2760726917
      );
    }
    {
      let classname = new StringName("EditorScenePostImportPlugin");
      let methodname = new StringName("add_import_option");
      this._bindings.method_add_import_option = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        402577236
      );
    }
    {
      let classname = new StringName("EditorScenePostImportPlugin");
      let methodname = new StringName("add_import_option_advanced");
      this._bindings.method_add_import_option_advanced = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3674075649
      );
    }
  }
  _get_internal_import_options(_category) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__get_internal_import_options,
      this._owner,
      _category
    );
  }
  _get_internal_option_visibility(_category, _for_animation, _option) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_internal_option_visibility,
      this._owner,
			Variant.Type.VARIANT
    ,
      _category, _for_animation, _option
    );
  }
  _get_internal_option_update_view_required(_category, _option) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_internal_option_update_view_required,
      this._owner,
			Variant.Type.VARIANT
    ,
      _category, _option
    );
  }
  _internal_process(_category, _base_node, _node, _resource) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__internal_process,
      this._owner,
      _category, _base_node, _node, _resource
    );
  }
  _get_import_options(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__get_import_options,
      this._owner,
      _path
    );
  }
  _get_option_visibility(_path, _for_animation, _option) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_option_visibility,
      this._owner,
			Variant.Type.VARIANT
    ,
      _path, _for_animation, _option
    );
  }
  _pre_process(_scene) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__pre_process,
      this._owner,
      _scene
    );
  }
  _post_process(_scene) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__post_process,
      this._owner,
      _scene
    );
  }
  get_option_value(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_option_value,
      this._owner,
			Variant.Type.VARIANT
    ,
      _name
    );
  }
  add_import_option(_name, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_import_option,
      this._owner,
      _name, _value
    );
  }
  add_import_option_advanced(_type, _name, _default_value, _hint, _hint_string, _usage_flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_import_option_advanced,
      this._owner,
      _type, _name, _default_value, _hint, _hint_string, _usage_flags
    );
  }
  static InternalImportCategory = {
    INTERNAL_IMPORT_CATEGORY_NODE: 0,
    INTERNAL_IMPORT_CATEGORY_MESH_3D_NODE: 1,
    INTERNAL_IMPORT_CATEGORY_MESH: 2,
    INTERNAL_IMPORT_CATEGORY_MATERIAL: 3,
    INTERNAL_IMPORT_CATEGORY_ANIMATION: 4,
    INTERNAL_IMPORT_CATEGORY_ANIMATION_NODE: 5,
    INTERNAL_IMPORT_CATEGORY_SKELETON_3D_NODE: 6,
    INTERNAL_IMPORT_CATEGORY_MAX: 7,
  }
}