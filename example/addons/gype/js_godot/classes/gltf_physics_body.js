import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFPhysicsBody");
    } else {
      super(godot_object);
    }
  }
  static init_method_from_node() {
    if (!this.#_bindings.method_from_node) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("from_node");
      this.#_bindings.method_from_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        420544174
      );
    }
  }
  static init_method_to_node() {
    if (!this.#_bindings.method_to_node) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("to_node");
      this.#_bindings.method_to_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3224013656
      );
    }
  }
  static init_method_from_dictionary() {
    if (!this.#_bindings.method_from_dictionary) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("from_dictionary");
      this.#_bindings.method_from_dictionary = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1177544336
      );
    }
  }
  static init_method_to_dictionary() {
    if (!this.#_bindings.method_to_dictionary) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("to_dictionary");
      this.#_bindings.method_to_dictionary = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3102165223
      );
    }
  }
  static init_method_get_body_type() {
    if (!this.#_bindings.method_get_body_type) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("get_body_type");
      this.#_bindings.method_get_body_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_body_type() {
    if (!this.#_bindings.method_set_body_type) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("set_body_type");
      this.#_bindings.method_set_body_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_mass() {
    if (!this.#_bindings.method_get_mass) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("get_mass");
      this.#_bindings.method_get_mass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_mass() {
    if (!this.#_bindings.method_set_mass) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("set_mass");
      this.#_bindings.method_set_mass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_linear_velocity() {
    if (!this.#_bindings.method_get_linear_velocity) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("get_linear_velocity");
      this.#_bindings.method_get_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_linear_velocity() {
    if (!this.#_bindings.method_set_linear_velocity) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("set_linear_velocity");
      this.#_bindings.method_set_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_angular_velocity() {
    if (!this.#_bindings.method_get_angular_velocity) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("get_angular_velocity");
      this.#_bindings.method_get_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_angular_velocity() {
    if (!this.#_bindings.method_set_angular_velocity) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("set_angular_velocity");
      this.#_bindings.method_set_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_center_of_mass() {
    if (!this.#_bindings.method_get_center_of_mass) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("get_center_of_mass");
      this.#_bindings.method_get_center_of_mass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_center_of_mass() {
    if (!this.#_bindings.method_set_center_of_mass) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("set_center_of_mass");
      this.#_bindings.method_set_center_of_mass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_inertia_diagonal() {
    if (!this.#_bindings.method_get_inertia_diagonal) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("get_inertia_diagonal");
      this.#_bindings.method_get_inertia_diagonal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_inertia_diagonal() {
    if (!this.#_bindings.method_set_inertia_diagonal) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("set_inertia_diagonal");
      this.#_bindings.method_set_inertia_diagonal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_inertia_orientation() {
    if (!this.#_bindings.method_get_inertia_orientation) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("get_inertia_orientation");
      this.#_bindings.method_get_inertia_orientation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1222331677
      );
    }
  }
  static init_method_set_inertia_orientation() {
    if (!this.#_bindings.method_set_inertia_orientation) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("set_inertia_orientation");
      this.#_bindings.method_set_inertia_orientation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1727505552
      );
    }
  }
  static init_method_get_inertia_tensor() {
    if (!this.#_bindings.method_get_inertia_tensor) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("get_inertia_tensor");
      this.#_bindings.method_get_inertia_tensor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2716978435
      );
    }
  }
  static init_method_set_inertia_tensor() {
    if (!this.#_bindings.method_set_inertia_tensor) {
      let classname = new StringName("GLTFPhysicsBody");
      let methodname = new StringName("set_inertia_tensor");
      this.#_bindings.method_set_inertia_tensor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1055510324
      );
    }
  }

  
  
  from_node(_body_node) {
    GLTFPhysicsBody.init_method_from_node();
    return _call_native_mb_ret(
      GLTFPhysicsBody.#_bindings.method_from_node,
      this._owner,
			Variant.Type.OBJECT,
      _body_node
    );
    
  }
  to_node() {
    GLTFPhysicsBody.init_method_to_node();
    return _call_native_mb_ret(
      GLTFPhysicsBody.#_bindings.method_to_node,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  from_dictionary(_dictionary) {
    GLTFPhysicsBody.init_method_from_dictionary();
    return _call_native_mb_ret(
      GLTFPhysicsBody.#_bindings.method_from_dictionary,
      this._owner,
			Variant.Type.OBJECT,
      _dictionary
    );
    
  }
  to_dictionary() {
    GLTFPhysicsBody.init_method_to_dictionary();
    return _call_native_mb_ret(
      GLTFPhysicsBody.#_bindings.method_to_dictionary,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  get_body_type() {
    GLTFPhysicsBody.init_method_get_body_type();
    return _call_native_mb_ret(
      GLTFPhysicsBody.#_bindings.method_get_body_type,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_body_type(_body_type) {
    GLTFPhysicsBody.init_method_set_body_type();
    return _call_native_mb_no_ret(
      GLTFPhysicsBody.#_bindings.method_set_body_type,
      this._owner,
      _body_type
    );
    
  }
  get_mass() {
    GLTFPhysicsBody.init_method_get_mass();
    return _call_native_mb_ret(
      GLTFPhysicsBody.#_bindings.method_get_mass,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_mass(_mass) {
    GLTFPhysicsBody.init_method_set_mass();
    return _call_native_mb_no_ret(
      GLTFPhysicsBody.#_bindings.method_set_mass,
      this._owner,
      _mass
    );
    
  }
  get_linear_velocity() {
    GLTFPhysicsBody.init_method_get_linear_velocity();
    return _call_native_mb_ret(
      GLTFPhysicsBody.#_bindings.method_get_linear_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_linear_velocity(_linear_velocity) {
    GLTFPhysicsBody.init_method_set_linear_velocity();
    return _call_native_mb_no_ret(
      GLTFPhysicsBody.#_bindings.method_set_linear_velocity,
      this._owner,
      _linear_velocity
    );
    
  }
  get_angular_velocity() {
    GLTFPhysicsBody.init_method_get_angular_velocity();
    return _call_native_mb_ret(
      GLTFPhysicsBody.#_bindings.method_get_angular_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_angular_velocity(_angular_velocity) {
    GLTFPhysicsBody.init_method_set_angular_velocity();
    return _call_native_mb_no_ret(
      GLTFPhysicsBody.#_bindings.method_set_angular_velocity,
      this._owner,
      _angular_velocity
    );
    
  }
  get_center_of_mass() {
    GLTFPhysicsBody.init_method_get_center_of_mass();
    return _call_native_mb_ret(
      GLTFPhysicsBody.#_bindings.method_get_center_of_mass,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_center_of_mass(_center_of_mass) {
    GLTFPhysicsBody.init_method_set_center_of_mass();
    return _call_native_mb_no_ret(
      GLTFPhysicsBody.#_bindings.method_set_center_of_mass,
      this._owner,
      _center_of_mass
    );
    
  }
  get_inertia_diagonal() {
    GLTFPhysicsBody.init_method_get_inertia_diagonal();
    return _call_native_mb_ret(
      GLTFPhysicsBody.#_bindings.method_get_inertia_diagonal,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_inertia_diagonal(_inertia_diagonal) {
    GLTFPhysicsBody.init_method_set_inertia_diagonal();
    return _call_native_mb_no_ret(
      GLTFPhysicsBody.#_bindings.method_set_inertia_diagonal,
      this._owner,
      _inertia_diagonal
    );
    
  }
  get_inertia_orientation() {
    GLTFPhysicsBody.init_method_get_inertia_orientation();
    return _call_native_mb_ret(
      GLTFPhysicsBody.#_bindings.method_get_inertia_orientation,
      this._owner,
			Variant.Type.QUATERNION,
    
      
    );
    
  }
  set_inertia_orientation(_inertia_orientation) {
    GLTFPhysicsBody.init_method_set_inertia_orientation();
    return _call_native_mb_no_ret(
      GLTFPhysicsBody.#_bindings.method_set_inertia_orientation,
      this._owner,
      _inertia_orientation
    );
    
  }
  get_inertia_tensor() {
    GLTFPhysicsBody.init_method_get_inertia_tensor();
    return _call_native_mb_ret(
      GLTFPhysicsBody.#_bindings.method_get_inertia_tensor,
      this._owner,
			Variant.Type.BASIS,
    
      
    );
    
  }
  set_inertia_tensor(_inertia_tensor) {
    GLTFPhysicsBody.init_method_set_inertia_tensor();
    return _call_native_mb_no_ret(
      GLTFPhysicsBody.#_bindings.method_set_inertia_tensor,
      this._owner,
      _inertia_tensor
    );
    
  }
  
get body_type () {
  return this.get_body_type();
}
set body_type (new_value) {
  this.set_body_type(new_value);
}
get mass () {
  return this.get_mass();
}
set mass (new_value) {
  this.set_mass(new_value);
}
get linear_velocity () {
  return this.get_linear_velocity();
}
set linear_velocity (new_value) {
  this.set_linear_velocity(new_value);
}
get angular_velocity () {
  return this.get_angular_velocity();
}
set angular_velocity (new_value) {
  this.set_angular_velocity(new_value);
}
get center_of_mass () {
  return this.get_center_of_mass();
}
set center_of_mass (new_value) {
  this.set_center_of_mass(new_value);
}
get inertia_diagonal () {
  return this.get_inertia_diagonal();
}
set inertia_diagonal (new_value) {
  this.set_inertia_diagonal(new_value);
}
get inertia_orientation () {
  return this.get_inertia_orientation();
}
set inertia_orientation (new_value) {
  this.set_inertia_orientation(new_value);
}
get inertia_tensor () {
  return this.get_inertia_tensor();
}
set inertia_tensor (new_value) {
  this.set_inertia_tensor(new_value);
}

}