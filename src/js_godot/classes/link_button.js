import * as internal from '__internal__';
import { GDArray } from 'src/js_godot/variant/gd_array'
import { BaseButton } from 'src/js_godot/classesbase_button'
import { GDString } from 'src/js_godot/variant/gd_string'
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


export class LinkButton extends BaseButton{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("LinkButton");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("set_text");
      this._bindings.method_set_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("get_text");
      this._bindings.method_get_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("set_text_direction");
      this._bindings.method_set_text_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        119160795
      );
    }
    {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("get_text_direction");
      this._bindings.method_get_text_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        797257663
      );
    }
    {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("set_language");
      this._bindings.method_set_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("get_language");
      this._bindings.method_get_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("set_uri");
      this._bindings.method_set_uri = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("get_uri");
      this._bindings.method_get_uri = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("set_underline_mode");
      this._bindings.method_set_underline_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4032947085
      );
    }
    {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("get_underline_mode");
      this._bindings.method_get_underline_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        568343738
      );
    }
    {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("set_structured_text_bidi_override");
      this._bindings.method_set_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        55961453
      );
    }
    {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("get_structured_text_bidi_override");
      this._bindings.method_get_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3385126229
      );
    }
    {
      let classname = new StringName("LinkButton");
      let methodname = new StringName("set_structured_text_bidi_override_options");
      this._bindings.method_set_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_text,
      this._owner,
      _text
    );
  }
  get_text() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_text,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_text_direction(_direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_text_direction,
      this._owner,
      _direction
    );
  }
  get_text_direction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_text_direction,
      this._owner,
			Variant.INT,
      
    );
  }
  set_language(_language) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_language,
      this._owner,
      _language
    );
  }
  get_language() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_language,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_uri(_uri) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_uri,
      this._owner,
      _uri
    );
  }
  get_uri() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_uri,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_underline_mode(_underline_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_underline_mode,
      this._owner,
      _underline_mode
    );
  }
  get_underline_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_underline_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_structured_text_bidi_override(_parser) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_structured_text_bidi_override,
      this._owner,
      _parser
    );
  }
  get_structured_text_bidi_override() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_structured_text_bidi_override,
      this._owner,
			Variant.INT,
      
    );
  }
  set_structured_text_bidi_override_options(_args) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_structured_text_bidi_override_options,
      this._owner,
      _args
    );
  }
  get_structured_text_bidi_override_options() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_structured_text_bidi_override_options,
      this._owner,
			Variant.Type.ARRAY
    ,
      
    );
  }
  static UnderlineMode = {
    UNDERLINE_MODE_ALWAYS: 0,
    UNDERLINE_MODE_ON_HOVER: 1,
    UNDERLINE_MODE_NEVER: 2,
  }
}