import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_create_action;
  method_commit_action;
  method_is_committing_action;
  method_add_do_method;
  method_add_undo_method;
  method_add_do_property;
  method_add_undo_property;
  method_add_do_reference;
  method_add_undo_reference;
  method_start_force_keep_in_merge_ends;
  method_end_force_keep_in_merge_ends;
  method_get_history_count;
  method_get_current_action;
  method_get_action_name;
  method_clear_history;
  method_get_current_action_name;
  method_has_undo;
  method_has_redo;
  method_get_version;
  method_set_max_steps;
  method_get_max_steps;
  method_redo;
  method_undo;
}
export class UndoRedo extends GodotObject{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("UndoRedo");
    } else {
      super(godot_object);
    }
  }
  static init_method_create_action() {
    if (!this.#_bindings.method_create_action) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("create_action");
      this.#_bindings.method_create_action = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3171901514
      );
    }
  }
  static init_method_commit_action() {
    if (!this.#_bindings.method_commit_action) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("commit_action");
      this.#_bindings.method_commit_action = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3216645846
      );
    }
  }
  static init_method_is_committing_action() {
    if (!this.#_bindings.method_is_committing_action) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("is_committing_action");
      this.#_bindings.method_is_committing_action = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_add_do_method() {
    if (!this.#_bindings.method_add_do_method) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("add_do_method");
      this.#_bindings.method_add_do_method = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1611583062
      );
    }
  }
  static init_method_add_undo_method() {
    if (!this.#_bindings.method_add_undo_method) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("add_undo_method");
      this.#_bindings.method_add_undo_method = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1611583062
      );
    }
  }
  static init_method_add_do_property() {
    if (!this.#_bindings.method_add_do_property) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("add_do_property");
      this.#_bindings.method_add_do_property = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1017172818
      );
    }
  }
  static init_method_add_undo_property() {
    if (!this.#_bindings.method_add_undo_property) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("add_undo_property");
      this.#_bindings.method_add_undo_property = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1017172818
      );
    }
  }
  static init_method_add_do_reference() {
    if (!this.#_bindings.method_add_do_reference) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("add_do_reference");
      this.#_bindings.method_add_do_reference = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3975164845
      );
    }
  }
  static init_method_add_undo_reference() {
    if (!this.#_bindings.method_add_undo_reference) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("add_undo_reference");
      this.#_bindings.method_add_undo_reference = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3975164845
      );
    }
  }
  static init_method_start_force_keep_in_merge_ends() {
    if (!this.#_bindings.method_start_force_keep_in_merge_ends) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("start_force_keep_in_merge_ends");
      this.#_bindings.method_start_force_keep_in_merge_ends = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_end_force_keep_in_merge_ends() {
    if (!this.#_bindings.method_end_force_keep_in_merge_ends) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("end_force_keep_in_merge_ends");
      this.#_bindings.method_end_force_keep_in_merge_ends = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_history_count() {
    if (!this.#_bindings.method_get_history_count) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("get_history_count");
      this.#_bindings.method_get_history_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_get_current_action() {
    if (!this.#_bindings.method_get_current_action) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("get_current_action");
      this.#_bindings.method_get_current_action = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_get_action_name() {
    if (!this.#_bindings.method_get_action_name) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("get_action_name");
      this.#_bindings.method_get_action_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        990163283
      );
    }
  }
  static init_method_clear_history() {
    if (!this.#_bindings.method_clear_history) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("clear_history");
      this.#_bindings.method_clear_history = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3216645846
      );
    }
  }
  static init_method_get_current_action_name() {
    if (!this.#_bindings.method_get_current_action_name) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("get_current_action_name");
      this.#_bindings.method_get_current_action_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_has_undo() {
    if (!this.#_bindings.method_has_undo) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("has_undo");
      this.#_bindings.method_has_undo = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_has_redo() {
    if (!this.#_bindings.method_has_redo) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("has_redo");
      this.#_bindings.method_has_redo = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_version() {
    if (!this.#_bindings.method_get_version) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("get_version");
      this.#_bindings.method_get_version = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_max_steps() {
    if (!this.#_bindings.method_set_max_steps) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("set_max_steps");
      this.#_bindings.method_set_max_steps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_max_steps() {
    if (!this.#_bindings.method_get_max_steps) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("get_max_steps");
      this.#_bindings.method_get_max_steps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_redo() {
    if (!this.#_bindings.method_redo) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("redo");
      this.#_bindings.method_redo = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_undo() {
    if (!this.#_bindings.method_undo) {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("undo");
      this.#_bindings.method_undo = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }

  
  
  create_action(_name, _merge_mode, _backward_undo_ops) {
    UndoRedo.init_method_create_action();
    return _call_native_mb_no_ret(
      UndoRedo.#_bindings.method_create_action,
      this._owner,
      _name, _merge_mode, _backward_undo_ops
    );
    
  }
  commit_action(_execute) {
    UndoRedo.init_method_commit_action();
    return _call_native_mb_no_ret(
      UndoRedo.#_bindings.method_commit_action,
      this._owner,
      _execute
    );
    
  }
  is_committing_action() {
    UndoRedo.init_method_is_committing_action();
    return _call_native_mb_ret(
      UndoRedo.#_bindings.method_is_committing_action,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  add_do_method(_callable) {
    UndoRedo.init_method_add_do_method();
    return _call_native_mb_no_ret(
      UndoRedo.#_bindings.method_add_do_method,
      this._owner,
      _callable
    );
    
  }
  add_undo_method(_callable) {
    UndoRedo.init_method_add_undo_method();
    return _call_native_mb_no_ret(
      UndoRedo.#_bindings.method_add_undo_method,
      this._owner,
      _callable
    );
    
  }
  add_do_property(_object, _property, _value) {
    UndoRedo.init_method_add_do_property();
    return _call_native_mb_no_ret(
      UndoRedo.#_bindings.method_add_do_property,
      this._owner,
      _object, _property, _value
    );
    
  }
  add_undo_property(_object, _property, _value) {
    UndoRedo.init_method_add_undo_property();
    return _call_native_mb_no_ret(
      UndoRedo.#_bindings.method_add_undo_property,
      this._owner,
      _object, _property, _value
    );
    
  }
  add_do_reference(_object) {
    UndoRedo.init_method_add_do_reference();
    return _call_native_mb_no_ret(
      UndoRedo.#_bindings.method_add_do_reference,
      this._owner,
      _object
    );
    
  }
  add_undo_reference(_object) {
    UndoRedo.init_method_add_undo_reference();
    return _call_native_mb_no_ret(
      UndoRedo.#_bindings.method_add_undo_reference,
      this._owner,
      _object
    );
    
  }
  start_force_keep_in_merge_ends() {
    UndoRedo.init_method_start_force_keep_in_merge_ends();
    return _call_native_mb_no_ret(
      UndoRedo.#_bindings.method_start_force_keep_in_merge_ends,
      this._owner,
      
    );
    
  }
  end_force_keep_in_merge_ends() {
    UndoRedo.init_method_end_force_keep_in_merge_ends();
    return _call_native_mb_no_ret(
      UndoRedo.#_bindings.method_end_force_keep_in_merge_ends,
      this._owner,
      
    );
    
  }
  get_history_count() {
    UndoRedo.init_method_get_history_count();
    return _call_native_mb_ret(
      UndoRedo.#_bindings.method_get_history_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_current_action() {
    UndoRedo.init_method_get_current_action();
    return _call_native_mb_ret(
      UndoRedo.#_bindings.method_get_current_action,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_action_name(_id) {
    UndoRedo.init_method_get_action_name();
    return _call_native_mb_ret(
      UndoRedo.#_bindings.method_get_action_name,
      this._owner,
			Variant.Type.STRING,
    
      _id
    );
    
  }
  clear_history(_increase_version) {
    UndoRedo.init_method_clear_history();
    return _call_native_mb_no_ret(
      UndoRedo.#_bindings.method_clear_history,
      this._owner,
      _increase_version
    );
    
  }
  get_current_action_name() {
    UndoRedo.init_method_get_current_action_name();
    return _call_native_mb_ret(
      UndoRedo.#_bindings.method_get_current_action_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  has_undo() {
    UndoRedo.init_method_has_undo();
    return _call_native_mb_ret(
      UndoRedo.#_bindings.method_has_undo,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  has_redo() {
    UndoRedo.init_method_has_redo();
    return _call_native_mb_ret(
      UndoRedo.#_bindings.method_has_redo,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_version() {
    UndoRedo.init_method_get_version();
    return _call_native_mb_ret(
      UndoRedo.#_bindings.method_get_version,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_max_steps(_max_steps) {
    UndoRedo.init_method_set_max_steps();
    return _call_native_mb_no_ret(
      UndoRedo.#_bindings.method_set_max_steps,
      this._owner,
      _max_steps
    );
    
  }
  get_max_steps() {
    UndoRedo.init_method_get_max_steps();
    return _call_native_mb_ret(
      UndoRedo.#_bindings.method_get_max_steps,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  redo() {
    UndoRedo.init_method_redo();
    return _call_native_mb_ret(
      UndoRedo.#_bindings.method_redo,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  undo() {
    UndoRedo.init_method_undo();
    return _call_native_mb_ret(
      UndoRedo.#_bindings.method_undo,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get max_steps () {
  return this.get_max_steps();
}
set max_steps (new_value) {
  this.set_max_steps(new_value);
}

  static MergeMode = {
    MERGE_DISABLE: 0,
    MERGE_ENDS: 1,
    MERGE_ALL: 2,
  }
}