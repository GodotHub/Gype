
import { Object } from "@godot/classes/object";

export declare class EditorVCSInterface extends Object{
  public _initialize(_project_path: String): boolean;
  public _set_credentials(_username: String, _password: String, _ssh_public_key_path: String, _ssh_private_key_path: String, _ssh_passphrase: String): void;
  public _get_modified_files_data(): Array;
  public _stage_file(_file_path: String): void;
  public _unstage_file(_file_path: String): void;
  public _discard_file(_file_path: String): void;
  public _commit(_msg: String): void;
  public _get_diff(_identifier: String, _area: number): Array;
  public _shut_down(): boolean;
  public _get_vcs_name(): String;
  public _get_previous_commits(_max_commits: number): Array;
  public _get_branch_list(): Array;
  public _get_remotes(): Array;
  public _create_branch(_branch_name: String): void;
  public _remove_branch(_branch_name: String): void;
  public _create_remote(_remote_name: String, _remote_url: String): void;
  public _remove_remote(_remote_name: String): void;
  public _get_current_branch_name(): String;
  public _checkout_branch(_branch_name: String): boolean;
  public _pull(_remote: String): void;
  public _push(_remote: String, _force: boolean): void;
  public _fetch(_remote: String): void;
  public _get_line_diff(_file_path: String, _text: String): Array;
  public create_diff_line(_new_line_no: number, _old_line_no: number, _content: String, _status: String): Dictionary;
  public create_diff_hunk(_old_start: number, _new_start: number, _old_lines: number, _new_lines: number): Dictionary;
  public create_diff_file(_new_file: String, _old_file: String): Dictionary;
  public create_commit(_msg: String, _author: String, _id: String, _unix_timestamp: number, _offset_minutes: number): Dictionary;
  public create_status_file(_file_path: String, _change_type: number, _area: number): Dictionary;
  public add_diff_hunks_into_diff_file(_diff_file: Dictionary, _diff_hunks: typedarray::Dictionary): Dictionary;
  public add_line_diffs_into_diff_hunk(_diff_hunk: Dictionary, _line_diffs: typedarray::Dictionary): Dictionary;
  public popup_error(_msg: String): void;
  static ChangeType = {
    CHANGE_TYPE_NEW = 0,
    CHANGE_TYPE_MODIFIED = 1,
    CHANGE_TYPE_RENAMED = 2,
    CHANGE_TYPE_DELETED = 3,
    CHANGE_TYPE_TYPECHANGE = 4,
    CHANGE_TYPE_UNMERGED = 5,
  }
  static TreeArea = {
    TREE_AREA_COMMIT = 0,
    TREE_AREA_STAGED = 1,
    TREE_AREA_UNSTAGED = 2,
  }
}