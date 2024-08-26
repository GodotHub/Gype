import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__instantiate_playback;
    method_set_file;
    method_get_file;
}


export class VideoStream extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VideoStream");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VideoStream");
      let methodname = new StringName("_instantiate_playback");
      this._bindings.method__instantiate_playback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("VideoStream");
      let methodname = new StringName("set_file");
      this._bindings.method_set_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("VideoStream");
      let methodname = new StringName("get_file");
      this._bindings.method_get_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2841200299
      );
    }
  }
  _instantiate_playback() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__instantiate_playback,
      this._owner,
			Variant.INT,
      
    );
  }
  set_file(_file) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_file,
      this._owner,
      _file
    );
  }
  get_file() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_file,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
}