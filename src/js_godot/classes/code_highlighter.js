import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import { SyntaxHighlighter } from 'src/js_godot/classes/syntax_highlighter'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { Color } from 'src/js_godot/variant/color'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_add_keyword_color;
    method_remove_keyword_color;
    method_has_keyword_color;
    method_get_keyword_color;
    method_set_keyword_colors;
    method_clear_keyword_colors;
    method_get_keyword_colors;
    method_add_member_keyword_color;
    method_remove_member_keyword_color;
    method_has_member_keyword_color;
    method_get_member_keyword_color;
    method_set_member_keyword_colors;
    method_clear_member_keyword_colors;
    method_get_member_keyword_colors;
    method_add_color_region;
    method_remove_color_region;
    method_has_color_region;
    method_set_color_regions;
    method_clear_color_regions;
    method_get_color_regions;
    method_set_function_color;
    method_get_function_color;
    method_set_number_color;
    method_get_number_color;
    method_set_symbol_color;
    method_get_symbol_color;
    method_set_member_variable_color;
    method_get_member_variable_color;
}


export class CodeHighlighter extends SyntaxHighlighter{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CodeHighlighter");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("add_keyword_color");
        this._bindings.method_add_keyword_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1636512886
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("remove_keyword_color");
        this._bindings.method_remove_keyword_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("has_keyword_color");
        this._bindings.method_has_keyword_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3927539163
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("get_keyword_color");
        this._bindings.method_get_keyword_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3855908743
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("set_keyword_colors");
        this._bindings.method_set_keyword_colors = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155329257
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("clear_keyword_colors");
        this._bindings.method_clear_keyword_colors = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("get_keyword_colors");
        this._bindings.method_get_keyword_colors = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3102165223
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("add_member_keyword_color");
        this._bindings.method_add_member_keyword_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1636512886
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("remove_member_keyword_color");
        this._bindings.method_remove_member_keyword_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("has_member_keyword_color");
        this._bindings.method_has_member_keyword_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3927539163
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("get_member_keyword_color");
        this._bindings.method_get_member_keyword_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3855908743
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("set_member_keyword_colors");
        this._bindings.method_set_member_keyword_colors = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155329257
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("clear_member_keyword_colors");
        this._bindings.method_clear_member_keyword_colors = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("get_member_keyword_colors");
        this._bindings.method_get_member_keyword_colors = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3102165223
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("add_color_region");
        this._bindings.method_add_color_region = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2924977451
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("remove_color_region");
        this._bindings.method_remove_color_region = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("has_color_region");
        this._bindings.method_has_color_region = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3927539163
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("set_color_regions");
        this._bindings.method_set_color_regions = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155329257
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("clear_color_regions");
        this._bindings.method_clear_color_regions = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("get_color_regions");
        this._bindings.method_get_color_regions = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3102165223
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("set_function_color");
        this._bindings.method_set_function_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("get_function_color");
        this._bindings.method_get_function_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("set_number_color");
        this._bindings.method_set_number_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("get_number_color");
        this._bindings.method_get_number_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("set_symbol_color");
        this._bindings.method_set_symbol_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("get_symbol_color");
        this._bindings.method_get_symbol_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("set_member_variable_color");
        this._bindings.method_set_member_variable_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("CodeHighlighter");
        let methodname = new StringName("get_member_variable_color");
        this._bindings.method_get_member_variable_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
  }
  add_keyword_color(_keyword, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_keyword_color,
      this._owner,
      _keyword, _color
    );
    
  }
  remove_keyword_color(_keyword) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_keyword_color,
      this._owner,
      _keyword
    );
    
  }
  has_keyword_color(_keyword) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_keyword_color,
      this._owner,
			Variant.Type.BOOL,
      _keyword
    );
    
  }
  get_keyword_color(_keyword) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_keyword_color,
      this._owner,
			Variant.Type.COLOR
    ,
      _keyword
    );
    
  }
  set_keyword_colors(_keywords) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_keyword_colors,
      this._owner,
      _keywords
    );
    
  }
  clear_keyword_colors() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_keyword_colors,
      this._owner,
      
    );
    
  }
  get_keyword_colors() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_keyword_colors,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
    
  }
  add_member_keyword_color(_member_keyword, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_member_keyword_color,
      this._owner,
      _member_keyword, _color
    );
    
  }
  remove_member_keyword_color(_member_keyword) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_member_keyword_color,
      this._owner,
      _member_keyword
    );
    
  }
  has_member_keyword_color(_member_keyword) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_member_keyword_color,
      this._owner,
			Variant.Type.BOOL,
      _member_keyword
    );
    
  }
  get_member_keyword_color(_member_keyword) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_member_keyword_color,
      this._owner,
			Variant.Type.COLOR
    ,
      _member_keyword
    );
    
  }
  set_member_keyword_colors(_member_keyword) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_member_keyword_colors,
      this._owner,
      _member_keyword
    );
    
  }
  clear_member_keyword_colors() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_member_keyword_colors,
      this._owner,
      
    );
    
  }
  get_member_keyword_colors() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_member_keyword_colors,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
    
  }
  add_color_region(_start_key, _end_key, _color, _line_only) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_color_region,
      this._owner,
      _start_key, _end_key, _color, _line_only
    );
    
  }
  remove_color_region(_start_key) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_color_region,
      this._owner,
      _start_key
    );
    
  }
  has_color_region(_start_key) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_color_region,
      this._owner,
			Variant.Type.BOOL,
      _start_key
    );
    
  }
  set_color_regions(_color_regions) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_color_regions,
      this._owner,
      _color_regions
    );
    
  }
  clear_color_regions() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_color_regions,
      this._owner,
      
    );
    
  }
  get_color_regions() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_color_regions,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
    
  }
  set_function_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_function_color,
      this._owner,
      _color
    );
    
  }
  get_function_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_function_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_number_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_number_color,
      this._owner,
      _color
    );
    
  }
  get_number_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_number_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_symbol_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_symbol_color,
      this._owner,
      _color
    );
    
  }
  get_symbol_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_symbol_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
  set_member_variable_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_member_variable_color,
      this._owner,
      _color
    );
    
  }
  get_member_variable_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_member_variable_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
}