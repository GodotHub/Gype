
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
  public convert_indent(_from_line: number, _to_line: number): void;
  public set_auto_brace_completion_enabled(_enable: boolean): void;
  public is_auto_brace_completion_enabled(): boolean;
  public set_highlight_matching_braces_enabled(_enable: boolean): void;
  public is_highlight_matching_braces_enabled(): boolean;
  public add_auto_brace_completion_pair(_start_key: String, _end_key: String): void;
  public set_auto_brace_completion_pairs(_pairs: Dictionary): void;
  public get_auto_brace_completion_pairs(): Dictionary;
  public has_auto_brace_completion_open_key(_open_key: String): boolean;
  public has_auto_brace_completion_close_key(_close_key: String): boolean;
  public get_auto_brace_completion_close_key(_open_key: String): String;
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
  public set_code_region_tags(_start: String, _end: String): void;
  public is_line_code_region_start(_line: number): boolean;
  public is_line_code_region_end(_line: number): boolean;
  public add_string_delimiter(_start_key: String, _end_key: String, _line_only: boolean): void;
  public remove_string_delimiter(_start_key: String): void;
  public has_string_delimiter(_start_key: String): boolean;
  public set_string_delimiters(_string_delimiters: GDArray): void;
  public clear_string_delimiters(): void;
  public get_string_delimiters(): GDArray;
  public is_in_string(_line: number, _column: number): number;
  public add_comment_delimiter(_start_key: String, _end_key: String, _line_only: boolean): void;
  public remove_comment_delimiter(_start_key: String): void;
  public has_comment_delimiter(_start_key: String): boolean;
  public set_comment_delimiters(_comment_delimiters: GDArray): void;
  public clear_comment_delimiters(): void;
  public get_comment_delimiters(): GDArray;
  public is_in_comment(_line: number, _column: number): number;
  public get_delimiter_start_key(_delimiter_index: number): String;
  public get_delimiter_end_key(_delimiter_index: number): String;
  public get_delimiter_start_position(_line: number, _column: number): Vector2;
  public get_delimiter_end_position(_line: number, _column: number): Vector2;
  public set_code_hint(_code_hint: String): void;
  public set_code_hint_draw_below(_draw_below: boolean): void;
  public get_text_for_code_completion(): String;
  public request_code_completion(_force: boolean): void;
  public add_code_completion_option(_type: number, _display_text: String, _insert_text: String, _text_color: Color, _icon: Resource, _value: any, _location: number): void;
  public update_code_completion_options(_force: boolean): void;
  public get_code_completion_options(): GDArray;
  public get_code_completion_option(_index: number): Dictionary;
  public get_code_completion_selected_index(): number;
  public set_code_completion_selected_index(_index: number): void;
  public confirm_code_completion(_replace: boolean): void;
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
  public get symbol_lookup_on_click(): boolean {
    is_symbol_lookup_on_click_enabled();
  }
  public set symbol_lookup_on_click(value): void {
    set_symbol_lookup_on_click_enabled(value);
  }
  public get line_folding(): boolean {
    is_line_folding_enabled();
  }
  public set line_folding(value): void {
    set_line_folding_enabled(value);
  }
  public get line_length_guidelines(): PackedInt32Array {
    get_line_length_guidelines();
  }
  public set line_length_guidelines(value): void {
    set_line_length_guidelines(value);
  }
  public get gutters_draw_breakpoints_gutter(): boolean {
    is_drawing_breakpoints_gutter();
  }
  public set gutters_draw_breakpoints_gutter(value): void {
    set_draw_breakpoints_gutter(value);
  }
  public get gutters_draw_bookmarks(): boolean {
    is_drawing_bookmarks_gutter();
  }
  public set gutters_draw_bookmarks(value): void {
    set_draw_bookmarks_gutter(value);
  }
  public get gutters_draw_executing_lines(): boolean {
    is_drawing_executing_lines_gutter();
  }
  public set gutters_draw_executing_lines(value): void {
    set_draw_executing_lines_gutter(value);
  }
  public get gutters_draw_line_numbers(): boolean {
    is_draw_line_numbers_enabled();
  }
  public set gutters_draw_line_numbers(value): void {
    set_draw_line_numbers(value);
  }
  public get gutters_zero_pad_line_numbers(): boolean {
    is_line_numbers_zero_padded();
  }
  public set gutters_zero_pad_line_numbers(value): void {
    set_line_numbers_zero_padded(value);
  }
  public get gutters_draw_fold_gutter(): boolean {
    is_drawing_fold_gutter();
  }
  public set gutters_draw_fold_gutter(value): void {
    set_draw_fold_gutter(value);
  }
  public get delimiter_strings(): PackedStringArray {
    get_string_delimiters();
  }
  public set delimiter_strings(value): void {
    set_string_delimiters(value);
  }
  public get delimiter_comments(): PackedStringArray {
    get_comment_delimiters();
  }
  public set delimiter_comments(value): void {
    set_comment_delimiters(value);
  }
  public get code_completion_enabled(): boolean {
    is_code_completion_enabled();
  }
  public set code_completion_enabled(value): void {
    set_code_completion_enabled(value);
  }
  public get code_completion_prefixes(): PackedStringArray {
    get_code_completion_prefixes();
  }
  public set code_completion_prefixes(value): void {
    set_code_completion_prefixes(value);
  }
  public get indent_size(): number {
    get_indent_size();
  }
  public set indent_size(value): void {
    set_indent_size(value);
  }
  public get indent_use_spaces(): boolean {
    is_indent_using_spaces();
  }
  public set indent_use_spaces(value): void {
    set_indent_using_spaces(value);
  }
  public get indent_automatic(): boolean {
    is_auto_indent_enabled();
  }
  public set indent_automatic(value): void {
    set_auto_indent_enabled(value);
  }
  public get indent_automatic_prefixes(): PackedStringArray {
    get_auto_indent_prefixes();
  }
  public set indent_automatic_prefixes(value): void {
    set_auto_indent_prefixes(value);
  }
  public get auto_brace_completion_enabled(): boolean {
    is_auto_brace_completion_enabled();
  }
  public set auto_brace_completion_enabled(value): void {
    set_auto_brace_completion_enabled(value);
  }
  public get auto_brace_completion_highlight_matching(): boolean {
    is_highlight_matching_braces_enabled();
  }
  public set auto_brace_completion_highlight_matching(value): void {
    set_highlight_matching_braces_enabled(value);
  }
  public get auto_brace_completion_pairs(): Dictionary {
    get_auto_brace_completion_pairs();
  }
  public set auto_brace_completion_pairs(value): void {
    set_auto_brace_completion_pairs(value);
  }
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
}