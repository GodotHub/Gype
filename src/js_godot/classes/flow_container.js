import * as internal from '__internal__';
import { Container } from 'src/js_godot/classescontainer'
class _MethodBindings {
    method_get_line_count;
    method_set_alignment;
    method_get_alignment;
    method_set_last_wrap_alignment;
    method_get_last_wrap_alignment;
    method_set_vertical;
    method_is_vertical;
    method_set_reverse_fill;
    method_is_reverse_fill;
}


export class FlowContainer extends Container{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("FlowContainer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("get_line_count");
      this._bindings.method_get_line_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("set_alignment");
      this._bindings.method_set_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        575250951
      );
    }
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("get_alignment");
      this._bindings.method_get_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3749743559
      );
    }
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("set_last_wrap_alignment");
      this._bindings.method_set_last_wrap_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2899697495
      );
    }
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("get_last_wrap_alignment");
      this._bindings.method_get_last_wrap_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3743456014
      );
    }
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("set_vertical");
      this._bindings.method_set_vertical = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("is_vertical");
      this._bindings.method_is_vertical = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("set_reverse_fill");
      this._bindings.method_set_reverse_fill = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("FlowContainer");
      let methodname = new StringName("is_reverse_fill");
      this._bindings.method_is_reverse_fill = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  get_line_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_alignment(_alignment) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alignment,
      this._owner,
      _alignment
    );
  }
  get_alignment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alignment,
      this._owner,
			Variant.INT,
      
    );
  }
  set_last_wrap_alignment(_last_wrap_alignment) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_last_wrap_alignment,
      this._owner,
      _last_wrap_alignment
    );
  }
  get_last_wrap_alignment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_last_wrap_alignment,
      this._owner,
			Variant.INT,
      
    );
  }
  set_vertical(_vertical) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertical,
      this._owner,
      _vertical
    );
  }
  is_vertical() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_vertical,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_reverse_fill(_reverse_fill) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_reverse_fill,
      this._owner,
      _reverse_fill
    );
  }
  is_reverse_fill() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_reverse_fill,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  static AlignmentMode = {
    ALIGNMENT_BEGIN: 0,
    ALIGNMENT_CENTER: 1,
    ALIGNMENT_END: 2,
  }
  static LastWrapAlignmentMode = {
    LAST_WRAP_ALIGNMENT_INHERIT: 0,
    LAST_WRAP_ALIGNMENT_BEGIN: 1,
    LAST_WRAP_ALIGNMENT_CENTER: 2,
    LAST_WRAP_ALIGNMENT_END: 3,
  }
}