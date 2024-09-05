import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { NodePath } from '@js_godot/variant/node_path'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
import { Callable } from '@js_godot/variant/callable'
import { GDArray } from '@js_godot/variant/gd_array'
import { Wrapped } from '@js_godot/classes/wrapped'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_class;
  method_is_class;
  method_set;
  method_get;
  method_set_indexed;
  method_get_indexed;
  method_get_property_list;
  method_get_method_list;
  method_property_can_revert;
  method_property_get_revert;
  method_notification;
  method_to_string;
  method_get_instance_id;
  method_set_script;
  method_get_script;
  method_set_meta;
  method_remove_meta;
  method_get_meta;
  method_has_meta;
  method_get_meta_list;
  method_add_user_signal;
  method_has_user_signal;
  method_remove_user_signal;
  method_emit_signal;
  method_call;
  method_call_deferred;
  method_set_deferred;
  method_callv;
  method_has_method;
  method_get_method_argument_count;
  method_has_signal;
  method_get_signal_list;
  method_get_signal_connection_list;
  method_get_incoming_connections;
  method_connect;
  method_disconnect;
  method_is_connected;
  method_set_block_signals;
  method_is_blocking_signals;
  method_notify_property_list_changed;
  method_set_message_translation;
  method_can_translate_messages;
  method_tr;
  method_tr_n;
  method_is_queued_for_deletion;
  method_cancel_free;
}
export class GodotObject extends Wrapped{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Object");
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
      let classname = new StringName("Object");
      let methodname = new StringName("get_class");
      this._bindings.method_get_class = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("is_class");
      this._bindings.method_is_class = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3927539163
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("set");
      this._bindings.method_set = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3776071444
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("get");
      this._bindings.method_get = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2760726917
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("set_indexed");
      this._bindings.method_set_indexed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3500910842
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("get_indexed");
      this._bindings.method_get_indexed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4006125091
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("get_property_list");
      this._bindings.method_get_property_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("get_method_list");
      this._bindings.method_get_method_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("property_can_revert");
      this._bindings.method_property_can_revert = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("property_get_revert");
      this._bindings.method_property_get_revert = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2760726917
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("notification");
      this._bindings.method_notification = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4023243586
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("to_string");
      this._bindings.method_to_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2841200299
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("get_instance_id");
      this._bindings.method_get_instance_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("set_script");
      this._bindings.method_set_script = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1114965689
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("get_script");
      this._bindings.method_get_script = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1214101251
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("set_meta");
      this._bindings.method_set_meta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3776071444
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("remove_meta");
      this._bindings.method_remove_meta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("get_meta");
      this._bindings.method_get_meta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3990617847
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("has_meta");
      this._bindings.method_has_meta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("get_meta_list");
      this._bindings.method_get_meta_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("add_user_signal");
      this._bindings.method_add_user_signal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        85656714
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("has_user_signal");
      this._bindings.method_has_user_signal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("remove_user_signal");
      this._bindings.method_remove_user_signal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("emit_signal");
      this._bindings.method_emit_signal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4047867050
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("call");
      this._bindings.method_call = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3400424181
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("call_deferred");
      this._bindings.method_call_deferred = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3400424181
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("set_deferred");
      this._bindings.method_set_deferred = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3776071444
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("callv");
      this._bindings.method_callv = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1260104456
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("has_method");
      this._bindings.method_has_method = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("get_method_argument_count");
      this._bindings.method_get_method_argument_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2458036349
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("has_signal");
      this._bindings.method_has_signal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("get_signal_list");
      this._bindings.method_get_signal_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("get_signal_connection_list");
      this._bindings.method_get_signal_connection_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3147814860
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("get_incoming_connections");
      this._bindings.method_get_incoming_connections = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("connect");
      this._bindings.method_connect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1518946055
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("disconnect");
      this._bindings.method_disconnect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1874754934
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("is_connected");
      this._bindings.method_is_connected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        768136979
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("set_block_signals");
      this._bindings.method_set_block_signals = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("is_blocking_signals");
      this._bindings.method_is_blocking_signals = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("notify_property_list_changed");
      this._bindings.method_notify_property_list_changed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("set_message_translation");
      this._bindings.method_set_message_translation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("can_translate_messages");
      this._bindings.method_can_translate_messages = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("tr");
      this._bindings.method_tr = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2475554935
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("tr_n");
      this._bindings.method_tr_n = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4021311862
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("is_queued_for_deletion");
      this._bindings.method_is_queued_for_deletion = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Object");
      let methodname = new StringName("cancel_free");
      this._bindings.method_cancel_free = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
  }
  
  get_class() {
    return _call_native_mb_ret(
      GodotObject._bindings.method_get_class,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_class(_class) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_is_class,
      this._owner,
			Variant.Type.BOOL,
      _class
    );
    
  }
  set(_property, _value) {
    return _call_native_mb_no_ret(
      GodotObject._bindings.method_set,
      this._owner,
      _property, _value
    );
    
  }
  get(_property) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_get,
      this._owner,
			Variant.Type.VARIANT,
    
      _property
    );
    
  }
  set_indexed(_property_path, _value) {
    return _call_native_mb_no_ret(
      GodotObject._bindings.method_set_indexed,
      this._owner,
      _property_path, _value
    );
    
  }
  get_indexed(_property_path) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_get_indexed,
      this._owner,
			Variant.Type.VARIANT,
    
      _property_path
    );
    
  }
  get_property_list() {
    return _call_native_mb_ret(
      GodotObject._bindings.method_get_property_list,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_method_list() {
    return _call_native_mb_ret(
      GodotObject._bindings.method_get_method_list,
      this._owner,
			Variant.INT,
      
    );
    
  }
  property_can_revert(_property) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_property_can_revert,
      this._owner,
			Variant.Type.BOOL,
      _property
    );
    
  }
  property_get_revert(_property) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_property_get_revert,
      this._owner,
			Variant.Type.VARIANT,
    
      _property
    );
    
  }
  notification(_what, _reversed) {
    return _call_native_mb_no_ret(
      GodotObject._bindings.method_notification,
      this._owner,
      _what, _reversed
    );
    
  }
  to_string() {
    return _call_native_mb_ret(
      GodotObject._bindings.method_to_string,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_instance_id() {
    return _call_native_mb_ret(
      GodotObject._bindings.method_get_instance_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_script(_script) {
    return _call_native_mb_no_ret(
      GodotObject._bindings.method_set_script,
      this._owner,
      _script
    );
    
  }
  get_script() {
    return _call_native_mb_ret(
      GodotObject._bindings.method_get_script,
      this._owner,
			Variant.Type.VARIANT,
    
      
    );
    
  }
  set_meta(_name, _value) {
    return _call_native_mb_no_ret(
      GodotObject._bindings.method_set_meta,
      this._owner,
      _name, _value
    );
    
  }
  remove_meta(_name) {
    return _call_native_mb_no_ret(
      GodotObject._bindings.method_remove_meta,
      this._owner,
      _name
    );
    
  }
  get_meta(_name, _default) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_get_meta,
      this._owner,
			Variant.Type.VARIANT,
    
      _name, _default
    );
    
  }
  has_meta(_name) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_has_meta,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  get_meta_list() {
    return _call_native_mb_ret(
      GodotObject._bindings.method_get_meta_list,
      this._owner,
			Variant.INT,
      
    );
    
  }
  add_user_signal(_signal, _arguments) {
    return _call_native_mb_no_ret(
      GodotObject._bindings.method_add_user_signal,
      this._owner,
      _signal, _arguments
    );
    
  }
  has_user_signal(_signal) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_has_user_signal,
      this._owner,
			Variant.Type.BOOL,
      _signal
    );
    
  }
  remove_user_signal(_signal) {
    return _call_native_mb_no_ret(
      GodotObject._bindings.method_remove_user_signal,
      this._owner,
      _signal
    );
    
  }
  emit_signal(_signal) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_emit_signal,
      this._owner,
			Variant.INT,
      _signal
    );
    
  }
  call(_method) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_call,
      this._owner,
			Variant.Type.VARIANT,
    
      _method
    );
    
  }
  call_deferred(_method) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_call_deferred,
      this._owner,
			Variant.Type.VARIANT,
    
      _method
    );
    
  }
  set_deferred(_property, _value) {
    return _call_native_mb_no_ret(
      GodotObject._bindings.method_set_deferred,
      this._owner,
      _property, _value
    );
    
  }
  callv(_method, _arg_array) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_callv,
      this._owner,
			Variant.Type.VARIANT,
    
      _method, _arg_array
    );
    
  }
  has_method(_method) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_has_method,
      this._owner,
			Variant.Type.BOOL,
      _method
    );
    
  }
  get_method_argument_count(_method) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_get_method_argument_count,
      this._owner,
			Variant.Type.INT,
      _method
    );
    
  }
  has_signal(_signal) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_has_signal,
      this._owner,
			Variant.Type.BOOL,
      _signal
    );
    
  }
  get_signal_list() {
    return _call_native_mb_ret(
      GodotObject._bindings.method_get_signal_list,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_signal_connection_list(_signal) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_get_signal_connection_list,
      this._owner,
			Variant.INT,
      _signal
    );
    
  }
  get_incoming_connections() {
    return _call_native_mb_ret(
      GodotObject._bindings.method_get_incoming_connections,
      this._owner,
			Variant.INT,
      
    );
    
  }
  connect(_signal, _callable, _flags) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_connect,
      this._owner,
			Variant.INT,
      _signal, _callable, _flags
    );
    
  }
  disconnect(_signal, _callable) {
    return _call_native_mb_no_ret(
      GodotObject._bindings.method_disconnect,
      this._owner,
      _signal, _callable
    );
    
  }
  is_connected(_signal, _callable) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_is_connected,
      this._owner,
			Variant.Type.BOOL,
      _signal, _callable
    );
    
  }
  set_block_signals(_enable) {
    return _call_native_mb_no_ret(
      GodotObject._bindings.method_set_block_signals,
      this._owner,
      _enable
    );
    
  }
  is_blocking_signals() {
    return _call_native_mb_ret(
      GodotObject._bindings.method_is_blocking_signals,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  notify_property_list_changed() {
    return _call_native_mb_no_ret(
      GodotObject._bindings.method_notify_property_list_changed,
      this._owner,
      
    );
    
  }
  set_message_translation(_enable) {
    return _call_native_mb_no_ret(
      GodotObject._bindings.method_set_message_translation,
      this._owner,
      _enable
    );
    
  }
  can_translate_messages() {
    return _call_native_mb_ret(
      GodotObject._bindings.method_can_translate_messages,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  tr(_message, _context) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_tr,
      this._owner,
			Variant.Type.STRING,
    
      _message, _context
    );
    
  }
  tr_n(_message, _plural_message, _n, _context) {
    return _call_native_mb_ret(
      GodotObject._bindings.method_tr_n,
      this._owner,
			Variant.Type.STRING,
    
      _message, _plural_message, _n, _context
    );
    
  }
  is_queued_for_deletion() {
    return _call_native_mb_ret(
      GodotObject._bindings.method_is_queued_for_deletion,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  cancel_free() {
    return _call_native_mb_no_ret(
      GodotObject._bindings.method_cancel_free,
      this._owner,
      
    );
    
  }
  

  static ConnectFlags = {
    CONNECT_DEFERRED: 1,
    CONNECT_PERSIST: 2,
    CONNECT_ONE_SHOT: 4,
    CONNECT_REFERENCE_COUNTED: 8,
  }

  static {
    this._init_bindings();
  }
}