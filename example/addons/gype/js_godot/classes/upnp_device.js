import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
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
  method_is_valid_gateway;
  method_query_external_address;
  method_add_port_mapping;
  method_delete_port_mapping;
  method_set_description_url;
  method_get_description_url;
  method_set_service_type;
  method_get_service_type;
  method_set_igd_control_url;
  method_get_igd_control_url;
  method_set_igd_service_type;
  method_get_igd_service_type;
  method_set_igd_our_addr;
  method_get_igd_our_addr;
  method_set_igd_status;
  method_get_igd_status;
}
@GodotClass
export class UPNPDevice extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("UPNPDevice");
    } else {
      super(godot_object);
    }
  }
  static init_method_is_valid_gateway() {
    if (!this._bindings.method_is_valid_gateway) {
      let classname = new StringName("UPNPDevice");
      let methodname = new StringName("is_valid_gateway");
      this._bindings.method_is_valid_gateway = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_query_external_address() {
    if (!this._bindings.method_query_external_address) {
      let classname = new StringName("UPNPDevice");
      let methodname = new StringName("query_external_address");
      this._bindings.method_query_external_address = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_add_port_mapping() {
    if (!this._bindings.method_add_port_mapping) {
      let classname = new StringName("UPNPDevice");
      let methodname = new StringName("add_port_mapping");
      this._bindings.method_add_port_mapping = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        818314583
      );
    }
  }
  static init_method_delete_port_mapping() {
    if (!this._bindings.method_delete_port_mapping) {
      let classname = new StringName("UPNPDevice");
      let methodname = new StringName("delete_port_mapping");
      this._bindings.method_delete_port_mapping = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444187325
      );
    }
  }
  static init_method_set_description_url() {
    if (!this._bindings.method_set_description_url) {
      let classname = new StringName("UPNPDevice");
      let methodname = new StringName("set_description_url");
      this._bindings.method_set_description_url = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_description_url() {
    if (!this._bindings.method_get_description_url) {
      let classname = new StringName("UPNPDevice");
      let methodname = new StringName("get_description_url");
      this._bindings.method_get_description_url = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_service_type() {
    if (!this._bindings.method_set_service_type) {
      let classname = new StringName("UPNPDevice");
      let methodname = new StringName("set_service_type");
      this._bindings.method_set_service_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_service_type() {
    if (!this._bindings.method_get_service_type) {
      let classname = new StringName("UPNPDevice");
      let methodname = new StringName("get_service_type");
      this._bindings.method_get_service_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_igd_control_url() {
    if (!this._bindings.method_set_igd_control_url) {
      let classname = new StringName("UPNPDevice");
      let methodname = new StringName("set_igd_control_url");
      this._bindings.method_set_igd_control_url = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_igd_control_url() {
    if (!this._bindings.method_get_igd_control_url) {
      let classname = new StringName("UPNPDevice");
      let methodname = new StringName("get_igd_control_url");
      this._bindings.method_get_igd_control_url = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_igd_service_type() {
    if (!this._bindings.method_set_igd_service_type) {
      let classname = new StringName("UPNPDevice");
      let methodname = new StringName("set_igd_service_type");
      this._bindings.method_set_igd_service_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_igd_service_type() {
    if (!this._bindings.method_get_igd_service_type) {
      let classname = new StringName("UPNPDevice");
      let methodname = new StringName("get_igd_service_type");
      this._bindings.method_get_igd_service_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_igd_our_addr() {
    if (!this._bindings.method_set_igd_our_addr) {
      let classname = new StringName("UPNPDevice");
      let methodname = new StringName("set_igd_our_addr");
      this._bindings.method_set_igd_our_addr = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_igd_our_addr() {
    if (!this._bindings.method_get_igd_our_addr) {
      let classname = new StringName("UPNPDevice");
      let methodname = new StringName("get_igd_our_addr");
      this._bindings.method_get_igd_our_addr = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_igd_status() {
    if (!this._bindings.method_set_igd_status) {
      let classname = new StringName("UPNPDevice");
      let methodname = new StringName("set_igd_status");
      this._bindings.method_set_igd_status = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        519504122
      );
    }
  }
  static init_method_get_igd_status() {
    if (!this._bindings.method_get_igd_status) {
      let classname = new StringName("UPNPDevice");
      let methodname = new StringName("get_igd_status");
      this._bindings.method_get_igd_status = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        180887011
      );
    }
  }

  
  
  is_valid_gateway() {
    UPNPDevice.init_method_is_valid_gateway();
    return _call_native_mb_ret(
      UPNPDevice._bindings.method_is_valid_gateway,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  query_external_address() {
    UPNPDevice.init_method_query_external_address();
    return _call_native_mb_ret(
      UPNPDevice._bindings.method_query_external_address,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  add_port_mapping(_port, _port_internal, _desc, _proto, _duration) {
    UPNPDevice.init_method_add_port_mapping();
    return _call_native_mb_ret(
      UPNPDevice._bindings.method_add_port_mapping,
      this._owner,
			Variant.Type.INT,
    
      _port, _port_internal, _desc, _proto, _duration
    );
    
  }
  delete_port_mapping(_port, _proto) {
    UPNPDevice.init_method_delete_port_mapping();
    return _call_native_mb_ret(
      UPNPDevice._bindings.method_delete_port_mapping,
      this._owner,
			Variant.Type.INT,
    
      _port, _proto
    );
    
  }
  set_description_url(_url) {
    UPNPDevice.init_method_set_description_url();
    return _call_native_mb_no_ret(
      UPNPDevice._bindings.method_set_description_url,
      this._owner,
      _url
    );
    
  }
  get_description_url() {
    UPNPDevice.init_method_get_description_url();
    return _call_native_mb_ret(
      UPNPDevice._bindings.method_get_description_url,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_service_type(_type) {
    UPNPDevice.init_method_set_service_type();
    return _call_native_mb_no_ret(
      UPNPDevice._bindings.method_set_service_type,
      this._owner,
      _type
    );
    
  }
  get_service_type() {
    UPNPDevice.init_method_get_service_type();
    return _call_native_mb_ret(
      UPNPDevice._bindings.method_get_service_type,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_igd_control_url(_url) {
    UPNPDevice.init_method_set_igd_control_url();
    return _call_native_mb_no_ret(
      UPNPDevice._bindings.method_set_igd_control_url,
      this._owner,
      _url
    );
    
  }
  get_igd_control_url() {
    UPNPDevice.init_method_get_igd_control_url();
    return _call_native_mb_ret(
      UPNPDevice._bindings.method_get_igd_control_url,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_igd_service_type(_type) {
    UPNPDevice.init_method_set_igd_service_type();
    return _call_native_mb_no_ret(
      UPNPDevice._bindings.method_set_igd_service_type,
      this._owner,
      _type
    );
    
  }
  get_igd_service_type() {
    UPNPDevice.init_method_get_igd_service_type();
    return _call_native_mb_ret(
      UPNPDevice._bindings.method_get_igd_service_type,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_igd_our_addr(_addr) {
    UPNPDevice.init_method_set_igd_our_addr();
    return _call_native_mb_no_ret(
      UPNPDevice._bindings.method_set_igd_our_addr,
      this._owner,
      _addr
    );
    
  }
  get_igd_our_addr() {
    UPNPDevice.init_method_get_igd_our_addr();
    return _call_native_mb_ret(
      UPNPDevice._bindings.method_get_igd_our_addr,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_igd_status(_status) {
    UPNPDevice.init_method_set_igd_status();
    return _call_native_mb_no_ret(
      UPNPDevice._bindings.method_set_igd_status,
      this._owner,
      _status
    );
    
  }
  get_igd_status() {
    UPNPDevice.init_method_get_igd_status();
    return _call_native_mb_ret(
      UPNPDevice._bindings.method_get_igd_status,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get description_url () {
  return this.get_description_url();
}
set description_url (new_value) {
  this.set_description_url(new_value);
}
get service_type () {
  return this.get_service_type();
}
set service_type (new_value) {
  this.set_service_type(new_value);
}
get igd_control_url () {
  return this.get_igd_control_url();
}
set igd_control_url (new_value) {
  this.set_igd_control_url(new_value);
}
get igd_service_type () {
  return this.get_igd_service_type();
}
set igd_service_type (new_value) {
  this.set_igd_service_type(new_value);
}
get igd_our_addr () {
  return this.get_igd_our_addr();
}
set igd_our_addr (new_value) {
  this.set_igd_our_addr(new_value);
}
get igd_status () {
  return this.get_igd_status();
}
set igd_status (new_value) {
  this.set_igd_status(new_value);
}

  static IGDStatus = {
    IGD_STATUS_OK: 0,
    IGD_STATUS_HTTP_ERROR: 1,
    IGD_STATUS_HTTP_EMPTY: 2,
    IGD_STATUS_NO_URLS: 3,
    IGD_STATUS_NO_IGD: 4,
    IGD_STATUS_DISCONNECTED: 5,
    IGD_STATUS_UNKNOWN_DEVICE: 6,
    IGD_STATUS_INVALID_CONTROL: 7,
    IGD_STATUS_MALLOC_ERROR: 8,
    IGD_STATUS_UNKNOWN_ERROR: 9,
  }
}