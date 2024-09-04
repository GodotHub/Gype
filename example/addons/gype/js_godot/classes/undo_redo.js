import * as internal from '__internal__';
import { Callable } from '@js_godot/variant/callable'
import { Variant } from '@js_godot/variant/variant'
import { GodotObject } from '@js_godot/classes/godot_object'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
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

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("UndoRedo");
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
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("create_action");
      this._bindings.method_create_action = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3171901514
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("commit_action");
      this._bindings.method_commit_action = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3216645846
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("is_committing_action");
      this._bindings.method_is_committing_action = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("add_do_method");
      this._bindings.method_add_do_method = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1611583062
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("add_undo_method");
      this._bindings.method_add_undo_method = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1611583062
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("add_do_property");
      this._bindings.method_add_do_property = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1017172818
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("add_undo_property");
      this._bindings.method_add_undo_property = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1017172818
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("add_do_reference");
      this._bindings.method_add_do_reference = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3975164845
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("add_undo_reference");
      this._bindings.method_add_undo_reference = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3975164845
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("start_force_keep_in_merge_ends");
      this._bindings.method_start_force_keep_in_merge_ends = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("end_force_keep_in_merge_ends");
      this._bindings.method_end_force_keep_in_merge_ends = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("get_history_count");
      this._bindings.method_get_history_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("get_current_action");
      this._bindings.method_get_current_action = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("get_action_name");
      this._bindings.method_get_action_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        990163283
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("clear_history");
      this._bindings.method_clear_history = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3216645846
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("get_current_action_name");
      this._bindings.method_get_current_action_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("has_undo");
      this._bindings.method_has_undo = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("has_redo");
      this._bindings.method_has_redo = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("get_version");
      this._bindings.method_get_version = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("set_max_steps");
      this._bindings.method_set_max_steps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("get_max_steps");
      this._bindings.method_get_max_steps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("redo");
      this._bindings.method_redo = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("UndoRedo");
      let methodname = new StringName("undo");
      this._bindings.method_undo = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
  }
  create_action(_name, _merge_mode, _backward_undo_ops) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_create_action,
      this._owner,
      _name, _merge_mode, _backward_undo_ops
    );
    
  }
  commit_action(_execute) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_commit_action,
      this._owner,
      _execute
    );
    
  }
  is_committing_action() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_committing_action,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  add_do_method(_callable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_do_method,
      this._owner,
      _callable
    );
    
  }
  add_undo_method(_callable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_undo_method,
      this._owner,
      _callable
    );
    
  }
  add_do_property(_object, _property, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_do_property,
      this._owner,
      _object, _property, _value
    );
    
  }
  add_undo_property(_object, _property, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_undo_property,
      this._owner,
      _object, _property, _value
    );
    
  }
  add_do_reference(_object) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_do_reference,
      this._owner,
      _object
    );
    
  }
  add_undo_reference(_object) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_undo_reference,
      this._owner,
      _object
    );
    
  }
  start_force_keep_in_merge_ends() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_start_force_keep_in_merge_ends,
      this._owner,
      
    );
    
  }
  end_force_keep_in_merge_ends() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_end_force_keep_in_merge_ends,
      this._owner,
      
    );
    
  }
  get_history_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_history_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_current_action() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_current_action,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_action_name(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_action_name,
      this._owner,
			Variant.Type.STRING,
    
      _id
    );
    
  }
  clear_history(_increase_version) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_history,
      this._owner,
      _increase_version
    );
    
  }
  get_current_action_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_current_action_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  has_undo() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_undo,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  has_redo() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_redo,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_version() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_version,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_max_steps(_max_steps) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_steps,
      this._owner,
      _max_steps
    );
    
  }
  get_max_steps() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_steps,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  redo() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_redo,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  undo() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_undo,
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

  static {
    this._init_bindings();
  }
}