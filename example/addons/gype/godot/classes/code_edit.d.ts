
import { TextEdit } from "@godot/classes/text_edit";
import { Resource } from "@godot/classes/resource";
export declare class CodeEdit extends TextEdit{
  public _confirm_code_completion(_replace: boolean): void;
  public _request_code_completion(_force: boolean): void;
  public _filter_code_completion_candidates(_candidates: GDArray): GDArray;
  public set_indent_size(_size: number): void;
  public get_indent_size(): number;
  public set_indent_using_spaces(_use_spaces: boolean): void;
  public is_indent_using_spaces(): boolean;
  public set_auto_indent_enabled(_enable: boolean): void;
  public is_auto_indent_enabled(): boolean;
  public set_auto_indent_prefixes(_prefixes: GDArray): void;
  public get_auto_indent_prefixes(): GDArray;
  public do_indent(): void;
  public indent_lines(): void;
  public unindent_lines(): void;
  public convert_indent(_from_line: number = -1, _to_line: number = -1): void;
  public set_auto_brace_completion_enabled(_enable: boolean): void;
  public is_auto_brace_completion_enabled(): boolean;
  public set_highlight_matching_braces_enabled(_enable: boolean): void;
  public is_highlight_matching_braces_enabled(): boolean;
  public add_auto_brace_completion_pair(_start_key: GDString | StringName | string, _end_key: GDString | StringName | string): void;
  public set_auto_brace_completion_pairs(_pairs: Dictionary): void;
  public get_auto_brace_completion_pairs(): Dictionary;
  public has_auto_brace_completion_open_key(_open_key: GDString | StringName | string): boolean;
  public has_auto_brace_completion_close_key(_close_key: GDString | StringName | string): boolean;
  public get_auto_brace_completion_close_key(_open_key: GDString | StringName | string): String;
  public set_draw_breakpoints_gutter(_enable: boolean): void;
  public is_drawing_breakpoints_gutter(): boolean;
  public set_draw_bookmarks_gutter(_enable: boolean): void;
  public is_drawing_bookmarks_gutter(): boolean;
  public set_draw_executing_lines_gutter(_enable: boolean): void;
  public is_drawing_executing_lines_gutter(): boolean;
  public set_line_as_breakpoint(_line: number, _breakpointed: boolean): void;
  public is_line_breakpointed(_line: number): boolean;
  public clear_breakpointed_lines(): void;
  public get_breakpointed_lines(): PackedInt32Array;
  public set_line_as_bookmarked(_line: number, _bookmarked: boolean): void;
  public is_line_bookmarked(_line: number): boolean;
  public clear_bookmarked_lines(): void;
  public get_bookmarked_lines(): PackedInt32Array;
  public set_line_as_executing(_line: number, _executing: boolean): void;
  public is_line_executing(_line: number): boolean;
  public clear_executing_lines(): void;
  public get_executing_lines(): PackedInt32Array;
  public set_draw_line_numbers(_enable: boolean): void;
  public is_draw_line_numbers_enabled(): boolean;
  public set_line_numbers_zero_padded(_enable: boolean): void;
  public is_line_numbers_zero_padded(): boolean;
  public set_draw_fold_gutter(_enable: boolean): void;
  public is_drawing_fold_gutter(): boolean;
  public set_line_folding_enabled(_enabled: boolean): void;
  public is_line_folding_enabled(): boolean;
  public can_fold_line(_line: number): boolean;
  public fold_line(_line: number): void;
  public unfold_line(_line: number): void;
  public fold_all_lines(): void;
  public unfold_all_lines(): void;
  public toggle_foldable_line(_line: number): void;
  public toggle_foldable_lines_at_carets(): void;
  public is_line_folded(_line: number): boolean;
  public get_folded_lines(): GDArray;
  public create_code_region(): void;
  public get_code_region_start_tag(): String;
  public get_code_region_end_tag(): String;
  public set_code_region_tags(_start: GDString | StringName | string = "region", _end: GDString | StringName | string = "endregion"): void;
  public is_line_code_region_start(_line: number): boolean;
  public is_line_code_region_end(_line: number): boolean;
  public add_string_delimiter(_start_key: GDString | StringName | string, _end_key: GDString | StringName | string, _line_only: boolean = false): void;
  public remove_string_delimiter(_start_key: GDString | StringName | string): void;
  public has_string_delimiter(_start_key: GDString | StringName | string): boolean;
  public set_string_delimiters(_string_delimiters: GDArray): void;
  public clear_string_delimiters(): void;
  public get_string_delimiters(): GDArray;
  public is_in_string(_line: number, _column: number = -1): number;
  public add_comment_delimiter(_start_key: GDString | StringName | string, _end_key: GDString | StringName | string, _line_only: boolean = false): void;
  public remove_comment_delimiter(_start_key: GDString | StringName | string): void;
  public has_comment_delimiter(_start_key: GDString | StringName | string): boolean;
  public set_comment_delimiters(_comment_delimiters: GDArray): void;
  public clear_comment_delimiters(): void;
  public get_comment_delimiters(): GDArray;
  public is_in_comment(_line: number, _column: number = -1): number;
  public get_delimiter_start_key(_delimiter_index: number): String;
  public get_delimiter_end_key(_delimiter_index: number): String;
  public get_delimiter_start_position(_line: number, _column: number): Vector2;
  public get_delimiter_end_position(_line: number, _column: number): Vector2;
  public set_code_hint(_code_hint: GDString | StringName | string): void;
  public set_code_hint_draw_below(_draw_below: boolean): void;
  public get_text_for_code_completion(): String;
  public request_code_completion(_force: boolean = false): void;
  public add_code_completion_option(_type: number, _display_text: GDString | StringName | string, _insert_text: GDString | StringName | string, _text_color: Color = Color(1, 1, 1, 1), _icon: Resource = null, _value: any = null, _location: number = 1024): void;
  public update_code_completion_options(_force: boolean): void;
  public get_code_completion_options(): GDArray;
  public get_code_completion_option(_index: number): Dictionary;
  public get_code_completion_selected_index(): number;
  public set_code_completion_selected_index(_index: number): void;
  public confirm_code_completion(_replace: boolean = false): void;
  public cancel_code_completion(): void;
  public set_code_completion_enabled(_enable: boolean): void;
  public is_code_completion_enabled(): boolean;
  public set_code_completion_prefixes(_prefixes: GDArray): void;
  public get_code_completion_prefixes(): GDArray;
  public set_line_length_guidelines(_guideline_columns: GDArray): void;
  public get_line_length_guidelines(): GDArray;
  public set_symbol_lookup_on_click_enabled(_enable: boolean): void;
  public is_symbol_lookup_on_click_enabled(): boolean;
  public get_text_for_symbol_lookup(): String;
  public get_text_with_cursor_char(_line: number, _column: number): String;
  public set_symbol_lookup_word_as_valid(_valid: boolean): void;
  public move_lines_up(): void;
  public move_lines_down(): void;
  public delete_lines(): void;
  public duplicate_selection(): void;
  public duplicate_lines(): void;
  public get symbol_lookup_on_click(): boolean;
  public set symbol_lookup_on_click(value): void;
  public get line_folding(): boolean;
  public set line_folding(value): void;
  public get line_length_guidelines(): PackedInt32Array;
  public set line_length_guidelines(value): void;
  public get gutters_draw_breakpoints_gutter(): boolean;
  public set gutters_draw_breakpoints_gutter(value): void;
  public get gutters_draw_bookmarks(): boolean;
  public set gutters_draw_bookmarks(value): void;
  public get gutters_draw_executing_lines(): boolean;
  public set gutters_draw_executing_lines(value): void;
  public get gutters_draw_line_numbers(): boolean;
  public set gutters_draw_line_numbers(value): void;
  public get gutters_zero_pad_line_numbers(): boolean;
  public set gutters_zero_pad_line_numbers(value): void;
  public get gutters_draw_fold_gutter(): boolean;
  public set gutters_draw_fold_gutter(value): void;
  public get delimiter_strings(): PackedStringArray;
  public set delimiter_strings(value): void;
  public get delimiter_comments(): PackedStringArray;
  public set delimiter_comments(value): void;
  public get code_completion_enabled(): boolean;
  public set code_completion_enabled(value): void;
  public get code_completion_prefixes(): PackedStringArray;
  public set code_completion_prefixes(value): void;
  public get indent_size(): number;
  public set indent_size(value): void;
  public get indent_use_spaces(): boolean;
  public set indent_use_spaces(value): void;
  public get indent_automatic(): boolean;
  public set indent_automatic(value): void;
  public get indent_automatic_prefixes(): PackedStringArray;
  public set indent_automatic_prefixes(value): void;
  public get auto_brace_completion_enabled(): boolean;
  public set auto_brace_completion_enabled(value): void;
  public get auto_brace_completion_highlight_matching(): boolean;
  public set auto_brace_completion_highlight_matching(value): void;
  public get auto_brace_completion_pairs(): Dictionary;
  public set auto_brace_completion_pairs(value): void;
  static CodeCompletionKind = {
    KIND_CLASS = 0,
    KIND_FUNCTION = 1,
    KIND_SIGNAL = 2,
    KIND_VARIABLE = 3,
    KIND_MEMBER = 4,
    KIND_ENUM = 5,
    KIND_CONSTANT = 6,
    KIND_NODE_PATH = 7,
    KIND_FILE_PATH = 8,
    KIND_PLAIN_TEXT = 9,
  }
  static CodeCompletionLocation = {
    LOCATION_LOCAL = 0,
    LOCATION_PARENT_MASK = 256,
    LOCATION_OTHER_USER_CODE = 512,
    LOCATION_OTHER = 1024,
  }
  public get breakpoint_toggled(): Signal;
  public get code_completion_requested(): Signal;
  public get symbol_lookup(): Signal;
  public get symbol_validate(): Signal;
}