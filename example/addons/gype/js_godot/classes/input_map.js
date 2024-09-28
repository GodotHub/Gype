import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { GodotObject } from '@js_godot/classes/godot_object'
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
  method_has_action;
  method_get_actions;
  method_add_action;
  method_erase_action;
  method_action_set_deadzone;
  method_action_get_deadzone;
  method_action_add_event;
  method_action_has_event;
  method_action_erase_event;
  method_action_erase_events;
  method_action_get_events;
  method_event_is_action;
  method_load_from_project_settings;
}class _InputMap extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputMap");
    } else {
      super(godot_object);
    }
  }
  static init_method_has_action() {
    if (!this._bindings.method_has_action) {
      let classname = new StringName("InputMap");
      let methodname = new StringName("has_action");
      this._bindings.method_has_action = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2619796661
      );
    }
  }
  static init_method_get_actions() {
    if (!this._bindings.method_get_actions) {
      let classname = new StringName("InputMap");
      let methodname = new StringName("get_actions");
      this._bindings.method_get_actions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_add_action() {
    if (!this._bindings.method_add_action) {
      let classname = new StringName("InputMap");
      let methodname = new StringName("add_action");
      this._bindings.method_add_action = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4100757082
      );
    }
  }
  static init_method_erase_action() {
    if (!this._bindings.method_erase_action) {
      let classname = new StringName("InputMap");
      let methodname = new StringName("erase_action");
      this._bindings.method_erase_action = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_action_set_deadzone() {
    if (!this._bindings.method_action_set_deadzone) {
      let classname = new StringName("InputMap");
      let methodname = new StringName("action_set_deadzone");
      this._bindings.method_action_set_deadzone = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4135858297
      );
    }
  }
  static init_method_action_get_deadzone() {
    if (!this._bindings.method_action_get_deadzone) {
      let classname = new StringName("InputMap");
      let methodname = new StringName("action_get_deadzone");
      this._bindings.method_action_get_deadzone = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1391627649
      );
    }
  }
  static init_method_action_add_event() {
    if (!this._bindings.method_action_add_event) {
      let classname = new StringName("InputMap");
      let methodname = new StringName("action_add_event");
      this._bindings.method_action_add_event = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        518302593
      );
    }
  }
  static init_method_action_has_event() {
    if (!this._bindings.method_action_has_event) {
      let classname = new StringName("InputMap");
      let methodname = new StringName("action_has_event");
      this._bindings.method_action_has_event = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1185871985
      );
    }
  }
  static init_method_action_erase_event() {
    if (!this._bindings.method_action_erase_event) {
      let classname = new StringName("InputMap");
      let methodname = new StringName("action_erase_event");
      this._bindings.method_action_erase_event = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        518302593
      );
    }
  }
  static init_method_action_erase_events() {
    if (!this._bindings.method_action_erase_events) {
      let classname = new StringName("InputMap");
      let methodname = new StringName("action_erase_events");
      this._bindings.method_action_erase_events = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_action_get_events() {
    if (!this._bindings.method_action_get_events) {
      let classname = new StringName("InputMap");
      let methodname = new StringName("action_get_events");
      this._bindings.method_action_get_events = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        689397652
      );
    }
  }
  static init_method_event_is_action() {
    if (!this._bindings.method_event_is_action) {
      let classname = new StringName("InputMap");
      let methodname = new StringName("event_is_action");
      this._bindings.method_event_is_action = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3193353650
      );
    }
  }
  static init_method_load_from_project_settings() {
    if (!this._bindings.method_load_from_project_settings) {
      let classname = new StringName("InputMap");
      let methodname = new StringName("load_from_project_settings");
      this._bindings.method_load_from_project_settings = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  has_action(_action) {
    InputMap.init_method_has_action();
    return _call_native_mb_ret(
      _InputMap._bindings.method_has_action,
      this._owner,
			Variant.Type.BOOL,
    
      _action
    );
    
  }
  get_actions() {
    InputMap.init_method_get_actions();
    return _call_native_mb_ret(
      _InputMap._bindings.method_get_actions,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  add_action(_action, _deadzone) {
    InputMap.init_method_add_action();
    return _call_native_mb_no_ret(
      _InputMap._bindings.method_add_action,
      this._owner,
      _action, _deadzone
    );
    
  }
  erase_action(_action) {
    InputMap.init_method_erase_action();
    return _call_native_mb_no_ret(
      _InputMap._bindings.method_erase_action,
      this._owner,
      _action
    );
    
  }
  action_set_deadzone(_action, _deadzone) {
    InputMap.init_method_action_set_deadzone();
    return _call_native_mb_no_ret(
      _InputMap._bindings.method_action_set_deadzone,
      this._owner,
      _action, _deadzone
    );
    
  }
  action_get_deadzone(_action) {
    InputMap.init_method_action_get_deadzone();
    return _call_native_mb_ret(
      _InputMap._bindings.method_action_get_deadzone,
      this._owner,
			Variant.Type.FLOAT,
    
      _action
    );
    
  }
  action_add_event(_action, _event) {
    InputMap.init_method_action_add_event();
    return _call_native_mb_no_ret(
      _InputMap._bindings.method_action_add_event,
      this._owner,
      _action, _event
    );
    
  }
  action_has_event(_action, _event) {
    InputMap.init_method_action_has_event();
    return _call_native_mb_ret(
      _InputMap._bindings.method_action_has_event,
      this._owner,
			Variant.Type.BOOL,
    
      _action, _event
    );
    
  }
  action_erase_event(_action, _event) {
    InputMap.init_method_action_erase_event();
    return _call_native_mb_no_ret(
      _InputMap._bindings.method_action_erase_event,
      this._owner,
      _action, _event
    );
    
  }
  action_erase_events(_action) {
    InputMap.init_method_action_erase_events();
    return _call_native_mb_no_ret(
      _InputMap._bindings.method_action_erase_events,
      this._owner,
      _action
    );
    
  }
  action_get_events(_action) {
    InputMap.init_method_action_get_events();
    return _call_native_mb_ret(
      _InputMap._bindings.method_action_get_events,
      this._owner,
			Variant.Type.ARRAY,
      _action
    );
    
  }
  event_is_action(_event, _action, _exact_match) {
    InputMap.init_method_event_is_action();
    return _call_native_mb_ret(
      _InputMap._bindings.method_event_is_action,
      this._owner,
			Variant.Type.BOOL,
    
      _event, _action, _exact_match
    );
    
  }
  load_from_project_settings() {
    InputMap.init_method_load_from_project_settings();
    return _call_native_mb_no_ret(
      _InputMap._bindings.method_load_from_project_settings,
      this._owner,
      
    );
    
  }
  

}
export const InputMap = (function () {
  let _instance;
  function create_instance() {
    return new _InputMap();
  }
  return {
    instance: function () {
      if (!_instance) {
        _instance = create_instance();
      }
      return _instance;
    },
  };
})();