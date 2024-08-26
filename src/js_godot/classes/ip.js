import * as internal from '__internal__';
import { GDArray } from 'src/js_godot/variant/gd_array'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { GodotObject } from 'src/js_godot/classesgodot_object'
import { GDString } from 'src/js_godot/variant/gd_string'
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
}

export const IP = new _IP();

class _IP extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("IP");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("IP");
      let methodname = new StringName("resolve_hostname");
      this._bindings.method_resolve_hostname = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4283295457
      );
    }
    {
      let classname = new StringName("IP");
      let methodname = new StringName("resolve_hostname_addresses");
      this._bindings.method_resolve_hostname_addresses = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        773767525
      );
    }
    {
      let classname = new StringName("IP");
      let methodname = new StringName("resolve_hostname_queue_item");
      this._bindings.method_resolve_hostname_queue_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1749894742
      );
    }
    {
      let classname = new StringName("IP");
      let methodname = new StringName("get_resolve_item_status");
      this._bindings.method_get_resolve_item_status = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3812250196
      );
    }
    {
      let classname = new StringName("IP");
      let methodname = new StringName("get_resolve_item_address");
      this._bindings.method_get_resolve_item_address = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("IP");
      let methodname = new StringName("get_resolve_item_addresses");
      this._bindings.method_get_resolve_item_addresses = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        663333327
      );
    }
    {
      let classname = new StringName("IP");
      let methodname = new StringName("erase_resolve_item");
      this._bindings.method_erase_resolve_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("IP");
      let methodname = new StringName("get_local_addresses");
      this._bindings.method_get_local_addresses = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("IP");
      let methodname = new StringName("get_local_interfaces");
      this._bindings.method_get_local_interfaces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_resolve_hostname,
      this._owner,
			Variant.Type.STRING
    ,
      _host, _ip_type
    );
  }
  resolve_hostname_addresses(_host, _ip_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_resolve_hostname_addresses,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _host, _ip_type
    );
  }
  resolve_hostname_queue_item(_host, _ip_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_resolve_hostname_queue_item,
      this._owner,
			Variant.Type.INT,
      _host, _ip_type
    );
  }
  get_resolve_item_status(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_resolve_item_status,
      this._owner,
			Variant.INT,
      _id
    );
  }
  get_resolve_item_address(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_resolve_item_address,
      this._owner,
			Variant.Type.STRING
    ,
      _id
    );
  }
  get_resolve_item_addresses(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_resolve_item_addresses,
      this._owner,
			Variant.Type.ARRAY
    ,
      _id
    );
  }
  erase_resolve_item(_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_erase_resolve_item,
      this._owner,
      _id
    );
  }
  get_local_addresses() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_local_addresses,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  get_local_interfaces() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_local_interfaces,
      this._owner,
			Variant.INT,
      
    );
  }
  clear_cache(_hostname) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_cache,
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