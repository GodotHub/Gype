import * as internal from '__internal__';
import { PanelContainer } from 'src/js_godot/classespanel_container'
import { GDString } from 'src/js_godot/variant/gd_string'
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


export class ScriptEditor extends PanelContainer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ScriptEditor");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("get_current_editor");
      this._bindings.method_get_current_editor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1906266726
      );
    }
    {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("get_open_script_editors");
      this._bindings.method_get_open_script_editors = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("register_syntax_highlighter");
      this._bindings.method_register_syntax_highlighter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1092774468
      );
    }
    {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("unregister_syntax_highlighter");
      this._bindings.method_unregister_syntax_highlighter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1092774468
      );
    }
    {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("goto_line");
      this._bindings.method_goto_line = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("get_current_script");
      this._bindings.method_get_current_script = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2146468882
      );
    }
    {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("get_open_scripts");
      this._bindings.method_get_open_scripts = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("ScriptEditor");
      let methodname = new StringName("open_script_create_dialog");
      this._bindings.method_open_script_create_dialog = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3186203200
      );
    }
    {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_current_editor,
      this._owner,
			Variant.INT,
      
    );
  }
  get_open_script_editors() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_open_script_editors,
      this._owner,
			Variant.INT,
      
    );
  }
  register_syntax_highlighter(_syntax_highlighter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_register_syntax_highlighter,
      this._owner,
      _syntax_highlighter
    );
  }
  unregister_syntax_highlighter(_syntax_highlighter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_unregister_syntax_highlighter,
      this._owner,
      _syntax_highlighter
    );
  }
  goto_line(_line_number) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_goto_line,
      this._owner,
      _line_number
    );
  }
  get_current_script() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_current_script,
      this._owner,
			Variant.INT,
      
    );
  }
  get_open_scripts() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_open_scripts,
      this._owner,
			Variant.INT,
      
    );
  }
  open_script_create_dialog(_base_name, _base_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_open_script_create_dialog,
      this._owner,
      _base_name, _base_path
    );
  }
  goto_help(_topic) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_goto_help,
      this._owner,
      _topic
    );
  }
}