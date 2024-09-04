import * as internal from '__internal__';
import { Dictionary } from '@js_godot/variant/dictionary'
import { Variant } from '@js_godot/variant/variant'
import { Resource } from '@js_godot/classes/resource'
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { Vector2i } from '@js_godot/variant/vector2i'
import { Rect2i } from '@js_godot/variant/rect2i'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { Color } from '@js_godot/variant/color'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_width;
  method_get_height;
  method_get_size;
  method_has_mipmaps;
  method_get_format;
  method_get_data;
  method_get_data_size;
  method_convert;
  method_get_mipmap_count;
  method_get_mipmap_offset;
  method_resize_to_po2;
  method_resize;
  method_shrink_x2;
  method_crop;
  method_flip_x;
  method_flip_y;
  method_generate_mipmaps;
  method_clear_mipmaps;
  method_create;
  method_create_empty;
  method_create_from_data;
  method_set_data;
  method_is_empty;
  method_load;
  method_load_from_file;
  method_save_png;
  method_save_png_to_buffer;
  method_save_jpg;
  method_save_jpg_to_buffer;
  method_save_exr;
  method_save_exr_to_buffer;
  method_save_webp;
  method_save_webp_to_buffer;
  method_detect_alpha;
  method_is_invisible;
  method_detect_used_channels;
  method_compress;
  method_compress_from_channels;
  method_decompress;
  method_is_compressed;
  method_rotate_90;
  method_rotate_180;
  method_fix_alpha_edges;
  method_premultiply_alpha;
  method_srgb_to_linear;
  method_normal_map_to_xy;
  method_rgbe_to_srgb;
  method_bump_map_to_normal_map;
  method_compute_image_metrics;
  method_blit_rect;
  method_blit_rect_mask;
  method_blend_rect;
  method_blend_rect_mask;
  method_fill;
  method_fill_rect;
  method_get_used_rect;
  method_get_region;
  method_copy_from;
  method_get_pixelv;
  method_get_pixel;
  method_set_pixelv;
  method_set_pixel;
  method_adjust_bcs;
  method_load_png_from_buffer;
  method_load_jpg_from_buffer;
  method_load_webp_from_buffer;
  method_load_tga_from_buffer;
  method_load_bmp_from_buffer;
  method_load_ktx_from_buffer;
  method_load_svg_from_buffer;
  method_load_svg_from_string;
}
export class Image extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Image");
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
      let classname = new StringName("Image");
      let methodname = new StringName("get_width");
      this._bindings.method_get_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("get_height");
      this._bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("has_mipmaps");
      this._bindings.method_has_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("get_format");
      this._bindings.method_get_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3847873762
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("get_data");
      this._bindings.method_get_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2362200018
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("get_data_size");
      this._bindings.method_get_data_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("convert");
      this._bindings.method_convert = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2120693146
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("get_mipmap_count");
      this._bindings.method_get_mipmap_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("get_mipmap_offset");
      this._bindings.method_get_mipmap_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("resize_to_po2");
      this._bindings.method_resize_to_po2 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4189212329
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("resize");
      this._bindings.method_resize = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        994498151
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("shrink_x2");
      this._bindings.method_shrink_x2 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("crop");
      this._bindings.method_crop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("flip_x");
      this._bindings.method_flip_x = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("flip_y");
      this._bindings.method_flip_y = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("generate_mipmaps");
      this._bindings.method_generate_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1633102583
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("clear_mipmaps");
      this._bindings.method_clear_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("create");
      this._bindings.method_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        986942177
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("create_empty");
      this._bindings.method_create_empty = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        986942177
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("create_from_data");
      this._bindings.method_create_from_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        299398494
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("set_data");
      this._bindings.method_set_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2740482212
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("is_empty");
      this._bindings.method_is_empty = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("load");
      this._bindings.method_load = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        166001499
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("load_from_file");
      this._bindings.method_load_from_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        736337515
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("save_png");
      this._bindings.method_save_png = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2113323047
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("save_png_to_buffer");
      this._bindings.method_save_png_to_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2362200018
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("save_jpg");
      this._bindings.method_save_jpg = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2800019068
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("save_jpg_to_buffer");
      this._bindings.method_save_jpg_to_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        592235273
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("save_exr");
      this._bindings.method_save_exr = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3108122999
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("save_exr_to_buffer");
      this._bindings.method_save_exr_to_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3178917920
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("save_webp");
      this._bindings.method_save_webp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2781156876
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("save_webp_to_buffer");
      this._bindings.method_save_webp_to_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1214628238
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("detect_alpha");
      this._bindings.method_detect_alpha = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2030116505
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("is_invisible");
      this._bindings.method_is_invisible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("detect_used_channels");
      this._bindings.method_detect_used_channels = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2703139984
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("compress");
      this._bindings.method_compress = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2975424957
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("compress_from_channels");
      this._bindings.method_compress_from_channels = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4212890953
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("decompress");
      this._bindings.method_decompress = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        166280745
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("is_compressed");
      this._bindings.method_is_compressed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("rotate_90");
      this._bindings.method_rotate_90 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1901204267
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("rotate_180");
      this._bindings.method_rotate_180 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("fix_alpha_edges");
      this._bindings.method_fix_alpha_edges = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("premultiply_alpha");
      this._bindings.method_premultiply_alpha = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("srgb_to_linear");
      this._bindings.method_srgb_to_linear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("normal_map_to_xy");
      this._bindings.method_normal_map_to_xy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("rgbe_to_srgb");
      this._bindings.method_rgbe_to_srgb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        564927088
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("bump_map_to_normal_map");
      this._bindings.method_bump_map_to_normal_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3423495036
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("compute_image_metrics");
      this._bindings.method_compute_image_metrics = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3080961247
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("blit_rect");
      this._bindings.method_blit_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2903928755
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("blit_rect_mask");
      this._bindings.method_blit_rect_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3383581145
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("blend_rect");
      this._bindings.method_blend_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2903928755
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("blend_rect_mask");
      this._bindings.method_blend_rect_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3383581145
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("fill");
      this._bindings.method_fill = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("fill_rect");
      this._bindings.method_fill_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        514693913
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("get_used_rect");
      this._bindings.method_get_used_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        410525958
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("get_region");
      this._bindings.method_get_region = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2601441065
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("copy_from");
      this._bindings.method_copy_from = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        532598488
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("get_pixelv");
      this._bindings.method_get_pixelv = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1532707496
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("get_pixel");
      this._bindings.method_get_pixel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2165839948
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("set_pixelv");
      this._bindings.method_set_pixelv = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        287851464
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("set_pixel");
      this._bindings.method_set_pixel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3733378741
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("adjust_bcs");
      this._bindings.method_adjust_bcs = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2385087082
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("load_png_from_buffer");
      this._bindings.method_load_png_from_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        680677267
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("load_jpg_from_buffer");
      this._bindings.method_load_jpg_from_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        680677267
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("load_webp_from_buffer");
      this._bindings.method_load_webp_from_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        680677267
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("load_tga_from_buffer");
      this._bindings.method_load_tga_from_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        680677267
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("load_bmp_from_buffer");
      this._bindings.method_load_bmp_from_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        680677267
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("load_ktx_from_buffer");
      this._bindings.method_load_ktx_from_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        680677267
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("load_svg_from_buffer");
      this._bindings.method_load_svg_from_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        311853421
      );
    }
    {
      let classname = new StringName("Image");
      let methodname = new StringName("load_svg_from_string");
      this._bindings.method_load_svg_from_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3254053600
      );
    }
  }
  get_width() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_width,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_height() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_height,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  has_mipmaps() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_mipmaps,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_format() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_format,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_data() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_data,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      
    );
    
  }
  get_data_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_data_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  convert(_format) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_convert,
      this._owner,
      _format
    );
    
  }
  get_mipmap_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mipmap_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_mipmap_offset(_mipmap) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mipmap_offset,
      this._owner,
			Variant.Type.INT,
      _mipmap
    );
    
  }
  resize_to_po2(_square, _interpolation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_resize_to_po2,
      this._owner,
      _square, _interpolation
    );
    
  }
  resize(_width, _height, _interpolation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_resize,
      this._owner,
      _width, _height, _interpolation
    );
    
  }
  shrink_x2() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shrink_x2,
      this._owner,
      
    );
    
  }
  crop(_width, _height) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_crop,
      this._owner,
      _width, _height
    );
    
  }
  flip_x() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_flip_x,
      this._owner,
      
    );
    
  }
  flip_y() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_flip_y,
      this._owner,
      
    );
    
  }
  generate_mipmaps(_renormalize) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_generate_mipmaps,
      this._owner,
			Variant.INT,
      _renormalize
    );
    
  }
  clear_mipmaps() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_mipmaps,
      this._owner,
      
    );
    
  }
  create(_width, _height, _use_mipmaps, _format) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create,
      this._owner,
			Variant.INT,
      _width, _height, _use_mipmaps, _format
    );
    
  }
  create_empty(_width, _height, _use_mipmaps, _format) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_empty,
      this._owner,
			Variant.INT,
      _width, _height, _use_mipmaps, _format
    );
    
  }
  create_from_data(_width, _height, _use_mipmaps, _format, _data) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_from_data,
      this._owner,
			Variant.INT,
      _width, _height, _use_mipmaps, _format, _data
    );
    
  }
  set_data(_width, _height, _use_mipmaps, _format, _data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_data,
      this._owner,
      _width, _height, _use_mipmaps, _format, _data
    );
    
  }
  is_empty() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_empty,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  load(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  load_from_file(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_from_file,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  save_png(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_save_png,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  save_png_to_buffer() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_save_png_to_buffer,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      
    );
    
  }
  save_jpg(_path, _quality) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_save_jpg,
      this._owner,
			Variant.INT,
      _path, _quality
    );
    
  }
  save_jpg_to_buffer(_quality) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_save_jpg_to_buffer,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _quality
    );
    
  }
  save_exr(_path, _grayscale) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_save_exr,
      this._owner,
			Variant.INT,
      _path, _grayscale
    );
    
  }
  save_exr_to_buffer(_grayscale) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_save_exr_to_buffer,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _grayscale
    );
    
  }
  save_webp(_path, _lossy, _quality) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_save_webp,
      this._owner,
			Variant.INT,
      _path, _lossy, _quality
    );
    
  }
  save_webp_to_buffer(_lossy, _quality) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_save_webp_to_buffer,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _lossy, _quality
    );
    
  }
  detect_alpha() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_detect_alpha,
      this._owner,
			Variant.INT,
      
    );
    
  }
  is_invisible() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_invisible,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  detect_used_channels(_source) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_detect_used_channels,
      this._owner,
			Variant.INT,
      _source
    );
    
  }
  compress(_mode, _source, _astc_format) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_compress,
      this._owner,
			Variant.INT,
      _mode, _source, _astc_format
    );
    
  }
  compress_from_channels(_mode, _channels, _astc_format) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_compress_from_channels,
      this._owner,
			Variant.INT,
      _mode, _channels, _astc_format
    );
    
  }
  decompress() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_decompress,
      this._owner,
			Variant.INT,
      
    );
    
  }
  is_compressed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_compressed,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  rotate_90(_direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_rotate_90,
      this._owner,
      _direction
    );
    
  }
  rotate_180() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_rotate_180,
      this._owner,
      
    );
    
  }
  fix_alpha_edges() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_fix_alpha_edges,
      this._owner,
      
    );
    
  }
  premultiply_alpha() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_premultiply_alpha,
      this._owner,
      
    );
    
  }
  srgb_to_linear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_srgb_to_linear,
      this._owner,
      
    );
    
  }
  normal_map_to_xy() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_normal_map_to_xy,
      this._owner,
      
    );
    
  }
  rgbe_to_srgb() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_rgbe_to_srgb,
      this._owner,
			Variant.INT,
      
    );
    
  }
  bump_map_to_normal_map(_bump_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_bump_map_to_normal_map,
      this._owner,
      _bump_scale
    );
    
  }
  compute_image_metrics(_compared_image, _use_luma) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_compute_image_metrics,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _compared_image, _use_luma
    );
    
  }
  blit_rect(_src, _src_rect, _dst) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_blit_rect,
      this._owner,
      _src, _src_rect, _dst
    );
    
  }
  blit_rect_mask(_src, _mask, _src_rect, _dst) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_blit_rect_mask,
      this._owner,
      _src, _mask, _src_rect, _dst
    );
    
  }
  blend_rect(_src, _src_rect, _dst) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_blend_rect,
      this._owner,
      _src, _src_rect, _dst
    );
    
  }
  blend_rect_mask(_src, _mask, _src_rect, _dst) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_blend_rect_mask,
      this._owner,
      _src, _mask, _src_rect, _dst
    );
    
  }
  fill(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_fill,
      this._owner,
      _color
    );
    
  }
  fill_rect(_rect, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_fill_rect,
      this._owner,
      _rect, _color
    );
    
  }
  get_used_rect() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_used_rect,
      this._owner,
			Variant.Type.RECT2I,
    
      
    );
    
  }
  get_region(_region) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_region,
      this._owner,
			Variant.INT,
      _region
    );
    
  }
  copy_from(_src) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_copy_from,
      this._owner,
      _src
    );
    
  }
  get_pixelv(_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pixelv,
      this._owner,
			Variant.Type.COLOR,
    
      _point
    );
    
  }
  get_pixel(_x, _y) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pixel,
      this._owner,
			Variant.Type.COLOR,
    
      _x, _y
    );
    
  }
  set_pixelv(_point, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pixelv,
      this._owner,
      _point, _color
    );
    
  }
  set_pixel(_x, _y, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pixel,
      this._owner,
      _x, _y, _color
    );
    
  }
  adjust_bcs(_brightness, _contrast, _saturation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_adjust_bcs,
      this._owner,
      _brightness, _contrast, _saturation
    );
    
  }
  load_png_from_buffer(_buffer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_png_from_buffer,
      this._owner,
			Variant.INT,
      _buffer
    );
    
  }
  load_jpg_from_buffer(_buffer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_jpg_from_buffer,
      this._owner,
			Variant.INT,
      _buffer
    );
    
  }
  load_webp_from_buffer(_buffer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_webp_from_buffer,
      this._owner,
			Variant.INT,
      _buffer
    );
    
  }
  load_tga_from_buffer(_buffer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_tga_from_buffer,
      this._owner,
			Variant.INT,
      _buffer
    );
    
  }
  load_bmp_from_buffer(_buffer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_bmp_from_buffer,
      this._owner,
			Variant.INT,
      _buffer
    );
    
  }
  load_ktx_from_buffer(_buffer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_ktx_from_buffer,
      this._owner,
			Variant.INT,
      _buffer
    );
    
  }
  load_svg_from_buffer(_buffer, _scale) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_svg_from_buffer,
      this._owner,
			Variant.INT,
      _buffer, _scale
    );
    
  }
  load_svg_from_string(_svg_str, _scale) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_svg_from_string,
      this._owner,
			Variant.INT,
      _svg_str, _scale
    );
    
  }
  
