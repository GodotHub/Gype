import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_create_diff_line;
  method_create_diff_hunk;
  method_create_diff_file;
  method_create_commit;
  method_create_status_file;
  method_add_diff_hunks_into_diff_file;
  method_add_line_diffs_into_diff_hunk;
  method_popup_error;
}
export class EditorVCSInterface extends GodotObject{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorVCSInterface");
    } else {
      super(godot_object);
    }
  }
  static init_method_create_diff_line() {
    if (!this.#_bindings.method_create_diff_line) {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("create_diff_line");
      this.#_bindings.method_create_diff_line = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2901184053
      );
    }
  }
  static init_method_create_diff_hunk() {
    if (!this.#_bindings.method_create_diff_hunk) {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("create_diff_hunk");
      this.#_bindings.method_create_diff_hunk = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3784842090
      );
    }
  }
  static init_method_create_diff_file() {
    if (!this.#_bindings.method_create_diff_file) {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("create_diff_file");
      this.#_bindings.method_create_diff_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2723227684
      );
    }
  }
  static init_method_create_commit() {
    if (!this.#_bindings.method_create_commit) {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("create_commit");
      this.#_bindings.method_create_commit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1075983584
      );
    }
  }
  static init_method_create_status_file() {
    if (!this.#_bindings.method_create_status_file) {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("create_status_file");
      this.#_bindings.method_create_status_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1083471673
      );
    }
  }
  static init_method_add_diff_hunks_into_diff_file() {
    if (!this.#_bindings.method_add_diff_hunks_into_diff_file) {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("add_diff_hunks_into_diff_file");
      this.#_bindings.method_add_diff_hunks_into_diff_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4015243225
      );
    }
  }
  static init_method_add_line_diffs_into_diff_hunk() {
    if (!this.#_bindings.method_add_line_diffs_into_diff_hunk) {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("add_line_diffs_into_diff_hunk");
      this.#_bindings.method_add_line_diffs_into_diff_hunk = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4015243225
      );
    }
  }
  static init_method_popup_error() {
    if (!this.#_bindings.method_popup_error) {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("popup_error");
      this.#_bindings.method_popup_error = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }

  
  
  _initialize(_project_path) {
  }
  _set_credentials(_username, _password, _ssh_public_key_path, _ssh_private_key_path, _ssh_passphrase) {
  }
  _get_modified_files_data() {
  }
  _stage_file(_file_path) {
  }
  _unstage_file(_file_path) {
  }
  _discard_file(_file_path) {
  }
  _commit(_msg) {
  }
  _get_diff(_identifier, _area) {
  }
  _shut_down() {
  }
  _get_vcs_name() {
  }
  _get_previous_commits(_max_commits) {
  }
  _get_branch_list() {
  }
  _get_remotes() {
  }
  _create_branch(_branch_name) {
  }
  _remove_branch(_branch_name) {
  }
  _create_remote(_remote_name, _remote_url) {
  }
  _remove_remote(_remote_name) {
  }
  _get_current_branch_name() {
  }
  _checkout_branch(_branch_name) {
  }
  _pull(_remote) {
  }
  _push(_remote, _force) {
  }
  _fetch(_remote) {
  }
  _get_line_diff(_file_path, _text) {
  }
  create_diff_line(_new_line_no, _old_line_no, _content, _status) {
    EditorVCSInterface.init_method_create_diff_line();
    return _call_native_mb_ret(
      EditorVCSInterface.#_bindings.method_create_diff_line,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _new_line_no, _old_line_no, _content, _status
    );
    
  }
  create_diff_hunk(_old_start, _new_start, _old_lines, _new_lines) {
    EditorVCSInterface.init_method_create_diff_hunk();
    return _call_native_mb_ret(
      EditorVCSInterface.#_bindings.method_create_diff_hunk,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _old_start, _new_start, _old_lines, _new_lines
    );
    
  }
  create_diff_file(_new_file, _old_file) {
    EditorVCSInterface.init_method_create_diff_file();
    return _call_native_mb_ret(
      EditorVCSInterface.#_bindings.method_create_diff_file,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _new_file, _old_file
    );
    
  }
  create_commit(_msg, _author, _id, _unix_timestamp, _offset_minutes) {
    EditorVCSInterface.init_method_create_commit();
    return _call_native_mb_ret(
      EditorVCSInterface.#_bindings.method_create_commit,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _msg, _author, _id, _unix_timestamp, _offset_minutes
    );
    
  }
  create_status_file(_file_path, _change_type, _area) {
    EditorVCSInterface.init_method_create_status_file();
    return _call_native_mb_ret(
      EditorVCSInterface.#_bindings.method_create_status_file,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _file_path, _change_type, _area
    );
    
  }
  add_diff_hunks_into_diff_file(_diff_file, _diff_hunks) {
    EditorVCSInterface.init_method_add_diff_hunks_into_diff_file();
    return _call_native_mb_ret(
      EditorVCSInterface.#_bindings.method_add_diff_hunks_into_diff_file,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _diff_file, _diff_hunks
    );
    
  }
  add_line_diffs_into_diff_hunk(_diff_hunk, _line_diffs) {
    EditorVCSInterface.init_method_add_line_diffs_into_diff_hunk();
    return _call_native_mb_ret(
      EditorVCSInterface.#_bindings.method_add_line_diffs_into_diff_hunk,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _diff_hunk, _line_diffs
    );
    
  }
  popup_error(_msg) {
    EditorVCSInterface.init_method_popup_error();
    return _call_native_mb_no_ret(
      EditorVCSInterface.#_bindings.method_popup_error,
      this._owner,
      _msg
    );
    
  }
  

  static ChangeType = {
    CHANGE_TYPE_NEW: 0,
    CHANGE_TYPE_MODIFIED: 1,
    CHANGE_TYPE_RENAMED: 2,
    CHANGE_TYPE_DELETED: 3,
    CHANGE_TYPE_TYPECHANGE: 4,
    CHANGE_TYPE_UNMERGED: 5,
  }
  static TreeArea = {
    TREE_AREA_COMMIT: 0,
    TREE_AREA_STAGED: 1,
    TREE_AREA_UNSTAGED: 2,
  }
}