import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_set_events;
    method_get_events;
    method_has_valid_event;
    method_matches_event;
    method_get_as_text;
}


export class Shortcut extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Shortcut");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Shortcut");
      let methodname = new StringName("set_events");
      this._bindings.method_set_events = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("Shortcut");
      let methodname = new StringName("get_events");
      this._bindings.method_get_events = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("Shortcut");
      let methodname = new StringName("has_valid_event");
      this._bindings.method_has_valid_event = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Shortcut");
      let methodname = new StringName("matches_event");
      this._bindings.method_matches_event = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3738334489
      );
    }
    {
      let classname = new StringName("Shortcut");
      let methodname = new StringName("get_as_text");
      this._bindings.method_get_as_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
  }
  set_events(_events) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_events,
      this._owner,
      _events
    );
  }
  get_events() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_events,
      this._owner,
			Variant.Type.ARRAY
    ,
      
    );
  }
  has_valid_event() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_valid_event,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  matches_event(_event) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_matches_event,
      this._owner,
			Variant.Type.BOOL,
      _event
    );
  }
  get_as_text() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_as_text,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
}