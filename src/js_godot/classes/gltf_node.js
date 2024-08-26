import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { Variant } from 'src/js_godot/variant/variant'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { StringName } from 'src/js_godot/variant/string_name'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { Resource } from 'src/js_godot/classesresource'
import { Quaternion } from 'src/js_godot/variant/quaternion'
class _MethodBindings {
    method_get_original_name;
    method_set_original_name;
    method_get_parent;
    method_set_parent;
    method_get_height;
    method_set_height;
    method_get_xform;
    method_set_xform;
    method_get_mesh;
    method_set_mesh;
    method_get_camera;
    method_set_camera;
    method_get_skin;
    method_set_skin;
    method_get_skeleton;
    method_set_skeleton;
    method_get_position;
    method_set_position;
    method_get_rotation;
    method_set_rotation;
    method_get_scale;
    method_set_scale;
    method_get_children;
    method_set_children;
    method_get_light;
    method_set_light;
    method_get_additional_data;
    method_set_additional_data;
}


export class GLTFNode extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFNode");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_original_name");
      this._bindings.method_get_original_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2841200299
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_original_name");
      this._bindings.method_set_original_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_parent");
      this._bindings.method_get_parent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_parent");
      this._bindings.method_set_parent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_height");
      this._bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_height");
      this._bindings.method_set_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_xform");
      this._bindings.method_get_xform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4183770049
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_xform");
      this._bindings.method_set_xform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2952846383
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_mesh");
      this._bindings.method_get_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_mesh");
      this._bindings.method_set_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_camera");
      this._bindings.method_get_camera = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_camera");
      this._bindings.method_set_camera = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_skin");
      this._bindings.method_get_skin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_skin");
      this._bindings.method_set_skin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_skeleton");
      this._bindings.method_get_skeleton = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_skeleton");
      this._bindings.method_set_skeleton = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3783033775
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_position");
      this._bindings.method_set_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_rotation");
      this._bindings.method_get_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2916281908
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_rotation");
      this._bindings.method_set_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1727505552
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_scale");
      this._bindings.method_get_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3783033775
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_scale");
      this._bindings.method_set_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_children");
      this._bindings.method_get_children = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        969006518
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_children");
      this._bindings.method_set_children = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3614634198
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_light");
      this._bindings.method_get_light = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_light");
      this._bindings.method_set_light = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_additional_data");
      this._bindings.method_get_additional_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2138907829
      );
    }
    {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_additional_data");
      this._bindings.method_set_additional_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3776071444
      );
    }
  }
  get_original_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_original_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_original_name(_original_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_original_name,
      this._owner,
      _original_name
    );
  }
  get_parent() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_parent,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_parent(_parent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_parent,
      this._owner,
      _parent
    );
  }
  get_height() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_height,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_height(_height) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_height,
      this._owner,
      _height
    );
  }
  get_xform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_xform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      
    );
  }
  set_xform(_xform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_xform,
      this._owner,
      _xform
    );
  }
  get_mesh() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mesh,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_mesh(_mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mesh,
      this._owner,
      _mesh
    );
  }
  get_camera() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_camera,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_camera(_camera) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_camera,
      this._owner,
      _camera
    );
  }
  get_skin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_skin,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_skin(_skin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_skin,
      this._owner,
      _skin
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
  get_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_position,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_position(_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_position,
      this._owner,
      _position
    );
  }
  get_rotation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rotation,
      this._owner,
			Variant.Type.QUATERNION
    ,
      
    );
  }
  set_rotation(_rotation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rotation,
      this._owner,
      _rotation
    );
  }
  get_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scale,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_scale(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scale,
      this._owner,
      _scale
    );
  }
  get_children() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_children,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
  }
  set_children(_children) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_children,
      this._owner,
      _children
    );
  }
  get_light() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_light,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_light(_light) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_light,
      this._owner,
      _light
    );
  }
  get_additional_data(_extension_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_additional_data,
      this._owner,
			Variant.Type.VARIANT
    ,
      _extension_name
    );
  }
  set_additional_data(_extension_name, _additional_data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_additional_data,
      this._owner,
      _extension_name, _additional_data
    );
  }
}