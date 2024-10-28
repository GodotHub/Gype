
import { RefCounted } from "@godot/classes/ref_counted";

export declare class EditorTranslationParserPlugin extends RefCounted{
  public _parse_file(_path: String, _msgids: typedarray::String, _msgids_context_plural: typedarray::Array): void;
  public _get_recognized_extensions(): PackedStringArray;
}