get data () {
  return this._get_data();
}
set data (new_value) {
  this._set_data(new_value);
}

  static Format = {
    FORMAT_L8: 0,
    FORMAT_LA8: 1,
    FORMAT_R8: 2,
    FORMAT_RG8: 3,
    FORMAT_RGB8: 4,
    FORMAT_RGBA8: 5,
    FORMAT_RGBA4444: 6,
    FORMAT_RGB565: 7,
    FORMAT_RF: 8,
    FORMAT_RGF: 9,
    FORMAT_RGBF: 10,
    FORMAT_RGBAF: 11,
    FORMAT_RH: 12,
    FORMAT_RGH: 13,
    FORMAT_RGBH: 14,
    FORMAT_RGBAH: 15,
    FORMAT_RGBE9995: 16,
    FORMAT_DXT1: 17,
    FORMAT_DXT3: 18,
    FORMAT_DXT5: 19,
    FORMAT_RGTC_R: 20,
    FORMAT_RGTC_RG: 21,
    FORMAT_BPTC_RGBA: 22,
    FORMAT_BPTC_RGBF: 23,
    FORMAT_BPTC_RGBFU: 24,
    FORMAT_ETC: 25,
    FORMAT_ETC2_R11: 26,
    FORMAT_ETC2_R11S: 27,
    FORMAT_ETC2_RG11: 28,
    FORMAT_ETC2_RG11S: 29,
    FORMAT_ETC2_RGB8: 30,
    FORMAT_ETC2_RGBA8: 31,
    FORMAT_ETC2_RGB8A1: 32,
    FORMAT_ETC2_RA_AS_RG: 33,
    FORMAT_DXT5_RA_AS_RG: 34,
    FORMAT_ASTC_4x4: 35,
    FORMAT_ASTC_4x4_HDR: 36,
    FORMAT_ASTC_8x8: 37,
    FORMAT_ASTC_8x8_HDR: 38,
    FORMAT_MAX: 39,
  }
  static Interpolation = {
    INTERPOLATE_NEAREST: 0,
    INTERPOLATE_BILINEAR: 1,
    INTERPOLATE_CUBIC: 2,
    INTERPOLATE_TRILINEAR: 3,
    INTERPOLATE_LANCZOS: 4,
  }
  static AlphaMode = {
    ALPHA_NONE: 0,
    ALPHA_BIT: 1,
    ALPHA_BLEND: 2,
  }
  static CompressMode = {
    COMPRESS_S3TC: 0,
    COMPRESS_ETC: 1,
    COMPRESS_ETC2: 2,
    COMPRESS_BPTC: 3,
    COMPRESS_ASTC: 4,
    COMPRESS_MAX: 5,
  }
  static UsedChannels = {
    USED_CHANNELS_L: 0,
    USED_CHANNELS_LA: 1,
    USED_CHANNELS_R: 2,
    USED_CHANNELS_RG: 3,
    USED_CHANNELS_RGB: 4,
    USED_CHANNELS_RGBA: 5,
  }
  static CompressSource = {
    COMPRESS_SOURCE_GENERIC: 0,
    COMPRESS_SOURCE_SRGB: 1,
    COMPRESS_SOURCE_NORMAL: 2,
  }
  static ASTCFormat = {
    ASTC_FORMAT_4x4: 0,
    ASTC_FORMAT_8x8: 1,
  }

  static {
    this._init_bindings();
  }
}