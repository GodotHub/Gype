declare global {
  export declare class GDString {
    constructor();
    constructor(_from: string);
    constructor(_from: GDString);
    constructor(_from: StringName);
    constructor(_from: NodePath);
    public casecmp_to(_to: GDString | StringName | string): void;
    public nocasecmp_to(_to: GDString | StringName | string): void;
    public naturalcasecmp_to(_to: GDString | StringName | string): void;
    public naturalnocasecmp_to(_to: GDString | StringName | string): void;
    public filecasecmp_to(_to: GDString | StringName | string): void;
    public filenocasecmp_to(_to: GDString | StringName | string): void;
    public length(): void;
    public substr(_from: number, _len: number): void;
    public get_slice(
      _delimiter: GDString | StringName | string,
      _slice: number
    ): void;
    public get_slicec(_delimiter: number, _slice: number): void;
    public get_slice_count(_delimiter: GDString | StringName | string): void;
    public find(_what: GDString | StringName | string, _from: number): void;
    public findn(_what: GDString | StringName | string, _from: number): void;
    public count(
      _what: GDString | StringName | string,
      _from: number,
      _to: number
    ): void;
    public countn(
      _what: GDString | StringName | string,
      _from: number,
      _to: number
    ): void;
    public rfind(_what: GDString | StringName | string, _from: number): void;
    public rfindn(_what: GDString | StringName | string, _from: number): void;
    public match(_expr: GDString | StringName | string): void;
    public matchn(_expr: GDString | StringName | string): void;
    public begins_with(_text: GDString | StringName | string): void;
    public ends_with(_text: GDString | StringName | string): void;
    public is_subsequence_of(_text: GDString | StringName | string): void;
    public is_subsequence_ofn(_text: GDString | StringName | string): void;
    public bigrams(): void;
    public similarity(_text: GDString | StringName | string): void;
    public format(
      _values: any,
      _placeholder: GDString | StringName | string
    ): void;
    public replace(
      _what: GDString | StringName | string,
      _forwhat: GDString | StringName | string
    ): void;
    public replacen(
      _what: GDString | StringName | string,
      _forwhat: GDString | StringName | string
    ): void;
    public repeat(_count: number): void;
    public reverse(): void;
    public insert(
      _position: number,
      _what: GDString | StringName | string
    ): void;
    public erase(_position: number, _chars: number): void;
    public capitalize(): void;
    public to_camel_case(): void;
    public to_pascal_case(): void;
    public to_snake_case(): void;
    public split(
      _delimiter: GDString | StringName | string,
      _allow_empty: boolean,
      _maxsplit: number
    ): void;
    public rsplit(
      _delimiter: GDString | StringName | string,
      _allow_empty: boolean,
      _maxsplit: number
    ): void;
    public split_floats(
      _delimiter: GDString | StringName | string,
      _allow_empty: boolean
    ): void;
    public join(_parts: PackedStringArray): void;
    public to_upper(): void;
    public to_lower(): void;
    public left(_length: number): void;
    public right(_length: number): void;
    public strip_edges(_left: boolean, _right: boolean): void;
    public strip_escapes(): void;
    public lstrip(_chars: GDString | StringName | string): void;
    public rstrip(_chars: GDString | StringName | string): void;
    public get_extension(): void;
    public get_basename(): void;
    public path_join(_file: GDString | StringName | string): void;
    public unicode_at(_at: number): void;
    public indent(_prefix: GDString | StringName | string): void;
    public dedent(): void;
    public hash(): void;
    public md5_text(): void;
    public sha1_text(): void;
    public sha256_text(): void;
    public md5_buffer(): void;
    public sha1_buffer(): void;
    public sha256_buffer(): void;
    public is_empty(): void;
    public contains(_what: GDString | StringName | string): void;
    public containsn(_what: GDString | StringName | string): void;
    public is_absolute_path(): void;
    public is_relative_path(): void;
    public simplify_path(): void;
    public get_base_dir(): void;
    public get_file(): void;
    public xml_escape(_escape_quotes: boolean): void;
    public xml_unescape(): void;
    public uri_encode(): void;
    public uri_decode(): void;
    public c_escape(): void;
    public c_unescape(): void;
    public json_escape(): void;
    public validate_node_name(): void;
    public validate_filename(): void;
    public is_valid_identifier(): void;
    public is_valid_int(): void;
    public is_valid_float(): void;
    public is_valid_hex_number(_with_prefix: boolean): void;
    public is_valid_html_color(): void;
    public is_valid_ip_address(): void;
    public is_valid_filename(): void;
    public to_int(): void;
    public to_float(): void;
    public hex_to_int(): void;
    public bin_to_int(): void;
    public lpad(
      _min_length: number,
      _character: GDString | StringName | string
    ): void;
    public rpad(
      _min_length: number,
      _character: GDString | StringName | string
    ): void;
    public pad_decimals(_digits: number): void;
    public pad_zeros(_digits: number): void;
    public trim_prefix(_prefix: GDString | StringName | string): void;
    public trim_suffix(_suffix: GDString | StringName | string): void;
    public to_ascii_buffer(): void;
    public to_utf8_buffer(): void;
    public to_utf16_buffer(): void;
    public to_utf32_buffer(): void;
    public hex_decode(): void;
    public to_wchar_buffer(): void;
    public num_scientific(_number: number): void;
    public num(_number: number, _decimals: number): void;
    public num_int64(
      _number: number,
      _base: number,
      _capitalize_hex: boolean
    ): void;
    public num_uint64(
      _number: number,
      _base: number,
      _capitalize_hex: boolean
    ): void;
    public chr(_char: number): void;
    public humanize_size(_size: number): void;
  }
}

export {};
