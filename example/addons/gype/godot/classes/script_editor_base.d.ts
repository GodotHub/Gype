
import { VBoxContainer } from "@godot/classes/v_box_container";
import { Control } from "@godot/classes/control";
import { EditorSyntaxHighlighter } from "@godot/classes/editor_syntax_highlighter";

export declare class ScriptEditorBase extends VBoxContainer{
  public get_base_editor(): Control;
  public add_syntax_highlighter(_highlighter: EditorSyntaxHighlighter): void;
}