import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Node2D } from '@js_godot/classes/node2d'
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
  method_set_bias;
  method_get_bias;
  method_set_exclude_nodes_from_collision;
  method_get_exclude_nodes_from_collision;
  method_get_rid;
}
@GodotClass
export class Joint2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Joint2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_node_a() {
    if (!this._bindings.method_set_node_a) {
      let classname = new StringName("Joint2D");
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
      let classname = new StringName("Joint2D");
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
      let classname = new StringName("Joint2D");
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
      let classname = new StringName("Joint2D");
      let methodname = new StringName("get_node_b");
      this._bindings.method_get_node_b = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_bias() {
    if (!this._bindings.method_set_bias) {
      let classname = new StringName("Joint2D");
      let methodname = new StringName("set_bias");
      this._bindings.method_set_bias = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_bias() {
    if (!this._bindings.method_get_bias) {
      let classname = new StringName("Joint2D");
      let methodname = new StringName("get_bias");
      this._bindings.method_get_bias = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_exclude_nodes_from_collision() {
    if (!this._bindings.method_set_exclude_nodes_from_collision) {
      let classname = new StringName("Joint2D");
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
      let classname = new StringName("Joint2D");
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
      let classname = new StringName("Joint2D");
      let methodname = new StringName("get_rid");
      this._bindings.method_get_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }

  
  
  set_node_a(_node) {
    Joint2D.init_method_set_node_a();
    return _call_native_mb_no_ret(
      Joint2D._bindings.method_set_node_a,
      this._owner,
      _node
    );
    
  }
  get_node_a() {
    Joint2D.init_method_get_node_a();
    return _call_native_mb_ret(
      Joint2D._bindings.method_get_node_a,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_node_b(_node) {
    Joint2D.init_method_set_node_b();
    return _call_native_mb_no_ret(
      Joint2D._bindings.method_set_node_b,
      this._owner,
      _node
    );
    
  }
  get_node_b() {
    Joint2D.init_method_get_node_b();
    return _call_native_mb_ret(
      Joint2D._bindings.method_get_node_b,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_bias(_bias) {
    Joint2D.init_method_set_bias();
    return _call_native_mb_no_ret(
      Joint2D._bindings.method_set_bias,
      this._owner,
      _bias
    );
    
  }
  get_bias() {
    Joint2D.init_method_get_bias();
    return _call_native_mb_ret(
      Joint2D._bindings.method_get_bias,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_exclude_nodes_from_collision(_enable) {
    Joint2D.init_method_set_exclude_nodes_from_collision();
    return _call_native_mb_no_ret(
      Joint2D._bindings.method_set_exclude_nodes_from_collision,
      this._owner,
      _enable
    );
    
  }
  get_exclude_nodes_from_collision() {
    Joint2D.init_method_get_exclude_nodes_from_collision();
    return _call_native_mb_ret(
      Joint2D._bindings.method_get_exclude_nodes_from_collision,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_rid() {
    Joint2D.init_method_get_rid();
    return _call_native_mb_ret(
      Joint2D._bindings.method_get_rid,
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
get bias () {
  return this.get_bias();
}
set bias (new_value) {
  this.set_bias(new_value);
}
get disable_collision () {
  return this.get_exclude_nodes_from_collision();
}
set disable_collision (new_value) {
  this.set_exclude_nodes_from_collision(new_value);
}

}