import * as internal from '__internal__';
import { Node } from '@js_godot/classes/node'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_queue_resource_preview;
  method_queue_edited_resource_preview;
  method_add_preview_generator;
  method_remove_preview_generator;
  method_check_for_invalidation;
}
@GodotClass
export class EditorResourcePreview extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorResourcePreview");
    } else {
      super(godot_object);
    }
  }
  static init_method_queue_resource_preview() {
    if (!this._bindings.method_queue_resource_preview) {
      let classname = new StringName("EditorResourcePreview");
      let methodname = new StringName("queue_resource_preview");
      this._bindings.method_queue_resource_preview = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        233177534
      );
    }
  }
  static init_method_queue_edited_resource_preview() {
    if (!this._bindings.method_queue_edited_resource_preview) {
      let classname = new StringName("EditorResourcePreview");
      let methodname = new StringName("queue_edited_resource_preview");
      this._bindings.method_queue_edited_resource_preview = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1608376650
      );
    }
  }
  static init_method_add_preview_generator() {
    if (!this._bindings.method_add_preview_generator) {
      let classname = new StringName("EditorResourcePreview");
      let methodname = new StringName("add_preview_generator");
      this._bindings.method_add_preview_generator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        332288124
      );
    }
  }
  static init_method_remove_preview_generator() {
    if (!this._bindings.method_remove_preview_generator) {
      let classname = new StringName("EditorResourcePreview");
      let methodname = new StringName("remove_preview_generator");
      this._bindings.method_remove_preview_generator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        332288124
      );
    }
  }
  static init_method_check_for_invalidation() {
    if (!this._bindings.method_check_for_invalidation) {
      let classname = new StringName("EditorResourcePreview");
      let methodname = new StringName("check_for_invalidation");
      this._bindings.method_check_for_invalidation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }

  
  
  queue_resource_preview(_path, _receiver, _receiver_func, _userdata) {
    EditorResourcePreview.init_method_queue_resource_preview();
    return _call_native_mb_no_ret(
      EditorResourcePreview._bindings.method_queue_resource_preview,
      this._owner,
      _path, _receiver, _receiver_func, _userdata
    );
    
  }
  queue_edited_resource_preview(_resource, _receiver, _receiver_func, _userdata) {
    EditorResourcePreview.init_method_queue_edited_resource_preview();
    return _call_native_mb_no_ret(
      EditorResourcePreview._bindings.method_queue_edited_resource_preview,
      this._owner,
      _resource, _receiver, _receiver_func, _userdata
    );
    
  }
  add_preview_generator(_generator) {
    EditorResourcePreview.init_method_add_preview_generator();
    return _call_native_mb_no_ret(
      EditorResourcePreview._bindings.method_add_preview_generator,
      this._owner,
      _generator
    );
    
  }
  remove_preview_generator(_generator) {
    EditorResourcePreview.init_method_remove_preview_generator();
    return _call_native_mb_no_ret(
      EditorResourcePreview._bindings.method_remove_preview_generator,
      this._owner,
      _generator
    );
    
  }
  check_for_invalidation(_path) {
    EditorResourcePreview.init_method_check_for_invalidation();
    return _call_native_mb_no_ret(
      EditorResourcePreview._bindings.method_check_for_invalidation,
      this._owner,
      _path
    );
    
  }
  

}