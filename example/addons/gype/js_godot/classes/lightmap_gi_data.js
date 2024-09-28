import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_lightmap_textures;
  method_get_lightmap_textures;
  method_set_uses_spherical_harmonics;
  method_is_using_spherical_harmonics;
  method_add_user;
  method_get_user_count;
  method_get_user_path;
  method_clear_users;
  method_set_light_texture;
  method_get_light_texture;
}
@GodotClass
export class LightmapGIData extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("LightmapGIData");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_lightmap_textures() {
    if (!this._bindings.method_set_lightmap_textures) {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("set_lightmap_textures");
      this._bindings.method_set_lightmap_textures = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_lightmap_textures() {
    if (!this._bindings.method_get_lightmap_textures) {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("get_lightmap_textures");
      this._bindings.method_get_lightmap_textures = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_uses_spherical_harmonics() {
    if (!this._bindings.method_set_uses_spherical_harmonics) {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("set_uses_spherical_harmonics");
      this._bindings.method_set_uses_spherical_harmonics = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_spherical_harmonics() {
    if (!this._bindings.method_is_using_spherical_harmonics) {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("is_using_spherical_harmonics");
      this._bindings.method_is_using_spherical_harmonics = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_add_user() {
    if (!this._bindings.method_add_user) {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("add_user");
      this._bindings.method_add_user = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4272570515
      );
    }
  }
  static init_method_get_user_count() {
    if (!this._bindings.method_get_user_count) {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("get_user_count");
      this._bindings.method_get_user_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_user_path() {
    if (!this._bindings.method_get_user_path) {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("get_user_path");
      this._bindings.method_get_user_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        408788394
      );
    }
  }
  static init_method_clear_users() {
    if (!this._bindings.method_clear_users) {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("clear_users");
      this._bindings.method_clear_users = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_light_texture() {
    if (!this._bindings.method_set_light_texture) {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("set_light_texture");
      this._bindings.method_set_light_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1278366092
      );
    }
  }
  static init_method_get_light_texture() {
    if (!this._bindings.method_get_light_texture) {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("get_light_texture");
      this._bindings.method_get_light_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3984243839
      );
    }
  }

  
  
  set_lightmap_textures(_light_textures) {
    LightmapGIData.init_method_set_lightmap_textures();
    return _call_native_mb_no_ret(
      LightmapGIData._bindings.method_set_lightmap_textures,
      this._owner,
      _light_textures
    );
    
  }
  get_lightmap_textures() {
    LightmapGIData.init_method_get_lightmap_textures();
    return _call_native_mb_ret(
      LightmapGIData._bindings.method_get_lightmap_textures,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_uses_spherical_harmonics(_uses_spherical_harmonics) {
    LightmapGIData.init_method_set_uses_spherical_harmonics();
    return _call_native_mb_no_ret(
      LightmapGIData._bindings.method_set_uses_spherical_harmonics,
      this._owner,
      _uses_spherical_harmonics
    );
    
  }
  is_using_spherical_harmonics() {
    LightmapGIData.init_method_is_using_spherical_harmonics();
    return _call_native_mb_ret(
      LightmapGIData._bindings.method_is_using_spherical_harmonics,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  add_user(_path, _uv_scale, _slice_index, _sub_instance) {
    LightmapGIData.init_method_add_user();
    return _call_native_mb_no_ret(
      LightmapGIData._bindings.method_add_user,
      this._owner,
      _path, _uv_scale, _slice_index, _sub_instance
    );
    
  }
  get_user_count() {
    LightmapGIData.init_method_get_user_count();
    return _call_native_mb_ret(
      LightmapGIData._bindings.method_get_user_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_user_path(_user_idx) {
    LightmapGIData.init_method_get_user_path();
    return _call_native_mb_ret(
      LightmapGIData._bindings.method_get_user_path,
      this._owner,
			Variant.Type.NODE_PATH,
    
      _user_idx
    );
    
  }
  clear_users() {
    LightmapGIData.init_method_clear_users();
    return _call_native_mb_no_ret(
      LightmapGIData._bindings.method_clear_users,
      this._owner,
      
    );
    
  }
  set_light_texture(_light_texture) {
    LightmapGIData.init_method_set_light_texture();
    return _call_native_mb_no_ret(
      LightmapGIData._bindings.method_set_light_texture,
      this._owner,
      _light_texture
    );
    
  }
  get_light_texture() {
    LightmapGIData.init_method_get_light_texture();
    return _call_native_mb_ret(
      LightmapGIData._bindings.method_get_light_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get lightmap_textures () {
  return this.get_lightmap_textures();
}
set lightmap_textures (new_value) {
  this.set_lightmap_textures(new_value);
}
get uses_spherical_harmonics () {
  return this.is_using_spherical_harmonics();
}
set uses_spherical_harmonics (new_value) {
  this.set_uses_spherical_harmonics(new_value);
}
get user_data () {
  return this._get_user_data();
}
set user_data (new_value) {
  this._set_user_data(new_value);
}
get probe_data () {
  return this._get_probe_data();
}
set probe_data (new_value) {
  this._set_probe_data(new_value);
}
get light_texture () {
  return this.get_light_texture();
}
set light_texture (new_value) {
  this.set_light_texture(new_value);
}
get light_textures () {
  return this._get_light_textures_data();
}
set light_textures (new_value) {
  this._set_light_textures_data(new_value);
}

}