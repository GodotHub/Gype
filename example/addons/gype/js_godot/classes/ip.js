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
  method_resolve_hostname;
  method_resolve_hostname_addresses;
  method_resolve_hostname_queue_item;
  method_get_resolve_item_status;
  method_get_resolve_item_address;
  method_get_resolve_item_addresses;
  method_erase_resolve_item;
  method_get_local_addresses;
  method_get_local_interfaces;
  method_clear_cache;
}class _IP extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("IP");
    } else {
      super(godot_object);
    }
  }
  static init_method_resolve_hostname() {
    if (!this._bindings.method_resolve_hostname) {
      let classname = new StringName("IP");
      let methodname = new StringName("resolve_hostname");
      this._bindings.method_resolve_hostname = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4283295457
      );
    }
  }
  static init_method_resolve_hostname_addresses() {
    if (!this._bindings.method_resolve_hostname_addresses) {
      let classname = new StringName("IP");
      let methodname = new StringName("resolve_hostname_addresses");
      this._bindings.method_resolve_hostname_addresses = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        773767525
      );
    }
  }
  static init_method_resolve_hostname_queue_item() {
    if (!this._bindings.method_resolve_hostname_queue_item) {
      let classname = new StringName("IP");
      let methodname = new StringName("resolve_hostname_queue_item");
      this._bindings.method_resolve_hostname_queue_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1749894742
      );
    }
  }
  static init_method_get_resolve_item_status() {
    if (!this._bindings.method_get_resolve_item_status) {
      let classname = new StringName("IP");
      let methodname = new StringName("get_resolve_item_status");
      this._bindings.method_get_resolve_item_status = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3812250196
      );
    }
  }
  static init_method_get_resolve_item_address() {
    if (!this._bindings.method_get_resolve_item_address) {
      let classname = new StringName("IP");
      let methodname = new StringName("get_resolve_item_address");
      this._bindings.method_get_resolve_item_address = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_resolve_item_addresses() {
    if (!this._bindings.method_get_resolve_item_addresses) {
      let classname = new StringName("IP");
      let methodname = new StringName("get_resolve_item_addresses");
      this._bindings.method_get_resolve_item_addresses = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        663333327
      );
    }
  }
  static init_method_erase_resolve_item() {
    if (!this._bindings.method_erase_resolve_item) {
      let classname = new StringName("IP");
      let methodname = new StringName("erase_resolve_item");
      this._bindings.method_erase_resolve_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_local_addresses() {
    if (!this._bindings.method_get_local_addresses) {
      let classname = new StringName("IP");
      let methodname = new StringName("get_local_addresses");
      this._bindings.method_get_local_addresses = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_get_local_interfaces() {
    if (!this._bindings.method_get_local_interfaces) {
      let classname = new StringName("IP");
      let methodname = new StringName("get_local_interfaces");
      this._bindings.method_get_local_interfaces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_clear_cache() {
    if (!this._bindings.method_clear_cache) {
      let classname = new StringName("IP");
      let methodname = new StringName("clear_cache");
      this._bindings.method_clear_cache = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3005725572
      );
    }
  }

  
  
  resolve_hostname(_host, _ip_type) {
    IP.init_method_resolve_hostname();
    return _call_native_mb_ret(
      _IP._bindings.method_resolve_hostname,
      this._owner,
			Variant.Type.STRING,
    
      _host, _ip_type
    );
    
  }
  resolve_hostname_addresses(_host, _ip_type) {
    IP.init_method_resolve_hostname_addresses();
    return _call_native_mb_ret(
      _IP._bindings.method_resolve_hostname_addresses,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _host, _ip_type
    );
    
  }
  resolve_hostname_queue_item(_host, _ip_type) {
    IP.init_method_resolve_hostname_queue_item();
    return _call_native_mb_ret(
      _IP._bindings.method_resolve_hostname_queue_item,
      this._owner,
			Variant.Type.INT,
    
      _host, _ip_type
    );
    
  }
  get_resolve_item_status(_id) {
    IP.init_method_get_resolve_item_status();
    return _call_native_mb_ret(
      _IP._bindings.method_get_resolve_item_status,
      this._owner,
			Variant.Type.INT,
    
      _id
    );
    
  }
  get_resolve_item_address(_id) {
    IP.init_method_get_resolve_item_address();
    return _call_native_mb_ret(
      _IP._bindings.method_get_resolve_item_address,
      this._owner,
			Variant.Type.STRING,
    
      _id
    );
    
  }
  get_resolve_item_addresses(_id) {
    IP.init_method_get_resolve_item_addresses();
    return _call_native_mb_ret(
      _IP._bindings.method_get_resolve_item_addresses,
      this._owner,
			Variant.Type.ARRAY,
    
      _id
    );
    
  }
  erase_resolve_item(_id) {
    IP.init_method_erase_resolve_item();
    return _call_native_mb_no_ret(
      _IP._bindings.method_erase_resolve_item,
      this._owner,
      _id
    );
    
  }
  get_local_addresses() {
    IP.init_method_get_local_addresses();
    return _call_native_mb_ret(
      _IP._bindings.method_get_local_addresses,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_local_interfaces() {
    IP.init_method_get_local_interfaces();
    return _call_native_mb_ret(
      _IP._bindings.method_get_local_interfaces,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  clear_cache(_hostname) {
    IP.init_method_clear_cache();
    return _call_native_mb_no_ret(
      _IP._bindings.method_clear_cache,
      this._owner,
      _hostname
    );
    
  }
  

  static ResolverStatus = {
    RESOLVER_STATUS_NONE: 0,
    RESOLVER_STATUS_WAITING: 1,
    RESOLVER_STATUS_DONE: 2,
    RESOLVER_STATUS_ERROR: 3,
  }
  static Type = {
    TYPE_NONE: 0,
    TYPE_IPV4: 1,
    TYPE_IPV6: 2,
    TYPE_ANY: 3,
  }
}
export const IP = (function () {
  let _instance;
  function create_instance() {
    return new _IP();
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