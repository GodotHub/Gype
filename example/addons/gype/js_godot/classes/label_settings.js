import * as internal from '__internal__';
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
  method_set_line_spacing;
  method_get_line_spacing;
  method_set_font;
  method_get_font;
  method_set_font_size;
  method_get_font_size;
  method_set_font_color;
  method_get_font_color;
  method_set_outline_size;
  method_get_outline_size;
  method_set_outline_color;
  method_get_outline_color;
  method_set_shadow_size;
  method_get_shadow_size;
  method_set_shadow_color;
  method_get_shadow_color;
  method_set_shadow_offset;
  method_get_shadow_offset;
}
@GodotClass
export class LabelSettings extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("LabelSettings");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_line_spacing() {
    if (!this._bindings.method_set_line_spacing) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("set_line_spacing");
      this._bindings.method_set_line_spacing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_line_spacing() {
    if (!this._bindings.method_get_line_spacing) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("get_line_spacing");
      this._bindings.method_get_line_spacing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_font() {
    if (!this._bindings.method_set_font) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("set_font");
      this._bindings.method_set_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1262170328
      );
    }
  }
  static init_method_get_font() {
    if (!this._bindings.method_get_font) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("get_font");
      this._bindings.method_get_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3229501585
      );
    }
  }
  static init_method_set_font_size() {
    if (!this._bindings.method_set_font_size) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("set_font_size");
      this._bindings.method_set_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_font_size() {
    if (!this._bindings.method_get_font_size) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("get_font_size");
      this._bindings.method_get_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_font_color() {
    if (!this._bindings.method_set_font_color) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("set_font_color");
      this._bindings.method_set_font_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_font_color() {
    if (!this._bindings.method_get_font_color) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("get_font_color");
      this._bindings.method_get_font_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_outline_size() {
    if (!this._bindings.method_set_outline_size) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("set_outline_size");
      this._bindings.method_set_outline_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_outline_size() {
    if (!this._bindings.method_get_outline_size) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("get_outline_size");
      this._bindings.method_get_outline_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_outline_color() {
    if (!this._bindings.method_set_outline_color) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("set_outline_color");
      this._bindings.method_set_outline_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_outline_color() {
    if (!this._bindings.method_get_outline_color) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("get_outline_color");
      this._bindings.method_get_outline_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_shadow_size() {
    if (!this._bindings.method_set_shadow_size) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("set_shadow_size");
      this._bindings.method_set_shadow_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_shadow_size() {
    if (!this._bindings.method_get_shadow_size) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("get_shadow_size");
      this._bindings.method_get_shadow_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_shadow_color() {
    if (!this._bindings.method_set_shadow_color) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("set_shadow_color");
      this._bindings.method_set_shadow_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_shadow_color() {
    if (!this._bindings.method_get_shadow_color) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("get_shadow_color");
      this._bindings.method_get_shadow_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_shadow_offset() {
    if (!this._bindings.method_set_shadow_offset) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("set_shadow_offset");
      this._bindings.method_set_shadow_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_shadow_offset() {
    if (!this._bindings.method_get_shadow_offset) {
      let classname = new StringName("LabelSettings");
      let methodname = new StringName("get_shadow_offset");
      this._bindings.method_get_shadow_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }

  
  
  set_line_spacing(_spacing) {
    LabelSettings.init_method_set_line_spacing();
    return _call_native_mb_no_ret(
      LabelSettings._bindings.method_set_line_spacing,
      this._owner,
      _spacing
    );
    
  }
  get_line_spacing() {
    LabelSettings.init_method_get_line_spacing();
    return _call_native_mb_ret(
      LabelSettings._bindings.method_get_line_spacing,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_font(_font) {
    LabelSettings.init_method_set_font();
    return _call_native_mb_no_ret(
      LabelSettings._bindings.method_set_font,
      this._owner,
      _font
    );
    
  }
  get_font() {
    LabelSettings.init_method_get_font();
    return _call_native_mb_ret(
      LabelSettings._bindings.method_get_font,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_font_size(_size) {
    LabelSettings.init_method_set_font_size();
    return _call_native_mb_no_ret(
      LabelSettings._bindings.method_set_font_size,
      this._owner,
      _size
    );
    
  }
  get_font_size() {
    LabelSettings.init_method_get_font_size();
    return _call_native_mb_ret(
      LabelSettings._bindings.method_get_font_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_font_color(_color) {
    LabelSettings.init_method_set_font_color();
    return _call_native_mb_no_ret(
      LabelSettings._bindings.method_set_font_color,
      this._owner,
      _color
    );
    
  }
  get_font_color() {
    LabelSettings.init_method_get_font_color();
    return _call_native_mb_ret(
      LabelSettings._bindings.method_get_font_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_outline_size(_size) {
    LabelSettings.init_method_set_outline_size();
    return _call_native_mb_no_ret(
      LabelSettings._bindings.method_set_outline_size,
      this._owner,
      _size
    );
    
  }
  get_outline_size() {
    LabelSettings.init_method_get_outline_size();
    return _call_native_mb_ret(
      LabelSettings._bindings.method_get_outline_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_outline_color(_color) {
    LabelSettings.init_method_set_outline_color();
    return _call_native_mb_no_ret(
      LabelSettings._bindings.method_set_outline_color,
      this._owner,
      _color
    );
    
  }
  get_outline_color() {
    LabelSettings.init_method_get_outline_color();
    return _call_native_mb_ret(
      LabelSettings._bindings.method_get_outline_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_shadow_size(_size) {
    LabelSettings.init_method_set_shadow_size();
    return _call_native_mb_no_ret(
      LabelSettings._bindings.method_set_shadow_size,
      this._owner,
      _size
    );
    
  }
  get_shadow_size() {
    LabelSettings.init_method_get_shadow_size();
    return _call_native_mb_ret(
      LabelSettings._bindings.method_get_shadow_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_shadow_color(_color) {
    LabelSettings.init_method_set_shadow_color();
    return _call_native_mb_no_ret(
      LabelSettings._bindings.method_set_shadow_color,
      this._owner,
      _color
    );
    
  }
  get_shadow_color() {
    LabelSettings.init_method_get_shadow_color();
    return _call_native_mb_ret(
      LabelSettings._bindings.method_get_shadow_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_shadow_offset(_offset) {
    LabelSettings.init_method_set_shadow_offset();
    return _call_native_mb_no_ret(
      LabelSettings._bindings.method_set_shadow_offset,
      this._owner,
      _offset
    );
    
  }
  get_shadow_offset() {
    LabelSettings.init_method_get_shadow_offset();
    return _call_native_mb_ret(
      LabelSettings._bindings.method_get_shadow_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  
get line_spacing () {
  return this.get_line_spacing();
}
set line_spacing (new_value) {
  this.set_line_spacing(new_value);
}
get font () {
  return this.get_font();
}
set font (new_value) {
  this.set_font(new_value);
}
get font_size () {
  return this.get_font_size();
}
set font_size (new_value) {
  this.set_font_size(new_value);
}
get font_color () {
  return this.get_font_color();
}
set font_color (new_value) {
  this.set_font_color(new_value);
}
get outline_size () {
  return this.get_outline_size();
}
set outline_size (new_value) {
  this.set_outline_size(new_value);
}
get outline_color () {
  return this.get_outline_color();
}
set outline_color (new_value) {
  this.set_outline_color(new_value);
}
get shadow_size () {
  return this.get_shadow_size();
}
set shadow_size (new_value) {
  this.set_shadow_size(new_value);
}
get shadow_color () {
  return this.get_shadow_color();
}
set shadow_color (new_value) {
  this.set_shadow_color(new_value);
}
get shadow_offset () {
  return this.get_shadow_offset();
}
set shadow_offset (new_value) {
  this.set_shadow_offset(new_value);
}

}