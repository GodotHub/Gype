import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_add_custom_control;
  method_add_property_editor;
  method_add_property_editor_for_multiple_properties;
}
export class EditorInspectorPlugin extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorInspectorPlugin");
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
      let classname = new StringName("EditorInspectorPlugin");
      let methodname = new StringName("add_custom_control");
      this._bindings.method_add_custom_control = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1496901182
      );
    }
    {
      let classname = new StringName("EditorInspectorPlugin");
      let methodname = new StringName("add_property_editor");
      this._bindings.method_add_property_editor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2042698479
      );
    }
    {
      let classname = new StringName("EditorInspectorPlugin");
      let methodname = new StringName("add_property_editor_for_multiple_properties");
      this._bindings.method_add_property_editor_for_multiple_properties = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        788598683
      );
    }
  }
  _can_handle(_object) {
  }
  _parse_begin(_object) {
  }
  _parse_category(_object, _category) {
  }
  _parse_group(_object, _group) {
  }
  _parse_property(_object, _type, _name, _hint_type, _hint_string, _usage_flags, _wide) {
  }
  _parse_end(_object) {
  }
  add_custom_control(_control) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_custom_control,
      this._owner,
      _control
    );
    
  }
  add_property_editor(_property, _editor, _add_to_end, _label) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_property_editor,
      this._owner,
      _property, _editor, _add_to_end, _label
    );
    
  }
  add_property_editor_for_multiple_properties(_label, _properties, _editor) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_property_editor_for_multiple_properties,
      this._owner,
      _label, _properties, _editor
    );
    
  }
  


  static {
    this._init_bindings();
  }
}