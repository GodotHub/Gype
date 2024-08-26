import * as internal from '__internal__';
import { Texture2D } from 'src/js_godot/classestexture2d'
import { Rect2 } from 'src/js_godot/variant/rect2'
class _MethodBindings {
    method_set_atlas;
    method_get_atlas;
    method_set_region;
    method_get_region;
    method_set_margin;
    method_get_margin;
    method_set_filter_clip;
    method_has_filter_clip;
}


export class AtlasTexture extends Texture2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AtlasTexture");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AtlasTexture");
      let methodname = new StringName("set_atlas");
      this._bindings.method_set_atlas = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("AtlasTexture");
      let methodname = new StringName("get_atlas");
      this._bindings.method_get_atlas = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("AtlasTexture");
      let methodname = new StringName("set_region");
      this._bindings.method_set_region = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2046264180
      );
    }
    {
      let classname = new StringName("AtlasTexture");
      let methodname = new StringName("get_region");
      this._bindings.method_get_region = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1639390495
      );
    }
    {
      let classname = new StringName("AtlasTexture");
      let methodname = new StringName("set_margin");
      this._bindings.method_set_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2046264180
      );
    }
    {
      let classname = new StringName("AtlasTexture");
      let methodname = new StringName("get_margin");
      this._bindings.method_get_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1639390495
      );
    }
    {
      let classname = new StringName("AtlasTexture");
      let methodname = new StringName("set_filter_clip");
      this._bindings.method_set_filter_clip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AtlasTexture");
      let methodname = new StringName("has_filter_clip");
      this._bindings.method_has_filter_clip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_atlas(_atlas) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_atlas,
      this._owner,
      _atlas
    );
  }
  get_atlas() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_atlas,
      this._owner,
			Variant.INT,
      
    );
  }
  set_region(_region) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_region,
      this._owner,
      _region
    );
  }
  get_region() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_region,
      this._owner,
			Variant.Type.RECT2
    ,
      
    );
  }
  set_margin(_margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_margin,
      this._owner,
      _margin
    );
  }
  get_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_margin,
      this._owner,
			Variant.Type.RECT2
    ,
      
    );
  }
  set_filter_clip(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_filter_clip,
      this._owner,
      _enable
    );
  }
  has_filter_clip() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_filter_clip,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}