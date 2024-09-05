import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_option_value;
  method_add_import_option;
  method_add_import_option_advanced;
}
export class EditorScenePostImportPlugin extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorScenePostImportPlugin");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
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
  }
  _get_internal_option_visibility(_category, _for_animation, _option) {
  }
  _get_internal_option_update_view_required(_category, _option) {
  }
  _internal_process(_category, _base_node, _node, _resource) {
  }
  _get_import_options(_path) {
  }
  _get_option_visibility(_path, _for_animation, _option) {
  }
  _pre_process(_scene) {
  }
  _post_process(_scene) {
  }
  get_option_value(_name) {
    return _call_native_mb_ret(
      EditorScenePostImportPlugin._bindings.method_get_option_value,
      this._owner,
			Variant.Type.VARIANT,
    
      _name
    );
    
  }
  add_import_option(_name, _value) {
    return _call_native_mb_no_ret(
      EditorScenePostImportPlugin._bindings.method_add_import_option,
      this._owner,
      _name, _value
    );
    
  }
  add_import_option_advanced(_type, _name, _default_value, _hint, _hint_string, _usage_flags) {
    return _call_native_mb_no_ret(
      EditorScenePostImportPlugin._bindings.method_add_import_option_advanced,
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

  static {
    this._init_bindings();
  }
}