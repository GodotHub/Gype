import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { Dictionary } from 'src/js_godot/variant/dictionary'
class _MethodBindings {
    method__get_line_syntax_highlighting;
    method__clear_highlighting_cache;
    method__update_cache;
    method_get_line_syntax_highlighting;
    method_update_cache;
    method_clear_highlighting_cache;
    method_get_text_edit;
}


export class SyntaxHighlighter extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SyntaxHighlighter");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("SyntaxHighlighter");
      let methodname = new StringName("_get_line_syntax_highlighting");
      this._bindings.method__get_line_syntax_highlighting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("SyntaxHighlighter");
      let methodname = new StringName("_clear_highlighting_cache");
      this._bindings.method__clear_highlighting_cache = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("SyntaxHighlighter");
      let methodname = new StringName("_update_cache");
      this._bindings.method__update_cache = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
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
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_line_syntax_highlighting,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _line
    );
  }
  _clear_highlighting_cache() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__clear_highlighting_cache,
      this._owner,
      
    );
  }
  _update_cache() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__update_cache,
      this._owner,
      
    );
  }
  get_line_syntax_highlighting(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_syntax_highlighting,
      this._owner,
			Variant.Type.DICTIONARY
    ,
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
}