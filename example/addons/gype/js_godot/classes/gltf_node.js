import * as internal from '__internal__';
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
@GodotClass
export class GLTFNode extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFNode");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_original_name() {
    if (!this._bindings.method_get_original_name) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_original_name");
      this._bindings.method_get_original_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2841200299
      );
    }
  }
  static init_method_set_original_name() {
    if (!this._bindings.method_set_original_name) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_original_name");
      this._bindings.method_set_original_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_parent() {
    if (!this._bindings.method_get_parent) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_parent");
      this._bindings.method_get_parent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_parent() {
    if (!this._bindings.method_set_parent) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_parent");
      this._bindings.method_set_parent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_height() {
    if (!this._bindings.method_get_height) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_height");
      this._bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_height() {
    if (!this._bindings.method_set_height) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_height");
      this._bindings.method_set_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_xform() {
    if (!this._bindings.method_get_xform) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_xform");
      this._bindings.method_get_xform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4183770049
      );
    }
  }
  static init_method_set_xform() {
    if (!this._bindings.method_set_xform) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_xform");
      this._bindings.method_set_xform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2952846383
      );
    }
  }
  static init_method_get_mesh() {
    if (!this._bindings.method_get_mesh) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_mesh");
      this._bindings.method_get_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_mesh() {
    if (!this._bindings.method_set_mesh) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_mesh");
      this._bindings.method_set_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_camera() {
    if (!this._bindings.method_get_camera) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_camera");
      this._bindings.method_get_camera = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_camera() {
    if (!this._bindings.method_set_camera) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_camera");
      this._bindings.method_set_camera = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_skin() {
    if (!this._bindings.method_get_skin) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_skin");
      this._bindings.method_get_skin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_skin() {
    if (!this._bindings.method_set_skin) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_skin");
      this._bindings.method_set_skin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_skeleton() {
    if (!this._bindings.method_get_skeleton) {
      let classname = new StringName("GLTFNode");
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
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_skeleton");
      this._bindings.method_set_skeleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_position() {
    if (!this._bindings.method_get_position) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3783033775
      );
    }
  }
  static init_method_set_position() {
    if (!this._bindings.method_set_position) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_position");
      this._bindings.method_set_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_rotation() {
    if (!this._bindings.method_get_rotation) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_rotation");
      this._bindings.method_get_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2916281908
      );
    }
  }
  static init_method_set_rotation() {
    if (!this._bindings.method_set_rotation) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_rotation");
      this._bindings.method_set_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1727505552
      );
    }
  }
  static init_method_get_scale() {
    if (!this._bindings.method_get_scale) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_scale");
      this._bindings.method_get_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3783033775
      );
    }
  }
  static init_method_set_scale() {
    if (!this._bindings.method_set_scale) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_scale");
      this._bindings.method_set_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_children() {
    if (!this._bindings.method_get_children) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_children");
      this._bindings.method_get_children = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        969006518
      );
    }
  }
  static init_method_set_children() {
    if (!this._bindings.method_set_children) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_children");
      this._bindings.method_set_children = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3614634198
      );
    }
  }
  static init_method_get_light() {
    if (!this._bindings.method_get_light) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_light");
      this._bindings.method_get_light = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_light() {
    if (!this._bindings.method_set_light) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("set_light");
      this._bindings.method_set_light = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_additional_data() {
    if (!this._bindings.method_get_additional_data) {
      let classname = new StringName("GLTFNode");
      let methodname = new StringName("get_additional_data");
      this._bindings.method_get_additional_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2138907829
      );
    }
  }
  static init_method_set_additional_data() {
    if (!this._bindings.method_set_additional_data) {
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
    GLTFNode.init_method_get_original_name();
    return _call_native_mb_ret(
      GLTFNode._bindings.method_get_original_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_original_name(_original_name) {
    GLTFNode.init_method_set_original_name();
    return _call_native_mb_no_ret(
      GLTFNode._bindings.method_set_original_name,
      this._owner,
      _original_name
    );
    
  }
  get_parent() {
    GLTFNode.init_method_get_parent();
    return _call_native_mb_ret(
      GLTFNode._bindings.method_get_parent,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_parent(_parent) {
    GLTFNode.init_method_set_parent();
    return _call_native_mb_no_ret(
      GLTFNode._bindings.method_set_parent,
      this._owner,
      _parent
    );
    
  }
  get_height() {
    GLTFNode.init_method_get_height();
    return _call_native_mb_ret(
      GLTFNode._bindings.method_get_height,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_height(_height) {
    GLTFNode.init_method_set_height();
    return _call_native_mb_no_ret(
      GLTFNode._bindings.method_set_height,
      this._owner,
      _height
    );
    
  }
  get_xform() {
    GLTFNode.init_method_get_xform();
    return _call_native_mb_ret(
      GLTFNode._bindings.method_get_xform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  set_xform(_xform) {
    GLTFNode.init_method_set_xform();
    return _call_native_mb_no_ret(
      GLTFNode._bindings.method_set_xform,
      this._owner,
      _xform
    );
    
  }
  get_mesh() {
    GLTFNode.init_method_get_mesh();
    return _call_native_mb_ret(
      GLTFNode._bindings.method_get_mesh,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_mesh(_mesh) {
    GLTFNode.init_method_set_mesh();
    return _call_native_mb_no_ret(
      GLTFNode._bindings.method_set_mesh,
      this._owner,
      _mesh
    );
    
  }
  get_camera() {
    GLTFNode.init_method_get_camera();
    return _call_native_mb_ret(
      GLTFNode._bindings.method_get_camera,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_camera(_camera) {
    GLTFNode.init_method_set_camera();
    return _call_native_mb_no_ret(
      GLTFNode._bindings.method_set_camera,
      this._owner,
      _camera
    );
    
  }
  get_skin() {
    GLTFNode.init_method_get_skin();
    return _call_native_mb_ret(
      GLTFNode._bindings.method_get_skin,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_skin(_skin) {
    GLTFNode.init_method_set_skin();
    return _call_native_mb_no_ret(
      GLTFNode._bindings.method_set_skin,
      this._owner,
      _skin
    );
    
  }
  get_skeleton() {
    GLTFNode.init_method_get_skeleton();
    return _call_native_mb_ret(
      GLTFNode._bindings.method_get_skeleton,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_skeleton(_skeleton) {
    GLTFNode.init_method_set_skeleton();
    return _call_native_mb_no_ret(
      GLTFNode._bindings.method_set_skeleton,
      this._owner,
      _skeleton
    );
    
  }
  get_position() {
    GLTFNode.init_method_get_position();
    return _call_native_mb_ret(
      GLTFNode._bindings.method_get_position,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_position(_position) {
    GLTFNode.init_method_set_position();
    return _call_native_mb_no_ret(
      GLTFNode._bindings.method_set_position,
      this._owner,
      _position
    );
    
  }
  get_rotation() {
    GLTFNode.init_method_get_rotation();
    return _call_native_mb_ret(
      GLTFNode._bindings.method_get_rotation,
      this._owner,
			Variant.Type.QUATERNION,
    
      
    );
    
  }
  set_rotation(_rotation) {
    GLTFNode.init_method_set_rotation();
    return _call_native_mb_no_ret(
      GLTFNode._bindings.method_set_rotation,
      this._owner,
      _rotation
    );
    
  }
  get_scale() {
    GLTFNode.init_method_get_scale();
    return _call_native_mb_ret(
      GLTFNode._bindings.method_get_scale,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_scale(_scale) {
    GLTFNode.init_method_set_scale();
    return _call_native_mb_no_ret(
      GLTFNode._bindings.method_set_scale,
      this._owner,
      _scale
    );
    
  }
  get_children() {
    GLTFNode.init_method_get_children();
    return _call_native_mb_ret(
      GLTFNode._bindings.method_get_children,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_children(_children) {
    GLTFNode.init_method_set_children();
    return _call_native_mb_no_ret(
      GLTFNode._bindings.method_set_children,
      this._owner,
      _children
    );
    
  }
  get_light() {
    GLTFNode.init_method_get_light();
    return _call_native_mb_ret(
      GLTFNode._bindings.method_get_light,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_light(_light) {
    GLTFNode.init_method_set_light();
    return _call_native_mb_no_ret(
      GLTFNode._bindings.method_set_light,
      this._owner,
      _light
    );
    
  }
  get_additional_data(_extension_name) {
    GLTFNode.init_method_get_additional_data();
    return _call_native_mb_ret(
      GLTFNode._bindings.method_get_additional_data,
      this._owner,
			Variant.Type.VARIANT,
    
      _extension_name
    );
    
  }
  set_additional_data(_extension_name, _additional_data) {
    GLTFNode.init_method_set_additional_data();
    return _call_native_mb_no_ret(
      GLTFNode._bindings.method_set_additional_data,
      this._owner,
      _extension_name, _additional_data
    );
    
  }
  
get original_name () {
  return this.get_original_name();
}
set original_name (new_value) {
  this.set_original_name(new_value);
}
get parent () {
  return this.get_parent();
}
set parent (new_value) {
  this.set_parent(new_value);
}
get height () {
  return this.get_height();
}
set height (new_value) {
  this.set_height(new_value);
}
get xform () {
  return this.get_xform();
}
set xform (new_value) {
  this.set_xform(new_value);
}
get mesh () {
  return this.get_mesh();
}
set mesh (new_value) {
  this.set_mesh(new_value);
}
get camera () {
  return this.get_camera();
}
set camera (new_value) {
  this.set_camera(new_value);
}
get skin () {
  return this.get_skin();
}
set skin (new_value) {
  this.set_skin(new_value);
}
get skeleton () {
  return this.get_skeleton();
}
set skeleton (new_value) {
  this.set_skeleton(new_value);
}
get position () {
  return this.get_position();
}
set position (new_value) {
  this.set_position(new_value);
}
get rotation () {
  return this.get_rotation();
}
set rotation (new_value) {
  this.set_rotation(new_value);
}
get scale () {
  return this.get_scale();
}
set scale (new_value) {
  this.set_scale(new_value);
}
get children () {
  return this.get_children();
}
set children (new_value) {
  this.set_children(new_value);
}
get light () {
  return this.get_light();
}
set light (new_value) {
  this.set_light(new_value);
}

}