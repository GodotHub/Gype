import * as internal from '__internal__';
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__can_handle;
    method__parse_begin;
    method__parse_category;
    method__parse_group;
    method__parse_property;
    method__parse_end;
    method_add_custom_control;
    method_add_property_editor;
    method_add_property_editor_for_multiple_properties;
}


export class EditorInspectorPlugin extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorInspectorPlugin");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorInspectorPlugin");
      let methodname = new StringName("_can_handle");
      this._bindings.method__can_handle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorInspectorPlugin");
      let methodname = new StringName("_parse_begin");
      this._bindings.method__parse_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorInspectorPlugin");
      let methodname = new StringName("_parse_category");
      this._bindings.method__parse_category = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorInspectorPlugin");
      let methodname = new StringName("_parse_group");
      this._bindings.method__parse_group = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorInspectorPlugin");
      let methodname = new StringName("_parse_property");
      this._bindings.method__parse_property = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorInspectorPlugin");
      let methodname = new StringName("_parse_end");
      this._bindings.method__parse_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
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
    return _call_native_mb_ret(
      ClassDB._bindings.method__can_handle,
      this._owner,
			Variant.Type.BOOL,
      _object
    );
  }
  _parse_begin(_object) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__parse_begin,
      this._owner,
      _object
    );
  }
  _parse_category(_object, _category) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__parse_category,
      this._owner,
      _object, _category
    );
  }
  _parse_group(_object, _group) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__parse_group,
      this._owner,
      _object, _group
    );
  }
  _parse_property(_object, _type, _name, _hint_type, _hint_string, _usage_flags, _wide) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__parse_property,
      this._owner,
			Variant.Type.BOOL,
      _object, _type, _name, _hint_type, _hint_string, _usage_flags, _wide
    );
  }
  _parse_end(_object) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__parse_end,
      this._owner,
      _object
    );
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
}