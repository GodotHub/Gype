import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classesgodot_object'
import { Callable } from 'src/js_godot/variant/callable'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_add_task;
    method_is_task_completed;
    method_wait_for_task_completion;
    method_add_group_task;
    method_is_group_task_completed;
    method_get_group_processed_element_count;
    method_wait_for_group_task_completion;
}

export const WorkerThreadPool = new _WorkerThreadPool();

class _WorkerThreadPool extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("WorkerThreadPool");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_add_task,
      this._owner,
			Variant.Type.INT,
      _action, _high_priority, _description
    );
  }
  is_task_completed(_task_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_task_completed,
      this._owner,
			Variant.Type.BOOL,
      _task_id
    );
  }
  wait_for_task_completion(_task_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_wait_for_task_completion,
      this._owner,
			Variant.INT,
      _task_id
    );
  }
  add_group_task(_action, _elements, _tasks_needed, _high_priority, _description) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_add_group_task,
      this._owner,
			Variant.Type.INT,
      _action, _elements, _tasks_needed, _high_priority, _description
    );
  }
  is_group_task_completed(_group_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_group_task_completed,
      this._owner,
			Variant.Type.BOOL,
      _group_id
    );
  }
  get_group_processed_element_count(_group_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_group_processed_element_count,
      this._owner,
			Variant.Type.INT,
      _group_id
    );
  }
  wait_for_group_task_completion(_group_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_wait_for_group_task_completion,
      this._owner,
      _group_id
    );
  }
}