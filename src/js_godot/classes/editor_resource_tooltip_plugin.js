import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__handles;
    method__make_tooltip_for_path;
    method_request_thumbnail;
}


export class EditorResourceTooltipPlugin extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorResourceTooltipPlugin");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorResourceTooltipPlugin");
      let methodname = new StringName("_handles");
      this._bindings.method__handles = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorResourceTooltipPlugin");
      let methodname = new StringName("_make_tooltip_for_path");
      this._bindings.method__make_tooltip_for_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorResourceTooltipPlugin");
      let methodname = new StringName("request_thumbnail");
      this._bindings.method_request_thumbnail = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3245519720
      );
    }
  }
  _handles(_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__handles,
      this._owner,
			Variant.Type.BOOL,
      _type
    );
  }
  _make_tooltip_for_path(_path, _metadata, _base) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__make_tooltip_for_path,
      this._owner,
			Variant.INT,
      _path, _metadata, _base
    );
  }
  request_thumbnail(_path, _control) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_request_thumbnail,
      this._owner,
      _path, _control
    );
  }
}