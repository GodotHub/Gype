import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { BaseButton } from '@js_godot/classes/base_button'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_text;
  method_get_text;
  method_set_text_overrun_behavior;
  method_get_text_overrun_behavior;
  method_set_autowrap_mode;
  method_get_autowrap_mode;
  method_set_text_direction;
  method_get_text_direction;
  method_set_language;
  method_get_language;
  method_set_button_icon;
  method_get_button_icon;
  method_set_flat;
  method_is_flat;
  method_set_clip_text;
  method_get_clip_text;
  method_set_text_alignment;
  method_get_text_alignment;
  method_set_icon_alignment;
  method_get_icon_alignment;
  method_set_vertical_icon_alignment;
  method_get_vertical_icon_alignment;
  method_set_expand_icon;
  method_is_expand_icon;
}
export class Button extends BaseButton{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Button");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_text() {
    if (!this.#_bindings.method_set_text) {
      let classname = new StringName("Button");
      let methodname = new StringName("set_text");
      this.#_bindings.method_set_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_text() {
    if (!this.#_bindings.method_get_text) {
      let classname = new StringName("Button");
      let methodname = new StringName("get_text");
      this.#_bindings.method_get_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_text_overrun_behavior() {
    if (!this.#_bindings.method_set_text_overrun_behavior) {
      let classname = new StringName("Button");
      let methodname = new StringName("set_text_overrun_behavior");
      this.#_bindings.method_set_text_overrun_behavior = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1008890932
      );
    }
  }
  static init_method_get_text_overrun_behavior() {
    if (!this.#_bindings.method_get_text_overrun_behavior) {
      let classname = new StringName("Button");
      let methodname = new StringName("get_text_overrun_behavior");
      this.#_bindings.method_get_text_overrun_behavior = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3779142101
      );
    }
  }
  static init_method_set_autowrap_mode() {
    if (!this.#_bindings.method_set_autowrap_mode) {
      let classname = new StringName("Button");
      let methodname = new StringName("set_autowrap_mode");
      this.#_bindings.method_set_autowrap_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3289138044
      );
    }
  }
  static init_method_get_autowrap_mode() {
    if (!this.#_bindings.method_get_autowrap_mode) {
      let classname = new StringName("Button");
      let methodname = new StringName("get_autowrap_mode");
      this.#_bindings.method_get_autowrap_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1549071663
      );
    }
  }
  static init_method_set_text_direction() {
    if (!this.#_bindings.method_set_text_direction) {
      let classname = new StringName("Button");
      let methodname = new StringName("set_text_direction");
      this.#_bindings.method_set_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        119160795
      );
    }
  }
  static init_method_get_text_direction() {
    if (!this.#_bindings.method_get_text_direction) {
      let classname = new StringName("Button");
      let methodname = new StringName("get_text_direction");
      this.#_bindings.method_get_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        797257663
      );
    }
  }
  static init_method_set_language() {
    if (!this.#_bindings.method_set_language) {
      let classname = new StringName("Button");
      let methodname = new StringName("set_language");
      this.#_bindings.method_set_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_language() {
    if (!this.#_bindings.method_get_language) {
      let classname = new StringName("Button");
      let methodname = new StringName("get_language");
      this.#_bindings.method_get_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_button_icon() {
    if (!this.#_bindings.method_set_button_icon) {
      let classname = new StringName("Button");
      let methodname = new StringName("set_button_icon");
      this.#_bindings.method_set_button_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_button_icon() {
    if (!this.#_bindings.method_get_button_icon) {
      let classname = new StringName("Button");
      let methodname = new StringName("get_button_icon");
      this.#_bindings.method_get_button_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_flat() {
    if (!this.#_bindings.method_set_flat) {
      let classname = new StringName("Button");
      let methodname = new StringName("set_flat");
      this.#_bindings.method_set_flat = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_flat() {
    if (!this.#_bindings.method_is_flat) {
      let classname = new StringName("Button");
      let methodname = new StringName("is_flat");
      this.#_bindings.method_is_flat = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_clip_text() {
    if (!this.#_bindings.method_set_clip_text) {
      let classname = new StringName("Button");
      let methodname = new StringName("set_clip_text");
      this.#_bindings.method_set_clip_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_clip_text() {
    if (!this.#_bindings.method_get_clip_text) {
      let classname = new StringName("Button");
      let methodname = new StringName("get_clip_text");
      this.#_bindings.method_get_clip_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_text_alignment() {
    if (!this.#_bindings.method_set_text_alignment) {
      let classname = new StringName("Button");
      let methodname = new StringName("set_text_alignment");
      this.#_bindings.method_set_text_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2312603777
      );
    }
  }
  static init_method_get_text_alignment() {
    if (!this.#_bindings.method_get_text_alignment) {
      let classname = new StringName("Button");
      let methodname = new StringName("get_text_alignment");
      this.#_bindings.method_get_text_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        341400642
      );
    }
  }
  static init_method_set_icon_alignment() {
    if (!this.#_bindings.method_set_icon_alignment) {
      let classname = new StringName("Button");
      let methodname = new StringName("set_icon_alignment");
      this.#_bindings.method_set_icon_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2312603777
      );
    }
  }
  static init_method_get_icon_alignment() {
    if (!this.#_bindings.method_get_icon_alignment) {
      let classname = new StringName("Button");
      let methodname = new StringName("get_icon_alignment");
      this.#_bindings.method_get_icon_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        341400642
      );
    }
  }
  static init_method_set_vertical_icon_alignment() {
    if (!this.#_bindings.method_set_vertical_icon_alignment) {
      let classname = new StringName("Button");
      let methodname = new StringName("set_vertical_icon_alignment");
      this.#_bindings.method_set_vertical_icon_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1796458609
      );
    }
  }
  static init_method_get_vertical_icon_alignment() {
    if (!this.#_bindings.method_get_vertical_icon_alignment) {
      let classname = new StringName("Button");
      let methodname = new StringName("get_vertical_icon_alignment");
      this.#_bindings.method_get_vertical_icon_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3274884059
      );
    }
  }
  static init_method_set_expand_icon() {
    if (!this.#_bindings.method_set_expand_icon) {
      let classname = new StringName("Button");
      let methodname = new StringName("set_expand_icon");
      this.#_bindings.method_set_expand_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_expand_icon() {
    if (!this.#_bindings.method_is_expand_icon) {
      let classname = new StringName("Button");
      let methodname = new StringName("is_expand_icon");
      this.#_bindings.method_is_expand_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_text(_text) {
    Button.init_method_set_text();
    return _call_native_mb_no_ret(
      Button.#_bindings.method_set_text,
      this._owner,
      _text
    );
    
  }
  get_text() {
    Button.init_method_get_text();
    return _call_native_mb_ret(
      Button.#_bindings.method_get_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_text_overrun_behavior(_overrun_behavior) {
    Button.init_method_set_text_overrun_behavior();
    return _call_native_mb_no_ret(
      Button.#_bindings.method_set_text_overrun_behavior,
      this._owner,
      _overrun_behavior
    );
    
  }
  get_text_overrun_behavior() {
    Button.init_method_get_text_overrun_behavior();
    return _call_native_mb_ret(
      Button.#_bindings.method_get_text_overrun_behavior,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_autowrap_mode(_autowrap_mode) {
    Button.init_method_set_autowrap_mode();
    return _call_native_mb_no_ret(
      Button.#_bindings.method_set_autowrap_mode,
      this._owner,
      _autowrap_mode
    );
    
  }
  get_autowrap_mode() {
    Button.init_method_get_autowrap_mode();
    return _call_native_mb_ret(
      Button.#_bindings.method_get_autowrap_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_text_direction(_direction) {
    Button.init_method_set_text_direction();
    return _call_native_mb_no_ret(
      Button.#_bindings.method_set_text_direction,
      this._owner,
      _direction
    );
    
  }
  get_text_direction() {
    Button.init_method_get_text_direction();
    return _call_native_mb_ret(
      Button.#_bindings.method_get_text_direction,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_language(_language) {
    Button.init_method_set_language();
    return _call_native_mb_no_ret(
      Button.#_bindings.method_set_language,
      this._owner,
      _language
    );
    
  }
  get_language() {
    Button.init_method_get_language();
    return _call_native_mb_ret(
      Button.#_bindings.method_get_language,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_button_icon(_texture) {
    Button.init_method_set_button_icon();
    return _call_native_mb_no_ret(
      Button.#_bindings.method_set_button_icon,
      this._owner,
      _texture
    );
    
  }
  get_button_icon() {
    Button.init_method_get_button_icon();
    return _call_native_mb_ret(
      Button.#_bindings.method_get_button_icon,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_flat(_enabled) {
    Button.init_method_set_flat();
    return _call_native_mb_no_ret(
      Button.#_bindings.method_set_flat,
      this._owner,
      _enabled
    );
    
  }
  is_flat() {
    Button.init_method_is_flat();
    return _call_native_mb_ret(
      Button.#_bindings.method_is_flat,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_clip_text(_enabled) {
    Button.init_method_set_clip_text();
    return _call_native_mb_no_ret(
      Button.#_bindings.method_set_clip_text,
      this._owner,
      _enabled
    );
    
  }
  get_clip_text() {
    Button.init_method_get_clip_text();
    return _call_native_mb_ret(
      Button.#_bindings.method_get_clip_text,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_text_alignment(_alignment) {
    Button.init_method_set_text_alignment();
    return _call_native_mb_no_ret(
      Button.#_bindings.method_set_text_alignment,
      this._owner,
      _alignment
    );
    
  }
  get_text_alignment() {
    Button.init_method_get_text_alignment();
    return _call_native_mb_ret(
      Button.#_bindings.method_get_text_alignment,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_icon_alignment(_icon_alignment) {
    Button.init_method_set_icon_alignment();
    return _call_native_mb_no_ret(
      Button.#_bindings.method_set_icon_alignment,
      this._owner,
      _icon_alignment
    );
    
  }
  get_icon_alignment() {
    Button.init_method_get_icon_alignment();
    return _call_native_mb_ret(
      Button.#_bindings.method_get_icon_alignment,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_vertical_icon_alignment(_vertical_icon_alignment) {
    Button.init_method_set_vertical_icon_alignment();
    return _call_native_mb_no_ret(
      Button.#_bindings.method_set_vertical_icon_alignment,
      this._owner,
      _vertical_icon_alignment
    );
    
  }
  get_vertical_icon_alignment() {
    Button.init_method_get_vertical_icon_alignment();
    return _call_native_mb_ret(
      Button.#_bindings.method_get_vertical_icon_alignment,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_expand_icon(_enabled) {
    Button.init_method_set_expand_icon();
    return _call_native_mb_no_ret(
      Button.#_bindings.method_set_expand_icon,
      this._owner,
      _enabled
    );
    
  }
  is_expand_icon() {
    Button.init_method_is_expand_icon();
    return _call_native_mb_ret(
      Button.#_bindings.method_is_expand_icon,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get text () {
  return this.get_text();
}
set text (new_value) {
  this.set_text(new_value);
}
get icon () {
  return this.get_button_icon();
}
set icon (new_value) {
  this.set_button_icon(new_value);
}
get flat () {
  return this.is_flat();
}
set flat (new_value) {
  this.set_flat(new_value);
}
get alignment () {
  return this.get_text_alignment();
}
set alignment (new_value) {
  this.set_text_alignment(new_value);
}
get text_overrun_behavior () {
  return this.get_text_overrun_behavior();
}
set text_overrun_behavior (new_value) {
  this.set_text_overrun_behavior(new_value);
}
get autowrap_mode () {
  return this.get_autowrap_mode();
}
set autowrap_mode (new_value) {
  this.set_autowrap_mode(new_value);
}
get clip_text () {
  return this.get_clip_text();
}
set clip_text (new_value) {
  this.set_clip_text(new_value);
}
get icon_alignment () {
  return this.get_icon_alignment();
}
set icon_alignment (new_value) {
  this.set_icon_alignment(new_value);
}
get vertical_icon_alignment () {
  return this.get_vertical_icon_alignment();
}
set vertical_icon_alignment (new_value) {
  this.set_vertical_icon_alignment(new_value);
}
get expand_icon () {
  return this.is_expand_icon();
}
set expand_icon (new_value) {
  this.set_expand_icon(new_value);
}
get text_direction () {
  return this.get_text_direction();
}
set text_direction (new_value) {
  this.set_text_direction(new_value);
}
get language () {
  return this.get_language();
}
set language (new_value) {
  this.set_language(new_value);
}

}