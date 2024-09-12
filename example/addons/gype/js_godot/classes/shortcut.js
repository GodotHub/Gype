import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_events;
  method_get_events;
  method_has_valid_event;
  method_matches_event;
  method_get_as_text;
}
export class Shortcut extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Shortcut");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_events() {
    if (!this.#_bindings.method_set_events) {
      let classname = new StringName("Shortcut");
      let methodname = new StringName("set_events");
      this.#_bindings.method_set_events = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_events() {
    if (!this.#_bindings.method_get_events) {
      let classname = new StringName("Shortcut");
      let methodname = new StringName("get_events");
      this.#_bindings.method_get_events = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_has_valid_event() {
    if (!this.#_bindings.method_has_valid_event) {
      let classname = new StringName("Shortcut");
      let methodname = new StringName("has_valid_event");
      this.#_bindings.method_has_valid_event = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_matches_event() {
    if (!this.#_bindings.method_matches_event) {
      let classname = new StringName("Shortcut");
      let methodname = new StringName("matches_event");
      this.#_bindings.method_matches_event = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3738334489
      );
    }
  }
  static init_method_get_as_text() {
    if (!this.#_bindings.method_get_as_text) {
      let classname = new StringName("Shortcut");
      let methodname = new StringName("get_as_text");
      this.#_bindings.method_get_as_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }

  
  
  set_events(_events) {
    Shortcut.init_method_set_events();
    return _call_native_mb_no_ret(
      Shortcut.#_bindings.method_set_events,
      this._owner,
      _events
    );
    
  }
  get_events() {
    Shortcut.init_method_get_events();
    return _call_native_mb_ret(
      Shortcut.#_bindings.method_get_events,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  has_valid_event() {
    Shortcut.init_method_has_valid_event();
    return _call_native_mb_ret(
      Shortcut.#_bindings.method_has_valid_event,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  matches_event(_event) {
    Shortcut.init_method_matches_event();
    return _call_native_mb_ret(
      Shortcut.#_bindings.method_matches_event,
      this._owner,
			Variant.Type.BOOL,
    
      _event
    );
    
  }
  get_as_text() {
    Shortcut.init_method_get_as_text();
    return _call_native_mb_ret(
      Shortcut.#_bindings.method_get_as_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  
get events () {
  return this.get_events();
}
set events (new_value) {
  this.set_events(new_value);
}

}