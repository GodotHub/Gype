import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_format;
  method_get_format;
  method_set_width;
  method_get_width;
  method_set_height;
  method_get_height;
  method_set_depth;
  method_get_depth;
  method_set_array_layers;
  method_get_array_layers;
  method_set_mipmaps;
  method_get_mipmaps;
  method_set_texture_type;
  method_get_texture_type;
  method_set_samples;
  method_get_samples;
  method_set_usage_bits;
  method_get_usage_bits;
  method_add_shareable_format;
  method_remove_shareable_format;
}
@GodotClass
export class RDTextureFormat extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDTextureFormat");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_format() {
    if (!this._bindings.method_set_format) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_format");
      this._bindings.method_set_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        565531219
      );
    }
  }
  static init_method_get_format() {
    if (!this._bindings.method_get_format) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_format");
      this._bindings.method_get_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2235804183
      );
    }
  }
  static init_method_set_width() {
    if (!this._bindings.method_set_width) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_width");
      this._bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_width() {
    if (!this._bindings.method_get_width) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_width");
      this._bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_height() {
    if (!this._bindings.method_set_height) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_height");
      this._bindings.method_set_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_height() {
    if (!this._bindings.method_get_height) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_height");
      this._bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_depth() {
    if (!this._bindings.method_set_depth) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_depth");
      this._bindings.method_set_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_depth() {
    if (!this._bindings.method_get_depth) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_depth");
      this._bindings.method_get_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_array_layers() {
    if (!this._bindings.method_set_array_layers) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_array_layers");
      this._bindings.method_set_array_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_array_layers() {
    if (!this._bindings.method_get_array_layers) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_array_layers");
      this._bindings.method_get_array_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_mipmaps() {
    if (!this._bindings.method_set_mipmaps) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_mipmaps");
      this._bindings.method_set_mipmaps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_mipmaps() {
    if (!this._bindings.method_get_mipmaps) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_mipmaps");
      this._bindings.method_get_mipmaps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_texture_type() {
    if (!this._bindings.method_set_texture_type) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_texture_type");
      this._bindings.method_set_texture_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        652343381
      );
    }
  }
  static init_method_get_texture_type() {
    if (!this._bindings.method_get_texture_type) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_texture_type");
      this._bindings.method_get_texture_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4036357416
      );
    }
  }
  static init_method_set_samples() {
    if (!this._bindings.method_set_samples) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_samples");
      this._bindings.method_set_samples = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3774171498
      );
    }
  }
  static init_method_get_samples() {
    if (!this._bindings.method_get_samples) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_samples");
      this._bindings.method_get_samples = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        407791724
      );
    }
  }
  static init_method_set_usage_bits() {
    if (!this._bindings.method_set_usage_bits) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("set_usage_bits");
      this._bindings.method_set_usage_bits = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        245642367
      );
    }
  }
  static init_method_get_usage_bits() {
    if (!this._bindings.method_get_usage_bits) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("get_usage_bits");
      this._bindings.method_get_usage_bits = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1313398998
      );
    }
  }
  static init_method_add_shareable_format() {
    if (!this._bindings.method_add_shareable_format) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("add_shareable_format");
      this._bindings.method_add_shareable_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        565531219
      );
    }
  }
  static init_method_remove_shareable_format() {
    if (!this._bindings.method_remove_shareable_format) {
      let classname = new StringName("RDTextureFormat");
      let methodname = new StringName("remove_shareable_format");
      this._bindings.method_remove_shareable_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        565531219
      );
    }
  }

  
  
  set_format(_p_member) {
    RDTextureFormat.init_method_set_format();
    return _call_native_mb_no_ret(
      RDTextureFormat._bindings.method_set_format,
      this._owner,
      _p_member
    );
    
  }
  get_format() {
    RDTextureFormat.init_method_get_format();
    return _call_native_mb_ret(
      RDTextureFormat._bindings.method_get_format,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_width(_p_member) {
    RDTextureFormat.init_method_set_width();
    return _call_native_mb_no_ret(
      RDTextureFormat._bindings.method_set_width,
      this._owner,
      _p_member
    );
    
  }
  get_width() {
    RDTextureFormat.init_method_get_width();
    return _call_native_mb_ret(
      RDTextureFormat._bindings.method_get_width,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_height(_p_member) {
    RDTextureFormat.init_method_set_height();
    return _call_native_mb_no_ret(
      RDTextureFormat._bindings.method_set_height,
      this._owner,
      _p_member
    );
    
  }
  get_height() {
    RDTextureFormat.init_method_get_height();
    return _call_native_mb_ret(
      RDTextureFormat._bindings.method_get_height,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_depth(_p_member) {
    RDTextureFormat.init_method_set_depth();
    return _call_native_mb_no_ret(
      RDTextureFormat._bindings.method_set_depth,
      this._owner,
      _p_member
    );
    
  }
  get_depth() {
    RDTextureFormat.init_method_get_depth();
    return _call_native_mb_ret(
      RDTextureFormat._bindings.method_get_depth,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_array_layers(_p_member) {
    RDTextureFormat.init_method_set_array_layers();
    return _call_native_mb_no_ret(
      RDTextureFormat._bindings.method_set_array_layers,
      this._owner,
      _p_member
    );
    
  }
  get_array_layers() {
    RDTextureFormat.init_method_get_array_layers();
    return _call_native_mb_ret(
      RDTextureFormat._bindings.method_get_array_layers,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_mipmaps(_p_member) {
    RDTextureFormat.init_method_set_mipmaps();
    return _call_native_mb_no_ret(
      RDTextureFormat._bindings.method_set_mipmaps,
      this._owner,
      _p_member
    );
    
  }
  get_mipmaps() {
    RDTextureFormat.init_method_get_mipmaps();
    return _call_native_mb_ret(
      RDTextureFormat._bindings.method_get_mipmaps,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_texture_type(_p_member) {
    RDTextureFormat.init_method_set_texture_type();
    return _call_native_mb_no_ret(
      RDTextureFormat._bindings.method_set_texture_type,
      this._owner,
      _p_member
    );
    
  }
  get_texture_type() {
    RDTextureFormat.init_method_get_texture_type();
    return _call_native_mb_ret(
      RDTextureFormat._bindings.method_get_texture_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_samples(_p_member) {
    RDTextureFormat.init_method_set_samples();
    return _call_native_mb_no_ret(
      RDTextureFormat._bindings.method_set_samples,
      this._owner,
      _p_member
    );
    
  }
  get_samples() {
    RDTextureFormat.init_method_get_samples();
    return _call_native_mb_ret(
      RDTextureFormat._bindings.method_get_samples,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_usage_bits(_p_member) {
    RDTextureFormat.init_method_set_usage_bits();
    return _call_native_mb_no_ret(
      RDTextureFormat._bindings.method_set_usage_bits,
      this._owner,
      _p_member
    );
    
  }
  get_usage_bits() {
    RDTextureFormat.init_method_get_usage_bits();
    return _call_native_mb_ret(
      RDTextureFormat._bindings.method_get_usage_bits,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  add_shareable_format(_format) {
    RDTextureFormat.init_method_add_shareable_format();
    return _call_native_mb_no_ret(
      RDTextureFormat._bindings.method_add_shareable_format,
      this._owner,
      _format
    );
    
  }
  remove_shareable_format(_format) {
    RDTextureFormat.init_method_remove_shareable_format();
    return _call_native_mb_no_ret(
      RDTextureFormat._bindings.method_remove_shareable_format,
      this._owner,
      _format
    );
    
  }
  
get format () {
  return this.get_format();
}
set format (new_value) {
  this.set_format(new_value);
}
get width () {
  return this.get_width();
}
set width (new_value) {
  this.set_width(new_value);
}
get height () {
  return this.get_height();
}
set height (new_value) {
  this.set_height(new_value);
}
get depth () {
  return this.get_depth();
}
set depth (new_value) {
  this.set_depth(new_value);
}
get array_layers () {
  return this.get_array_layers();
}
set array_layers (new_value) {
  this.set_array_layers(new_value);
}
get mipmaps () {
  return this.get_mipmaps();
}
set mipmaps (new_value) {
  this.set_mipmaps(new_value);
}
get texture_type () {
  return this.get_texture_type();
}
set texture_type (new_value) {
  this.set_texture_type(new_value);
}
get samples () {
  return this.get_samples();
}
set samples (new_value) {
  this.set_samples(new_value);
}
get usage_bits () {
  return this.get_usage_bits();
}
set usage_bits (new_value) {
  this.set_usage_bits(new_value);
}

}