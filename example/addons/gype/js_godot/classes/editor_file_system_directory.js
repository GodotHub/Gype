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
  method_get_subdir_count;
  method_get_subdir;
  method_get_file_count;
  method_get_file;
  method_get_file_path;
  method_get_file_type;
  method_get_file_script_class_name;
  method_get_file_script_class_extends;
  method_get_file_import_is_valid;
  method_get_name;
  method_get_path;
  method_get_parent;
  method_find_file_index;
  method_find_dir_index;
}
@GodotClass
export class EditorFileSystemDirectory extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorFileSystemDirectory");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_subdir_count() {
    if (!this._bindings.method_get_subdir_count) {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_subdir_count");
      this._bindings.method_get_subdir_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_subdir() {
    if (!this._bindings.method_get_subdir) {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_subdir");
      this._bindings.method_get_subdir = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2330964164
      );
    }
  }
  static init_method_get_file_count() {
    if (!this._bindings.method_get_file_count) {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_file_count");
      this._bindings.method_get_file_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_file() {
    if (!this._bindings.method_get_file) {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_file");
      this._bindings.method_get_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_file_path() {
    if (!this._bindings.method_get_file_path) {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_file_path");
      this._bindings.method_get_file_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_file_type() {
    if (!this._bindings.method_get_file_type) {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_file_type");
      this._bindings.method_get_file_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        659327637
      );
    }
  }
  static init_method_get_file_script_class_name() {
    if (!this._bindings.method_get_file_script_class_name) {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_file_script_class_name");
      this._bindings.method_get_file_script_class_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_file_script_class_extends() {
    if (!this._bindings.method_get_file_script_class_extends) {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_file_script_class_extends");
      this._bindings.method_get_file_script_class_extends = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_file_import_is_valid() {
    if (!this._bindings.method_get_file_import_is_valid) {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_file_import_is_valid");
      this._bindings.method_get_file_import_is_valid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_get_name() {
    if (!this._bindings.method_get_name) {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_name");
      this._bindings.method_get_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2841200299
      );
    }
  }
  static init_method_get_path() {
    if (!this._bindings.method_get_path) {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_path");
      this._bindings.method_get_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_parent() {
    if (!this._bindings.method_get_parent) {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_parent");
      this._bindings.method_get_parent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        842323275
      );
    }
  }
  static init_method_find_file_index() {
    if (!this._bindings.method_find_file_index) {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("find_file_index");
      this._bindings.method_find_file_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1321353865
      );
    }
  }
  static init_method_find_dir_index() {
    if (!this._bindings.method_find_dir_index) {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("find_dir_index");
      this._bindings.method_find_dir_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1321353865
      );
    }
  }

  
  
  get_subdir_count() {
    EditorFileSystemDirectory.init_method_get_subdir_count();
    return _call_native_mb_ret(
      EditorFileSystemDirectory._bindings.method_get_subdir_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_subdir(_idx) {
    EditorFileSystemDirectory.init_method_get_subdir();
    return _call_native_mb_ret(
      EditorFileSystemDirectory._bindings.method_get_subdir,
      this._owner,
			Variant.Type.OBJECT,
      _idx
    );
    
  }
  get_file_count() {
    EditorFileSystemDirectory.init_method_get_file_count();
    return _call_native_mb_ret(
      EditorFileSystemDirectory._bindings.method_get_file_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_file(_idx) {
    EditorFileSystemDirectory.init_method_get_file();
    return _call_native_mb_ret(
      EditorFileSystemDirectory._bindings.method_get_file,
      this._owner,
			Variant.Type.STRING,
    
      _idx
    );
    
  }
  get_file_path(_idx) {
    EditorFileSystemDirectory.init_method_get_file_path();
    return _call_native_mb_ret(
      EditorFileSystemDirectory._bindings.method_get_file_path,
      this._owner,
			Variant.Type.STRING,
    
      _idx
    );
    
  }
  get_file_type(_idx) {
    EditorFileSystemDirectory.init_method_get_file_type();
    return _call_native_mb_ret(
      EditorFileSystemDirectory._bindings.method_get_file_type,
      this._owner,
			Variant.Type.STRING_NAME,
    
      _idx
    );
    
  }
  get_file_script_class_name(_idx) {
    EditorFileSystemDirectory.init_method_get_file_script_class_name();
    return _call_native_mb_ret(
      EditorFileSystemDirectory._bindings.method_get_file_script_class_name,
      this._owner,
			Variant.Type.STRING,
    
      _idx
    );
    
  }
  get_file_script_class_extends(_idx) {
    EditorFileSystemDirectory.init_method_get_file_script_class_extends();
    return _call_native_mb_ret(
      EditorFileSystemDirectory._bindings.method_get_file_script_class_extends,
      this._owner,
			Variant.Type.STRING,
    
      _idx
    );
    
  }
  get_file_import_is_valid(_idx) {
    EditorFileSystemDirectory.init_method_get_file_import_is_valid();
    return _call_native_mb_ret(
      EditorFileSystemDirectory._bindings.method_get_file_import_is_valid,
      this._owner,
			Variant.Type.BOOL,
    
      _idx
    );
    
  }
  get_name() {
    EditorFileSystemDirectory.init_method_get_name();
    return _call_native_mb_ret(
      EditorFileSystemDirectory._bindings.method_get_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_path() {
    EditorFileSystemDirectory.init_method_get_path();
    return _call_native_mb_ret(
      EditorFileSystemDirectory._bindings.method_get_path,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_parent() {
    EditorFileSystemDirectory.init_method_get_parent();
    return _call_native_mb_ret(
      EditorFileSystemDirectory._bindings.method_get_parent,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  find_file_index(_name) {
    EditorFileSystemDirectory.init_method_find_file_index();
    return _call_native_mb_ret(
      EditorFileSystemDirectory._bindings.method_find_file_index,
      this._owner,
			Variant.Type.INT,
    
      _name
    );
    
  }
  find_dir_index(_name) {
    EditorFileSystemDirectory.init_method_find_dir_index();
    return _call_native_mb_ret(
      EditorFileSystemDirectory._bindings.method_find_dir_index,
      this._owner,
			Variant.Type.INT,
    
      _name
    );
    
  }
  

}