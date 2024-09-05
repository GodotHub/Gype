import * as internal from '__internal__';
import { Dictionary } from '@js_godot/variant/dictionary'
import { StringName } from '@js_godot/variant/string_name'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import { GDString } from '@js_godot/variant/gd_string'
import { ConfirmationDialog } from '@js_godot/classes/confirmation_dialog'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_clear_filters;
  method_add_filter;
  method_set_filters;
  method_get_filters;
  method_get_option_name;
  method_get_option_values;
  method_get_option_default;
  method_set_option_name;
  method_set_option_values;
  method_set_option_default;
  method_set_option_count;
  method_get_option_count;
  method_add_option;
  method_get_selected_options;
  method_get_current_dir;
  method_get_current_file;
  method_get_current_path;
  method_set_current_dir;
  method_set_current_file;
  method_set_current_path;
  method_set_mode_overrides_title;
  method_is_mode_overriding_title;
  method_set_file_mode;
  method_get_file_mode;
  method_get_vbox;
  method_get_line_edit;
  method_set_access;
  method_get_access;
  method_set_root_subfolder;
  method_get_root_subfolder;
  method_set_show_hidden_files;
  method_is_showing_hidden_files;
  method_set_use_native_dialog;
  method_get_use_native_dialog;
  method_deselect_all;
  method_invalidate;
}
export class FileDialog extends ConfirmationDialog{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("FileDialog");
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
      let classname = new StringName("FileDialog");
      let methodname = new StringName("clear_filters");
      this._bindings.method_clear_filters = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("add_filter");
      this._bindings.method_add_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3388804757
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("set_filters");
      this._bindings.method_set_filters = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4015028928
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("get_filters");
      this._bindings.method_get_filters = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("get_option_name");
      this._bindings.method_get_option_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("get_option_values");
      this._bindings.method_get_option_values = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        647634434
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("get_option_default");
      this._bindings.method_get_option_default = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("set_option_name");
      this._bindings.method_set_option_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("set_option_values");
      this._bindings.method_set_option_values = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3353661094
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("set_option_default");
      this._bindings.method_set_option_default = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("set_option_count");
      this._bindings.method_set_option_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("get_option_count");
      this._bindings.method_get_option_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("add_option");
      this._bindings.method_add_option = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        149592325
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("get_selected_options");
      this._bindings.method_get_selected_options = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3102165223
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("get_current_dir");
      this._bindings.method_get_current_dir = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("get_current_file");
      this._bindings.method_get_current_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("get_current_path");
      this._bindings.method_get_current_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("set_current_dir");
      this._bindings.method_set_current_dir = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("set_current_file");
      this._bindings.method_set_current_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("set_current_path");
      this._bindings.method_set_current_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("set_mode_overrides_title");
      this._bindings.method_set_mode_overrides_title = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("is_mode_overriding_title");
      this._bindings.method_is_mode_overriding_title = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("set_file_mode");
      this._bindings.method_set_file_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3654936397
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("get_file_mode");
      this._bindings.method_get_file_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4074825319
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("get_vbox");
      this._bindings.method_get_vbox = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        915758477
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("get_line_edit");
      this._bindings.method_get_line_edit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4071694264
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("set_access");
      this._bindings.method_set_access = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4104413466
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("get_access");
      this._bindings.method_get_access = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3344081076
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("set_root_subfolder");
      this._bindings.method_set_root_subfolder = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("get_root_subfolder");
      this._bindings.method_get_root_subfolder = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("set_show_hidden_files");
      this._bindings.method_set_show_hidden_files = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("is_showing_hidden_files");
      this._bindings.method_is_showing_hidden_files = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("set_use_native_dialog");
      this._bindings.method_set_use_native_dialog = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("get_use_native_dialog");
      this._bindings.method_get_use_native_dialog = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("deselect_all");
      this._bindings.method_deselect_all = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("FileDialog");
      let methodname = new StringName("invalidate");
      this._bindings.method_invalidate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
  }
  
  clear_filters() {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_clear_filters,
      this._owner,
      
    );
    
  }
  add_filter(_filter, _description) {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_add_filter,
      this._owner,
      _filter, _description
    );
    
  }
  set_filters(_filters) {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_set_filters,
      this._owner,
      _filters
    );
    
  }
  get_filters() {
    return _call_native_mb_ret(
      FileDialog._bindings.method_get_filters,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_option_name(_option) {
    return _call_native_mb_ret(
      FileDialog._bindings.method_get_option_name,
      this._owner,
			Variant.Type.STRING,
    
      _option
    );
    
  }
  get_option_values(_option) {
    return _call_native_mb_ret(
      FileDialog._bindings.method_get_option_values,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _option
    );
    
  }
  get_option_default(_option) {
    return _call_native_mb_ret(
      FileDialog._bindings.method_get_option_default,
      this._owner,
			Variant.Type.INT,
      _option
    );
    
  }
  set_option_name(_option, _name) {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_set_option_name,
      this._owner,
      _option, _name
    );
    
  }
  set_option_values(_option, _values) {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_set_option_values,
      this._owner,
      _option, _values
    );
    
  }
  set_option_default(_option, _default_value_index) {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_set_option_default,
      this._owner,
      _option, _default_value_index
    );
    
  }
  set_option_count(_count) {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_set_option_count,
      this._owner,
      _count
    );
    
  }
  get_option_count() {
    return _call_native_mb_ret(
      FileDialog._bindings.method_get_option_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  add_option(_name, _values, _default_value_index) {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_add_option,
      this._owner,
      _name, _values, _default_value_index
    );
    
  }
  get_selected_options() {
    return _call_native_mb_ret(
      FileDialog._bindings.method_get_selected_options,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  get_current_dir() {
    return _call_native_mb_ret(
      FileDialog._bindings.method_get_current_dir,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_current_file() {
    return _call_native_mb_ret(
      FileDialog._bindings.method_get_current_file,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_current_path() {
    return _call_native_mb_ret(
      FileDialog._bindings.method_get_current_path,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_current_dir(_dir) {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_set_current_dir,
      this._owner,
      _dir
    );
    
  }
  set_current_file(_file) {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_set_current_file,
      this._owner,
      _file
    );
    
  }
  set_current_path(_path) {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_set_current_path,
      this._owner,
      _path
    );
    
  }
  set_mode_overrides_title(_override) {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_set_mode_overrides_title,
      this._owner,
      _override
    );
    
  }
  is_mode_overriding_title() {
    return _call_native_mb_ret(
      FileDialog._bindings.method_is_mode_overriding_title,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_file_mode(_mode) {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_set_file_mode,
      this._owner,
      _mode
    );
    
  }
  get_file_mode() {
    return _call_native_mb_ret(
      FileDialog._bindings.method_get_file_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_vbox() {
    return _call_native_mb_ret(
      FileDialog._bindings.method_get_vbox,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_line_edit() {
    return _call_native_mb_ret(
      FileDialog._bindings.method_get_line_edit,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_access(_access) {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_set_access,
      this._owner,
      _access
    );
    
  }
  get_access() {
    return _call_native_mb_ret(
      FileDialog._bindings.method_get_access,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_root_subfolder(_dir) {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_set_root_subfolder,
      this._owner,
      _dir
    );
    
  }
  get_root_subfolder() {
    return _call_native_mb_ret(
      FileDialog._bindings.method_get_root_subfolder,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_show_hidden_files(_show) {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_set_show_hidden_files,
      this._owner,
      _show
    );
    
  }
  is_showing_hidden_files() {
    return _call_native_mb_ret(
      FileDialog._bindings.method_is_showing_hidden_files,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_use_native_dialog(_native) {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_set_use_native_dialog,
      this._owner,
      _native
    );
    
  }
  get_use_native_dialog() {
    return _call_native_mb_ret(
      FileDialog._bindings.method_get_use_native_dialog,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  deselect_all() {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_deselect_all,
      this._owner,
      
    );
    
  }
  invalidate() {
    return _call_native_mb_no_ret(
      FileDialog._bindings.method_invalidate,
      this._owner,
      
    );
    
  }
  
get mode_overrides_title () {
  return this.is_mode_overriding_title();
}
set mode_overrides_title (new_value) {
  this.set_mode_overrides_title(new_value);
}
get file_mode () {
  return this.get_file_mode();
}
set file_mode (new_value) {
  this.set_file_mode(new_value);
}
get access () {
  return this.get_access();
}
set access (new_value) {
  this.set_access(new_value);
}
get root_subfolder () {
  return this.get_root_subfolder();
}
set root_subfolder (new_value) {
  this.set_root_subfolder(new_value);
}
get filters () {
  return this.get_filters();
}
set filters (new_value) {
  this.set_filters(new_value);
}
get option_count () {
  return this.get_option_count();
}
set option_count (new_value) {
  this.set_option_count(new_value);
}
get show_hidden_files () {
  return this.is_showing_hidden_files();
}
set show_hidden_files (new_value) {
  this.set_show_hidden_files(new_value);
}
get use_native_dialog () {
  return this.get_use_native_dialog();
}
set use_native_dialog (new_value) {
  this.set_use_native_dialog(new_value);
}
get current_dir () {
  return this.get_current_dir();
}
set current_dir (new_value) {
  this.set_current_dir(new_value);
}
get current_file () {
  return this.get_current_file();
}
set current_file (new_value) {
  this.set_current_file(new_value);
}
get current_path () {
  return this.get_current_path();
}
set current_path (new_value) {
  this.set_current_path(new_value);
}

  static FileMode = {
    FILE_MODE_OPEN_FILE: 0,
    FILE_MODE_OPEN_FILES: 1,
    FILE_MODE_OPEN_DIR: 2,
    FILE_MODE_OPEN_ANY: 3,
    FILE_MODE_SAVE_FILE: 4,
  }
  static Access = {
    ACCESS_RESOURCES: 0,
    ACCESS_USERDATA: 1,
    ACCESS_FILESYSTEM: 2,
  }

  static {
    this._init_bindings();
  }
}