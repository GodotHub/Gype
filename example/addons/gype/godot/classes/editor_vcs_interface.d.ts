
import { GodotObject } from "@godot/classes/godot_object";


export declare class EditorVCSInterface extends GodotObject{
  public _initialize(_project_path: GDString | StringName | string): boolean;
  public _set_credentials(_username: GDString | StringName | string, _password: GDString | StringName | string, _ssh_public_key_path: GDString | StringName | string, _ssh_private_key_path: GDString | StringName | string, _ssh_passphrase: GDString | StringName | string): void;
  public _get_modified_files_data(): GDArray;
  public _stage_file(_file_path: GDString | StringName | string): void;
  public _unstage_file(_file_path: GDString | StringName | string): void;
  public _discard_file(_file_path: GDString | StringName | string): void;
  public _commit(_msg: GDString | StringName | string): void;
  public _get_diff(_identifier: GDString | StringName | string, _area: number): GDArray;
  public _shut_down(): boolean;
  public _get_vcs_name(): String;
  public _get_previous_commits(_max_commits: number): GDArray;
  public _get_branch_list(): GDArray;
  public _get_remotes(): GDArray;
  public _create_branch(_branch_name: GDString | StringName | string): void;
  public _remove_branch(_branch_name: GDString | StringName | string): void;
  public _create_remote(_remote_name: GDString | StringName | string, _remote_url: GDString | StringName | string): void;
  public _remove_remote(_remote_name: GDString | StringName | string): void;
  public _get_current_branch_name(): String;
  public _checkout_branch(_branch_name: GDString | StringName | string): boolean;
  public _pull(_remote: GDString | StringName | string): void;
  public _push(_remote: GDString | StringName | string, _force: boolean): void;
  public _fetch(_remote: GDString | StringName | string): void;
  public _get_line_diff(_file_path: GDString | StringName | string, _text: GDString | StringName | string): GDArray;
  public create_diff_line(_new_line_no: number, _old_line_no: number, _content: GDString | StringName | string, _status: GDString | StringName | string): Dictionary;
  public create_diff_hunk(_old_start: number, _new_start: number, _old_lines: number, _new_lines: number): Dictionary;
  public create_diff_file(_new_file: GDString | StringName | string, _old_file: GDString | StringName | string): Dictionary;
  public create_commit(_msg: GDString | StringName | string, _author: GDString | StringName | string, _id: GDString | StringName | string, _unix_timestamp: number, _offset_minutes: number): Dictionary;
  public create_status_file(_file_path: GDString | StringName | string, _change_type: number, _area: number): Dictionary;
  public add_diff_hunks_into_diff_file(_diff_file: Dictionary, _diff_hunks: GDArray): Dictionary;
  public add_line_diffs_into_diff_hunk(_diff_hunk: Dictionary, _line_diffs: GDArray): Dictionary;
  public popup_error(_msg: GDString | StringName | string): void;
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