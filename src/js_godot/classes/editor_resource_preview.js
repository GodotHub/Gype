import * as internal from '__internal__';
import { Variant } from 'src/js_godot/variant/variant'
import { StringName } from 'src/js_godot/variant/string_name'
import { GDString } from 'src/js_godot/variant/gd_string'
import { Node } from 'src/js_godot/classesnode'
class _MethodBindings {
    method_queue_resource_preview;
    method_queue_edited_resource_preview;
    method_add_preview_generator;
    method_remove_preview_generator;
    method_check_for_invalidation;
}


export class EditorResourcePreview extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorResourcePreview");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorResourcePreview");
      let methodname = new StringName("queue_resource_preview");
      this._bindings.method_queue_resource_preview = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        233177534
      );
    }
    {
      let classname = new StringName("EditorResourcePreview");
      let methodname = new StringName("queue_edited_resource_preview");
      this._bindings.method_queue_edited_resource_preview = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1608376650
      );
    }
    {
      let classname = new StringName("EditorResourcePreview");
      let methodname = new StringName("add_preview_generator");
      this._bindings.method_add_preview_generator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        332288124
      );
    }
    {
      let classname = new StringName("EditorResourcePreview");
      let methodname = new StringName("remove_preview_generator");
      this._bindings.method_remove_preview_generator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        332288124
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_queue_resource_preview,
      this._owner,
      _path, _receiver, _receiver_func, _userdata
    );
  }
  queue_edited_resource_preview(_resource, _receiver, _receiver_func, _userdata) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_queue_edited_resource_preview,
      this._owner,
      _resource, _receiver, _receiver_func, _userdata
    );
  }
  add_preview_generator(_generator) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_preview_generator,
      this._owner,
      _generator
    );
  }
  remove_preview_generator(_generator) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_preview_generator,
      this._owner,
      _generator
    );
  }
  check_for_invalidation(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_check_for_invalidation,
      this._owner,
      _path
    );
  }
}