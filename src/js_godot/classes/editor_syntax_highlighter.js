import * as internal from '__internal__';
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { SyntaxHighlighter } from 'src/js_godot/classes/syntax_highlighter'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
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
  }
  _get_name() {
  }
  _get_supported_languages() {
  }
}