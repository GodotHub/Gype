import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Vector2 } from '@js_godot/variant/vector2'
import { Container } from '@js_godot/classes/container'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_resizable;
  method_is_resizable;
  method_set_draggable;
  method_is_draggable;
  method_set_selectable;
  method_is_selectable;
  method_set_selected;
  method_is_selected;
  method_set_position_offset;
  method_get_position_offset;
}
export class GraphElement extends Container{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GraphElement");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("set_resizable");
      this._bindings.method_set_resizable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("is_resizable");
      this._bindings.method_is_resizable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("set_draggable");
      this._bindings.method_set_draggable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("is_draggable");
      this._bindings.method_is_draggable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("set_selectable");
      this._bindings.method_set_selectable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("is_selectable");
      this._bindings.method_is_selectable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("set_selected");
      this._bindings.method_set_selected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("is_selected");
      this._bindings.method_is_selected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("set_position_offset");
      this._bindings.method_set_position_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("get_position_offset");
      this._bindings.method_get_position_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
  }
  
  set_resizable(_resizable) {
    return _call_native_mb_no_ret(
      GraphElement._bindings.method_set_resizable,
      this._owner,
      _resizable
    );
    
  }
  is_resizable() {
    return _call_native_mb_ret(
      GraphElement._bindings.method_is_resizable,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_draggable(_draggable) {
    return _call_native_mb_no_ret(
      GraphElement._bindings.method_set_draggable,
      this._owner,
      _draggable
    );
    
  }
  is_draggable() {
    return _call_native_mb_ret(
      GraphElement._bindings.method_is_draggable,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_selectable(_selectable) {
    return _call_native_mb_no_ret(
      GraphElement._bindings.method_set_selectable,
      this._owner,
      _selectable
    );
    
  }
  is_selectable() {
    return _call_native_mb_ret(
      GraphElement._bindings.method_is_selectable,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_selected(_selected) {
    return _call_native_mb_no_ret(
      GraphElement._bindings.method_set_selected,
      this._owner,
      _selected
    );
    
  }
  is_selected() {
    return _call_native_mb_ret(
      GraphElement._bindings.method_is_selected,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_position_offset(_offset) {
    return _call_native_mb_no_ret(
      GraphElement._bindings.method_set_position_offset,
      this._owner,
      _offset
    );
    
  }
  get_position_offset() {
    return _call_native_mb_ret(
      GraphElement._bindings.method_get_position_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  
get position_offset () {
  return this.get_position_offset();
}
set position_offset (new_value) {
  this.set_position_offset(new_value);
}
get resizable () {
  return this.is_resizable();
}
set resizable (new_value) {
  this.set_resizable(new_value);
}
get draggable () {
  return this.is_draggable();
}
set draggable (new_value) {
  this.set_draggable(new_value);
}
get selectable () {
  return this.is_selectable();
}
set selectable (new_value) {
  this.set_selectable(new_value);
}
get selected () {
  return this.is_selected();
}
set selected (new_value) {
  this.set_selected(new_value);
}


  static {
    this._init_bindings();
  }
}