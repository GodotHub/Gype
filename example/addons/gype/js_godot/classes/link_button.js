import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { BaseButton } from '@js_godot/classes/base_button'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_text;
  method_get_text;
  method_set_text_direction;
  method_get_text_direction;
  method_set_language;
  method_get_language;
  method_set_uri;
  method_get_uri;
  method_set_underline_mode;
  method_get_underline_mode;
  method_set_structured_text_bidi_override;
  method_get_structured_text_bidi_override;
  method_set_structured_text_bidi_override_options;
  method_get_structured_text_bidi_override_options;
}
@GodotClass
export class LinkButton extends BaseButton{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("LinkButton");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_text() {
    if (!this._bindings.method_set_text) {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("set_text");
      this._bindings.method_set_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_text() {
    if (!this._bindings.method_get_text) {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("get_text");
      this._bindings.method_get_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_text_direction() {
    if (!this._bindings.method_set_text_direction) {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("set_text_direction");
      this._bindings.method_set_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        119160795
      );
    }
  }
  static init_method_get_text_direction() {
    if (!this._bindings.method_get_text_direction) {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("get_text_direction");
      this._bindings.method_get_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        797257663
      );
    }
  }
  static init_method_set_language() {
    if (!this._bindings.method_set_language) {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("set_language");
      this._bindings.method_set_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_language() {
    if (!this._bindings.method_get_language) {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("get_language");
      this._bindings.method_get_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_uri() {
    if (!this._bindings.method_set_uri) {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("set_uri");
      this._bindings.method_set_uri = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_uri() {
    if (!this._bindings.method_get_uri) {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("get_uri");
      this._bindings.method_get_uri = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_underline_mode() {
    if (!this._bindings.method_set_underline_mode) {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("set_underline_mode");
      this._bindings.method_set_underline_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4032947085
      );
    }
  }
  static init_method_get_underline_mode() {
    if (!this._bindings.method_get_underline_mode) {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("get_underline_mode");
      this._bindings.method_get_underline_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        568343738
      );
    }
  }
  static init_method_set_structured_text_bidi_override() {
    if (!this._bindings.method_set_structured_text_bidi_override) {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("set_structured_text_bidi_override");
      this._bindings.method_set_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        55961453
      );
    }
  }
  static init_method_get_structured_text_bidi_override() {
    if (!this._bindings.method_get_structured_text_bidi_override) {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("get_structured_text_bidi_override");
      this._bindings.method_get_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3385126229
      );
    }
  }
  static init_method_set_structured_text_bidi_override_options() {
    if (!this._bindings.method_set_structured_text_bidi_override_options) {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("set_structured_text_bidi_override_options");
      this._bindings.method_set_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_structured_text_bidi_override_options() {
    if (!this._bindings.method_get_structured_text_bidi_override_options) {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("get_structured_text_bidi_override_options");
      this._bindings.method_get_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }

  
  
  set_text(_text) {
    LinkButton.init_method_set_text();
    return _call_native_mb_no_ret(
      LinkButton._bindings.method_set_text,
      this._owner,
      _text
    );
    
  }
  get_text() {
    LinkButton.init_method_get_text();
    return _call_native_mb_ret(
      LinkButton._bindings.method_get_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_text_direction(_direction) {
    LinkButton.init_method_set_text_direction();
    return _call_native_mb_no_ret(
      LinkButton._bindings.method_set_text_direction,
      this._owner,
      _direction
    );
    
  }
  get_text_direction() {
    LinkButton.init_method_get_text_direction();
    return _call_native_mb_ret(
      LinkButton._bindings.method_get_text_direction,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_language(_language) {
    LinkButton.init_method_set_language();
    return _call_native_mb_no_ret(
      LinkButton._bindings.method_set_language,
      this._owner,
      _language
    );
    
  }
  get_language() {
    LinkButton.init_method_get_language();
    return _call_native_mb_ret(
      LinkButton._bindings.method_get_language,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_uri(_uri) {
    LinkButton.init_method_set_uri();
    return _call_native_mb_no_ret(
      LinkButton._bindings.method_set_uri,
      this._owner,
      _uri
    );
    
  }
  get_uri() {
    LinkButton.init_method_get_uri();
    return _call_native_mb_ret(
      LinkButton._bindings.method_get_uri,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_underline_mode(_underline_mode) {
    LinkButton.init_method_set_underline_mode();
    return _call_native_mb_no_ret(
      LinkButton._bindings.method_set_underline_mode,
      this._owner,
      _underline_mode
    );
    
  }
  get_underline_mode() {
    LinkButton.init_method_get_underline_mode();
    return _call_native_mb_ret(
      LinkButton._bindings.method_get_underline_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_structured_text_bidi_override(_parser) {
    LinkButton.init_method_set_structured_text_bidi_override();
    return _call_native_mb_no_ret(
      LinkButton._bindings.method_set_structured_text_bidi_override,
      this._owner,
      _parser
    );
    
  }
  get_structured_text_bidi_override() {
    LinkButton.init_method_get_structured_text_bidi_override();
    return _call_native_mb_ret(
      LinkButton._bindings.method_get_structured_text_bidi_override,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_structured_text_bidi_override_options(_args) {
    LinkButton.init_method_set_structured_text_bidi_override_options();
    return _call_native_mb_no_ret(
      LinkButton._bindings.method_set_structured_text_bidi_override_options,
      this._owner,
      _args
    );
    
  }
  get_structured_text_bidi_override_options() {
    LinkButton.init_method_get_structured_text_bidi_override_options();
    return _call_native_mb_ret(
      LinkButton._bindings.method_get_structured_text_bidi_override_options,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  
get text () {
  return this.get_text();
}
set text (new_value) {
  this.set_text(new_value);
}
get underline () {
  return this.get_underline_mode();
}
set underline (new_value) {
  this.set_underline_mode(new_value);
}
get uri () {
  return this.get_uri();
}
set uri (new_value) {
  this.set_uri(new_value);
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
get structured_text_bidi_override () {
  return this.get_structured_text_bidi_override();
}
set structured_text_bidi_override (new_value) {
  this.set_structured_text_bidi_override(new_value);
}
get structured_text_bidi_override_options () {
  return this.get_structured_text_bidi_override_options();
}
set structured_text_bidi_override_options (new_value) {
  this.set_structured_text_bidi_override_options(new_value);
}

  static UnderlineMode = {
    UNDERLINE_MODE_ALWAYS: 0,
    UNDERLINE_MODE_ON_HOVER: 1,
    UNDERLINE_MODE_NEVER: 2,
  }
}