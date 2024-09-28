import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Font } from '@js_godot/classes/font'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

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
@GodotClass
export class FontVariation extends Font{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("FontVariation");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_base_font() {
    if (!this._bindings.method_set_base_font) {
      let classname = new StringName("FontVariation");
      let methodname = new StringName("set_base_font");
      this._bindings.method_set_base_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1262170328
      );
    }
  }
  static init_method_get_base_font() {
    if (!this._bindings.method_get_base_font) {
      let classname = new StringName("FontVariation");
      let methodname = new StringName("get_base_font");
      this._bindings.method_get_base_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3229501585
      );
    }
  }
  static init_method_set_variation_opentype() {
    if (!this._bindings.method_set_variation_opentype) {
      let classname = new StringName("FontVariation");
      let methodname = new StringName("set_variation_opentype");
      this._bindings.method_set_variation_opentype = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155329257
      );
    }
  }
  static init_method_get_variation_opentype() {
    if (!this._bindings.method_get_variation_opentype) {
      let classname = new StringName("FontVariation");
      let methodname = new StringName("get_variation_opentype");
      this._bindings.method_get_variation_opentype = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3102165223
      );
    }
  }
  static init_method_set_variation_embolden() {
    if (!this._bindings.method_set_variation_embolden) {
      let classname = new StringName("FontVariation");
      let methodname = new StringName("set_variation_embolden");
      this._bindings.method_set_variation_embolden = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_variation_embolden() {
    if (!this._bindings.method_get_variation_embolden) {
      let classname = new StringName("FontVariation");
      let methodname = new StringName("get_variation_embolden");
      this._bindings.method_get_variation_embolden = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_variation_face_index() {
    if (!this._bindings.method_set_variation_face_index) {
      let classname = new StringName("FontVariation");
      let methodname = new StringName("set_variation_face_index");
      this._bindings.method_set_variation_face_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_variation_face_index() {
    if (!this._bindings.method_get_variation_face_index) {
      let classname = new StringName("FontVariation");
      let methodname = new StringName("get_variation_face_index");
      this._bindings.method_get_variation_face_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_variation_transform() {
    if (!this._bindings.method_set_variation_transform) {
      let classname = new StringName("FontVariation");
      let methodname = new StringName("set_variation_transform");
      this._bindings.method_set_variation_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2761652528
      );
    }
  }
  static init_method_get_variation_transform() {
    if (!this._bindings.method_get_variation_transform) {
      let classname = new StringName("FontVariation");
      let methodname = new StringName("get_variation_transform");
      this._bindings.method_get_variation_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814499831
      );
    }
  }
  static init_method_set_opentype_features() {
    if (!this._bindings.method_set_opentype_features) {
      let classname = new StringName("FontVariation");
      let methodname = new StringName("set_opentype_features");
      this._bindings.method_set_opentype_features = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155329257
      );
    }
  }
  static init_method_set_spacing() {
    if (!this._bindings.method_set_spacing) {
      let classname = new StringName("FontVariation");
      let methodname = new StringName("set_spacing");
      this._bindings.method_set_spacing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3122339690
      );
    }
  }
  static init_method_set_baseline_offset() {
    if (!this._bindings.method_set_baseline_offset) {
      let classname = new StringName("FontVariation");
      let methodname = new StringName("set_baseline_offset");
      this._bindings.method_set_baseline_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_baseline_offset() {
    if (!this._bindings.method_get_baseline_offset) {
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
    FontVariation.init_method_set_base_font();
    return _call_native_mb_no_ret(
      FontVariation._bindings.method_set_base_font,
      this._owner,
      _font
    );
    
  }
  get_base_font() {
    FontVariation.init_method_get_base_font();
    return _call_native_mb_ret(
      FontVariation._bindings.method_get_base_font,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_variation_opentype(_coords) {
    FontVariation.init_method_set_variation_opentype();
    return _call_native_mb_no_ret(
      FontVariation._bindings.method_set_variation_opentype,
      this._owner,
      _coords
    );
    
  }
  get_variation_opentype() {
    FontVariation.init_method_get_variation_opentype();
    return _call_native_mb_ret(
      FontVariation._bindings.method_get_variation_opentype,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  set_variation_embolden(_strength) {
    FontVariation.init_method_set_variation_embolden();
    return _call_native_mb_no_ret(
      FontVariation._bindings.method_set_variation_embolden,
      this._owner,
      _strength
    );
    
  }
  get_variation_embolden() {
    FontVariation.init_method_get_variation_embolden();
    return _call_native_mb_ret(
      FontVariation._bindings.method_get_variation_embolden,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_variation_face_index(_face_index) {
    FontVariation.init_method_set_variation_face_index();
    return _call_native_mb_no_ret(
      FontVariation._bindings.method_set_variation_face_index,
      this._owner,
      _face_index
    );
    
  }
  get_variation_face_index() {
    FontVariation.init_method_get_variation_face_index();
    return _call_native_mb_ret(
      FontVariation._bindings.method_get_variation_face_index,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_variation_transform(_transform) {
    FontVariation.init_method_set_variation_transform();
    return _call_native_mb_no_ret(
      FontVariation._bindings.method_set_variation_transform,
      this._owner,
      _transform
    );
    
  }
  get_variation_transform() {
    FontVariation.init_method_get_variation_transform();
    return _call_native_mb_ret(
      FontVariation._bindings.method_get_variation_transform,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      
    );
    
  }
  set_opentype_features(_features) {
    FontVariation.init_method_set_opentype_features();
    return _call_native_mb_no_ret(
      FontVariation._bindings.method_set_opentype_features,
      this._owner,
      _features
    );
    
  }
  set_spacing(_spacing, _value) {
    FontVariation.init_method_set_spacing();
    return _call_native_mb_no_ret(
      FontVariation._bindings.method_set_spacing,
      this._owner,
      _spacing, _value
    );
    
  }
  set_baseline_offset(_baseline_offset) {
    FontVariation.init_method_set_baseline_offset();
    return _call_native_mb_no_ret(
      FontVariation._bindings.method_set_baseline_offset,
      this._owner,
      _baseline_offset
    );
    
  }
  get_baseline_offset() {
    FontVariation.init_method_get_baseline_offset();
    return _call_native_mb_ret(
      FontVariation._bindings.method_get_baseline_offset,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get base_font () {
  return this.get_base_font();
}
set base_font (new_value) {
  this.set_base_font(new_value);
}
get variation_opentype () {
  return this.get_variation_opentype();
}
set variation_opentype (new_value) {
  this.set_variation_opentype(new_value);
}
get variation_face_index () {
  return this.get_variation_face_index();
}
set variation_face_index (new_value) {
  this.set_variation_face_index(new_value);
}
get variation_embolden () {
  return this.get_variation_embolden();
}
set variation_embolden (new_value) {
  this.set_variation_embolden(new_value);
}
get variation_transform () {
  return this.get_variation_transform();
}
set variation_transform (new_value) {
  this.set_variation_transform(new_value);
}
get opentype_features () {
  return this.get_opentype_features();
}
set opentype_features (new_value) {
  this.set_opentype_features(new_value);
}
get spacing_glyph () {
  return this.get_spacing();
}
set spacing_glyph (new_value) {
  this.set_spacing(new_value);
}
get spacing_space () {
  return this.get_spacing();
}
set spacing_space (new_value) {
  this.set_spacing(new_value);
}
get spacing_top () {
  return this.get_spacing();
}
set spacing_top (new_value) {
  this.set_spacing(new_value);
}
get spacing_bottom () {
  return this.get_spacing();
}
set spacing_bottom (new_value) {
  this.set_spacing(new_value);
}
get baseline_offset () {
  return this.get_baseline_offset();
}
set baseline_offset (new_value) {
  this.set_baseline_offset(new_value);
}

}