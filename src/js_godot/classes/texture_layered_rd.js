import * as internal from '__internal__';
import { RID } from 'src/js_godot/variant/rid'
import { TextureLayered } from 'src/js_godot/classestexture_layered'
class _MethodBindings {
    method_set_texture_rd_rid;
    method_get_texture_rd_rid;
}


export class TextureLayeredRD extends TextureLayered{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TextureLayeredRD");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("TextureLayeredRD");
      let methodname = new StringName("set_texture_rd_rid");
      this._bindings.method_set_texture_rd_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("TextureLayeredRD");
      let methodname = new StringName("get_texture_rd_rid");
      this._bindings.method_get_texture_rd_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
  }
  set_texture_rd_rid(_texture_rd_rid) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_rd_rid,
      this._owner,
      _texture_rd_rid
    );
  }
  get_texture_rd_rid() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_rd_rid,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
}