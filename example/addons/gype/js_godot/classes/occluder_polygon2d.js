import * as internal from '__internal__';
import { Resource } from '@js_godot/classes/resource'
import { StringName } from '@js_godot/variant/string_name'
import { PackedVector2Array } from '@js_godot/variant/packed_vector2_array'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_closed;
  method_is_closed;
  method_set_cull_mode;
  method_get_cull_mode;
  method_set_polygon;
  method_get_polygon;
}
export class OccluderPolygon2D extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("OccluderPolygon2D");
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
      let classname = new StringName("OccluderPolygon2D");
      let methodname = new StringName("set_closed");
      this._bindings.method_set_closed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("OccluderPolygon2D");
      let methodname = new StringName("is_closed");
      this._bindings.method_is_closed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("OccluderPolygon2D");
      let methodname = new StringName("set_cull_mode");
      this._bindings.method_set_cull_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3500863002
      );
    }
    {
      let classname = new StringName("OccluderPolygon2D");
      let methodname = new StringName("get_cull_mode");
      this._bindings.method_get_cull_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        33931036
      );
    }
    {
      let classname = new StringName("OccluderPolygon2D");
      let methodname = new StringName("set_polygon");
      this._bindings.method_set_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1509147220
      );
    }
    {
      let classname = new StringName("OccluderPolygon2D");
      let methodname = new StringName("get_polygon");
      this._bindings.method_get_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2961356807
      );
    }
  }
  
  set_closed(_closed) {
    return _call_native_mb_no_ret(
      OccluderPolygon2D._bindings.method_set_closed,
      this._owner,
      _closed
    );
    
  }
  is_closed() {
    return _call_native_mb_ret(
      OccluderPolygon2D._bindings.method_is_closed,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_cull_mode(_cull_mode) {
    return _call_native_mb_no_ret(
      OccluderPolygon2D._bindings.method_set_cull_mode,
      this._owner,
      _cull_mode
    );
    
  }
  get_cull_mode() {
    return _call_native_mb_ret(
      OccluderPolygon2D._bindings.method_get_cull_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_polygon(_polygon) {
    return _call_native_mb_no_ret(
      OccluderPolygon2D._bindings.method_set_polygon,
      this._owner,
      _polygon
    );
    
  }
  get_polygon() {
    return _call_native_mb_ret(
      OccluderPolygon2D._bindings.method_get_polygon,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      
    );
    
  }
  
get closed () {
  return this.is_closed();
}
set closed (new_value) {
  this.set_closed(new_value);
}
get cull_mode () {
  return this.get_cull_mode();
}
set cull_mode (new_value) {
  this.set_cull_mode(new_value);
}
get polygon () {
  return this.get_polygon();
}
set polygon (new_value) {
  this.set_polygon(new_value);
}

  static CullMode = {
    CULL_DISABLED: 0,
    CULL_CLOCKWISE: 1,
    CULL_COUNTER_CLOCKWISE: 2,
  }

  static {
    this._init_bindings();
  }
}