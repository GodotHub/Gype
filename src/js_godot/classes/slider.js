import * as internal from '__internal__';
import { Range } from 'src/js_godot/classes/range'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_ticks;
    method_get_ticks;
    method_get_ticks_on_borders;
    method_set_ticks_on_borders;
    method_set_editable;
    method_is_editable;
    method_set_scrollable;
    method_is_scrollable;
}


export class Slider extends Range{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Slider");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Slider");
        let methodname = new StringName("set_ticks");
        this._bindings.method_set_ticks = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Slider");
        let methodname = new StringName("get_ticks");
        this._bindings.method_get_ticks = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Slider");
        let methodname = new StringName("get_ticks_on_borders");
        this._bindings.method_get_ticks_on_borders = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Slider");
        let methodname = new StringName("set_ticks_on_borders");
        this._bindings.method_set_ticks_on_borders = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Slider");
        let methodname = new StringName("set_editable");
        this._bindings.method_set_editable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Slider");
        let methodname = new StringName("is_editable");
        this._bindings.method_is_editable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Slider");
        let methodname = new StringName("set_scrollable");
        this._bindings.method_set_scrollable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Slider");
        let methodname = new StringName("is_scrollable");
        this._bindings.method_is_scrollable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_ticks(_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ticks,
      this._owner,
      _count
    );
    
  }
  get_ticks() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ticks,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_ticks_on_borders() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ticks_on_borders,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_ticks_on_borders(_ticks_on_border) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ticks_on_borders,
      this._owner,
      _ticks_on_border
    );
    
  }
  set_editable(_editable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_editable,
      this._owner,
      _editable
    );
    
  }
  is_editable() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_editable,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_scrollable(_scrollable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scrollable,
      this._owner,
      _scrollable
    );
    
  }
  is_scrollable() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_scrollable,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}