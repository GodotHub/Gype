import * as internal from '__internal__';
import { SyntaxHighlighter } from '@js_godot/classes/syntax_highlighter'
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
@GodotClass
export class CodeHighlighter extends SyntaxHighlighter{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CodeHighlighter");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_keyword_color() {
    if (!this._bindings.method_add_keyword_color) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("add_keyword_color");
      this._bindings.method_add_keyword_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1636512886
      );
    }
  }
  static init_method_remove_keyword_color() {
    if (!this._bindings.method_remove_keyword_color) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("remove_keyword_color");
      this._bindings.method_remove_keyword_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_has_keyword_color() {
    if (!this._bindings.method_has_keyword_color) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("has_keyword_color");
      this._bindings.method_has_keyword_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3927539163
      );
    }
  }
  static init_method_get_keyword_color() {
    if (!this._bindings.method_get_keyword_color) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("get_keyword_color");
      this._bindings.method_get_keyword_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3855908743
      );
    }
  }
  static init_method_set_keyword_colors() {
    if (!this._bindings.method_set_keyword_colors) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("set_keyword_colors");
      this._bindings.method_set_keyword_colors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155329257
      );
    }
  }
  static init_method_clear_keyword_colors() {
    if (!this._bindings.method_clear_keyword_colors) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("clear_keyword_colors");
      this._bindings.method_clear_keyword_colors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_keyword_colors() {
    if (!this._bindings.method_get_keyword_colors) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("get_keyword_colors");
      this._bindings.method_get_keyword_colors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3102165223
      );
    }
  }
  static init_method_add_member_keyword_color() {
    if (!this._bindings.method_add_member_keyword_color) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("add_member_keyword_color");
      this._bindings.method_add_member_keyword_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1636512886
      );
    }
  }
  static init_method_remove_member_keyword_color() {
    if (!this._bindings.method_remove_member_keyword_color) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("remove_member_keyword_color");
      this._bindings.method_remove_member_keyword_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_has_member_keyword_color() {
    if (!this._bindings.method_has_member_keyword_color) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("has_member_keyword_color");
      this._bindings.method_has_member_keyword_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3927539163
      );
    }
  }
  static init_method_get_member_keyword_color() {
    if (!this._bindings.method_get_member_keyword_color) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("get_member_keyword_color");
      this._bindings.method_get_member_keyword_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3855908743
      );
    }
  }
  static init_method_set_member_keyword_colors() {
    if (!this._bindings.method_set_member_keyword_colors) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("set_member_keyword_colors");
      this._bindings.method_set_member_keyword_colors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155329257
      );
    }
  }
  static init_method_clear_member_keyword_colors() {
    if (!this._bindings.method_clear_member_keyword_colors) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("clear_member_keyword_colors");
      this._bindings.method_clear_member_keyword_colors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_member_keyword_colors() {
    if (!this._bindings.method_get_member_keyword_colors) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("get_member_keyword_colors");
      this._bindings.method_get_member_keyword_colors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3102165223
      );
    }
  }
  static init_method_add_color_region() {
    if (!this._bindings.method_add_color_region) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("add_color_region");
      this._bindings.method_add_color_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2924977451
      );
    }
  }
  static init_method_remove_color_region() {
    if (!this._bindings.method_remove_color_region) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("remove_color_region");
      this._bindings.method_remove_color_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_has_color_region() {
    if (!this._bindings.method_has_color_region) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("has_color_region");
      this._bindings.method_has_color_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3927539163
      );
    }
  }
  static init_method_set_color_regions() {
    if (!this._bindings.method_set_color_regions) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("set_color_regions");
      this._bindings.method_set_color_regions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155329257
      );
    }
  }
  static init_method_clear_color_regions() {
    if (!this._bindings.method_clear_color_regions) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("clear_color_regions");
      this._bindings.method_clear_color_regions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_color_regions() {
    if (!this._bindings.method_get_color_regions) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("get_color_regions");
      this._bindings.method_get_color_regions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3102165223
      );
    }
  }
  static init_method_set_function_color() {
    if (!this._bindings.method_set_function_color) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("set_function_color");
      this._bindings.method_set_function_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_function_color() {
    if (!this._bindings.method_get_function_color) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("get_function_color");
      this._bindings.method_get_function_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_number_color() {
    if (!this._bindings.method_set_number_color) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("set_number_color");
      this._bindings.method_set_number_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_number_color() {
    if (!this._bindings.method_get_number_color) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("get_number_color");
      this._bindings.method_get_number_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_symbol_color() {
    if (!this._bindings.method_set_symbol_color) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("set_symbol_color");
      this._bindings.method_set_symbol_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_symbol_color() {
    if (!this._bindings.method_get_symbol_color) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("get_symbol_color");
      this._bindings.method_get_symbol_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_member_variable_color() {
    if (!this._bindings.method_set_member_variable_color) {
      let classname = new StringName("CodeHighlighter");
      let methodname = new StringName("set_member_variable_color");
      this._bindings.method_set_member_variable_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_member_variable_color() {
    if (!this._bindings.method_get_member_variable_color) {
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
    CodeHighlighter.init_method_add_keyword_color();
    return _call_native_mb_no_ret(
      CodeHighlighter._bindings.method_add_keyword_color,
      this._owner,
      _keyword, _color
    );
    
  }
  remove_keyword_color(_keyword) {
    CodeHighlighter.init_method_remove_keyword_color();
    return _call_native_mb_no_ret(
      CodeHighlighter._bindings.method_remove_keyword_color,
      this._owner,
      _keyword
    );
    
  }
  has_keyword_color(_keyword) {
    CodeHighlighter.init_method_has_keyword_color();
    return _call_native_mb_ret(
      CodeHighlighter._bindings.method_has_keyword_color,
      this._owner,
			Variant.Type.BOOL,
    
      _keyword
    );
    
  }
  get_keyword_color(_keyword) {
    CodeHighlighter.init_method_get_keyword_color();
    return _call_native_mb_ret(
      CodeHighlighter._bindings.method_get_keyword_color,
      this._owner,
			Variant.Type.COLOR,
    
      _keyword
    );
    
  }
  set_keyword_colors(_keywords) {
    CodeHighlighter.init_method_set_keyword_colors();
    return _call_native_mb_no_ret(
      CodeHighlighter._bindings.method_set_keyword_colors,
      this._owner,
      _keywords
    );
    
  }
  clear_keyword_colors() {
    CodeHighlighter.init_method_clear_keyword_colors();
    return _call_native_mb_no_ret(
      CodeHighlighter._bindings.method_clear_keyword_colors,
      this._owner,
      
    );
    
  }
  get_keyword_colors() {
    CodeHighlighter.init_method_get_keyword_colors();
    return _call_native_mb_ret(
      CodeHighlighter._bindings.method_get_keyword_colors,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  add_member_keyword_color(_member_keyword, _color) {
    CodeHighlighter.init_method_add_member_keyword_color();
    return _call_native_mb_no_ret(
      CodeHighlighter._bindings.method_add_member_keyword_color,
      this._owner,
      _member_keyword, _color
    );
    
  }
  remove_member_keyword_color(_member_keyword) {
    CodeHighlighter.init_method_remove_member_keyword_color();
    return _call_native_mb_no_ret(
      CodeHighlighter._bindings.method_remove_member_keyword_color,
      this._owner,
      _member_keyword
    );
    
  }
  has_member_keyword_color(_member_keyword) {
    CodeHighlighter.init_method_has_member_keyword_color();
    return _call_native_mb_ret(
      CodeHighlighter._bindings.method_has_member_keyword_color,
      this._owner,
			Variant.Type.BOOL,
    
      _member_keyword
    );
    
  }
  get_member_keyword_color(_member_keyword) {
    CodeHighlighter.init_method_get_member_keyword_color();
    return _call_native_mb_ret(
      CodeHighlighter._bindings.method_get_member_keyword_color,
      this._owner,
			Variant.Type.COLOR,
    
      _member_keyword
    );
    
  }
  set_member_keyword_colors(_member_keyword) {
    CodeHighlighter.init_method_set_member_keyword_colors();
    return _call_native_mb_no_ret(
      CodeHighlighter._bindings.method_set_member_keyword_colors,
      this._owner,
      _member_keyword
    );
    
  }
  clear_member_keyword_colors() {
    CodeHighlighter.init_method_clear_member_keyword_colors();
    return _call_native_mb_no_ret(
      CodeHighlighter._bindings.method_clear_member_keyword_colors,
      this._owner,
      
    );
    
  }
  get_member_keyword_colors() {
    CodeHighlighter.init_method_get_member_keyword_colors();
    return _call_native_mb_ret(
      CodeHighlighter._bindings.method_get_member_keyword_colors,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  add_color_region(_start_key, _end_key, _color, _line_only) {
    CodeHighlighter.init_method_add_color_region();
    return _call_native_mb_no_ret(
      CodeHighlighter._bindings.method_add_color_region,
      this._owner,
      _start_key, _end_key, _color, _line_only
    );
    
  }
  remove_color_region(_start_key) {
    CodeHighlighter.init_method_remove_color_region();
    return _call_native_mb_no_ret(
      CodeHighlighter._bindings.method_remove_color_region,
      this._owner,
      _start_key
    );
    
  }
  has_color_region(_start_key) {
    CodeHighlighter.init_method_has_color_region();
    return _call_native_mb_ret(
      CodeHighlighter._bindings.method_has_color_region,
      this._owner,
			Variant.Type.BOOL,
    
      _start_key
    );
    
  }
  set_color_regions(_color_regions) {
    CodeHighlighter.init_method_set_color_regions();
    return _call_native_mb_no_ret(
      CodeHighlighter._bindings.method_set_color_regions,
      this._owner,
      _color_regions
    );
    
  }
  clear_color_regions() {
    CodeHighlighter.init_method_clear_color_regions();
    return _call_native_mb_no_ret(
      CodeHighlighter._bindings.method_clear_color_regions,
      this._owner,
      
    );
    
  }
  get_color_regions() {
    CodeHighlighter.init_method_get_color_regions();
    return _call_native_mb_ret(
      CodeHighlighter._bindings.method_get_color_regions,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  set_function_color(_color) {
    CodeHighlighter.init_method_set_function_color();
    return _call_native_mb_no_ret(
      CodeHighlighter._bindings.method_set_function_color,
      this._owner,
      _color
    );
    
  }
  get_function_color() {
    CodeHighlighter.init_method_get_function_color();
    return _call_native_mb_ret(
      CodeHighlighter._bindings.method_get_function_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_number_color(_color) {
    CodeHighlighter.init_method_set_number_color();
    return _call_native_mb_no_ret(
      CodeHighlighter._bindings.method_set_number_color,
      this._owner,
      _color
    );
    
  }
  get_number_color() {
    CodeHighlighter.init_method_get_number_color();
    return _call_native_mb_ret(
      CodeHighlighter._bindings.method_get_number_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_symbol_color(_color) {
    CodeHighlighter.init_method_set_symbol_color();
    return _call_native_mb_no_ret(
      CodeHighlighter._bindings.method_set_symbol_color,
      this._owner,
      _color
    );
    
  }
  get_symbol_color() {
    CodeHighlighter.init_method_get_symbol_color();
    return _call_native_mb_ret(
      CodeHighlighter._bindings.method_get_symbol_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_member_variable_color(_color) {
    CodeHighlighter.init_method_set_member_variable_color();
    return _call_native_mb_no_ret(
      CodeHighlighter._bindings.method_set_member_variable_color,
      this._owner,
      _color
    );
    
  }
  get_member_variable_color() {
    CodeHighlighter.init_method_get_member_variable_color();
    return _call_native_mb_ret(
      CodeHighlighter._bindings.method_get_member_variable_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  
get number_color () {
  return this.get_number_color();
}
set number_color (new_value) {
  this.set_number_color(new_value);
}
get symbol_color () {
  return this.get_symbol_color();
}
set symbol_color (new_value) {
  this.set_symbol_color(new_value);
}
get function_color () {
  return this.get_function_color();
}
set function_color (new_value) {
  this.set_function_color(new_value);
}
get member_variable_color () {
  return this.get_member_variable_color();
}
set member_variable_color (new_value) {
  this.set_member_variable_color(new_value);
}
get keyword_colors () {
  return this.get_keyword_colors();
}
set keyword_colors (new_value) {
  this.set_keyword_colors(new_value);
}
get member_keyword_colors () {
  return this.get_member_keyword_colors();
}
set member_keyword_colors (new_value) {
  this.set_member_keyword_colors(new_value);
}
get color_regions () {
  return this.get_color_regions();
}
set color_regions (new_value) {
  this.set_color_regions(new_value);
}

}