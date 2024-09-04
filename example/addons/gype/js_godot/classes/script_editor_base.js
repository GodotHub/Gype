import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { VBoxContainer } from '@js_godot/classes/v_box_container'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_base_editor;
  method_add_syntax_highlighter;
}
export class ScriptEditorBase extends VBoxContainer{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ScriptEditorBase");
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
      let classname = new StringName("ScriptEditorBase");
      let methodname = new StringName("get_base_editor");
      this._bindings.method_get_base_editor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2783021301
      );
    }
    {
      let classname = new StringName("ScriptEditorBase");
      let methodname = new StringName("add_syntax_highlighter");
      this._bindings.method_add_syntax_highlighter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1092774468
      );
    }
  }
  get_base_editor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_base_editor,
      this._owner,
			Variant.INT,
      
    );
    
  }
  add_syntax_highlighter(_highlighter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_syntax_highlighter,
      this._owner,
      _highlighter
    );
    
  }
  


  static {
    this._init_bindings();
  }
}