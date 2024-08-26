import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { GodotObject } from 'src/js_godot/classesgodot_object'
import { GDString } from 'src/js_godot/variant/gd_string'
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


export class EditorFileSystemDirectory extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorFileSystemDirectory");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_subdir_count");
      this._bindings.method_get_subdir_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_subdir");
      this._bindings.method_get_subdir = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2330964164
      );
    }
    {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_file_count");
      this._bindings.method_get_file_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_file");
      this._bindings.method_get_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_file_path");
      this._bindings.method_get_file_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_file_type");
      this._bindings.method_get_file_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        659327637
      );
    }
    {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_file_script_class_name");
      this._bindings.method_get_file_script_class_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_file_script_class_extends");
      this._bindings.method_get_file_script_class_extends = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_file_import_is_valid");
      this._bindings.method_get_file_import_is_valid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_name");
      this._bindings.method_get_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2841200299
      );
    }
    {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_path");
      this._bindings.method_get_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("get_parent");
      this._bindings.method_get_parent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        842323275
      );
    }
    {
      let classname = new StringName("EditorFileSystemDirectory");
      let methodname = new StringName("find_file_index");
      this._bindings.method_find_file_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1321353865
      );
    }
    {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_subdir_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_subdir(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_subdir,
      this._owner,
			Variant.INT,
      _idx
    );
  }
  get_file_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_file_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_file(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_file,
      this._owner,
			Variant.Type.STRING
    ,
      _idx
    );
  }
  get_file_path(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_file_path,
      this._owner,
			Variant.Type.STRING
    ,
      _idx
    );
  }
  get_file_type(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_file_type,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _idx
    );
  }
  get_file_script_class_name(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_file_script_class_name,
      this._owner,
			Variant.Type.STRING
    ,
      _idx
    );
  }
  get_file_script_class_extends(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_file_script_class_extends,
      this._owner,
			Variant.Type.STRING
    ,
      _idx
    );
  }
  get_file_import_is_valid(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_file_import_is_valid,
      this._owner,
			Variant.Type.BOOL,
      _idx
    );
  }
  get_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  get_path() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_path,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  get_parent() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_parent,
      this._owner,
			Variant.INT,
      
    );
  }
  find_file_index(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_find_file_index,
      this._owner,
			Variant.Type.INT,
      _name
    );
  }
  find_dir_index(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_find_dir_index,
      this._owner,
			Variant.Type.INT,
      _name
    );
  }
}