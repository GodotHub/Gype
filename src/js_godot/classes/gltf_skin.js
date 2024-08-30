import * as internal from '__internal__';
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { Resource } from 'src/js_godot/classes/resource'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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


export class GLTFSkin extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFSkin");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("get_skin_root");
        this._bindings.method_get_skin_root = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("set_skin_root");
        this._bindings.method_set_skin_root = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("get_joints_original");
        this._bindings.method_get_joints_original = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          969006518
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("set_joints_original");
        this._bindings.method_set_joints_original = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3614634198
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("get_inverse_binds");
        this._bindings.method_get_inverse_binds = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2915620761
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("set_inverse_binds");
        this._bindings.method_set_inverse_binds = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          381264803
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("get_joints");
        this._bindings.method_get_joints = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          969006518
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("set_joints");
        this._bindings.method_set_joints = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3614634198
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("get_non_joints");
        this._bindings.method_get_non_joints = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          969006518
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("set_non_joints");
        this._bindings.method_set_non_joints = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3614634198
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("get_roots");
        this._bindings.method_get_roots = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          969006518
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("set_roots");
        this._bindings.method_set_roots = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3614634198
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("get_skeleton");
        this._bindings.method_get_skeleton = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("set_skeleton");
        this._bindings.method_set_skeleton = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("get_joint_i_to_bone_i");
        this._bindings.method_get_joint_i_to_bone_i = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2382534195
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("set_joint_i_to_bone_i");
        this._bindings.method_set_joint_i_to_bone_i = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155329257
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("get_joint_i_to_name");
        this._bindings.method_get_joint_i_to_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2382534195
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("set_joint_i_to_name");
        this._bindings.method_set_joint_i_to_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155329257
        );
      }
      {
        let classname = new StringName("GLTFSkin");
        let methodname = new StringName("get_godot_skin");
        this._bindings.method_get_godot_skin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1032037385
        );
      }
      {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_skin_root,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_skin_root(_skin_root) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_skin_root,
      this._owner,
      _skin_root
    );
    
  }
  get_joints_original() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_joints_original,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
    
  }
  set_joints_original(_joints_original) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_joints_original,
      this._owner,
      _joints_original
    );
    
  }
  get_inverse_binds() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_inverse_binds,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_inverse_binds(_inverse_binds) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_inverse_binds,
      this._owner,
      _inverse_binds
    );
    
  }
  get_joints() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_joints,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
    
  }
  set_joints(_joints) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_joints,
      this._owner,
      _joints
    );
    
  }
  get_non_joints() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_non_joints,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
    
  }
  set_non_joints(_non_joints) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_non_joints,
      this._owner,
      _non_joints
    );
    
  }
  get_roots() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_roots,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
    
  }
  set_roots(_roots) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_roots,
      this._owner,
      _roots
    );
    
  }
  get_skeleton() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_skeleton,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_skeleton(_skeleton) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_skeleton,
      this._owner,
      _skeleton
    );
    
  }
  get_joint_i_to_bone_i() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_joint_i_to_bone_i,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
    
  }
  set_joint_i_to_bone_i(_joint_i_to_bone_i) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_joint_i_to_bone_i,
      this._owner,
      _joint_i_to_bone_i
    );
    
  }
  get_joint_i_to_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_joint_i_to_name,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
    
  }
  set_joint_i_to_name(_joint_i_to_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_joint_i_to_name,
      this._owner,
      _joint_i_to_name
    );
    
  }
  get_godot_skin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_godot_skin,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_godot_skin(_godot_skin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_godot_skin,
      this._owner,
      _godot_skin
    );
    
  }
}