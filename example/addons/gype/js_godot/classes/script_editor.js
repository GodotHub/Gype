import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { PanelContainer } from '@js_godot/classes/panel_container'
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
  method_get_current_editor;
  method_get_open_script_editors;
  method_register_syntax_highlighter;
  method_unregister_syntax_highlighter;
  method_goto_line;
  method_get_current_script;
  method_get_open_scripts;
  method_open_script_create_dialog;
  method_goto_help;
}
@GodotClass
export class ScriptEditor extends PanelContainer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ScriptEditor");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_current_editor() {
    if (!this._bindings.method_get_current_editor) {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("get_current_editor");
      this._bindings.method_get_current_editor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1906266726
      );
    }
  }
  static init_method_get_open_script_editors() {
    if (!this._bindings.method_get_open_script_editors) {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("get_open_script_editors");
      this._bindings.method_get_open_script_editors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_register_syntax_highlighter() {
    if (!this._bindings.method_register_syntax_highlighter) {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("register_syntax_highlighter");
      this._bindings.method_register_syntax_highlighter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1092774468
      );
    }
  }
  static init_method_unregister_syntax_highlighter() {
    if (!this._bindings.method_unregister_syntax_highlighter) {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("unregister_syntax_highlighter");
      this._bindings.method_unregister_syntax_highlighter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1092774468
      );
    }
  }
  static init_method_goto_line() {
    if (!this._bindings.method_goto_line) {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("goto_line");
      this._bindings.method_goto_line = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_current_script() {
    if (!this._bindings.method_get_current_script) {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("get_current_script");
      this._bindings.method_get_current_script = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2146468882
      );
    }
  }
  static init_method_get_open_scripts() {
    if (!this._bindings.method_get_open_scripts) {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("get_open_scripts");
      this._bindings.method_get_open_scripts = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_open_script_create_dialog() {
    if (!this._bindings.method_open_script_create_dialog) {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("open_script_create_dialog");
      this._bindings.method_open_script_create_dialog = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3186203200
      );
    }
  }
  static init_method_goto_help() {
    if (!this._bindings.method_goto_help) {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("goto_help");
      this._bindings.method_goto_help = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }

  
  
  get_current_editor() {
    ScriptEditor.init_method_get_current_editor();
    return _call_native_mb_ret(
      ScriptEditor._bindings.method_get_current_editor,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_open_script_editors() {
    ScriptEditor.init_method_get_open_script_editors();
    return _call_native_mb_ret(
      ScriptEditor._bindings.method_get_open_script_editors,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  register_syntax_highlighter(_syntax_highlighter) {
    ScriptEditor.init_method_register_syntax_highlighter();
    return _call_native_mb_no_ret(
      ScriptEditor._bindings.method_register_syntax_highlighter,
      this._owner,
      _syntax_highlighter
    );
    
  }
  unregister_syntax_highlighter(_syntax_highlighter) {
    ScriptEditor.init_method_unregister_syntax_highlighter();
    return _call_native_mb_no_ret(
      ScriptEditor._bindings.method_unregister_syntax_highlighter,
      this._owner,
      _syntax_highlighter
    );
    
  }
  goto_line(_line_number) {
    ScriptEditor.init_method_goto_line();
    return _call_native_mb_no_ret(
      ScriptEditor._bindings.method_goto_line,
      this._owner,
      _line_number
    );
    
  }
  get_current_script() {
    ScriptEditor.init_method_get_current_script();
    return _call_native_mb_ret(
      ScriptEditor._bindings.method_get_current_script,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_open_scripts() {
    ScriptEditor.init_method_get_open_scripts();
    return _call_native_mb_ret(
      ScriptEditor._bindings.method_get_open_scripts,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  open_script_create_dialog(_base_name, _base_path) {
    ScriptEditor.init_method_open_script_create_dialog();
    return _call_native_mb_no_ret(
      ScriptEditor._bindings.method_open_script_create_dialog,
      this._owner,
      _base_name, _base_path
    );
    
  }
  goto_help(_topic) {
    ScriptEditor.init_method_goto_help();
    return _call_native_mb_no_ret(
      ScriptEditor._bindings.method_goto_help,
      this._owner,
      _topic
    );
    
  }
  

}