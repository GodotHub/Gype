import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_get_joints;
  method_set_joints;
  method_get_roots;
  method_set_roots;
  method_get_godot_skeleton;
  method_get_unique_names;
  method_set_unique_names;
  method_get_godot_bone_node;
  method_set_godot_bone_node;
  method_get_bone_attachment_count;
  method_get_bone_attachment;
}
@GodotClass
export class GLTFSkeleton extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFSkeleton");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_joints() {
    if (!this._bindings.method_get_joints) {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("get_joints");
      this._bindings.method_get_joints = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        969006518
      );
    }
  }
  static init_method_set_joints() {
    if (!this._bindings.method_set_joints) {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("set_joints");
      this._bindings.method_set_joints = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3614634198
      );
    }
  }
  static init_method_get_roots() {
    if (!this._bindings.method_get_roots) {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("get_roots");
      this._bindings.method_get_roots = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        969006518
      );
    }
  }
  static init_method_set_roots() {
    if (!this._bindings.method_set_roots) {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("set_roots");
      this._bindings.method_set_roots = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3614634198
      );
    }
  }
  static init_method_get_godot_skeleton() {
    if (!this._bindings.method_get_godot_skeleton) {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("get_godot_skeleton");
      this._bindings.method_get_godot_skeleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1814733083
      );
    }
  }
  static init_method_get_unique_names() {
    if (!this._bindings.method_get_unique_names) {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("get_unique_names");
      this._bindings.method_get_unique_names = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_unique_names() {
    if (!this._bindings.method_set_unique_names) {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("set_unique_names");
      this._bindings.method_set_unique_names = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_godot_bone_node() {
    if (!this._bindings.method_get_godot_bone_node) {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("get_godot_bone_node");
      this._bindings.method_get_godot_bone_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2382534195
      );
    }
  }
  static init_method_set_godot_bone_node() {
    if (!this._bindings.method_set_godot_bone_node) {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("set_godot_bone_node");
      this._bindings.method_set_godot_bone_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155329257
      );
    }
  }
  static init_method_get_bone_attachment_count() {
    if (!this._bindings.method_get_bone_attachment_count) {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("get_bone_attachment_count");
      this._bindings.method_get_bone_attachment_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_get_bone_attachment() {
    if (!this._bindings.method_get_bone_attachment) {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("get_bone_attachment");
      this._bindings.method_get_bone_attachment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        945440495
      );
    }
  }

  
  
  get_joints() {
    GLTFSkeleton.init_method_get_joints();
    return _call_native_mb_ret(
      GLTFSkeleton._bindings.method_get_joints,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_joints(_joints) {
    GLTFSkeleton.init_method_set_joints();
    return _call_native_mb_no_ret(
      GLTFSkeleton._bindings.method_set_joints,
      this._owner,
      _joints
    );
    
  }
  get_roots() {
    GLTFSkeleton.init_method_get_roots();
    return _call_native_mb_ret(
      GLTFSkeleton._bindings.method_get_roots,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_roots(_roots) {
    GLTFSkeleton.init_method_set_roots();
    return _call_native_mb_no_ret(
      GLTFSkeleton._bindings.method_set_roots,
      this._owner,
      _roots
    );
    
  }
  get_godot_skeleton() {
    GLTFSkeleton.init_method_get_godot_skeleton();
    return _call_native_mb_ret(
      GLTFSkeleton._bindings.method_get_godot_skeleton,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_unique_names() {
    GLTFSkeleton.init_method_get_unique_names();
    return _call_native_mb_ret(
      GLTFSkeleton._bindings.method_get_unique_names,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_unique_names(_unique_names) {
    GLTFSkeleton.init_method_set_unique_names();
    return _call_native_mb_no_ret(
      GLTFSkeleton._bindings.method_set_unique_names,
      this._owner,
      _unique_names
    );
    
  }
  get_godot_bone_node() {
    GLTFSkeleton.init_method_get_godot_bone_node();
    return _call_native_mb_ret(
      GLTFSkeleton._bindings.method_get_godot_bone_node,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  set_godot_bone_node(_godot_bone_node) {
    GLTFSkeleton.init_method_set_godot_bone_node();
    return _call_native_mb_no_ret(
      GLTFSkeleton._bindings.method_set_godot_bone_node,
      this._owner,
      _godot_bone_node
    );
    
  }
  get_bone_attachment_count() {
    GLTFSkeleton.init_method_get_bone_attachment_count();
    return _call_native_mb_ret(
      GLTFSkeleton._bindings.method_get_bone_attachment_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_bone_attachment(_idx) {
    GLTFSkeleton.init_method_get_bone_attachment();
    return _call_native_mb_ret(
      GLTFSkeleton._bindings.method_get_bone_attachment,
      this._owner,
			Variant.Type.OBJECT,
      _idx
    );
    
  }
  
get joints () {
  return this.get_joints();
}
set joints (new_value) {
  this.set_joints(new_value);
}
get roots () {
  return this.get_roots();
}
set roots (new_value) {
  this.set_roots(new_value);
}
get unique_names () {
  return this.get_unique_names();
}
set unique_names (new_value) {
  this.set_unique_names(new_value);
}
get godot_bone_node () {
  return this.get_godot_bone_node();
}
set godot_bone_node (new_value) {
  this.set_godot_bone_node(new_value);
}

}