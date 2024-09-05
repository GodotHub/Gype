import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_locale;
  method_get_locale;
  method_get_tool_locale;
  method_compare_locales;
  method_standardize_locale;
  method_get_all_languages;
  method_get_language_name;
  method_get_all_scripts;
  method_get_script_name;
  method_get_all_countries;
  method_get_country_name;
  method_get_locale_name;
  method_translate;
  method_translate_plural;
  method_add_translation;
  method_remove_translation;
  method_get_translation_object;
  method_clear;
  method_get_loaded_locales;
  method_is_pseudolocalization_enabled;
  method_set_pseudolocalization_enabled;
  method_reload_pseudolocalization;
  method_pseudolocalize;
}class _TranslationServer extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("TranslationServer");
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
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("set_locale");
      this._bindings.method_set_locale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_locale");
      this._bindings.method_get_locale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_tool_locale");
      this._bindings.method_get_tool_locale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2841200299
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("compare_locales");
      this._bindings.method_compare_locales = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2878152881
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("standardize_locale");
      this._bindings.method_standardize_locale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3135753539
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_all_languages");
      this._bindings.method_get_all_languages = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_language_name");
      this._bindings.method_get_language_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3135753539
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_all_scripts");
      this._bindings.method_get_all_scripts = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_script_name");
      this._bindings.method_get_script_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3135753539
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_all_countries");
      this._bindings.method_get_all_countries = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_country_name");
      this._bindings.method_get_country_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3135753539
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_locale_name");
      this._bindings.method_get_locale_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3135753539
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("translate");
      this._bindings.method_translate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        58037827
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("translate_plural");
      this._bindings.method_translate_plural = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1333931916
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("add_translation");
      this._bindings.method_add_translation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1466479800
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("remove_translation");
      this._bindings.method_remove_translation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1466479800
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_translation_object");
      this._bindings.method_get_translation_object = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2065240175
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_loaded_locales");
      this._bindings.method_get_loaded_locales = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("is_pseudolocalization_enabled");
      this._bindings.method_is_pseudolocalization_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("set_pseudolocalization_enabled");
      this._bindings.method_set_pseudolocalization_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("reload_pseudolocalization");
      this._bindings.method_reload_pseudolocalization = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("pseudolocalize");
      this._bindings.method_pseudolocalize = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1965194235
      );
    }
  }
  
  set_locale(_locale) {
    return _call_native_mb_no_ret(
      _TranslationServer._bindings.method_set_locale,
      this._owner,
      _locale
    );
    
  }
  get_locale() {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_locale,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_tool_locale() {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_tool_locale,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  compare_locales(_locale_a, _locale_b) {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_compare_locales,
      this._owner,
			Variant.Type.INT,
      _locale_a, _locale_b
    );
    
  }
  standardize_locale(_locale) {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_standardize_locale,
      this._owner,
			Variant.Type.STRING,
    
      _locale
    );
    
  }
  get_all_languages() {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_all_languages,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_language_name(_language) {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_language_name,
      this._owner,
			Variant.Type.STRING,
    
      _language
    );
    
  }
  get_all_scripts() {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_all_scripts,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_script_name(_script) {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_script_name,
      this._owner,
			Variant.Type.STRING,
    
      _script
    );
    
  }
  get_all_countries() {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_all_countries,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_country_name(_country) {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_country_name,
      this._owner,
			Variant.Type.STRING,
    
      _country
    );
    
  }
  get_locale_name(_locale) {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_locale_name,
      this._owner,
			Variant.Type.STRING,
    
      _locale
    );
    
  }
  translate(_message, _context) {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_translate,
      this._owner,
			Variant.Type.STRING_NAME,
    
      _message, _context
    );
    
  }
  translate_plural(_message, _plural_message, _n, _context) {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_translate_plural,
      this._owner,
			Variant.Type.STRING_NAME,
    
      _message, _plural_message, _n, _context
    );
    
  }
  add_translation(_translation) {
    return _call_native_mb_no_ret(
      _TranslationServer._bindings.method_add_translation,
      this._owner,
      _translation
    );
    
  }
  remove_translation(_translation) {
    return _call_native_mb_no_ret(
      _TranslationServer._bindings.method_remove_translation,
      this._owner,
      _translation
    );
    
  }
  get_translation_object(_locale) {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_translation_object,
      this._owner,
			Variant.INT,
      _locale
    );
    
  }
  clear() {
    return _call_native_mb_no_ret(
      _TranslationServer._bindings.method_clear,
      this._owner,
      
    );
    
  }
  get_loaded_locales() {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_loaded_locales,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  is_pseudolocalization_enabled() {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_is_pseudolocalization_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_pseudolocalization_enabled(_enabled) {
    return _call_native_mb_no_ret(
      _TranslationServer._bindings.method_set_pseudolocalization_enabled,
      this._owner,
      _enabled
    );
    
  }
  reload_pseudolocalization() {
    return _call_native_mb_no_ret(
      _TranslationServer._bindings.method_reload_pseudolocalization,
      this._owner,
      
    );
    
  }
  pseudolocalize(_message) {
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_pseudolocalize,
      this._owner,
			Variant.Type.STRING_NAME,
    
      _message
    );
    
  }
  
get pseudolocalization_enabled () {
  return this.is_pseudolocalization_enabled();
}
set pseudolocalization_enabled (new_value) {
  this.set_pseudolocalization_enabled(new_value);
}


  static {
    this._init_bindings();
  }
}
export const TranslationServer = (function () {
  let _instance;
  function create_instance() {
    return new _TranslationServer();
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