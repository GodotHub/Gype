import * as internal from '__internal__';
import { Color } from '@js_godot/variant/color'
import { StringName } from '@js_godot/variant/string_name'
import { StyleBox } from '@js_godot/classes/style_box'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_color;
  method_get_color;
  method_set_thickness;
  method_get_thickness;
  method_set_grow_begin;
  method_get_grow_begin;
  method_set_grow_end;
  method_get_grow_end;
  method_set_vertical;
  method_is_vertical;
}
export class StyleBoxLine extends StyleBox{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("StyleBoxLine");
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
      let classname = new StringName("StyleBoxLine");
      let methodname = new StringName("set_color");
      this._bindings.method_set_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("StyleBoxLine");
      let methodname = new StringName("get_color");
      this._bindings.method_get_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("StyleBoxLine");
      let methodname = new StringName("set_thickness");
      this._bindings.method_set_thickness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("StyleBoxLine");
      let methodname = new StringName("get_thickness");
      this._bindings.method_get_thickness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("StyleBoxLine");
      let methodname = new StringName("set_grow_begin");
      this._bindings.method_set_grow_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("StyleBoxLine");
      let methodname = new StringName("get_grow_begin");
      this._bindings.method_get_grow_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("StyleBoxLine");
      let methodname = new StringName("set_grow_end");
      this._bindings.method_set_grow_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("StyleBoxLine");
      let methodname = new StringName("get_grow_end");
      this._bindings.method_get_grow_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("StyleBoxLine");
      let methodname = new StringName("set_vertical");
      this._bindings.method_set_vertical = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("StyleBoxLine");
      let methodname = new StringName("is_vertical");
      this._bindings.method_is_vertical = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  
  set_color(_color) {
    return _call_native_mb_no_ret(
      StyleBoxLine._bindings.method_set_color,
      this._owner,
      _color
    );
    
  }
  get_color() {
    return _call_native_mb_ret(
      StyleBoxLine._bindings.method_get_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_thickness(_thickness) {
    return _call_native_mb_no_ret(
      StyleBoxLine._bindings.method_set_thickness,
      this._owner,
      _thickness
    );
    
  }
  get_thickness() {
    return _call_native_mb_ret(
      StyleBoxLine._bindings.method_get_thickness,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_grow_begin(_offset) {
    return _call_native_mb_no_ret(
      StyleBoxLine._bindings.method_set_grow_begin,
      this._owner,
      _offset
    );
    
  }
  get_grow_begin() {
    return _call_native_mb_ret(
      StyleBoxLine._bindings.method_get_grow_begin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_grow_end(_offset) {
    return _call_native_mb_no_ret(
      StyleBoxLine._bindings.method_set_grow_end,
      this._owner,
      _offset
    );
    
  }
  get_grow_end() {
    return _call_native_mb_ret(
      StyleBoxLine._bindings.method_get_grow_end,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_vertical(_vertical) {
    return _call_native_mb_no_ret(
      StyleBoxLine._bindings.method_set_vertical,
      this._owner,
      _vertical
    );
    
  }
  is_vertical() {
    return _call_native_mb_ret(
      StyleBoxLine._bindings.method_is_vertical,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  
get color () {
  return this.get_color();
}
set color (new_value) {
  this.set_color(new_value);
}
get grow_begin () {
  return this.get_grow_begin();
}
set grow_begin (new_value) {
  this.set_grow_begin(new_value);
}
get grow_end () {
  return this.get_grow_end();
}
set grow_end (new_value) {
  this.set_grow_end(new_value);
}
get thickness () {
  return this.get_thickness();
}
set thickness (new_value) {
  this.set_thickness(new_value);
}
get vertical () {
  return this.is_vertical();
}
set vertical (new_value) {
  this.set_vertical(new_value);
}


  static {
    this._init_bindings();
  }
}