import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { AnimationRootNode } from '@js_godot/classes/animation_root_node'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_add_blend_point;
  method_set_blend_point_position;
  method_get_blend_point_position;
  method_set_blend_point_node;
  method_get_blend_point_node;
  method_remove_blend_point;
  method_get_blend_point_count;
  method_add_triangle;
  method_get_triangle_point;
  method_remove_triangle;
  method_get_triangle_count;
  method_set_min_space;
  method_get_min_space;
  method_set_max_space;
  method_get_max_space;
  method_set_snap;
  method_get_snap;
  method_set_x_label;
  method_get_x_label;
  method_set_y_label;
  method_get_y_label;
  method_set_auto_triangles;
  method_get_auto_triangles;
  method_set_blend_mode;
  method_get_blend_mode;
  method_set_use_sync;
  method_is_using_sync;
}
@GodotClass
export class AnimationNodeBlendSpace2D extends AnimationRootNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationNodeBlendSpace2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_blend_point() {
    if (!this._bindings.method_add_blend_point) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("add_blend_point");
      this._bindings.method_add_blend_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        402261981
      );
    }
  }
  static init_method_set_blend_point_position() {
    if (!this._bindings.method_set_blend_point_position) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("set_blend_point_position");
      this._bindings.method_set_blend_point_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        163021252
      );
    }
  }
  static init_method_get_blend_point_position() {
    if (!this._bindings.method_get_blend_point_position) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("get_blend_point_position");
      this._bindings.method_get_blend_point_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2299179447
      );
    }
  }
  static init_method_set_blend_point_node() {
    if (!this._bindings.method_set_blend_point_node) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("set_blend_point_node");
      this._bindings.method_set_blend_point_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4240341528
      );
    }
  }
  static init_method_get_blend_point_node() {
    if (!this._bindings.method_get_blend_point_node) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("get_blend_point_node");
      this._bindings.method_get_blend_point_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        665599029
      );
    }
  }
  static init_method_remove_blend_point() {
    if (!this._bindings.method_remove_blend_point) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("remove_blend_point");
      this._bindings.method_remove_blend_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_blend_point_count() {
    if (!this._bindings.method_get_blend_point_count) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("get_blend_point_count");
      this._bindings.method_get_blend_point_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_add_triangle() {
    if (!this._bindings.method_add_triangle) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("add_triangle");
      this._bindings.method_add_triangle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        753017335
      );
    }
  }
  static init_method_get_triangle_point() {
    if (!this._bindings.method_get_triangle_point) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("get_triangle_point");
      this._bindings.method_get_triangle_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        50157827
      );
    }
  }
  static init_method_remove_triangle() {
    if (!this._bindings.method_remove_triangle) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("remove_triangle");
      this._bindings.method_remove_triangle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_triangle_count() {
    if (!this._bindings.method_get_triangle_count) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("get_triangle_count");
      this._bindings.method_get_triangle_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_min_space() {
    if (!this._bindings.method_set_min_space) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("set_min_space");
      this._bindings.method_set_min_space = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_min_space() {
    if (!this._bindings.method_get_min_space) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("get_min_space");
      this._bindings.method_get_min_space = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_max_space() {
    if (!this._bindings.method_set_max_space) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("set_max_space");
      this._bindings.method_set_max_space = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_max_space() {
    if (!this._bindings.method_get_max_space) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("get_max_space");
      this._bindings.method_get_max_space = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_snap() {
    if (!this._bindings.method_set_snap) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("set_snap");
      this._bindings.method_set_snap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_snap() {
    if (!this._bindings.method_get_snap) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("get_snap");
      this._bindings.method_get_snap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_x_label() {
    if (!this._bindings.method_set_x_label) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("set_x_label");
      this._bindings.method_set_x_label = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_x_label() {
    if (!this._bindings.method_get_x_label) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("get_x_label");
      this._bindings.method_get_x_label = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_y_label() {
    if (!this._bindings.method_set_y_label) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("set_y_label");
      this._bindings.method_set_y_label = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_y_label() {
    if (!this._bindings.method_get_y_label) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("get_y_label");
      this._bindings.method_get_y_label = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_auto_triangles() {
    if (!this._bindings.method_set_auto_triangles) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("set_auto_triangles");
      this._bindings.method_set_auto_triangles = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_auto_triangles() {
    if (!this._bindings.method_get_auto_triangles) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("get_auto_triangles");
      this._bindings.method_get_auto_triangles = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_blend_mode() {
    if (!this._bindings.method_set_blend_mode) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("set_blend_mode");
      this._bindings.method_set_blend_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        81193520
      );
    }
  }
  static init_method_get_blend_mode() {
    if (!this._bindings.method_get_blend_mode) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("get_blend_mode");
      this._bindings.method_get_blend_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1398433632
      );
    }
  }
  static init_method_set_use_sync() {
    if (!this._bindings.method_set_use_sync) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("set_use_sync");
      this._bindings.method_set_use_sync = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_sync() {
    if (!this._bindings.method_is_using_sync) {
      let classname = new StringName("AnimationNodeBlendSpace2D");
      let methodname = new StringName("is_using_sync");
      this._bindings.method_is_using_sync = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  add_blend_point(_node, _pos, _at_index) {
    AnimationNodeBlendSpace2D.init_method_add_blend_point();
    return _call_native_mb_no_ret(
      AnimationNodeBlendSpace2D._bindings.method_add_blend_point,
      this._owner,
      _node, _pos, _at_index
    );
    
  }
  set_blend_point_position(_point, _pos) {
    AnimationNodeBlendSpace2D.init_method_set_blend_point_position();
    return _call_native_mb_no_ret(
      AnimationNodeBlendSpace2D._bindings.method_set_blend_point_position,
      this._owner,
      _point, _pos
    );
    
  }
  get_blend_point_position(_point) {
    AnimationNodeBlendSpace2D.init_method_get_blend_point_position();
    return _call_native_mb_ret(
      AnimationNodeBlendSpace2D._bindings.method_get_blend_point_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _point
    );
    
  }
  set_blend_point_node(_point, _node) {
    AnimationNodeBlendSpace2D.init_method_set_blend_point_node();
    return _call_native_mb_no_ret(
      AnimationNodeBlendSpace2D._bindings.method_set_blend_point_node,
      this._owner,
      _point, _node
    );
    
  }
  get_blend_point_node(_point) {
    AnimationNodeBlendSpace2D.init_method_get_blend_point_node();
    return _call_native_mb_ret(
      AnimationNodeBlendSpace2D._bindings.method_get_blend_point_node,
      this._owner,
			Variant.Type.OBJECT,
      _point
    );
    
  }
  remove_blend_point(_point) {
    AnimationNodeBlendSpace2D.init_method_remove_blend_point();
    return _call_native_mb_no_ret(
      AnimationNodeBlendSpace2D._bindings.method_remove_blend_point,
      this._owner,
      _point
    );
    
  }
  get_blend_point_count() {
    AnimationNodeBlendSpace2D.init_method_get_blend_point_count();
    return _call_native_mb_ret(
      AnimationNodeBlendSpace2D._bindings.method_get_blend_point_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  add_triangle(_x, _y, _z, _at_index) {
    AnimationNodeBlendSpace2D.init_method_add_triangle();
    return _call_native_mb_no_ret(
      AnimationNodeBlendSpace2D._bindings.method_add_triangle,
      this._owner,
      _x, _y, _z, _at_index
    );
    
  }
  get_triangle_point(_triangle, _point) {
    AnimationNodeBlendSpace2D.init_method_get_triangle_point();
    return _call_native_mb_ret(
      AnimationNodeBlendSpace2D._bindings.method_get_triangle_point,
      this._owner,
			Variant.Type.INT,
    
      _triangle, _point
    );
    
  }
  remove_triangle(_triangle) {
    AnimationNodeBlendSpace2D.init_method_remove_triangle();
    return _call_native_mb_no_ret(
      AnimationNodeBlendSpace2D._bindings.method_remove_triangle,
      this._owner,
      _triangle
    );
    
  }
  get_triangle_count() {
    AnimationNodeBlendSpace2D.init_method_get_triangle_count();
    return _call_native_mb_ret(
      AnimationNodeBlendSpace2D._bindings.method_get_triangle_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_min_space(_min_space) {
    AnimationNodeBlendSpace2D.init_method_set_min_space();
    return _call_native_mb_no_ret(
      AnimationNodeBlendSpace2D._bindings.method_set_min_space,
      this._owner,
      _min_space
    );
    
  }
  get_min_space() {
    AnimationNodeBlendSpace2D.init_method_get_min_space();
    return _call_native_mb_ret(
      AnimationNodeBlendSpace2D._bindings.method_get_min_space,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_max_space(_max_space) {
    AnimationNodeBlendSpace2D.init_method_set_max_space();
    return _call_native_mb_no_ret(
      AnimationNodeBlendSpace2D._bindings.method_set_max_space,
      this._owner,
      _max_space
    );
    
  }
  get_max_space() {
    AnimationNodeBlendSpace2D.init_method_get_max_space();
    return _call_native_mb_ret(
      AnimationNodeBlendSpace2D._bindings.method_get_max_space,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_snap(_snap) {
    AnimationNodeBlendSpace2D.init_method_set_snap();
    return _call_native_mb_no_ret(
      AnimationNodeBlendSpace2D._bindings.method_set_snap,
      this._owner,
      _snap
    );
    
  }
  get_snap() {
    AnimationNodeBlendSpace2D.init_method_get_snap();
    return _call_native_mb_ret(
      AnimationNodeBlendSpace2D._bindings.method_get_snap,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_x_label(_text) {
    AnimationNodeBlendSpace2D.init_method_set_x_label();
    return _call_native_mb_no_ret(
      AnimationNodeBlendSpace2D._bindings.method_set_x_label,
      this._owner,
      _text
    );
    
  }
  get_x_label() {
    AnimationNodeBlendSpace2D.init_method_get_x_label();
    return _call_native_mb_ret(
      AnimationNodeBlendSpace2D._bindings.method_get_x_label,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_y_label(_text) {
    AnimationNodeBlendSpace2D.init_method_set_y_label();
    return _call_native_mb_no_ret(
      AnimationNodeBlendSpace2D._bindings.method_set_y_label,
      this._owner,
      _text
    );
    
  }
  get_y_label() {
    AnimationNodeBlendSpace2D.init_method_get_y_label();
    return _call_native_mb_ret(
      AnimationNodeBlendSpace2D._bindings.method_get_y_label,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_auto_triangles(_enable) {
    AnimationNodeBlendSpace2D.init_method_set_auto_triangles();
    return _call_native_mb_no_ret(
      AnimationNodeBlendSpace2D._bindings.method_set_auto_triangles,
      this._owner,
      _enable
    );
    
  }
  get_auto_triangles() {
    AnimationNodeBlendSpace2D.init_method_get_auto_triangles();
    return _call_native_mb_ret(
      AnimationNodeBlendSpace2D._bindings.method_get_auto_triangles,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_blend_mode(_mode) {
    AnimationNodeBlendSpace2D.init_method_set_blend_mode();
    return _call_native_mb_no_ret(
      AnimationNodeBlendSpace2D._bindings.method_set_blend_mode,
      this._owner,
      _mode
    );
    
  }
  get_blend_mode() {
    AnimationNodeBlendSpace2D.init_method_get_blend_mode();
    return _call_native_mb_ret(
      AnimationNodeBlendSpace2D._bindings.method_get_blend_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_use_sync(_enable) {
    AnimationNodeBlendSpace2D.init_method_set_use_sync();
    return _call_native_mb_no_ret(
      AnimationNodeBlendSpace2D._bindings.method_set_use_sync,
      this._owner,
      _enable
    );
    
  }
  is_using_sync() {
    AnimationNodeBlendSpace2D.init_method_is_using_sync();
    return _call_native_mb_ret(
      AnimationNodeBlendSpace2D._bindings.method_is_using_sync,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get auto_triangles () {
  return this.get_auto_triangles();
}
set auto_triangles (new_value) {
  this.set_auto_triangles(new_value);
}
get triangles () {
  return this._get_triangles();
}
set triangles (new_value) {
  this._set_triangles(new_value);
}
get min_space () {
  return this.get_min_space();
}
set min_space (new_value) {
  this.set_min_space(new_value);
}
get max_space () {
  return this.get_max_space();
}
set max_space (new_value) {
  this.set_max_space(new_value);
}
get snap () {
  return this.get_snap();
}
set snap (new_value) {
  this.set_snap(new_value);
}
get x_label () {
  return this.get_x_label();
}
set x_label (new_value) {
  this.set_x_label(new_value);
}
get y_label () {
  return this.get_y_label();
}
set y_label (new_value) {
  this.set_y_label(new_value);
}
get blend_mode () {
  return this.get_blend_mode();
}
set blend_mode (new_value) {
  this.set_blend_mode(new_value);
}
get sync () {
  return this.is_using_sync();
}
set sync (new_value) {
  this.set_use_sync(new_value);
}

  static BlendMode = {
    BLEND_MODE_INTERPOLATED: 0,
    BLEND_MODE_DISCRETE: 1,
    BLEND_MODE_DISCRETE_CARRY: 2,
  }
}