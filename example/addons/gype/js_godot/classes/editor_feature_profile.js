import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
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
  method_set_disable_class;
  method_is_class_disabled;
  method_set_disable_class_editor;
  method_is_class_editor_disabled;
  method_set_disable_class_property;
  method_is_class_property_disabled;
  method_set_disable_feature;
  method_is_feature_disabled;
  method_get_feature_name;
  method_save_to_file;
  method_load_from_file;
}
@GodotClass
export class EditorFeatureProfile extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorFeatureProfile");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_disable_class() {
    if (!this._bindings.method_set_disable_class) {
      let classname = new StringName("EditorFeatureProfile");
      let methodname = new StringName("set_disable_class");
      this._bindings.method_set_disable_class = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2524380260
      );
    }
  }
  static init_method_is_class_disabled() {
    if (!this._bindings.method_is_class_disabled) {
      let classname = new StringName("EditorFeatureProfile");
      let methodname = new StringName("is_class_disabled");
      this._bindings.method_is_class_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2619796661
      );
    }
  }
  static init_method_set_disable_class_editor() {
    if (!this._bindings.method_set_disable_class_editor) {
      let classname = new StringName("EditorFeatureProfile");
      let methodname = new StringName("set_disable_class_editor");
      this._bindings.method_set_disable_class_editor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2524380260
      );
    }
  }
  static init_method_is_class_editor_disabled() {
    if (!this._bindings.method_is_class_editor_disabled) {
      let classname = new StringName("EditorFeatureProfile");
      let methodname = new StringName("is_class_editor_disabled");
      this._bindings.method_is_class_editor_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2619796661
      );
    }
  }
  static init_method_set_disable_class_property() {
    if (!this._bindings.method_set_disable_class_property) {
      let classname = new StringName("EditorFeatureProfile");
      let methodname = new StringName("set_disable_class_property");
      this._bindings.method_set_disable_class_property = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        865197084
      );
    }
  }
  static init_method_is_class_property_disabled() {
    if (!this._bindings.method_is_class_property_disabled) {
      let classname = new StringName("EditorFeatureProfile");
      let methodname = new StringName("is_class_property_disabled");
      this._bindings.method_is_class_property_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        471820014
      );
    }
  }
  static init_method_set_disable_feature() {
    if (!this._bindings.method_set_disable_feature) {
      let classname = new StringName("EditorFeatureProfile");
      let methodname = new StringName("set_disable_feature");
      this._bindings.method_set_disable_feature = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1884871044
      );
    }
  }
  static init_method_is_feature_disabled() {
    if (!this._bindings.method_is_feature_disabled) {
      let classname = new StringName("EditorFeatureProfile");
      let methodname = new StringName("is_feature_disabled");
      this._bindings.method_is_feature_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2974403161
      );
    }
  }
  static init_method_get_feature_name() {
    if (!this._bindings.method_get_feature_name) {
      let classname = new StringName("EditorFeatureProfile");
      let methodname = new StringName("get_feature_name");
      this._bindings.method_get_feature_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3401335809
      );
    }
  }
  static init_method_save_to_file() {
    if (!this._bindings.method_save_to_file) {
      let classname = new StringName("EditorFeatureProfile");
      let methodname = new StringName("save_to_file");
      this._bindings.method_save_to_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166001499
      );
    }
  }
  static init_method_load_from_file() {
    if (!this._bindings.method_load_from_file) {
      let classname = new StringName("EditorFeatureProfile");
      let methodname = new StringName("load_from_file");
      this._bindings.method_load_from_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166001499
      );
    }
  }

  
  
  set_disable_class(_class_name, _disable) {
    EditorFeatureProfile.init_method_set_disable_class();
    return _call_native_mb_no_ret(
      EditorFeatureProfile._bindings.method_set_disable_class,
      this._owner,
      _class_name, _disable
    );
    
  }
  is_class_disabled(_class_name) {
    EditorFeatureProfile.init_method_is_class_disabled();
    return _call_native_mb_ret(
      EditorFeatureProfile._bindings.method_is_class_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      _class_name
    );
    
  }
  set_disable_class_editor(_class_name, _disable) {
    EditorFeatureProfile.init_method_set_disable_class_editor();
    return _call_native_mb_no_ret(
      EditorFeatureProfile._bindings.method_set_disable_class_editor,
      this._owner,
      _class_name, _disable
    );
    
  }
  is_class_editor_disabled(_class_name) {
    EditorFeatureProfile.init_method_is_class_editor_disabled();
    return _call_native_mb_ret(
      EditorFeatureProfile._bindings.method_is_class_editor_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      _class_name
    );
    
  }
  set_disable_class_property(_class_name, _property, _disable) {
    EditorFeatureProfile.init_method_set_disable_class_property();
    return _call_native_mb_no_ret(
      EditorFeatureProfile._bindings.method_set_disable_class_property,
      this._owner,
      _class_name, _property, _disable
    );
    
  }
  is_class_property_disabled(_class_name, _property) {
    EditorFeatureProfile.init_method_is_class_property_disabled();
    return _call_native_mb_ret(
      EditorFeatureProfile._bindings.method_is_class_property_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      _class_name, _property
    );
    
  }
  set_disable_feature(_feature, _disable) {
    EditorFeatureProfile.init_method_set_disable_feature();
    return _call_native_mb_no_ret(
      EditorFeatureProfile._bindings.method_set_disable_feature,
      this._owner,
      _feature, _disable
    );
    
  }
  is_feature_disabled(_feature) {
    EditorFeatureProfile.init_method_is_feature_disabled();
    return _call_native_mb_ret(
      EditorFeatureProfile._bindings.method_is_feature_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      _feature
    );
    
  }
  get_feature_name(_feature) {
    EditorFeatureProfile.init_method_get_feature_name();
    return _call_native_mb_ret(
      EditorFeatureProfile._bindings.method_get_feature_name,
      this._owner,
			Variant.Type.STRING,
    
      _feature
    );
    
  }
  save_to_file(_path) {
    EditorFeatureProfile.init_method_save_to_file();
    return _call_native_mb_ret(
      EditorFeatureProfile._bindings.method_save_to_file,
      this._owner,
			Variant.Type.INT,
    
      _path
    );
    
  }
  load_from_file(_path) {
    EditorFeatureProfile.init_method_load_from_file();
    return _call_native_mb_ret(
      EditorFeatureProfile._bindings.method_load_from_file,
      this._owner,
			Variant.Type.INT,
    
      _path
    );
    
  }
  

  static Feature = {
    FEATURE_3D: 0,
    FEATURE_SCRIPT: 1,
    FEATURE_ASSET_LIB: 2,
    FEATURE_SCENE_TREE: 3,
    FEATURE_NODE_DOCK: 4,
    FEATURE_FILESYSTEM_DOCK: 5,
    FEATURE_IMPORT_DOCK: 6,
    FEATURE_HISTORY_DOCK: 7,
    FEATURE_MAX: 8,
  }
}