import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classesgodot_object'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__initialize;
    method__set_credentials;
    method__get_modified_files_data;
    method__stage_file;
    method__unstage_file;
    method__discard_file;
    method__commit;
    method__get_diff;
    method__shut_down;
    method__get_vcs_name;
    method__get_previous_commits;
    method__get_branch_list;
    method__get_remotes;
    method__create_branch;
    method__remove_branch;
    method__create_remote;
    method__remove_remote;
    method__get_current_branch_name;
    method__checkout_branch;
    method__pull;
    method__push;
    method__fetch;
    method__get_line_diff;
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorVCSInterface");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_initialize");
      this._bindings.method__initialize = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_set_credentials");
      this._bindings.method__set_credentials = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_get_modified_files_data");
      this._bindings.method__get_modified_files_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_stage_file");
      this._bindings.method__stage_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_unstage_file");
      this._bindings.method__unstage_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_discard_file");
      this._bindings.method__discard_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_commit");
      this._bindings.method__commit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_get_diff");
      this._bindings.method__get_diff = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_shut_down");
      this._bindings.method__shut_down = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_get_vcs_name");
      this._bindings.method__get_vcs_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_get_previous_commits");
      this._bindings.method__get_previous_commits = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_get_branch_list");
      this._bindings.method__get_branch_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_get_remotes");
      this._bindings.method__get_remotes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_create_branch");
      this._bindings.method__create_branch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_remove_branch");
      this._bindings.method__remove_branch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_create_remote");
      this._bindings.method__create_remote = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_remove_remote");
      this._bindings.method__remove_remote = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_get_current_branch_name");
      this._bindings.method__get_current_branch_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_checkout_branch");
      this._bindings.method__checkout_branch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_pull");
      this._bindings.method__pull = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_push");
      this._bindings.method__push = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_fetch");
      this._bindings.method__fetch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("_get_line_diff");
      this._bindings.method__get_line_diff = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("create_diff_line");
      this._bindings.method_create_diff_line = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2901184053
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("create_diff_hunk");
      this._bindings.method_create_diff_hunk = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3784842090
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("create_diff_file");
      this._bindings.method_create_diff_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2723227684
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("create_commit");
      this._bindings.method_create_commit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1075983584
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("create_status_file");
      this._bindings.method_create_status_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1083471673
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("add_diff_hunks_into_diff_file");
      this._bindings.method_add_diff_hunks_into_diff_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4015243225
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("add_line_diffs_into_diff_hunk");
      this._bindings.method_add_line_diffs_into_diff_hunk = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4015243225
      );
    }
    {
      let classname = new StringName("EditorVCSInterface");
      let methodname = new StringName("popup_error");
      this._bindings.method_popup_error = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
  }
  _initialize(_project_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__initialize,
      this._owner,
			Variant.Type.BOOL,
      _project_path
    );
  }
  _set_credentials(_username, _password, _ssh_public_key_path, _ssh_private_key_path, _ssh_passphrase) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_credentials,
      this._owner,
      _username, _password, _ssh_public_key_path, _ssh_private_key_path, _ssh_passphrase
    );
  }
  _get_modified_files_data() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_modified_files_data,
      this._owner,
			Variant.INT,
      
    );
  }
  _stage_file(_file_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__stage_file,
      this._owner,
      _file_path
    );
  }
  _unstage_file(_file_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__unstage_file,
      this._owner,
      _file_path
    );
  }
  _discard_file(_file_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__discard_file,
      this._owner,
      _file_path
    );
  }
  _commit(_msg) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__commit,
      this._owner,
      _msg
    );
  }
  _get_diff(_identifier, _area) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_diff,
      this._owner,
			Variant.INT,
      _identifier, _area
    );
  }
  _shut_down() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__shut_down,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _get_vcs_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_vcs_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _get_previous_commits(_max_commits) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_previous_commits,
      this._owner,
			Variant.INT,
      _max_commits
    );
  }
  _get_branch_list() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_branch_list,
      this._owner,
			Variant.INT,
      
    );
  }
  _get_remotes() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_remotes,
      this._owner,
			Variant.INT,
      
    );
  }
  _create_branch(_branch_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__create_branch,
      this._owner,
      _branch_name
    );
  }
  _remove_branch(_branch_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__remove_branch,
      this._owner,
      _branch_name
    );
  }
  _create_remote(_remote_name, _remote_url) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__create_remote,
      this._owner,
      _remote_name, _remote_url
    );
  }
  _remove_remote(_remote_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__remove_remote,
      this._owner,
      _remote_name
    );
  }
  _get_current_branch_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_current_branch_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _checkout_branch(_branch_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__checkout_branch,
      this._owner,
			Variant.Type.BOOL,
      _branch_name
    );
  }
  _pull(_remote) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__pull,
      this._owner,
      _remote
    );
  }
  _push(_remote, _force) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__push,
      this._owner,
      _remote, _force
    );
  }
  _fetch(_remote) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__fetch,
      this._owner,
      _remote
    );
  }
  _get_line_diff(_file_path, _text) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_line_diff,
      this._owner,
			Variant.INT,
      _file_path, _text
    );
  }
  create_diff_line(_new_line_no, _old_line_no, _content, _status) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_diff_line,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _new_line_no, _old_line_no, _content, _status
    );
  }
  create_diff_hunk(_old_start, _new_start, _old_lines, _new_lines) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_diff_hunk,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _old_start, _new_start, _old_lines, _new_lines
    );
  }
  create_diff_file(_new_file, _old_file) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_diff_file,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _new_file, _old_file
    );
  }
  create_commit(_msg, _author, _id, _unix_timestamp, _offset_minutes) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_commit,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _msg, _author, _id, _unix_timestamp, _offset_minutes
    );
  }
  create_status_file(_file_path, _change_type, _area) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_status_file,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _file_path, _change_type, _area
    );
  }
  add_diff_hunks_into_diff_file(_diff_file, _diff_hunks) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_add_diff_hunks_into_diff_file,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _diff_file, _diff_hunks
    );
  }
  add_line_diffs_into_diff_hunk(_diff_hunk, _line_diffs) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_add_line_diffs_into_diff_hunk,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _diff_hunk, _line_diffs
    );
  }
  popup_error(_msg) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_popup_error,
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