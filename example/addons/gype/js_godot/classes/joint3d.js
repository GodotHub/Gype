import * as internal from '__internal__';
import { Node3D } from '@js_godot/classes/node3d'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_node_a;
  method_get_node_a;
  method_set_node_b;
  method_get_node_b;
  method_set_solver_priority;
  method_get_solver_priority;
  method_set_exclude_nodes_from_collision;
  method_get_exclude_nodes_from_collision;
  method_get_rid;
}
@GodotClass
export class Joint3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Joint3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_node_a() {
    if (!this._bindings.method_set_node_a) {
      let classname = new StringName("Joint3D");
      let methodname = new StringName("set_node_a");
      this._bindings.method_set_node_a = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_node_a() {
    if (!this._bindings.method_get_node_a) {
      let classname = new StringName("Joint3D");
      let methodname = new StringName("get_node_a");
      this._bindings.method_get_node_a = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_node_b() {
    if (!this._bindings.method_set_node_b) {
      let classname = new StringName("Joint3D");
      let methodname = new StringName("set_node_b");
      this._bindings.method_set_node_b = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_node_b() {
    if (!this._bindings.method_get_node_b) {
      let classname = new StringName("Joint3D");
      let methodname = new StringName("get_node_b");
      this._bindings.method_get_node_b = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_solver_priority() {
    if (!this._bindings.method_set_solver_priority) {
      let classname = new StringName("Joint3D");
      let methodname = new StringName("set_solver_priority");
      this._bindings.method_set_solver_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_solver_priority() {
    if (!this._bindings.method_get_solver_priority) {
      let classname = new StringName("Joint3D");
      let methodname = new StringName("get_solver_priority");
      this._bindings.method_get_solver_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_exclude_nodes_from_collision() {
    if (!this._bindings.method_set_exclude_nodes_from_collision) {
      let classname = new StringName("Joint3D");
      let methodname = new StringName("set_exclude_nodes_from_collision");
      this._bindings.method_set_exclude_nodes_from_collision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_exclude_nodes_from_collision() {
    if (!this._bindings.method_get_exclude_nodes_from_collision) {
      let classname = new StringName("Joint3D");
      let methodname = new StringName("get_exclude_nodes_from_collision");
      this._bindings.method_get_exclude_nodes_from_collision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_rid() {
    if (!this._bindings.method_get_rid) {
      let classname = new StringName("Joint3D");
      let methodname = new StringName("get_rid");
      this._bindings.method_get_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }

  
  
  set_node_a(_node) {
    Joint3D.init_method_set_node_a();
    return _call_native_mb_no_ret(
      Joint3D._bindings.method_set_node_a,
      this._owner,
      _node
    );
    
  }
  get_node_a() {
    Joint3D.init_method_get_node_a();
    return _call_native_mb_ret(
      Joint3D._bindings.method_get_node_a,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_node_b(_node) {
    Joint3D.init_method_set_node_b();
    return _call_native_mb_no_ret(
      Joint3D._bindings.method_set_node_b,
      this._owner,
      _node
    );
    
  }
  get_node_b() {
    Joint3D.init_method_get_node_b();
    return _call_native_mb_ret(
      Joint3D._bindings.method_get_node_b,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_solver_priority(_priority) {
    Joint3D.init_method_set_solver_priority();
    return _call_native_mb_no_ret(
      Joint3D._bindings.method_set_solver_priority,
      this._owner,
      _priority
    );
    
  }
  get_solver_priority() {
    Joint3D.init_method_get_solver_priority();
    return _call_native_mb_ret(
      Joint3D._bindings.method_get_solver_priority,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_exclude_nodes_from_collision(_enable) {
    Joint3D.init_method_set_exclude_nodes_from_collision();
    return _call_native_mb_no_ret(
      Joint3D._bindings.method_set_exclude_nodes_from_collision,
      this._owner,
      _enable
    );
    
  }
  get_exclude_nodes_from_collision() {
    Joint3D.init_method_get_exclude_nodes_from_collision();
    return _call_native_mb_ret(
      Joint3D._bindings.method_get_exclude_nodes_from_collision,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_rid() {
    Joint3D.init_method_get_rid();
    return _call_native_mb_ret(
      Joint3D._bindings.method_get_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  
get node_a () {
  return this.get_node_a();
}
set node_a (new_value) {
  this.set_node_a(new_value);
}
get node_b () {
  return this.get_node_b();
}
set node_b (new_value) {
  this.set_node_b(new_value);
}
get solver_priority () {
  return this.get_solver_priority();
}
set solver_priority (new_value) {
  this.set_solver_priority(new_value);
}
get exclude_nodes_from_collision () {
  return this.get_exclude_nodes_from_collision();
}
set exclude_nodes_from_collision (new_value) {
  this.set_exclude_nodes_from_collision(new_value);
}

}