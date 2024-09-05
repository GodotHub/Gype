import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { GodotObject } from '@js_godot/classes/godot_object'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_default_theme;
  method_get_project_theme;
  method_set_fallback_base_scale;
  method_get_fallback_base_scale;
  method_set_fallback_font;
  method_get_fallback_font;
  method_set_fallback_font_size;
  method_get_fallback_font_size;
  method_set_fallback_icon;
  method_get_fallback_icon;
  method_set_fallback_stylebox;
  method_get_fallback_stylebox;
}class _ThemeDB extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ThemeDB");
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
      let classname = new StringName("ThemeDB");
      let methodname = new StringName("get_default_theme");
      this._bindings.method_get_default_theme = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        754276358
      );
    }
    {
      let classname = new StringName("ThemeDB");
      let methodname = new StringName("get_project_theme");
      this._bindings.method_get_project_theme = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        754276358
      );
    }
    {
      let classname = new StringName("ThemeDB");
      let methodname = new StringName("set_fallback_base_scale");
      this._bindings.method_set_fallback_base_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ThemeDB");
      let methodname = new StringName("get_fallback_base_scale");
      this._bindings.method_get_fallback_base_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        191475506
      );
    }
    {
      let classname = new StringName("ThemeDB");
      let methodname = new StringName("set_fallback_font");
      this._bindings.method_set_fallback_font = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1262170328
      );
    }
    {
      let classname = new StringName("ThemeDB");
      let methodname = new StringName("get_fallback_font");
      this._bindings.method_get_fallback_font = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3656929885
      );
    }
    {
      let classname = new StringName("ThemeDB");
      let methodname = new StringName("set_fallback_font_size");
      this._bindings.method_set_fallback_font_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("ThemeDB");
      let methodname = new StringName("get_fallback_font_size");
      this._bindings.method_get_fallback_font_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("ThemeDB");
      let methodname = new StringName("set_fallback_icon");
      this._bindings.method_set_fallback_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("ThemeDB");
      let methodname = new StringName("get_fallback_icon");
      this._bindings.method_get_fallback_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        255860311
      );
    }
    {
      let classname = new StringName("ThemeDB");
      let methodname = new StringName("set_fallback_stylebox");
      this._bindings.method_set_fallback_stylebox = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2797200388
      );
    }
    {
      let classname = new StringName("ThemeDB");
      let methodname = new StringName("get_fallback_stylebox");
      this._bindings.method_get_fallback_stylebox = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        496040854
      );
    }
  }
  
  get_default_theme() {
    return _call_native_mb_ret(
      _ThemeDB._bindings.method_get_default_theme,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_project_theme() {
    return _call_native_mb_ret(
      _ThemeDB._bindings.method_get_project_theme,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_fallback_base_scale(_base_scale) {
    return _call_native_mb_no_ret(
      _ThemeDB._bindings.method_set_fallback_base_scale,
      this._owner,
      _base_scale
    );
    
  }
  get_fallback_base_scale() {
    return _call_native_mb_ret(
      _ThemeDB._bindings.method_get_fallback_base_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_fallback_font(_font) {
    return _call_native_mb_no_ret(
      _ThemeDB._bindings.method_set_fallback_font,
      this._owner,
      _font
    );
    
  }
  get_fallback_font() {
    return _call_native_mb_ret(
      _ThemeDB._bindings.method_get_fallback_font,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_fallback_font_size(_font_size) {
    return _call_native_mb_no_ret(
      _ThemeDB._bindings.method_set_fallback_font_size,
      this._owner,
      _font_size
    );
    
  }
  get_fallback_font_size() {
    return _call_native_mb_ret(
      _ThemeDB._bindings.method_get_fallback_font_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_fallback_icon(_icon) {
    return _call_native_mb_no_ret(
      _ThemeDB._bindings.method_set_fallback_icon,
      this._owner,
      _icon
    );
    
  }
  get_fallback_icon() {
    return _call_native_mb_ret(
      _ThemeDB._bindings.method_get_fallback_icon,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_fallback_stylebox(_stylebox) {
    return _call_native_mb_no_ret(
      _ThemeDB._bindings.method_set_fallback_stylebox,
      this._owner,
      _stylebox
    );
    
  }
  get_fallback_stylebox() {
    return _call_native_mb_ret(
      _ThemeDB._bindings.method_get_fallback_stylebox,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get fallback_base_scale () {
  return this.get_fallback_base_scale();
}
set fallback_base_scale (new_value) {
  this.set_fallback_base_scale(new_value);
}
get fallback_font () {
  return this.get_fallback_font();
}
set fallback_font (new_value) {
  this.set_fallback_font(new_value);
}
get fallback_font_size () {
  return this.get_fallback_font_size();
}
set fallback_font_size (new_value) {
  this.set_fallback_font_size(new_value);
}
get fallback_icon () {
  return this.get_fallback_icon();
}
set fallback_icon (new_value) {
  this.set_fallback_icon(new_value);
}
get fallback_stylebox () {
  return this.get_fallback_stylebox();
}
set fallback_stylebox (new_value) {
  this.set_fallback_stylebox(new_value);
}


  static {
    this._init_bindings();
  }
}
export const ThemeDB = (function () {
  let _instance;
  function create_instance() {
    return new _ThemeDB();
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