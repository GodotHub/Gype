import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Resource } from '@js_godot/classes/resource'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_add_animation;
  method_remove_animation;
  method_rename_animation;
  method_has_animation;
  method_get_animation;
  method_get_animation_list;
}
export class AnimationLibrary extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationLibrary");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("AnimationLibrary");
      let methodname = new StringName("add_animation");
      this._bindings.method_add_animation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1811855551
      );
    }
    {
      let classname = new StringName("AnimationLibrary");
      let methodname = new StringName("remove_animation");
      this._bindings.method_remove_animation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("AnimationLibrary");
      let methodname = new StringName("rename_animation");
      this._bindings.method_rename_animation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3740211285
      );
    }
    {
      let classname = new StringName("AnimationLibrary");
      let methodname = new StringName("has_animation");
      this._bindings.method_has_animation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("AnimationLibrary");
      let methodname = new StringName("get_animation");
      this._bindings.method_get_animation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2933122410
      );
    }
    {
      let classname = new StringName("AnimationLibrary");
      let methodname = new StringName("get_animation_list");
      this._bindings.method_get_animation_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
  }
  
  add_animation(_name, _animation) {
    return _call_native_mb_ret(
      AnimationLibrary._bindings.method_add_animation,
      this._owner,
			Variant.INT,
      _name, _animation
    );
    
  }
  remove_animation(_name) {
    return _call_native_mb_no_ret(
      AnimationLibrary._bindings.method_remove_animation,
      this._owner,
      _name
    );
    
  }
  rename_animation(_name, _newname) {
    return _call_native_mb_no_ret(
      AnimationLibrary._bindings.method_rename_animation,
      this._owner,
      _name, _newname
    );
    
  }
  has_animation(_name) {
    return _call_native_mb_ret(
      AnimationLibrary._bindings.method_has_animation,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  get_animation(_name) {
    return _call_native_mb_ret(
      AnimationLibrary._bindings.method_get_animation,
      this._owner,
			Variant.INT,
      _name
    );
    
  }
  get_animation_list() {
    return _call_native_mb_ret(
      AnimationLibrary._bindings.method_get_animation_list,
      this._owner,
			Variant.INT,
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}