import * as internal from '__internal__';
import { Dictionary } from '@js_godot/variant/dictionary'
import { Variant } from '@js_godot/variant/variant'
import { Resource } from '@js_godot/classes/resource'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_line_syntax_highlighting;
  method_update_cache;
  method_clear_highlighting_cache;
  method_get_text_edit;
}
export class SyntaxHighlighter extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("SyntaxHighlighter");
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
      let classname = new StringName("SyntaxHighlighter");
      let methodname = new StringName("get_line_syntax_highlighting");
      this._bindings.method_get_line_syntax_highlighting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3554694381
      );
    }
    {
      let classname = new StringName("SyntaxHighlighter");
      let methodname = new StringName("update_cache");
      this._bindings.method_update_cache = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("SyntaxHighlighter");
      let methodname = new StringName("clear_highlighting_cache");
      this._bindings.method_clear_highlighting_cache = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("SyntaxHighlighter");
      let methodname = new StringName("get_text_edit");
      this._bindings.method_get_text_edit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1893027089
      );
    }
  }
  _get_line_syntax_highlighting(_line) {
  }
  _clear_highlighting_cache() {
  }
  _update_cache() {
  }
  get_line_syntax_highlighting(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_syntax_highlighting,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _line
    );
    
  }
  update_cache() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_update_cache,
      this._owner,
      
    );
    
  }
  clear_highlighting_cache() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_highlighting_cache,
      this._owner,
      
    );
    
  }
  get_text_edit() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_text_edit,
      this._owner,
			Variant.INT,
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}