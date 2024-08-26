import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
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


export class GLTFSkeleton extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFSkeleton");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("get_joints");
      this._bindings.method_get_joints = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        969006518
      );
    }
    {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("set_joints");
      this._bindings.method_set_joints = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3614634198
      );
    }
    {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("get_roots");
      this._bindings.method_get_roots = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        969006518
      );
    }
    {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("set_roots");
      this._bindings.method_set_roots = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3614634198
      );
    }
    {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("get_godot_skeleton");
      this._bindings.method_get_godot_skeleton = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1814733083
      );
    }
    {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("get_unique_names");
      this._bindings.method_get_unique_names = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2915620761
      );
    }
    {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("set_unique_names");
      this._bindings.method_set_unique_names = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("get_godot_bone_node");
      this._bindings.method_get_godot_bone_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2382534195
      );
    }
    {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("set_godot_bone_node");
      this._bindings.method_set_godot_bone_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155329257
      );
    }
    {
      let classname = new StringName("GLTFSkeleton");
      let methodname = new StringName("get_bone_attachment_count");
      this._bindings.method_get_bone_attachment_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
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
  get_godot_skeleton() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_godot_skeleton,
      this._owner,
			Variant.INT,
      
    );
  }
  get_unique_names() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_unique_names,
      this._owner,
			Variant.INT,
      
    );
  }
  set_unique_names(_unique_names) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_unique_names,
      this._owner,
      _unique_names
    );
  }
  get_godot_bone_node() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_godot_bone_node,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
  }
  set_godot_bone_node(_godot_bone_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_godot_bone_node,
      this._owner,
      _godot_bone_node
    );
  }
  get_bone_attachment_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_attachment_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_bone_attachment(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_attachment,
      this._owner,
			Variant.INT,
      _idx
    );
  }
}