import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { Resource } from 'src/js_godot/classes/resource'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_root_bone;
    method_get_root_bone;
    method_set_scale_base_bone;
    method_get_scale_base_bone;
    method_set_group_size;
    method_get_group_size;
    method_get_group_name;
    method_set_group_name;
    method_get_texture;
    method_set_texture;
    method_set_bone_size;
    method_get_bone_size;
    method_find_bone;
    method_get_bone_name;
    method_set_bone_name;
    method_get_bone_parent;
    method_set_bone_parent;
    method_get_tail_direction;
    method_set_tail_direction;
    method_get_bone_tail;
    method_set_bone_tail;
    method_get_reference_pose;
    method_set_reference_pose;
    method_get_handle_offset;
    method_set_handle_offset;
    method_get_group;
    method_set_group;
    method_is_required;
    method_set_required;
}


export class SkeletonProfile extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonProfile");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("set_root_bone");
        this._bindings.method_set_root_bone = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3304788590
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("get_root_bone");
        this._bindings.method_get_root_bone = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2737447660
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("set_scale_base_bone");
        this._bindings.method_set_scale_base_bone = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3304788590
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("get_scale_base_bone");
        this._bindings.method_get_scale_base_bone = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2737447660
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("set_group_size");
        this._bindings.method_set_group_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("get_group_size");
        this._bindings.method_get_group_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("get_group_name");
        this._bindings.method_get_group_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          659327637
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("set_group_name");
        this._bindings.method_set_group_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3780747571
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("get_texture");
        this._bindings.method_get_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3536238170
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("set_texture");
        this._bindings.method_set_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          666127730
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("set_bone_size");
        this._bindings.method_set_bone_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("get_bone_size");
        this._bindings.method_get_bone_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("find_bone");
        this._bindings.method_find_bone = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2458036349
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("get_bone_name");
        this._bindings.method_get_bone_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          659327637
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("set_bone_name");
        this._bindings.method_set_bone_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3780747571
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("get_bone_parent");
        this._bindings.method_get_bone_parent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          659327637
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("set_bone_parent");
        this._bindings.method_set_bone_parent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3780747571
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("get_tail_direction");
        this._bindings.method_get_tail_direction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2675997574
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("set_tail_direction");
        this._bindings.method_set_tail_direction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1231951015
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("get_bone_tail");
        this._bindings.method_get_bone_tail = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          659327637
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("set_bone_tail");
        this._bindings.method_set_bone_tail = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3780747571
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("get_reference_pose");
        this._bindings.method_get_reference_pose = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1965739696
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("set_reference_pose");
        this._bindings.method_set_reference_pose = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3616898986
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("get_handle_offset");
        this._bindings.method_get_handle_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2299179447
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("set_handle_offset");
        this._bindings.method_set_handle_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          163021252
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("get_group");
        this._bindings.method_get_group = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          659327637
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("set_group");
        this._bindings.method_set_group = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3780747571
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("is_required");
        this._bindings.method_is_required = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("SkeletonProfile");
        let methodname = new StringName("set_required");
        this._bindings.method_set_required = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
  }
  set_root_bone(_bone_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_root_bone,
      this._owner,
      _bone_name
    );
    
  }
  get_root_bone() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_root_bone,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
    
  }
  set_scale_base_bone(_bone_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scale_base_bone,
      this._owner,
      _bone_name
    );
    
  }
  get_scale_base_bone() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scale_base_bone,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
    
  }
  set_group_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_group_size,
      this._owner,
      _size
    );
    
  }
  get_group_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_group_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_group_name(_group_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_group_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _group_idx
    );
    
  }
  set_group_name(_group_idx, _group_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_group_name,
      this._owner,
      _group_idx, _group_name
    );
    
  }
  get_texture(_group_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture,
      this._owner,
			Variant.INT,
      _group_idx
    );
    
  }
  set_texture(_group_idx, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture,
      this._owner,
      _group_idx, _texture
    );
    
  }
  set_bone_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_size,
      this._owner,
      _size
    );
    
  }
  get_bone_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  find_bone(_bone_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_find_bone,
      this._owner,
			Variant.Type.INT,
      _bone_name
    );
    
  }
  get_bone_name(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _bone_idx
    );
    
  }
  set_bone_name(_bone_idx, _bone_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_name,
      this._owner,
      _bone_idx, _bone_name
    );
    
  }
  get_bone_parent(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_parent,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _bone_idx
    );
    
  }
  set_bone_parent(_bone_idx, _bone_parent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_parent,
      this._owner,
      _bone_idx, _bone_parent
    );
    
  }
  get_tail_direction(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tail_direction,
      this._owner,
			Variant.INT,
      _bone_idx
    );
    
  }
  set_tail_direction(_bone_idx, _tail_direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tail_direction,
      this._owner,
      _bone_idx, _tail_direction
    );
    
  }
  get_bone_tail(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_tail,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _bone_idx
    );
    
  }
  set_bone_tail(_bone_idx, _bone_tail) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_tail,
      this._owner,
      _bone_idx, _bone_tail
    );
    
  }
  get_reference_pose(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_reference_pose,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _bone_idx
    );
    
  }
  set_reference_pose(_bone_idx, _bone_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_reference_pose,
      this._owner,
      _bone_idx, _bone_name
    );
    
  }
  get_handle_offset(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_handle_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _bone_idx
    );
    
  }
  set_handle_offset(_bone_idx, _handle_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_handle_offset,
      this._owner,
      _bone_idx, _handle_offset
    );
    
  }
  get_group(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_group,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _bone_idx
    );
    
  }
  set_group(_bone_idx, _group) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_group,
      this._owner,
      _bone_idx, _group
    );
    
  }
  is_required(_bone_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_required,
      this._owner,
			Variant.Type.BOOL,
      _bone_idx
    );
    
  }
  set_required(_bone_idx, _required) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_required,
      this._owner,
      _bone_idx, _required
    );
    
  }
  static TailDirection = {
    TAIL_DIRECTION_AVERAGE_CHILDREN: 0,
    TAIL_DIRECTION_SPECIFIC_CHILD: 1,
    TAIL_DIRECTION_END: 2,
  }
}