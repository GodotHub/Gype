
import { EditorSyntaxHighlighter } from "@godot/classes/editor_syntax_highlighter";
import { ScriptEditorBase } from "@godot/classes/script_editor_base";
import { ScriptEditorBase } from "@godot/classes/script_editor_base";
import { PanelContainer } from "@godot/classes/panel_container";
import { Script } from "@godot/classes/script";
import { Script } from "@godot/classes/script";

export declare class ScriptEditor extends PanelContainer{
  public get_current_editor(): ScriptEditorBase;
  public get_open_script_editors(): GDArray;
  public register_syntax_highlighter(_syntax_highlighter: EditorSyntaxHighlighter): void;
  public unregister_syntax_highlighter(_syntax_highlighter: EditorSyntaxHighlighter): void;
  public goto_line(_line_number: number): void;
  public get_current_script(): Script;
  public get_open_scripts(): GDArray;
  public open_script_create_dialog(_base_name: String | StringName | string, _base_path: String | StringName | string): void;
  public goto_help(_topic: String | StringName | string): void;
  public get editor_script_changed(): Signal;
  public get script_close(): Signal;
}