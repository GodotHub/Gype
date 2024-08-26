import * as internal from '__internal__';
import { SyntaxHighlighter } from 'src/js_godot/classessyntax_highlighter'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__get_name;
    method__get_supported_languages;
}


export class EditorSyntaxHighlighter extends SyntaxHighlighter{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorSyntaxHighlighter");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorSyntaxHighlighter");
      let methodname = new StringName("_get_name");
      this._bindings.method__get_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorSyntaxHighlighter");
      let methodname = new StringName("_get_supported_languages");
      this._bindings.method__get_supported_languages = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _get_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _get_supported_languages() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_supported_languages,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
}