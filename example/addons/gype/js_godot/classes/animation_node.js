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
  method_add_input;
  method_remove_input;
  method_set_input_name;
  method_get_input_name;
  method_get_input_count;
  method_find_input;
  method_set_filter_path;
  method_is_path_filtered;
  method_set_filter_enabled;
  method_is_filter_enabled;
  method_blend_animation;
  method_blend_node;
  method_blend_input;
  method_set_parameter;
  method_get_parameter;
}
@GodotClass
export class AnimationNode extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationNode");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_input() {
    if (!this._bindings.method_add_input) {
      let classname = new StringName("AnimationNode");
      let methodname = new StringName("add_input");
      this._bindings.method_add_input = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2323990056
      );
    }
  }
  static init_method_remove_input() {
    if (!this._bindings.method_remove_input) {
      let classname = new StringName("AnimationNode");
      let methodname = new StringName("remove_input");
      this._bindings.method_remove_input = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_input_name() {
    if (!this._bindings.method_set_input_name) {
      let classname = new StringName("AnimationNode");
      let methodname = new StringName("set_input_name");
      this._bindings.method_set_input_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        215573526
      );
    }
  }
  static init_method_get_input_name() {
    if (!this._bindings.method_get_input_name) {
      let classname = new StringName("AnimationNode");
      let methodname = new StringName("get_input_name");
      this._bindings.method_get_input_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_input_count() {
    if (!this._bindings.method_get_input_count) {
      let classname = new StringName("AnimationNode");
      let methodname = new StringName("get_input_count");
      this._bindings.method_get_input_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_find_input() {
    if (!this._bindings.method_find_input) {
      let classname = new StringName("AnimationNode");
      let methodname = new StringName("find_input");
      this._bindings.method_find_input = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1321353865
      );
    }
  }
  static init_method_set_filter_path() {
    if (!this._bindings.method_set_filter_path) {
      let classname = new StringName("AnimationNode");
      let methodname = new StringName("set_filter_path");
      this._bindings.method_set_filter_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3868023870
      );
    }
  }
  static init_method_is_path_filtered() {
    if (!this._bindings.method_is_path_filtered) {
      let classname = new StringName("AnimationNode");
      let methodname = new StringName("is_path_filtered");
      this._bindings.method_is_path_filtered = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        861721659
      );
    }
  }
  static init_method_set_filter_enabled() {
    if (!this._bindings.method_set_filter_enabled) {
      let classname = new StringName("AnimationNode");
      let methodname = new StringName("set_filter_enabled");
      this._bindings.method_set_filter_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_filter_enabled() {
    if (!this._bindings.method_is_filter_enabled) {
      let classname = new StringName("AnimationNode");
      let methodname = new StringName("is_filter_enabled");
      this._bindings.method_is_filter_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_blend_animation() {
    if (!this._bindings.method_blend_animation) {
      let classname = new StringName("AnimationNode");
      let methodname = new StringName("blend_animation");
      this._bindings.method_blend_animation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1630801826
      );
    }
  }
  static init_method_blend_node() {
    if (!this._bindings.method_blend_node) {
      let classname = new StringName("AnimationNode");
      let methodname = new StringName("blend_node");
      this._bindings.method_blend_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1746075988
      );
    }
  }
  static init_method_blend_input() {
    if (!this._bindings.method_blend_input) {
      let classname = new StringName("AnimationNode");
      let methodname = new StringName("blend_input");
      this._bindings.method_blend_input = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1361527350
      );
    }
  }
  static init_method_set_parameter() {
    if (!this._bindings.method_set_parameter) {
      let classname = new StringName("AnimationNode");
      let methodname = new StringName("set_parameter");
      this._bindings.method_set_parameter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3776071444
      );
    }
  }
  static init_method_get_parameter() {
    if (!this._bindings.method_get_parameter) {
      let classname = new StringName("AnimationNode");
      let methodname = new StringName("get_parameter");
      this._bindings.method_get_parameter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2760726917
      );
    }
  }

  
  
  _get_child_nodes() {
  }
  _get_parameter_list() {
  }
  _get_child_by_name(_name) {
  }
  _get_parameter_default_value(_parameter) {
  }
  _is_parameter_read_only(_parameter) {
  }
  _process(_time, _seek, _is_external_seeking, _test_only) {
  }
  _get_caption() {
  }
  _has_filter() {
  }
  add_input(_name) {
    AnimationNode.init_method_add_input();
    return _call_native_mb_ret(
      AnimationNode._bindings.method_add_input,
      this._owner,
			Variant.Type.BOOL,
    
      _name
    );
    
  }
  remove_input(_index) {
    AnimationNode.init_method_remove_input();
    return _call_native_mb_no_ret(
      AnimationNode._bindings.method_remove_input,
      this._owner,
      _index
    );
    
  }
  set_input_name(_input, _name) {
    AnimationNode.init_method_set_input_name();
    return _call_native_mb_ret(
      AnimationNode._bindings.method_set_input_name,
      this._owner,
			Variant.Type.BOOL,
    
      _input, _name
    );
    
  }
  get_input_name(_input) {
    AnimationNode.init_method_get_input_name();
    return _call_native_mb_ret(
      AnimationNode._bindings.method_get_input_name,
      this._owner,
			Variant.Type.STRING,
    
      _input
    );
    
  }
  get_input_count() {
    AnimationNode.init_method_get_input_count();
    return _call_native_mb_ret(
      AnimationNode._bindings.method_get_input_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  find_input(_name) {
    AnimationNode.init_method_find_input();
    return _call_native_mb_ret(
      AnimationNode._bindings.method_find_input,
      this._owner,
			Variant.Type.INT,
    
      _name
    );
    
  }
  set_filter_path(_path, _enable) {
    AnimationNode.init_method_set_filter_path();
    return _call_native_mb_no_ret(
      AnimationNode._bindings.method_set_filter_path,
      this._owner,
      _path, _enable
    );
    
  }
  is_path_filtered(_path) {
    AnimationNode.init_method_is_path_filtered();
    return _call_native_mb_ret(
      AnimationNode._bindings.method_is_path_filtered,
      this._owner,
			Variant.Type.BOOL,
    
      _path
    );
    
  }
  set_filter_enabled(_enable) {
    AnimationNode.init_method_set_filter_enabled();
    return _call_native_mb_no_ret(
      AnimationNode._bindings.method_set_filter_enabled,
      this._owner,
      _enable
    );
    
  }
  is_filter_enabled() {
    AnimationNode.init_method_is_filter_enabled();
    return _call_native_mb_ret(
      AnimationNode._bindings.method_is_filter_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  blend_animation(_animation, _time, _delta, _seeked, _is_external_seeking, _blend, _looped_flag) {
    AnimationNode.init_method_blend_animation();
    return _call_native_mb_no_ret(
      AnimationNode._bindings.method_blend_animation,
      this._owner,
      _animation, _time, _delta, _seeked, _is_external_seeking, _blend, _looped_flag
    );
    
  }
  blend_node(_name, _node, _time, _seek, _is_external_seeking, _blend, _filter, _sync, _test_only) {
    AnimationNode.init_method_blend_node();
    return _call_native_mb_ret(
      AnimationNode._bindings.method_blend_node,
      this._owner,
			Variant.Type.FLOAT,
    
      _name, _node, _time, _seek, _is_external_seeking, _blend, _filter, _sync, _test_only
    );
    
  }
  blend_input(_input_index, _time, _seek, _is_external_seeking, _blend, _filter, _sync, _test_only) {
    AnimationNode.init_method_blend_input();
    return _call_native_mb_ret(
      AnimationNode._bindings.method_blend_input,
      this._owner,
			Variant.Type.FLOAT,
    
      _input_index, _time, _seek, _is_external_seeking, _blend, _filter, _sync, _test_only
    );
    
  }
  set_parameter(_name, _value) {
    AnimationNode.init_method_set_parameter();
    return _call_native_mb_no_ret(
      AnimationNode._bindings.method_set_parameter,
      this._owner,
      _name, _value
    );
    
  }
  get_parameter(_name) {
    AnimationNode.init_method_get_parameter();
    return _call_native_mb_ret(
      AnimationNode._bindings.method_get_parameter,
      this._owner,
			Variant.Type.VARIANT,
    
      _name
    );
    
  }
  
get filter_enabled () {
  return this.is_filter_enabled();
}
set filter_enabled (new_value) {
  this.set_filter_enabled(new_value);
}
get filters () {
  return this._get_filters();
}
set filters (new_value) {
  this._set_filters(new_value);
}

  static FilterAction = {
    FILTER_IGNORE: 0,
    FILTER_PASS: 1,
    FILTER_STOP: 2,
    FILTER_BLEND: 3,
  }
}