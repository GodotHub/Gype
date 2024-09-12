import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_device_count;
  method_get_device;
  method_add_device;
  method_set_device;
  method_remove_device;
  method_clear_devices;
  method_get_gateway;
  method_discover;
  method_query_external_address;
  method_add_port_mapping;
  method_delete_port_mapping;
  method_set_discover_multicast_if;
  method_get_discover_multicast_if;
  method_set_discover_local_port;
  method_get_discover_local_port;
  method_set_discover_ipv6;
  method_is_discover_ipv6;
}
export class UPNP extends RefCounted{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("UPNP");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_device_count() {
    if (!this.#_bindings.method_get_device_count) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("get_device_count");
      this.#_bindings.method_get_device_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_device() {
    if (!this.#_bindings.method_get_device) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("get_device");
      this.#_bindings.method_get_device = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2193290270
      );
    }
  }
  static init_method_add_device() {
    if (!this.#_bindings.method_add_device) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("add_device");
      this.#_bindings.method_add_device = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        986715920
      );
    }
  }
  static init_method_set_device() {
    if (!this.#_bindings.method_set_device) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("set_device");
      this.#_bindings.method_set_device = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3015133723
      );
    }
  }
  static init_method_remove_device() {
    if (!this.#_bindings.method_remove_device) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("remove_device");
      this.#_bindings.method_remove_device = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_clear_devices() {
    if (!this.#_bindings.method_clear_devices) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("clear_devices");
      this.#_bindings.method_clear_devices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_gateway() {
    if (!this.#_bindings.method_get_gateway) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("get_gateway");
      this.#_bindings.method_get_gateway = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2276800779
      );
    }
  }
  static init_method_discover() {
    if (!this.#_bindings.method_discover) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("discover");
      this.#_bindings.method_discover = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1575334765
      );
    }
  }
  static init_method_query_external_address() {
    if (!this.#_bindings.method_query_external_address) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("query_external_address");
      this.#_bindings.method_query_external_address = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_add_port_mapping() {
    if (!this.#_bindings.method_add_port_mapping) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("add_port_mapping");
      this.#_bindings.method_add_port_mapping = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        818314583
      );
    }
  }
  static init_method_delete_port_mapping() {
    if (!this.#_bindings.method_delete_port_mapping) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("delete_port_mapping");
      this.#_bindings.method_delete_port_mapping = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444187325
      );
    }
  }
  static init_method_set_discover_multicast_if() {
    if (!this.#_bindings.method_set_discover_multicast_if) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("set_discover_multicast_if");
      this.#_bindings.method_set_discover_multicast_if = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_discover_multicast_if() {
    if (!this.#_bindings.method_get_discover_multicast_if) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("get_discover_multicast_if");
      this.#_bindings.method_get_discover_multicast_if = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_discover_local_port() {
    if (!this.#_bindings.method_set_discover_local_port) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("set_discover_local_port");
      this.#_bindings.method_set_discover_local_port = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_discover_local_port() {
    if (!this.#_bindings.method_get_discover_local_port) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("get_discover_local_port");
      this.#_bindings.method_get_discover_local_port = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_discover_ipv6() {
    if (!this.#_bindings.method_set_discover_ipv6) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("set_discover_ipv6");
      this.#_bindings.method_set_discover_ipv6 = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_discover_ipv6() {
    if (!this.#_bindings.method_is_discover_ipv6) {
      let classname = new StringName("UPNP");
      let methodname = new StringName("is_discover_ipv6");
      this.#_bindings.method_is_discover_ipv6 = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  get_device_count() {
    UPNP.init_method_get_device_count();
    return _call_native_mb_ret(
      UPNP.#_bindings.method_get_device_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_device(_index) {
    UPNP.init_method_get_device();
    return _call_native_mb_ret(
      UPNP.#_bindings.method_get_device,
      this._owner,
			Variant.Type.OBJECT,
      _index
    );
    
  }
  add_device(_device) {
    UPNP.init_method_add_device();
    return _call_native_mb_no_ret(
      UPNP.#_bindings.method_add_device,
      this._owner,
      _device
    );
    
  }
  set_device(_index, _device) {
    UPNP.init_method_set_device();
    return _call_native_mb_no_ret(
      UPNP.#_bindings.method_set_device,
      this._owner,
      _index, _device
    );
    
  }
  remove_device(_index) {
    UPNP.init_method_remove_device();
    return _call_native_mb_no_ret(
      UPNP.#_bindings.method_remove_device,
      this._owner,
      _index
    );
    
  }
  clear_devices() {
    UPNP.init_method_clear_devices();
    return _call_native_mb_no_ret(
      UPNP.#_bindings.method_clear_devices,
      this._owner,
      
    );
    
  }
  get_gateway() {
    UPNP.init_method_get_gateway();
    return _call_native_mb_ret(
      UPNP.#_bindings.method_get_gateway,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  discover(_timeout, _ttl, _device_filter) {
    UPNP.init_method_discover();
    return _call_native_mb_ret(
      UPNP.#_bindings.method_discover,
      this._owner,
			Variant.Type.INT,
    
      _timeout, _ttl, _device_filter
    );
    
  }
  query_external_address() {
    UPNP.init_method_query_external_address();
    return _call_native_mb_ret(
      UPNP.#_bindings.method_query_external_address,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  add_port_mapping(_port, _port_internal, _desc, _proto, _duration) {
    UPNP.init_method_add_port_mapping();
    return _call_native_mb_ret(
      UPNP.#_bindings.method_add_port_mapping,
      this._owner,
			Variant.Type.INT,
    
      _port, _port_internal, _desc, _proto, _duration
    );
    
  }
  delete_port_mapping(_port, _proto) {
    UPNP.init_method_delete_port_mapping();
    return _call_native_mb_ret(
      UPNP.#_bindings.method_delete_port_mapping,
      this._owner,
			Variant.Type.INT,
    
      _port, _proto
    );
    
  }
  set_discover_multicast_if(_m_if) {
    UPNP.init_method_set_discover_multicast_if();
    return _call_native_mb_no_ret(
      UPNP.#_bindings.method_set_discover_multicast_if,
      this._owner,
      _m_if
    );
    
  }
  get_discover_multicast_if() {
    UPNP.init_method_get_discover_multicast_if();
    return _call_native_mb_ret(
      UPNP.#_bindings.method_get_discover_multicast_if,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_discover_local_port(_port) {
    UPNP.init_method_set_discover_local_port();
    return _call_native_mb_no_ret(
      UPNP.#_bindings.method_set_discover_local_port,
      this._owner,
      _port
    );
    
  }
  get_discover_local_port() {
    UPNP.init_method_get_discover_local_port();
    return _call_native_mb_ret(
      UPNP.#_bindings.method_get_discover_local_port,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_discover_ipv6(_ipv6) {
    UPNP.init_method_set_discover_ipv6();
    return _call_native_mb_no_ret(
      UPNP.#_bindings.method_set_discover_ipv6,
      this._owner,
      _ipv6
    );
    
  }
  is_discover_ipv6() {
    UPNP.init_method_is_discover_ipv6();
    return _call_native_mb_ret(
      UPNP.#_bindings.method_is_discover_ipv6,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get discover_multicast_if () {
  return this.get_discover_multicast_if();
}
set discover_multicast_if (new_value) {
  this.set_discover_multicast_if(new_value);
}
get discover_local_port () {
  return this.get_discover_local_port();
}
set discover_local_port (new_value) {
  this.set_discover_local_port(new_value);
}
get discover_ipv6 () {
  return this.is_discover_ipv6();
}
set discover_ipv6 (new_value) {
  this.set_discover_ipv6(new_value);
}

  static UPNPResult = {
    UPNP_RESULT_SUCCESS: 0,
    UPNP_RESULT_NOT_AUTHORIZED: 1,
    UPNP_RESULT_PORT_MAPPING_NOT_FOUND: 2,
    UPNP_RESULT_INCONSISTENT_PARAMETERS: 3,
    UPNP_RESULT_NO_SUCH_ENTRY_IN_ARRAY: 4,
    UPNP_RESULT_ACTION_FAILED: 5,
    UPNP_RESULT_SRC_IP_WILDCARD_NOT_PERMITTED: 6,
    UPNP_RESULT_EXT_PORT_WILDCARD_NOT_PERMITTED: 7,
    UPNP_RESULT_INT_PORT_WILDCARD_NOT_PERMITTED: 8,
    UPNP_RESULT_REMOTE_HOST_MUST_BE_WILDCARD: 9,
    UPNP_RESULT_EXT_PORT_MUST_BE_WILDCARD: 10,
    UPNP_RESULT_NO_PORT_MAPS_AVAILABLE: 11,
    UPNP_RESULT_CONFLICT_WITH_OTHER_MECHANISM: 12,
    UPNP_RESULT_CONFLICT_WITH_OTHER_MAPPING: 13,
    UPNP_RESULT_SAME_PORT_VALUES_REQUIRED: 14,
    UPNP_RESULT_ONLY_PERMANENT_LEASE_SUPPORTED: 15,
    UPNP_RESULT_INVALID_GATEWAY: 16,
    UPNP_RESULT_INVALID_PORT: 17,
    UPNP_RESULT_INVALID_PROTOCOL: 18,
    UPNP_RESULT_INVALID_DURATION: 19,
    UPNP_RESULT_INVALID_ARGS: 20,
    UPNP_RESULT_INVALID_RESPONSE: 21,
    UPNP_RESULT_INVALID_PARAM: 22,
    UPNP_RESULT_HTTP_ERROR: 23,
    UPNP_RESULT_SOCKET_ERROR: 24,
    UPNP_RESULT_MEM_ALLOC_ERROR: 25,
    UPNP_RESULT_NO_GATEWAY: 26,
    UPNP_RESULT_NO_DEVICES: 27,
    UPNP_RESULT_UNKNOWN_ERROR: 28,
  }
}