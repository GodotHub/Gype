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
  method_get_skin_root;
  method_set_skin_root;
  method_get_joints_original;
  method_set_joints_original;
  method_get_inverse_binds;
  method_set_inverse_binds;
  method_get_joints;
  method_set_joints;
  method_get_non_joints;
  method_set_non_joints;
  method_get_roots;
  method_set_roots;
  method_get_skeleton;
  method_set_skeleton;
  method_get_joint_i_to_bone_i;
  method_set_joint_i_to_bone_i;
  method_get_joint_i_to_name;
  method_set_joint_i_to_name;
  method_get_godot_skin;
  method_set_godot_skin;
}
@GodotClass
export class GLTFSkin extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFSkin");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_skin_root() {
    if (!this._bindings.method_get_skin_root) {
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("get_skin_root");
      this._bindings.method_get_skin_root = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_skin_root() {
    if (!this._bindings.method_set_skin_root) {
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("set_skin_root");
      this._bindings.method_set_skin_root = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_joints_original() {
    if (!this._bindings.method_get_joints_original) {
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("get_joints_original");
      this._bindings.method_get_joints_original = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        969006518
      );
    }
  }
  static init_method_set_joints_original() {
    if (!this._bindings.method_set_joints_original) {
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("set_joints_original");
      this._bindings.method_set_joints_original = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3614634198
      );
    }
  }
  static init_method_get_inverse_binds() {
    if (!this._bindings.method_get_inverse_binds) {
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("get_inverse_binds");
      this._bindings.method_get_inverse_binds = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_inverse_binds() {
    if (!this._bindings.method_set_inverse_binds) {
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("set_inverse_binds");
      this._bindings.method_set_inverse_binds = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_joints() {
    if (!this._bindings.method_get_joints) {
      let classname = new StringName("GLTFSkin");
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
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("set_joints");
      this._bindings.method_set_joints = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3614634198
      );
    }
  }
  static init_method_get_non_joints() {
    if (!this._bindings.method_get_non_joints) {
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("get_non_joints");
      this._bindings.method_get_non_joints = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        969006518
      );
    }
  }
  static init_method_set_non_joints() {
    if (!this._bindings.method_set_non_joints) {
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("set_non_joints");
      this._bindings.method_set_non_joints = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3614634198
      );
    }
  }
  static init_method_get_roots() {
    if (!this._bindings.method_get_roots) {
      let classname = new StringName("GLTFSkin");
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
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("set_roots");
      this._bindings.method_set_roots = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3614634198
      );
    }
  }
  static init_method_get_skeleton() {
    if (!this._bindings.method_get_skeleton) {
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("get_skeleton");
      this._bindings.method_get_skeleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_skeleton() {
    if (!this._bindings.method_set_skeleton) {
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("set_skeleton");
      this._bindings.method_set_skeleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_joint_i_to_bone_i() {
    if (!this._bindings.method_get_joint_i_to_bone_i) {
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("get_joint_i_to_bone_i");
      this._bindings.method_get_joint_i_to_bone_i = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2382534195
      );
    }
  }
  static init_method_set_joint_i_to_bone_i() {
    if (!this._bindings.method_set_joint_i_to_bone_i) {
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("set_joint_i_to_bone_i");
      this._bindings.method_set_joint_i_to_bone_i = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155329257
      );
    }
  }
  static init_method_get_joint_i_to_name() {
    if (!this._bindings.method_get_joint_i_to_name) {
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("get_joint_i_to_name");
      this._bindings.method_get_joint_i_to_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2382534195
      );
    }
  }
  static init_method_set_joint_i_to_name() {
    if (!this._bindings.method_set_joint_i_to_name) {
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("set_joint_i_to_name");
      this._bindings.method_set_joint_i_to_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155329257
      );
    }
  }
  static init_method_get_godot_skin() {
    if (!this._bindings.method_get_godot_skin) {
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("get_godot_skin");
      this._bindings.method_get_godot_skin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1032037385
      );
    }
  }
  static init_method_set_godot_skin() {
    if (!this._bindings.method_set_godot_skin) {
      let classname = new StringName("GLTFSkin");
      let methodname = new StringName("set_godot_skin");
      this._bindings.method_set_godot_skin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3971435618
      );
    }
  }

  
  
  get_skin_root() {
    GLTFSkin.init_method_get_skin_root();
    return _call_native_mb_ret(
      GLTFSkin._bindings.method_get_skin_root,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_skin_root(_skin_root) {
    GLTFSkin.init_method_set_skin_root();
    return _call_native_mb_no_ret(
      GLTFSkin._bindings.method_set_skin_root,
      this._owner,
      _skin_root
    );
    
  }
  get_joints_original() {
    GLTFSkin.init_method_get_joints_original();
    return _call_native_mb_ret(
      GLTFSkin._bindings.method_get_joints_original,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_joints_original(_joints_original) {
    GLTFSkin.init_method_set_joints_original();
    return _call_native_mb_no_ret(
      GLTFSkin._bindings.method_set_joints_original,
      this._owner,
      _joints_original
    );
    
  }
  get_inverse_binds() {
    GLTFSkin.init_method_get_inverse_binds();
    return _call_native_mb_ret(
      GLTFSkin._bindings.method_get_inverse_binds,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_inverse_binds(_inverse_binds) {
    GLTFSkin.init_method_set_inverse_binds();
    return _call_native_mb_no_ret(
      GLTFSkin._bindings.method_set_inverse_binds,
      this._owner,
      _inverse_binds
    );
    
  }
  get_joints() {
    GLTFSkin.init_method_get_joints();
    return _call_native_mb_ret(
      GLTFSkin._bindings.method_get_joints,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_joints(_joints) {
    GLTFSkin.init_method_set_joints();
    return _call_native_mb_no_ret(
      GLTFSkin._bindings.method_set_joints,
      this._owner,
      _joints
    );
    
  }
  get_non_joints() {
    GLTFSkin.init_method_get_non_joints();
    return _call_native_mb_ret(
      GLTFSkin._bindings.method_get_non_joints,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_non_joints(_non_joints) {
    GLTFSkin.init_method_set_non_joints();
    return _call_native_mb_no_ret(
      GLTFSkin._bindings.method_set_non_joints,
      this._owner,
      _non_joints
    );
    
  }
  get_roots() {
    GLTFSkin.init_method_get_roots();
    return _call_native_mb_ret(
      GLTFSkin._bindings.method_get_roots,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_roots(_roots) {
    GLTFSkin.init_method_set_roots();
    return _call_native_mb_no_ret(
      GLTFSkin._bindings.method_set_roots,
      this._owner,
      _roots
    );
    
  }
  get_skeleton() {
    GLTFSkin.init_method_get_skeleton();
    return _call_native_mb_ret(
      GLTFSkin._bindings.method_get_skeleton,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_skeleton(_skeleton) {
    GLTFSkin.init_method_set_skeleton();
    return _call_native_mb_no_ret(
      GLTFSkin._bindings.method_set_skeleton,
      this._owner,
      _skeleton
    );
    
  }
  get_joint_i_to_bone_i() {
    GLTFSkin.init_method_get_joint_i_to_bone_i();
    return _call_native_mb_ret(
      GLTFSkin._bindings.method_get_joint_i_to_bone_i,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  set_joint_i_to_bone_i(_joint_i_to_bone_i) {
    GLTFSkin.init_method_set_joint_i_to_bone_i();
    return _call_native_mb_no_ret(
      GLTFSkin._bindings.method_set_joint_i_to_bone_i,
      this._owner,
      _joint_i_to_bone_i
    );
    
  }
  get_joint_i_to_name() {
    GLTFSkin.init_method_get_joint_i_to_name();
    return _call_native_mb_ret(
      GLTFSkin._bindings.method_get_joint_i_to_name,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  set_joint_i_to_name(_joint_i_to_name) {
    GLTFSkin.init_method_set_joint_i_to_name();
    return _call_native_mb_no_ret(
      GLTFSkin._bindings.method_set_joint_i_to_name,
      this._owner,
      _joint_i_to_name
    );
    
  }
  get_godot_skin() {
    GLTFSkin.init_method_get_godot_skin();
    return _call_native_mb_ret(
      GLTFSkin._bindings.method_get_godot_skin,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_godot_skin(_godot_skin) {
    GLTFSkin.init_method_set_godot_skin();
    return _call_native_mb_no_ret(
      GLTFSkin._bindings.method_set_godot_skin,
      this._owner,
      _godot_skin
    );
    
  }
  
get skin_root () {
  return this.get_skin_root();
}
set skin_root (new_value) {
  this.set_skin_root(new_value);
}
get joints_original () {
  return this.get_joints_original();
}
set joints_original (new_value) {
  this.set_joints_original(new_value);
}
get inverse_binds () {
  return this.get_inverse_binds();
}
set inverse_binds (new_value) {
  this.set_inverse_binds(new_value);
}
get joints () {
  return this.get_joints();
}
set joints (new_value) {
  this.set_joints(new_value);
}
get non_joints () {
  return this.get_non_joints();
}
set non_joints (new_value) {
  this.set_non_joints(new_value);
}
get roots () {
  return this.get_roots();
}
set roots (new_value) {
  this.set_roots(new_value);
}
get skeleton () {
  return this.get_skeleton();
}
set skeleton (new_value) {
  this.set_skeleton(new_value);
}
get joint_i_to_bone_i () {
  return this.get_joint_i_to_bone_i();
}
set joint_i_to_bone_i (new_value) {
  this.set_joint_i_to_bone_i(new_value);
}
get joint_i_to_name () {
  return this.get_joint_i_to_name();
}
set joint_i_to_name (new_value) {
  this.set_joint_i_to_name(new_value);
}
get godot_skin () {
  return this.get_godot_skin();
}
set godot_skin (new_value) {
  this.set_godot_skin(new_value);
}

}