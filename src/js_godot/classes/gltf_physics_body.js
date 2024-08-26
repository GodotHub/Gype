import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Basis } from 'src/js_godot/variant/basis'
import { Resource } from 'src/js_godot/classesresource'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { Quaternion } from 'src/js_godot/variant/quaternion'
class _MethodBindings {
    method_from_node;
    method_to_node;
    method_from_dictionary;
    method_to_dictionary;
    method_get_body_type;
    method_set_body_type;
    method_get_mass;
    method_set_mass;
    method_get_linear_velocity;
    method_set_linear_velocity;
    method_get_angular_velocity;
    method_set_angular_velocity;
    method_get_center_of_mass;
    method_set_center_of_mass;
    method_get_inertia_diagonal;
    method_set_inertia_diagonal;
    method_get_inertia_orientation;
    method_set_inertia_orientation;
    method_get_inertia_tensor;
    method_set_inertia_tensor;
}


export class GLTFPhysicsBody extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFPhysicsBody");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("from_node");
      this._bindings.method_from_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        420544174
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("to_node");
      this._bindings.method_to_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3224013656
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("from_dictionary");
      this._bindings.method_from_dictionary = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1177544336
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("to_dictionary");
      this._bindings.method_to_dictionary = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3102165223
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("get_body_type");
      this._bindings.method_get_body_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("set_body_type");
      this._bindings.method_set_body_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("get_mass");
      this._bindings.method_get_mass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("set_mass");
      this._bindings.method_set_mass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("get_linear_velocity");
      this._bindings.method_get_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("set_linear_velocity");
      this._bindings.method_set_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("get_angular_velocity");
      this._bindings.method_get_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("set_angular_velocity");
      this._bindings.method_set_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("get_center_of_mass");
      this._bindings.method_get_center_of_mass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("set_center_of_mass");
      this._bindings.method_set_center_of_mass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("get_inertia_diagonal");
      this._bindings.method_get_inertia_diagonal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("set_inertia_diagonal");
      this._bindings.method_set_inertia_diagonal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("get_inertia_orientation");
      this._bindings.method_get_inertia_orientation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1222331677
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("set_inertia_orientation");
      this._bindings.method_set_inertia_orientation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1727505552
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("get_inertia_tensor");
      this._bindings.method_get_inertia_tensor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2716978435
      );
    }
    {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("set_inertia_tensor");
      this._bindings.method_set_inertia_tensor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1055510324
      );
    }
  }
  from_node(_body_node) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_from_node,
      this._owner,
			Variant.INT,
      _body_node
    );
  }
  to_node() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_to_node,
      this._owner,
			Variant.INT,
      
    );
  }
  from_dictionary(_dictionary) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_from_dictionary,
      this._owner,
			Variant.INT,
      _dictionary
    );
  }
  to_dictionary() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_to_dictionary,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
  }
  get_body_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_body_type,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_body_type(_body_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_body_type,
      this._owner,
      _body_type
    );
  }
  get_mass() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mass,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_mass(_mass) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mass,
      this._owner,
      _mass
    );
  }
  get_linear_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_linear_velocity,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_linear_velocity(_linear_velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_linear_velocity,
      this._owner,
      _linear_velocity
    );
  }
  get_angular_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_angular_velocity,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_angular_velocity(_angular_velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_angular_velocity,
      this._owner,
      _angular_velocity
    );
  }
  get_center_of_mass() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_center_of_mass,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_center_of_mass(_center_of_mass) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_center_of_mass,
      this._owner,
      _center_of_mass
    );
  }
  get_inertia_diagonal() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_inertia_diagonal,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_inertia_diagonal(_inertia_diagonal) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_inertia_diagonal,
      this._owner,
      _inertia_diagonal
    );
  }
  get_inertia_orientation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_inertia_orientation,
      this._owner,
			Variant.Type.QUATERNION
    ,
      
    );
  }
  set_inertia_orientation(_inertia_orientation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_inertia_orientation,
      this._owner,
      _inertia_orientation
    );
  }
  get_inertia_tensor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_inertia_tensor,
      this._owner,
			Variant.Type.BASIS
    ,
      
    );
  }
  set_inertia_tensor(_inertia_tensor) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_inertia_tensor,
      this._owner,
      _inertia_tensor
    );
  }
}