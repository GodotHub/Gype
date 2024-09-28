import * as internal from '__internal__';
import { GodotObject } from '@js_godot/classes/godot_object'
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

  constructor(godot_object) {
    if (!godot_object) {
      super("TranslationServer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_locale() {
    if (!this._bindings.method_set_locale) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("set_locale");
      this._bindings.method_set_locale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_locale() {
    if (!this._bindings.method_get_locale) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_locale");
      this._bindings.method_get_locale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_tool_locale() {
    if (!this._bindings.method_get_tool_locale) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_tool_locale");
      this._bindings.method_get_tool_locale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2841200299
      );
    }
  }
  static init_method_compare_locales() {
    if (!this._bindings.method_compare_locales) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("compare_locales");
      this._bindings.method_compare_locales = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2878152881
      );
    }
  }
  static init_method_standardize_locale() {
    if (!this._bindings.method_standardize_locale) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("standardize_locale");
      this._bindings.method_standardize_locale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3135753539
      );
    }
  }
  static init_method_get_all_languages() {
    if (!this._bindings.method_get_all_languages) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_all_languages");
      this._bindings.method_get_all_languages = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_get_language_name() {
    if (!this._bindings.method_get_language_name) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_language_name");
      this._bindings.method_get_language_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3135753539
      );
    }
  }
  static init_method_get_all_scripts() {
    if (!this._bindings.method_get_all_scripts) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_all_scripts");
      this._bindings.method_get_all_scripts = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_get_script_name() {
    if (!this._bindings.method_get_script_name) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_script_name");
      this._bindings.method_get_script_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3135753539
      );
    }
  }
  static init_method_get_all_countries() {
    if (!this._bindings.method_get_all_countries) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_all_countries");
      this._bindings.method_get_all_countries = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_get_country_name() {
    if (!this._bindings.method_get_country_name) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_country_name");
      this._bindings.method_get_country_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3135753539
      );
    }
  }
  static init_method_get_locale_name() {
    if (!this._bindings.method_get_locale_name) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_locale_name");
      this._bindings.method_get_locale_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3135753539
      );
    }
  }
  static init_method_translate() {
    if (!this._bindings.method_translate) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("translate");
      this._bindings.method_translate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        58037827
      );
    }
  }
  static init_method_translate_plural() {
    if (!this._bindings.method_translate_plural) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("translate_plural");
      this._bindings.method_translate_plural = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1333931916
      );
    }
  }
  static init_method_add_translation() {
    if (!this._bindings.method_add_translation) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("add_translation");
      this._bindings.method_add_translation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1466479800
      );
    }
  }
  static init_method_remove_translation() {
    if (!this._bindings.method_remove_translation) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("remove_translation");
      this._bindings.method_remove_translation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1466479800
      );
    }
  }
  static init_method_get_translation_object() {
    if (!this._bindings.method_get_translation_object) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_translation_object");
      this._bindings.method_get_translation_object = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2065240175
      );
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_loaded_locales() {
    if (!this._bindings.method_get_loaded_locales) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("get_loaded_locales");
      this._bindings.method_get_loaded_locales = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  static init_method_is_pseudolocalization_enabled() {
    if (!this._bindings.method_is_pseudolocalization_enabled) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("is_pseudolocalization_enabled");
      this._bindings.method_is_pseudolocalization_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_pseudolocalization_enabled() {
    if (!this._bindings.method_set_pseudolocalization_enabled) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("set_pseudolocalization_enabled");
      this._bindings.method_set_pseudolocalization_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_reload_pseudolocalization() {
    if (!this._bindings.method_reload_pseudolocalization) {
      let classname = new StringName("TranslationServer");
      let methodname = new StringName("reload_pseudolocalization");
      this._bindings.method_reload_pseudolocalization = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_pseudolocalize() {
    if (!this._bindings.method_pseudolocalize) {
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
    TranslationServer.init_method_set_locale();
    return _call_native_mb_no_ret(
      _TranslationServer._bindings.method_set_locale,
      this._owner,
      _locale
    );
    
  }
  get_locale() {
    TranslationServer.init_method_get_locale();
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_locale,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_tool_locale() {
    TranslationServer.init_method_get_tool_locale();
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_tool_locale,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  compare_locales(_locale_a, _locale_b) {
    TranslationServer.init_method_compare_locales();
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_compare_locales,
      this._owner,
			Variant.Type.INT,
    
      _locale_a, _locale_b
    );
    
  }
  standardize_locale(_locale) {
    TranslationServer.init_method_standardize_locale();
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_standardize_locale,
      this._owner,
			Variant.Type.STRING,
    
      _locale
    );
    
  }
  get_all_languages() {
    TranslationServer.init_method_get_all_languages();
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_all_languages,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_language_name(_language) {
    TranslationServer.init_method_get_language_name();
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_language_name,
      this._owner,
			Variant.Type.STRING,
    
      _language
    );
    
  }
  get_all_scripts() {
    TranslationServer.init_method_get_all_scripts();
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_all_scripts,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_script_name(_script) {
    TranslationServer.init_method_get_script_name();
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_script_name,
      this._owner,
			Variant.Type.STRING,
    
      _script
    );
    
  }
  get_all_countries() {
    TranslationServer.init_method_get_all_countries();
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_all_countries,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_country_name(_country) {
    TranslationServer.init_method_get_country_name();
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_country_name,
      this._owner,
			Variant.Type.STRING,
    
      _country
    );
    
  }
  get_locale_name(_locale) {
    TranslationServer.init_method_get_locale_name();
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_locale_name,
      this._owner,
			Variant.Type.STRING,
    
      _locale
    );
    
  }
  translate(_message, _context) {
    TranslationServer.init_method_translate();
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_translate,
      this._owner,
			Variant.Type.STRING_NAME,
    
      _message, _context
    );
    
  }
  translate_plural(_message, _plural_message, _n, _context) {
    TranslationServer.init_method_translate_plural();
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_translate_plural,
      this._owner,
			Variant.Type.STRING_NAME,
    
      _message, _plural_message, _n, _context
    );
    
  }
  add_translation(_translation) {
    TranslationServer.init_method_add_translation();
    return _call_native_mb_no_ret(
      _TranslationServer._bindings.method_add_translation,
      this._owner,
      _translation
    );
    
  }
  remove_translation(_translation) {
    TranslationServer.init_method_remove_translation();
    return _call_native_mb_no_ret(
      _TranslationServer._bindings.method_remove_translation,
      this._owner,
      _translation
    );
    
  }
  get_translation_object(_locale) {
    TranslationServer.init_method_get_translation_object();
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_translation_object,
      this._owner,
			Variant.Type.OBJECT,
      _locale
    );
    
  }
  clear() {
    TranslationServer.init_method_clear();
    return _call_native_mb_no_ret(
      _TranslationServer._bindings.method_clear,
      this._owner,
      
    );
    
  }
  get_loaded_locales() {
    TranslationServer.init_method_get_loaded_locales();
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_get_loaded_locales,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  is_pseudolocalization_enabled() {
    TranslationServer.init_method_is_pseudolocalization_enabled();
    return _call_native_mb_ret(
      _TranslationServer._bindings.method_is_pseudolocalization_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_pseudolocalization_enabled(_enabled) {
    TranslationServer.init_method_set_pseudolocalization_enabled();
    return _call_native_mb_no_ret(
      _TranslationServer._bindings.method_set_pseudolocalization_enabled,
      this._owner,
      _enabled
    );
    
  }
  reload_pseudolocalization() {
    TranslationServer.init_method_reload_pseudolocalization();
    return _call_native_mb_no_ret(
      _TranslationServer._bindings.method_reload_pseudolocalization,
      this._owner,
      
    );
    
  }
  pseudolocalize(_message) {
    TranslationServer.init_method_pseudolocalize();
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