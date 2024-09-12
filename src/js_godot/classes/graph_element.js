import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GraphElement");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_resizable() {
    if (!this.#_bindings.method_set_resizable) {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("set_resizable");
      this.#_bindings.method_set_resizable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_resizable() {
    if (!this.#_bindings.method_is_resizable) {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("is_resizable");
      this.#_bindings.method_is_resizable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_draggable() {
    if (!this.#_bindings.method_set_draggable) {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("set_draggable");
      this.#_bindings.method_set_draggable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_draggable() {
    if (!this.#_bindings.method_is_draggable) {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("is_draggable");
      this.#_bindings.method_is_draggable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_selectable() {
    if (!this.#_bindings.method_set_selectable) {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("set_selectable");
      this.#_bindings.method_set_selectable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_selectable() {
    if (!this.#_bindings.method_is_selectable) {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("is_selectable");
      this.#_bindings.method_is_selectable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_selected() {
    if (!this.#_bindings.method_set_selected) {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("set_selected");
      this.#_bindings.method_set_selected = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_selected() {
    if (!this.#_bindings.method_is_selected) {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("is_selected");
      this.#_bindings.method_is_selected = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_position_offset() {
    if (!this.#_bindings.method_set_position_offset) {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("set_position_offset");
      this.#_bindings.method_set_position_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_position_offset() {
    if (!this.#_bindings.method_get_position_offset) {
      let classname = new StringName("GraphElement");
      let methodname = new StringName("get_position_offset");
      this.#_bindings.method_get_position_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }

  
  
  set_resizable(_resizable) {
    GraphElement.init_method_set_resizable();
    return _call_native_mb_no_ret(
      GraphElement.#_bindings.method_set_resizable,
      this._owner,
      _resizable
    );
    
  }
  is_resizable() {
    GraphElement.init_method_is_resizable();
    return _call_native_mb_ret(
      GraphElement.#_bindings.method_is_resizable,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_draggable(_draggable) {
    GraphElement.init_method_set_draggable();
    return _call_native_mb_no_ret(
      GraphElement.#_bindings.method_set_draggable,
      this._owner,
      _draggable
    );
    
  }
  is_draggable() {
    GraphElement.init_method_is_draggable();
    return _call_native_mb_ret(
      GraphElement.#_bindings.method_is_draggable,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_selectable(_selectable) {
    GraphElement.init_method_set_selectable();
    return _call_native_mb_no_ret(
      GraphElement.#_bindings.method_set_selectable,
      this._owner,
      _selectable
    );
    
  }
  is_selectable() {
    GraphElement.init_method_is_selectable();
    return _call_native_mb_ret(
      GraphElement.#_bindings.method_is_selectable,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_selected(_selected) {
    GraphElement.init_method_set_selected();
    return _call_native_mb_no_ret(
      GraphElement.#_bindings.method_set_selected,
      this._owner,
      _selected
    );
    
  }
  is_selected() {
    GraphElement.init_method_is_selected();
    return _call_native_mb_ret(
      GraphElement.#_bindings.method_is_selected,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_position_offset(_offset) {
    GraphElement.init_method_set_position_offset();
    return _call_native_mb_no_ret(
      GraphElement.#_bindings.method_set_position_offset,
      this._owner,
      _offset
    );
    
  }
  get_position_offset() {
    GraphElement.init_method_get_position_offset();
    return _call_native_mb_ret(
      GraphElement.#_bindings.method_get_position_offset,
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

}