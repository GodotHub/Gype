import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { GodotObject } from '@js_godot/classes/godot_object'
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
  method_force_fixed_history;
  method_add_do_method;
  method_add_undo_method;
  method_add_do_property;
  method_add_undo_property;
  method_add_do_reference;
  method_add_undo_reference;
  method_get_object_history_id;
  method_get_history_undo_redo;
}
export class EditorUndoRedoManager extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorUndoRedoManager");
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
      let classname = new StringName("EditorUndoRedoManager");
      let methodname = new StringName("create_action");
      this._bindings.method_create_action = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2107025470
      );
    }
    {
      let classname = new StringName("EditorUndoRedoManager");
      let methodname = new StringName("commit_action");
      this._bindings.method_commit_action = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3216645846
      );
    }
    {
      let classname = new StringName("EditorUndoRedoManager");
      let methodname = new StringName("is_committing_action");
      this._bindings.method_is_committing_action = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("EditorUndoRedoManager");
      let methodname = new StringName("force_fixed_history");
      this._bindings.method_force_fixed_history = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("EditorUndoRedoManager");
      let methodname = new StringName("add_do_method");
      this._bindings.method_add_do_method = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1517810467
      );
    }
    {
      let classname = new StringName("EditorUndoRedoManager");
      let methodname = new StringName("add_undo_method");
      this._bindings.method_add_undo_method = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1517810467
      );
    }
    {
      let classname = new StringName("EditorUndoRedoManager");
      let methodname = new StringName("add_do_property");
      this._bindings.method_add_do_property = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1017172818
      );
    }
    {
      let classname = new StringName("EditorUndoRedoManager");
      let methodname = new StringName("add_undo_property");
      this._bindings.method_add_undo_property = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1017172818
      );
    }
    {
      let classname = new StringName("EditorUndoRedoManager");
      let methodname = new StringName("add_do_reference");
      this._bindings.method_add_do_reference = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3975164845
      );
    }
    {
      let classname = new StringName("EditorUndoRedoManager");
      let methodname = new StringName("add_undo_reference");
      this._bindings.method_add_undo_reference = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3975164845
      );
    }
    {
      let classname = new StringName("EditorUndoRedoManager");
      let methodname = new StringName("get_object_history_id");
      this._bindings.method_get_object_history_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1107568780
      );
    }
    {
      let classname = new StringName("EditorUndoRedoManager");
      let methodname = new StringName("get_history_undo_redo");
      this._bindings.method_get_history_undo_redo = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2417974513
      );
    }
  }
  create_action(_name, _merge_mode, _custom_context, _backward_undo_ops) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_create_action,
      this._owner,
      _name, _merge_mode, _custom_context, _backward_undo_ops
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
  force_fixed_history() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_force_fixed_history,
      this._owner,
      
    );
    
  }
  add_do_method(_object, _method) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_do_method,
      this._owner,
      _object, _method
    );
    
  }
  add_undo_method(_object, _method) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_undo_method,
      this._owner,
      _object, _method
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
  get_object_history_id(_object) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_object_history_id,
      this._owner,
			Variant.Type.INT,
      _object
    );
    
  }
  get_history_undo_redo(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_history_undo_redo,
      this._owner,
			Variant.INT,
      _id
    );
    
  }
  

  static SpecialHistory = {
    GLOBAL_HISTORY: 0,
    REMOTE_HISTORY: -9,
    INVALID_HISTORY: -99,
  }

  static {
    this._init_bindings();
  }
}