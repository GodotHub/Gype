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
  method_add_animation;
  method_has_animation;
  method_remove_animation;
  method_rename_animation;
  method_get_animation_names;
  method_set_animation_speed;
  method_get_animation_speed;
  method_set_animation_loop;
  method_get_animation_loop;
  method_add_frame;
  method_set_frame;
  method_remove_frame;
  method_get_frame_count;
  method_get_frame_texture;
  method_get_frame_duration;
  method_clear;
  method_clear_all;
}
@GodotClass
export class SpriteFrames extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SpriteFrames");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_animation() {
    if (!this._bindings.method_add_animation) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("add_animation");
      this._bindings.method_add_animation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_has_animation() {
    if (!this._bindings.method_has_animation) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("has_animation");
      this._bindings.method_has_animation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2619796661
      );
    }
  }
  static init_method_remove_animation() {
    if (!this._bindings.method_remove_animation) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("remove_animation");
      this._bindings.method_remove_animation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_rename_animation() {
    if (!this._bindings.method_rename_animation) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("rename_animation");
      this._bindings.method_rename_animation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3740211285
      );
    }
  }
  static init_method_get_animation_names() {
    if (!this._bindings.method_get_animation_names) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("get_animation_names");
      this._bindings.method_get_animation_names = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_set_animation_speed() {
    if (!this._bindings.method_set_animation_speed) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("set_animation_speed");
      this._bindings.method_set_animation_speed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4135858297
      );
    }
  }
  static init_method_get_animation_speed() {
    if (!this._bindings.method_get_animation_speed) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("get_animation_speed");
      this._bindings.method_get_animation_speed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2349060816
      );
    }
  }
  static init_method_set_animation_loop() {
    if (!this._bindings.method_set_animation_loop) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("set_animation_loop");
      this._bindings.method_set_animation_loop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2524380260
      );
    }
  }
  static init_method_get_animation_loop() {
    if (!this._bindings.method_get_animation_loop) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("get_animation_loop");
      this._bindings.method_get_animation_loop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2619796661
      );
    }
  }
  static init_method_add_frame() {
    if (!this._bindings.method_add_frame) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("add_frame");
      this._bindings.method_add_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1351332740
      );
    }
  }
  static init_method_set_frame() {
    if (!this._bindings.method_set_frame) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("set_frame");
      this._bindings.method_set_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        56804795
      );
    }
  }
  static init_method_remove_frame() {
    if (!this._bindings.method_remove_frame) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("remove_frame");
      this._bindings.method_remove_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2415702435
      );
    }
  }
  static init_method_get_frame_count() {
    if (!this._bindings.method_get_frame_count) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("get_frame_count");
      this._bindings.method_get_frame_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2458036349
      );
    }
  }
  static init_method_get_frame_texture() {
    if (!this._bindings.method_get_frame_texture) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("get_frame_texture");
      this._bindings.method_get_frame_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2900517879
      );
    }
  }
  static init_method_get_frame_duration() {
    if (!this._bindings.method_get_frame_duration) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("get_frame_duration");
      this._bindings.method_get_frame_duration = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1129309260
      );
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_clear_all() {
    if (!this._bindings.method_clear_all) {
      let classname = new StringName("SpriteFrames");
      let methodname = new StringName("clear_all");
      this._bindings.method_clear_all = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  add_animation(_anim) {
    SpriteFrames.init_method_add_animation();
    return _call_native_mb_no_ret(
      SpriteFrames._bindings.method_add_animation,
      this._owner,
      _anim
    );
    
  }
  has_animation(_anim) {
    SpriteFrames.init_method_has_animation();
    return _call_native_mb_ret(
      SpriteFrames._bindings.method_has_animation,
      this._owner,
			Variant.Type.BOOL,
    
      _anim
    );
    
  }
  remove_animation(_anim) {
    SpriteFrames.init_method_remove_animation();
    return _call_native_mb_no_ret(
      SpriteFrames._bindings.method_remove_animation,
      this._owner,
      _anim
    );
    
  }
  rename_animation(_anim, _newname) {
    SpriteFrames.init_method_rename_animation();
    return _call_native_mb_no_ret(
      SpriteFrames._bindings.method_rename_animation,
      this._owner,
      _anim, _newname
    );
    
  }
  get_animation_names() {
    SpriteFrames.init_method_get_animation_names();
    return _call_native_mb_ret(
      SpriteFrames._bindings.method_get_animation_names,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_animation_speed(_anim, _fps) {
    SpriteFrames.init_method_set_animation_speed();
    return _call_native_mb_no_ret(
      SpriteFrames._bindings.method_set_animation_speed,
      this._owner,
      _anim, _fps
    );
    
  }
  get_animation_speed(_anim) {
    SpriteFrames.init_method_get_animation_speed();
    return _call_native_mb_ret(
      SpriteFrames._bindings.method_get_animation_speed,
      this._owner,
			Variant.Type.FLOAT,
    
      _anim
    );
    
  }
  set_animation_loop(_anim, _loop) {
    SpriteFrames.init_method_set_animation_loop();
    return _call_native_mb_no_ret(
      SpriteFrames._bindings.method_set_animation_loop,
      this._owner,
      _anim, _loop
    );
    
  }
  get_animation_loop(_anim) {
    SpriteFrames.init_method_get_animation_loop();
    return _call_native_mb_ret(
      SpriteFrames._bindings.method_get_animation_loop,
      this._owner,
			Variant.Type.BOOL,
    
      _anim
    );
    
  }
  add_frame(_anim, _texture, _duration, _at_position) {
    SpriteFrames.init_method_add_frame();
    return _call_native_mb_no_ret(
      SpriteFrames._bindings.method_add_frame,
      this._owner,
      _anim, _texture, _duration, _at_position
    );
    
  }
  set_frame(_anim, _idx, _texture, _duration) {
    SpriteFrames.init_method_set_frame();
    return _call_native_mb_no_ret(
      SpriteFrames._bindings.method_set_frame,
      this._owner,
      _anim, _idx, _texture, _duration
    );
    
  }
  remove_frame(_anim, _idx) {
    SpriteFrames.init_method_remove_frame();
    return _call_native_mb_no_ret(
      SpriteFrames._bindings.method_remove_frame,
      this._owner,
      _anim, _idx
    );
    
  }
  get_frame_count(_anim) {
    SpriteFrames.init_method_get_frame_count();
    return _call_native_mb_ret(
      SpriteFrames._bindings.method_get_frame_count,
      this._owner,
			Variant.Type.INT,
    
      _anim
    );
    
  }
  get_frame_texture(_anim, _idx) {
    SpriteFrames.init_method_get_frame_texture();
    return _call_native_mb_ret(
      SpriteFrames._bindings.method_get_frame_texture,
      this._owner,
			Variant.Type.OBJECT,
      _anim, _idx
    );
    
  }
  get_frame_duration(_anim, _idx) {
    SpriteFrames.init_method_get_frame_duration();
    return _call_native_mb_ret(
      SpriteFrames._bindings.method_get_frame_duration,
      this._owner,
			Variant.Type.FLOAT,
    
      _anim, _idx
    );
    
  }
  clear(_anim) {
    SpriteFrames.init_method_clear();
    return _call_native_mb_no_ret(
      SpriteFrames._bindings.method_clear,
      this._owner,
      _anim
    );
    
  }
  clear_all() {
    SpriteFrames.init_method_clear_all();
    return _call_native_mb_no_ret(
      SpriteFrames._bindings.method_clear_all,
      this._owner,
      
    );
    
  }
  
get animations () {
  return this._get_animations();
}
set animations (new_value) {
  this._set_animations(new_value);
}

}