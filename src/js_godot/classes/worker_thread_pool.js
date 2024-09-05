import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Callable } from '@js_godot/variant/callable'
import { GodotObject } from '@js_godot/classes/godot_object'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_add_task;
  method_is_task_completed;
  method_wait_for_task_completion;
  method_add_group_task;
  method_is_group_task_completed;
  method_get_group_processed_element_count;
  method_wait_for_group_task_completion;
}class _WorkerThreadPool extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("WorkerThreadPool");
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
      let classname = new StringName("WorkerThreadPool");
      let methodname = new StringName("add_task");
      this._bindings.method_add_task = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3745067146
      );
    }
    {
      let classname = new StringName("WorkerThreadPool");
      let methodname = new StringName("is_task_completed");
      this._bindings.method_is_task_completed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("WorkerThreadPool");
      let methodname = new StringName("wait_for_task_completion");
      this._bindings.method_wait_for_task_completion = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844576869
      );
    }
    {
      let classname = new StringName("WorkerThreadPool");
      let methodname = new StringName("add_group_task");
      this._bindings.method_add_group_task = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1801953219
      );
    }
    {
      let classname = new StringName("WorkerThreadPool");
      let methodname = new StringName("is_group_task_completed");
      this._bindings.method_is_group_task_completed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("WorkerThreadPool");
      let methodname = new StringName("get_group_processed_element_count");
      this._bindings.method_get_group_processed_element_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("WorkerThreadPool");
      let methodname = new StringName("wait_for_group_task_completion");
      this._bindings.method_wait_for_group_task_completion = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
  }
  
  add_task(_action, _high_priority, _description) {
    return _call_native_mb_ret(
      _WorkerThreadPool._bindings.method_add_task,
      this._owner,
			Variant.Type.INT,
      _action, _high_priority, _description
    );
    
  }
  is_task_completed(_task_id) {
    return _call_native_mb_ret(
      _WorkerThreadPool._bindings.method_is_task_completed,
      this._owner,
			Variant.Type.BOOL,
      _task_id
    );
    
  }
  wait_for_task_completion(_task_id) {
    return _call_native_mb_ret(
      _WorkerThreadPool._bindings.method_wait_for_task_completion,
      this._owner,
			Variant.INT,
      _task_id
    );
    
  }
  add_group_task(_action, _elements, _tasks_needed, _high_priority, _description) {
    return _call_native_mb_ret(
      _WorkerThreadPool._bindings.method_add_group_task,
      this._owner,
			Variant.Type.INT,
      _action, _elements, _tasks_needed, _high_priority, _description
    );
    
  }
  is_group_task_completed(_group_id) {
    return _call_native_mb_ret(
      _WorkerThreadPool._bindings.method_is_group_task_completed,
      this._owner,
			Variant.Type.BOOL,
      _group_id
    );
    
  }
  get_group_processed_element_count(_group_id) {
    return _call_native_mb_ret(
      _WorkerThreadPool._bindings.method_get_group_processed_element_count,
      this._owner,
			Variant.Type.INT,
      _group_id
    );
    
  }
  wait_for_group_task_completion(_group_id) {
    return _call_native_mb_no_ret(
      _WorkerThreadPool._bindings.method_wait_for_group_task_completion,
      this._owner,
      _group_id
    );
    
  }
  


  static {
    this._init_bindings();
  }
}
export const WorkerThreadPool = (function () {
  let _instance;
  function create_instance() {
    return new _WorkerThreadPool();
  }
  return {
    instance: function () {
      if (!_instance) {
        _instance = create_instance();
      }
      return _instance;
    },
  };
})();