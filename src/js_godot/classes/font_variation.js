import * as internal from '__internal__';
import { Transform2D } from 'src/js_godot/variant/transform2d'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { Font } from 'src/js_godot/classes/font'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_base_font;
    method_get_base_font;
    method_set_variation_opentype;
    method_get_variation_opentype;
    method_set_variation_embolden;
    method_get_variation_embolden;
    method_set_variation_face_index;
    method_get_variation_face_index;
    method_set_variation_transform;
    method_get_variation_transform;
    method_set_opentype_features;
    method_set_spacing;
    method_set_baseline_offset;
    method_get_baseline_offset;
}


export class FontVariation extends Font{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("FontVariation");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("FontVariation");
        let methodname = new StringName("set_base_font");
        this._bindings.method_set_base_font = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1262170328
        );
      }
      {
        let classname = new StringName("FontVariation");
        let methodname = new StringName("get_base_font");
        this._bindings.method_get_base_font = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3229501585
        );
      }
      {
        let classname = new StringName("FontVariation");
        let methodname = new StringName("set_variation_opentype");
        this._bindings.method_set_variation_opentype = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155329257
        );
      }
      {
        let classname = new StringName("FontVariation");
        let methodname = new StringName("get_variation_opentype");
        this._bindings.method_get_variation_opentype = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3102165223
        );
      }
      {
        let classname = new StringName("FontVariation");
        let methodname = new StringName("set_variation_embolden");
        this._bindings.method_set_variation_embolden = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("FontVariation");
        let methodname = new StringName("get_variation_embolden");
        this._bindings.method_get_variation_embolden = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("FontVariation");
        let methodname = new StringName("set_variation_face_index");
        this._bindings.method_set_variation_face_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("FontVariation");
        let methodname = new StringName("get_variation_face_index");
        this._bindings.method_get_variation_face_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("FontVariation");
        let methodname = new StringName("set_variation_transform");
        this._bindings.method_set_variation_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2761652528
        );
      }
      {
        let classname = new StringName("FontVariation");
        let methodname = new StringName("get_variation_transform");
        this._bindings.method_get_variation_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3814499831
        );
      }
      {
        let classname = new StringName("FontVariation");
        let methodname = new StringName("set_opentype_features");
        this._bindings.method_set_opentype_features = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155329257
        );
      }
      {
        let classname = new StringName("FontVariation");
        let methodname = new StringName("set_spacing");
        this._bindings.method_set_spacing = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3122339690
        );
      }
      {
        let classname = new StringName("FontVariation");
        let methodname = new StringName("set_baseline_offset");
        this._bindings.method_set_baseline_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("FontVariation");
        let methodname = new StringName("get_baseline_offset");
        this._bindings.method_get_baseline_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
  }
  set_base_font(_font) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_base_font,
      this._owner,
      _font
    );
    
  }
  get_base_font() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_base_font,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_variation_opentype(_coords) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_variation_opentype,
      this._owner,
      _coords
    );
    
  }
  get_variation_opentype() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_variation_opentype,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
    
  }
  set_variation_embolden(_strength) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_variation_embolden,
      this._owner,
      _strength
    );
    
  }
  get_variation_embolden() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_variation_embolden,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_variation_face_index(_face_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_variation_face_index,
      this._owner,
      _face_index
    );
    
  }
  get_variation_face_index() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_variation_face_index,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_variation_transform(_transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_variation_transform,
      this._owner,
      _transform
    );
    
  }
  get_variation_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_variation_transform,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      
    );
    
  }
  set_opentype_features(_features) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_opentype_features,
      this._owner,
      _features
    );
    
  }
  set_spacing(_spacing, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_spacing,
      this._owner,
      _spacing, _value
    );
    
  }
  set_baseline_offset(_baseline_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_baseline_offset,
      this._owner,
      _baseline_offset
    );
    
  }
  get_baseline_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_baseline_offset,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
}