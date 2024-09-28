import * as internal from '__internal__';
import { GraphElement } from '@js_godot/classes/graph_element'
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
  method_set_title;
  method_get_title;
  method_get_titlebar_hbox;
  method_set_autoshrink_enabled;
  method_is_autoshrink_enabled;
  method_set_autoshrink_margin;
  method_get_autoshrink_margin;
  method_set_drag_margin;
  method_get_drag_margin;
  method_set_tint_color_enabled;
  method_is_tint_color_enabled;
  method_set_tint_color;
  method_get_tint_color;
}
@GodotClass
export class GraphFrame extends GraphElement{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GraphFrame");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_title() {
    if (!this._bindings.method_set_title) {
      let classname = new StringName("GraphFrame");
      let methodname = new StringName("set_title");
      this._bindings.method_set_title = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_title() {
    if (!this._bindings.method_get_title) {
      let classname = new StringName("GraphFrame");
      let methodname = new StringName("get_title");
      this._bindings.method_get_title = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_titlebar_hbox() {
    if (!this._bindings.method_get_titlebar_hbox) {
      let classname = new StringName("GraphFrame");
      let methodname = new StringName("get_titlebar_hbox");
      this._bindings.method_get_titlebar_hbox = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3590609951
      );
    }
  }
  static init_method_set_autoshrink_enabled() {
    if (!this._bindings.method_set_autoshrink_enabled) {
      let classname = new StringName("GraphFrame");
      let methodname = new StringName("set_autoshrink_enabled");
      this._bindings.method_set_autoshrink_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_autoshrink_enabled() {
    if (!this._bindings.method_is_autoshrink_enabled) {
      let classname = new StringName("GraphFrame");
      let methodname = new StringName("is_autoshrink_enabled");
      this._bindings.method_is_autoshrink_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_autoshrink_margin() {
    if (!this._bindings.method_set_autoshrink_margin) {
      let classname = new StringName("GraphFrame");
      let methodname = new StringName("set_autoshrink_margin");
      this._bindings.method_set_autoshrink_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_autoshrink_margin() {
    if (!this._bindings.method_get_autoshrink_margin) {
      let classname = new StringName("GraphFrame");
      let methodname = new StringName("get_autoshrink_margin");
      this._bindings.method_get_autoshrink_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_drag_margin() {
    if (!this._bindings.method_set_drag_margin) {
      let classname = new StringName("GraphFrame");
      let methodname = new StringName("set_drag_margin");
      this._bindings.method_set_drag_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_drag_margin() {
    if (!this._bindings.method_get_drag_margin) {
      let classname = new StringName("GraphFrame");
      let methodname = new StringName("get_drag_margin");
      this._bindings.method_get_drag_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_tint_color_enabled() {
    if (!this._bindings.method_set_tint_color_enabled) {
      let classname = new StringName("GraphFrame");
      let methodname = new StringName("set_tint_color_enabled");
      this._bindings.method_set_tint_color_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_tint_color_enabled() {
    if (!this._bindings.method_is_tint_color_enabled) {
      let classname = new StringName("GraphFrame");
      let methodname = new StringName("is_tint_color_enabled");
      this._bindings.method_is_tint_color_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_tint_color() {
    if (!this._bindings.method_set_tint_color) {
      let classname = new StringName("GraphFrame");
      let methodname = new StringName("set_tint_color");
      this._bindings.method_set_tint_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_tint_color() {
    if (!this._bindings.method_get_tint_color) {
      let classname = new StringName("GraphFrame");
      let methodname = new StringName("get_tint_color");
      this._bindings.method_get_tint_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }

  
  
  set_title(_title) {
    GraphFrame.init_method_set_title();
    return _call_native_mb_no_ret(
      GraphFrame._bindings.method_set_title,
      this._owner,
      _title
    );
    
  }
  get_title() {
    GraphFrame.init_method_get_title();
    return _call_native_mb_ret(
      GraphFrame._bindings.method_get_title,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_titlebar_hbox() {
    GraphFrame.init_method_get_titlebar_hbox();
    return _call_native_mb_ret(
      GraphFrame._bindings.method_get_titlebar_hbox,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_autoshrink_enabled(_shrink) {
    GraphFrame.init_method_set_autoshrink_enabled();
    return _call_native_mb_no_ret(
      GraphFrame._bindings.method_set_autoshrink_enabled,
      this._owner,
      _shrink
    );
    
  }
  is_autoshrink_enabled() {
    GraphFrame.init_method_is_autoshrink_enabled();
    return _call_native_mb_ret(
      GraphFrame._bindings.method_is_autoshrink_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_autoshrink_margin(_autoshrink_margin) {
    GraphFrame.init_method_set_autoshrink_margin();
    return _call_native_mb_no_ret(
      GraphFrame._bindings.method_set_autoshrink_margin,
      this._owner,
      _autoshrink_margin
    );
    
  }
  get_autoshrink_margin() {
    GraphFrame.init_method_get_autoshrink_margin();
    return _call_native_mb_ret(
      GraphFrame._bindings.method_get_autoshrink_margin,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_drag_margin(_drag_margin) {
    GraphFrame.init_method_set_drag_margin();
    return _call_native_mb_no_ret(
      GraphFrame._bindings.method_set_drag_margin,
      this._owner,
      _drag_margin
    );
    
  }
  get_drag_margin() {
    GraphFrame.init_method_get_drag_margin();
    return _call_native_mb_ret(
      GraphFrame._bindings.method_get_drag_margin,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_tint_color_enabled(_enable) {
    GraphFrame.init_method_set_tint_color_enabled();
    return _call_native_mb_no_ret(
      GraphFrame._bindings.method_set_tint_color_enabled,
      this._owner,
      _enable
    );
    
  }
  is_tint_color_enabled() {
    GraphFrame.init_method_is_tint_color_enabled();
    return _call_native_mb_ret(
      GraphFrame._bindings.method_is_tint_color_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_tint_color(_color) {
    GraphFrame.init_method_set_tint_color();
    return _call_native_mb_no_ret(
      GraphFrame._bindings.method_set_tint_color,
      this._owner,
      _color
    );
    
  }
  get_tint_color() {
    GraphFrame.init_method_get_tint_color();
    return _call_native_mb_ret(
      GraphFrame._bindings.method_get_tint_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  
get title () {
  return this.get_title();
}
set title (new_value) {
  this.set_title(new_value);
}
get autoshrink_enabled () {
  return this.is_autoshrink_enabled();
}
set autoshrink_enabled (new_value) {
  this.set_autoshrink_enabled(new_value);
}
get autoshrink_margin () {
  return this.get_autoshrink_margin();
}
set autoshrink_margin (new_value) {
  this.set_autoshrink_margin(new_value);
}
get drag_margin () {
  return this.get_drag_margin();
}
set drag_margin (new_value) {
  this.set_drag_margin(new_value);
}
get tint_color_enabled () {
  return this.is_tint_color_enabled();
}
set tint_color_enabled (new_value) {
  this.set_tint_color_enabled(new_value);
}
get tint_color () {
  return this.get_tint_color();
}
set tint_color (new_value) {
  this.set_tint_color(new_value);
}

}