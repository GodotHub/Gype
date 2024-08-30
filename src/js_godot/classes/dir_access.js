import * as internal from '__internal__';
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { GDString } from 'src/js_godot/variant/gd_string'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_open;
    method_get_open_error;
    method_list_dir_begin;
    method_get_next;
    method_current_is_dir;
    method_list_dir_end;
    method_get_files;
    method_get_files_at;
    method_get_directories;
    method_get_directories_at;
    method_get_drive_count;
    method_get_drive_name;
    method_get_current_drive;
    method_change_dir;
    method_get_current_dir;
    method_make_dir;
    method_make_dir_absolute;
    method_make_dir_recursive;
    method_make_dir_recursive_absolute;
    method_file_exists;
    method_dir_exists;
    method_dir_exists_absolute;
    method_get_space_left;
    method_copy;
    method_copy_absolute;
    method_rename;
    method_rename_absolute;
    method_remove;
    method_remove_absolute;
    method_is_link;
    method_read_link;
    method_create_link;
    method_set_include_navigational;
    method_get_include_navigational;
    method_set_include_hidden;
    method_get_include_hidden;
    method_is_case_sensitive;
}


export class DirAccess extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("DirAccess");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("open");
        this._bindings.method_open = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1923528528
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("get_open_error");
        this._bindings.method_get_open_error = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166280745
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("list_dir_begin");
        this._bindings.method_list_dir_begin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2610976713
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("get_next");
        this._bindings.method_get_next = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2841200299
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("current_is_dir");
        this._bindings.method_current_is_dir = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("list_dir_end");
        this._bindings.method_list_dir_end = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("get_files");
        this._bindings.method_get_files = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2981934095
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("get_files_at");
        this._bindings.method_get_files_at = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3538744774
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("get_directories");
        this._bindings.method_get_directories = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2981934095
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("get_directories_at");
        this._bindings.method_get_directories_at = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3538744774
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("get_drive_count");
        this._bindings.method_get_drive_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("get_drive_name");
        this._bindings.method_get_drive_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          990163283
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("get_current_drive");
        this._bindings.method_get_current_drive = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("change_dir");
        this._bindings.method_change_dir = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166001499
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("get_current_dir");
        this._bindings.method_get_current_dir = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1287308131
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("make_dir");
        this._bindings.method_make_dir = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166001499
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("make_dir_absolute");
        this._bindings.method_make_dir_absolute = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166001499
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("make_dir_recursive");
        this._bindings.method_make_dir_recursive = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166001499
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("make_dir_recursive_absolute");
        this._bindings.method_make_dir_recursive_absolute = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166001499
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("file_exists");
        this._bindings.method_file_exists = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2323990056
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("dir_exists");
        this._bindings.method_dir_exists = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2323990056
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("dir_exists_absolute");
        this._bindings.method_dir_exists_absolute = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2323990056
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("get_space_left");
        this._bindings.method_get_space_left = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("copy");
        this._bindings.method_copy = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1063198817
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("copy_absolute");
        this._bindings.method_copy_absolute = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1063198817
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("rename");
        this._bindings.method_rename = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          852856452
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("rename_absolute");
        this._bindings.method_rename_absolute = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          852856452
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("remove");
        this._bindings.method_remove = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166001499
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("remove_absolute");
        this._bindings.method_remove_absolute = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166001499
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("is_link");
        this._bindings.method_is_link = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2323990056
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("read_link");
        this._bindings.method_read_link = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1703090593
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("create_link");
        this._bindings.method_create_link = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          852856452
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("set_include_navigational");
        this._bindings.method_set_include_navigational = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("get_include_navigational");
        this._bindings.method_get_include_navigational = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("set_include_hidden");
        this._bindings.method_set_include_hidden = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("get_include_hidden");
        this._bindings.method_get_include_hidden = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("DirAccess");
        let methodname = new StringName("is_case_sensitive");
        this._bindings.method_is_case_sensitive = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3927539163
        );
      }
  }
  open(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_open,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  get_open_error() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_open_error,
      this._owner,
			Variant.INT,
      
    );
    
  }
  list_dir_begin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_list_dir_begin,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_next() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_next,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  current_is_dir() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_current_is_dir,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  list_dir_end() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_list_dir_end,
      this._owner,
      
    );
    
  }
  get_files() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_files,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
    
  }
  get_files_at(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_files_at,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _path
    );
    
  }
  get_directories() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_directories,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
    
  }
  get_directories_at(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_directories_at,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _path
    );
    
  }
  get_drive_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_drive_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_drive_name(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_drive_name,
      this._owner,
			Variant.Type.STRING
    ,
      _idx
    );
    
  }
  get_current_drive() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_current_drive,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  change_dir(_to_dir) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_change_dir,
      this._owner,
			Variant.INT,
      _to_dir
    );
    
  }
  get_current_dir(_include_drive) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_current_dir,
      this._owner,
			Variant.Type.STRING
    ,
      _include_drive
    );
    
  }
  make_dir(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_make_dir,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  make_dir_absolute(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_make_dir_absolute,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  make_dir_recursive(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_make_dir_recursive,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  make_dir_recursive_absolute(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_make_dir_recursive_absolute,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  file_exists(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_file_exists,
      this._owner,
			Variant.Type.BOOL,
      _path
    );
    
  }
  dir_exists(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_dir_exists,
      this._owner,
			Variant.Type.BOOL,
      _path
    );
    
  }
  dir_exists_absolute(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_dir_exists_absolute,
      this._owner,
			Variant.Type.BOOL,
      _path
    );
    
  }
  get_space_left() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_space_left,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  copy(_from, _to, _chmod_flags) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_copy,
      this._owner,
			Variant.INT,
      _from, _to, _chmod_flags
    );
    
  }
  copy_absolute(_from, _to, _chmod_flags) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_copy_absolute,
      this._owner,
			Variant.INT,
      _from, _to, _chmod_flags
    );
    
  }
  rename(_from, _to) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_rename,
      this._owner,
			Variant.INT,
      _from, _to
    );
    
  }
  rename_absolute(_from, _to) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_rename_absolute,
      this._owner,
			Variant.INT,
      _from, _to
    );
    
  }
  remove(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_remove,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  remove_absolute(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_remove_absolute,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  is_link(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_link,
      this._owner,
			Variant.Type.BOOL,
      _path
    );
    
  }
  read_link(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_read_link,
      this._owner,
			Variant.Type.STRING
    ,
      _path
    );
    
  }
  create_link(_source, _target) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_link,
      this._owner,
			Variant.INT,
      _source, _target
    );
    
  }
  set_include_navigational(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_include_navigational,
      this._owner,
      _enable
    );
    
  }
  get_include_navigational() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_include_navigational,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_include_hidden(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_include_hidden,
      this._owner,
      _enable
    );
    
  }
  get_include_hidden() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_include_hidden,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_case_sensitive(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_case_sensitive,
      this._owner,
			Variant.Type.BOOL,
      _path
    );
    
  }
}