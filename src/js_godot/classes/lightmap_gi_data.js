import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { Rect2 } from 'src/js_godot/variant/rect2'
import { NodePath } from 'src/js_godot/variant/node_path'
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


export class LightmapGIData extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("LightmapGIData");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("set_lightmap_textures");
      this._bindings.method_set_lightmap_textures = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("get_lightmap_textures");
      this._bindings.method_get_lightmap_textures = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("set_uses_spherical_harmonics");
      this._bindings.method_set_uses_spherical_harmonics = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("is_using_spherical_harmonics");
      this._bindings.method_is_using_spherical_harmonics = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("add_user");
      this._bindings.method_add_user = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4272570515
      );
    }
    {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("get_user_count");
      this._bindings.method_get_user_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("get_user_path");
      this._bindings.method_get_user_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        408788394
      );
    }
    {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("clear_users");
      this._bindings.method_clear_users = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("LightmapGIData");
      let methodname = new StringName("set_light_texture");
      this._bindings.method_set_light_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1278366092
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_lightmap_textures,
      this._owner,
      _light_textures
    );
  }
  get_lightmap_textures() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_lightmap_textures,
      this._owner,
			Variant.INT,
      
    );
  }
  set_uses_spherical_harmonics(_uses_spherical_harmonics) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_uses_spherical_harmonics,
      this._owner,
      _uses_spherical_harmonics
    );
  }
  is_using_spherical_harmonics() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_using_spherical_harmonics,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  add_user(_path, _uv_scale, _slice_index, _sub_instance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_user,
      this._owner,
      _path, _uv_scale, _slice_index, _sub_instance
    );
  }
  get_user_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_user_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_user_path(_user_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_user_path,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      _user_idx
    );
  }
  clear_users() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_users,
      this._owner,
      
    );
  }
  set_light_texture(_light_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_light_texture,
      this._owner,
      _light_texture
    );
  }
  get_light_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_light_texture,
      this._owner,
			Variant.INT,
      
    );
  }
}