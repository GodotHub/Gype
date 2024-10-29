
import { SyntaxHighlighter } from "@godot/classes/syntax_highlighter";

export declare class CodeHighlighter extends SyntaxHighlighter{
  public add_keyword_color(_keyword: String, _color: Color): void;
  public remove_keyword_color(_keyword: String): void;
  public has_keyword_color(_keyword: String): boolean;
  public get_keyword_color(_keyword: String): Color;
  public set_keyword_colors(_keywords: Dictionary): void;
  public clear_keyword_colors(): void;
  public get_keyword_colors(): Dictionary;
  public add_member_keyword_color(_member_keyword: String, _color: Color): void;
  public remove_member_keyword_color(_member_keyword: String): void;
  public has_member_keyword_color(_member_keyword: String): boolean;
  public get_member_keyword_color(_member_keyword: String): Color;
  public set_member_keyword_colors(_member_keyword: Dictionary): void;
  public clear_member_keyword_colors(): void;
  public get_member_keyword_colors(): Dictionary;
  public add_color_region(_start_key: String, _end_key: String, _color: Color, _line_only: boolean): void;
  public remove_color_region(_start_key: String): void;
  public has_color_region(_start_key: String): boolean;
  public set_color_regions(_color_regions: Dictionary): void;
  public clear_color_regions(): void;
  public get_color_regions(): Dictionary;
  public set_function_color(_color: Color): void;
  public get_function_color(): Color;
  public set_number_color(_color: Color): void;
  public get_number_color(): Color;
  public set_symbol_color(_color: Color): void;
  public get_symbol_color(): Color;
  public set_member_variable_color(_color: Color): void;
  public get_member_variable_color(): Color;
  public get number_color(): Color {
    get_number_color();
  }
  public set number_color(value): void {
    set_number_color(value);
  }
  public get symbol_color(): Color {
    get_symbol_color();
  }
  public set symbol_color(value): void {
    set_symbol_color(value);
  }
  public get function_color(): Color {
    get_function_color();
  }
  public set function_color(value): void {
    set_function_color(value);
  }
  public get member_variable_color(): Color {
    get_member_variable_color();
  }
  public set member_variable_color(value): void {
    set_member_variable_color(value);
  }
  public get keyword_colors(): Dictionary {
    get_keyword_colors();
  }
  public set keyword_colors(value): void {
    set_keyword_colors(value);
  }
  public get member_keyword_colors(): Dictionary {
    get_member_keyword_colors();
  }
  public set member_keyword_colors(value): void {
    set_member_keyword_colors(value);
  }
  public get color_regions(): Dictionary {
    get_color_regions();
  }
  public set color_regions(value): void {
    set_color_regions(value);
  }
}