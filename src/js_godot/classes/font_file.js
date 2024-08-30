import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { GDString } from 'src/js_godot/variant/gd_string'
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { StringName } from 'src/js_godot/variant/string_name'
import { Transform2D } from 'src/js_godot/variant/transform2d'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { Font } from 'src/js_godot/classes/font'
import { Rect2 } from 'src/js_godot/variant/rect2'
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_load_bitmap_font;
    method_load_dynamic_font;
    method_set_data;
    method_get_data;
    method_set_font_name;
    method_set_font_style_name;
    method_set_font_style;
    method_set_font_weight;
    method_set_font_stretch;
    method_set_antialiasing;
    method_get_antialiasing;
    method_set_disable_embedded_bitmaps;
    method_get_disable_embedded_bitmaps;
    method_set_generate_mipmaps;
    method_get_generate_mipmaps;
    method_set_multichannel_signed_distance_field;
    method_is_multichannel_signed_distance_field;
    method_set_msdf_pixel_range;
    method_get_msdf_pixel_range;
    method_set_msdf_size;
    method_get_msdf_size;
    method_set_fixed_size;
    method_get_fixed_size;
    method_set_fixed_size_scale_mode;
    method_get_fixed_size_scale_mode;
    method_set_allow_system_fallback;
    method_is_allow_system_fallback;
    method_set_force_autohinter;
    method_is_force_autohinter;
    method_set_hinting;
    method_get_hinting;
    method_set_subpixel_positioning;
    method_get_subpixel_positioning;
    method_set_oversampling;
    method_get_oversampling;
    method_get_cache_count;
    method_clear_cache;
    method_remove_cache;
    method_get_size_cache_list;
    method_clear_size_cache;
    method_remove_size_cache;
    method_set_variation_coordinates;
    method_get_variation_coordinates;
    method_set_embolden;
    method_get_embolden;
    method_set_transform;
    method_get_transform;
    method_set_extra_spacing;
    method_get_extra_spacing;
    method_set_extra_baseline_offset;
    method_get_extra_baseline_offset;
    method_set_face_index;
    method_get_face_index;
    method_set_cache_ascent;
    method_get_cache_ascent;
    method_set_cache_descent;
    method_get_cache_descent;
    method_set_cache_underline_position;
    method_get_cache_underline_position;
    method_set_cache_underline_thickness;
    method_get_cache_underline_thickness;
    method_set_cache_scale;
    method_get_cache_scale;
    method_get_texture_count;
    method_clear_textures;
    method_remove_texture;
    method_set_texture_image;
    method_get_texture_image;
    method_set_texture_offsets;
    method_get_texture_offsets;
    method_get_glyph_list;
    method_clear_glyphs;
    method_remove_glyph;
    method_set_glyph_advance;
    method_get_glyph_advance;
    method_set_glyph_offset;
    method_get_glyph_offset;
    method_set_glyph_size;
    method_get_glyph_size;
    method_set_glyph_uv_rect;
    method_get_glyph_uv_rect;
    method_set_glyph_texture_idx;
    method_get_glyph_texture_idx;
    method_get_kerning_list;
    method_clear_kerning_map;
    method_remove_kerning;
    method_set_kerning;
    method_get_kerning;
    method_render_range;
    method_render_glyph;
    method_set_language_support_override;
    method_get_language_support_override;
    method_remove_language_support_override;
    method_get_language_support_overrides;
    method_set_script_support_override;
    method_get_script_support_override;
    method_remove_script_support_override;
    method_get_script_support_overrides;
    method_set_opentype_feature_overrides;
    method_get_opentype_feature_overrides;
    method_get_glyph_index;
    method_get_char_from_glyph_index;
}


export class FontFile extends Font{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("FontFile");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("load_bitmap_font");
        this._bindings.method_load_bitmap_font = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166001499
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("load_dynamic_font");
        this._bindings.method_load_dynamic_font = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166001499
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_data");
        this._bindings.method_set_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2971499966
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_data");
        this._bindings.method_get_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2362200018
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_font_name");
        this._bindings.method_set_font_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_font_style_name");
        this._bindings.method_set_font_style_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_font_style");
        this._bindings.method_set_font_style = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          918070724
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_font_weight");
        this._bindings.method_set_font_weight = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_font_stretch");
        this._bindings.method_set_font_stretch = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_antialiasing");
        this._bindings.method_set_antialiasing = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1669900
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_antialiasing");
        this._bindings.method_get_antialiasing = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4262718649
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_disable_embedded_bitmaps");
        this._bindings.method_set_disable_embedded_bitmaps = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_disable_embedded_bitmaps");
        this._bindings.method_get_disable_embedded_bitmaps = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_generate_mipmaps");
        this._bindings.method_set_generate_mipmaps = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_generate_mipmaps");
        this._bindings.method_get_generate_mipmaps = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_multichannel_signed_distance_field");
        this._bindings.method_set_multichannel_signed_distance_field = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("is_multichannel_signed_distance_field");
        this._bindings.method_is_multichannel_signed_distance_field = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_msdf_pixel_range");
        this._bindings.method_set_msdf_pixel_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_msdf_pixel_range");
        this._bindings.method_get_msdf_pixel_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_msdf_size");
        this._bindings.method_set_msdf_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_msdf_size");
        this._bindings.method_get_msdf_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_fixed_size");
        this._bindings.method_set_fixed_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_fixed_size");
        this._bindings.method_get_fixed_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_fixed_size_scale_mode");
        this._bindings.method_set_fixed_size_scale_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1660989956
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_fixed_size_scale_mode");
        this._bindings.method_get_fixed_size_scale_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          753873478
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_allow_system_fallback");
        this._bindings.method_set_allow_system_fallback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("is_allow_system_fallback");
        this._bindings.method_is_allow_system_fallback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_force_autohinter");
        this._bindings.method_set_force_autohinter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("is_force_autohinter");
        this._bindings.method_is_force_autohinter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_hinting");
        this._bindings.method_set_hinting = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1827459492
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_hinting");
        this._bindings.method_get_hinting = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3683214614
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_subpixel_positioning");
        this._bindings.method_set_subpixel_positioning = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4225742182
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_subpixel_positioning");
        this._bindings.method_get_subpixel_positioning = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1069238588
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_oversampling");
        this._bindings.method_set_oversampling = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_oversampling");
        this._bindings.method_get_oversampling = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_cache_count");
        this._bindings.method_get_cache_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("clear_cache");
        this._bindings.method_clear_cache = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("remove_cache");
        this._bindings.method_remove_cache = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_size_cache_list");
        this._bindings.method_get_size_cache_list = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          663333327
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("clear_size_cache");
        this._bindings.method_clear_size_cache = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("remove_size_cache");
        this._bindings.method_remove_size_cache = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2311374912
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_variation_coordinates");
        this._bindings.method_set_variation_coordinates = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          64545446
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_variation_coordinates");
        this._bindings.method_get_variation_coordinates = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3485342025
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_embolden");
        this._bindings.method_set_embolden = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1602489585
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_embolden");
        this._bindings.method_get_embolden = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2339986948
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_transform");
        this._bindings.method_set_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          30160968
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_transform");
        this._bindings.method_get_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3836996910
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_extra_spacing");
        this._bindings.method_set_extra_spacing = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          62942285
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_extra_spacing");
        this._bindings.method_get_extra_spacing = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1924257185
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_extra_baseline_offset");
        this._bindings.method_set_extra_baseline_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1602489585
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_extra_baseline_offset");
        this._bindings.method_get_extra_baseline_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2339986948
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_face_index");
        this._bindings.method_set_face_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937882851
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_face_index");
        this._bindings.method_get_face_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          923996154
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_cache_ascent");
        this._bindings.method_set_cache_ascent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3506521499
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_cache_ascent");
        this._bindings.method_get_cache_ascent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3085491603
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_cache_descent");
        this._bindings.method_set_cache_descent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3506521499
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_cache_descent");
        this._bindings.method_get_cache_descent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3085491603
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_cache_underline_position");
        this._bindings.method_set_cache_underline_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3506521499
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_cache_underline_position");
        this._bindings.method_get_cache_underline_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3085491603
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_cache_underline_thickness");
        this._bindings.method_set_cache_underline_thickness = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3506521499
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_cache_underline_thickness");
        this._bindings.method_get_cache_underline_thickness = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3085491603
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_cache_scale");
        this._bindings.method_set_cache_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3506521499
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_cache_scale");
        this._bindings.method_get_cache_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3085491603
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_texture_count");
        this._bindings.method_get_texture_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1987661582
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("clear_textures");
        this._bindings.method_clear_textures = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2311374912
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("remove_texture");
        this._bindings.method_remove_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2328951467
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_texture_image");
        this._bindings.method_set_texture_image = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4157974066
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_texture_image");
        this._bindings.method_get_texture_image = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3878418953
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_texture_offsets");
        this._bindings.method_set_texture_offsets = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2849993437
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_texture_offsets");
        this._bindings.method_get_texture_offsets = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3703444828
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_glyph_list");
        this._bindings.method_get_glyph_list = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          681709689
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("clear_glyphs");
        this._bindings.method_clear_glyphs = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2311374912
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("remove_glyph");
        this._bindings.method_remove_glyph = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2328951467
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_glyph_advance");
        this._bindings.method_set_glyph_advance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          947991729
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_glyph_advance");
        this._bindings.method_get_glyph_advance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1601573536
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_glyph_offset");
        this._bindings.method_set_glyph_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          921719850
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_glyph_offset");
        this._bindings.method_get_glyph_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3205412300
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_glyph_size");
        this._bindings.method_set_glyph_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          921719850
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_glyph_size");
        this._bindings.method_get_glyph_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3205412300
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_glyph_uv_rect");
        this._bindings.method_set_glyph_uv_rect = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3821620992
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_glyph_uv_rect");
        this._bindings.method_get_glyph_uv_rect = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3927917900
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_glyph_texture_idx");
        this._bindings.method_set_glyph_texture_idx = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          355564111
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_glyph_texture_idx");
        this._bindings.method_get_glyph_texture_idx = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1629411054
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_kerning_list");
        this._bindings.method_get_kerning_list = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2345056839
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("clear_kerning_map");
        this._bindings.method_clear_kerning_map = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937882851
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("remove_kerning");
        this._bindings.method_remove_kerning = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3930204747
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_kerning");
        this._bindings.method_set_kerning = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3182200918
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_kerning");
        this._bindings.method_get_kerning = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1611912865
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("render_range");
        this._bindings.method_render_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          355564111
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("render_glyph");
        this._bindings.method_render_glyph = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2328951467
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_language_support_override");
        this._bindings.method_set_language_support_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2678287736
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_language_support_override");
        this._bindings.method_get_language_support_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3927539163
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("remove_language_support_override");
        this._bindings.method_remove_language_support_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_language_support_overrides");
        this._bindings.method_get_language_support_overrides = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1139954409
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_script_support_override");
        this._bindings.method_set_script_support_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2678287736
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_script_support_override");
        this._bindings.method_get_script_support_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3927539163
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("remove_script_support_override");
        this._bindings.method_remove_script_support_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_script_support_overrides");
        this._bindings.method_get_script_support_overrides = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1139954409
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("set_opentype_feature_overrides");
        this._bindings.method_set_opentype_feature_overrides = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155329257
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_opentype_feature_overrides");
        this._bindings.method_get_opentype_feature_overrides = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3102165223
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_glyph_index");
        this._bindings.method_get_glyph_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          864943070
        );
      }
      {
        let classname = new StringName("FontFile");
        let methodname = new StringName("get_char_from_glyph_index");
        this._bindings.method_get_char_from_glyph_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3175239445
        );
      }
  }
  load_bitmap_font(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_bitmap_font,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  load_dynamic_font(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_dynamic_font,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  set_data(_data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_data,
      this._owner,
      _data
    );
    
  }
  get_data() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_data,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY
    ,
      
    );
    
  }
  set_font_name(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_font_name,
      this._owner,
      _name
    );
    
  }
  set_font_style_name(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_font_style_name,
      this._owner,
      _name
    );
    
  }
  set_font_style(_style) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_font_style,
      this._owner,
      _style
    );
    
  }
  set_font_weight(_weight) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_font_weight,
      this._owner,
      _weight
    );
    
  }
  set_font_stretch(_stretch) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_font_stretch,
      this._owner,
      _stretch
    );
    
  }
  set_antialiasing(_antialiasing) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_antialiasing,
      this._owner,
      _antialiasing
    );
    
  }
  get_antialiasing() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_antialiasing,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_disable_embedded_bitmaps(_disable_embedded_bitmaps) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_disable_embedded_bitmaps,
      this._owner,
      _disable_embedded_bitmaps
    );
    
  }
  get_disable_embedded_bitmaps() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_disable_embedded_bitmaps,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_generate_mipmaps(_generate_mipmaps) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_generate_mipmaps,
      this._owner,
      _generate_mipmaps
    );
    
  }
  get_generate_mipmaps() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_generate_mipmaps,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_multichannel_signed_distance_field(_msdf) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_multichannel_signed_distance_field,
      this._owner,
      _msdf
    );
    
  }
  is_multichannel_signed_distance_field() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_multichannel_signed_distance_field,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_msdf_pixel_range(_msdf_pixel_range) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_msdf_pixel_range,
      this._owner,
      _msdf_pixel_range
    );
    
  }
  get_msdf_pixel_range() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_msdf_pixel_range,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_msdf_size(_msdf_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_msdf_size,
      this._owner,
      _msdf_size
    );
    
  }
  get_msdf_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_msdf_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_fixed_size(_fixed_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fixed_size,
      this._owner,
      _fixed_size
    );
    
  }
  get_fixed_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fixed_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_fixed_size_scale_mode(_fixed_size_scale_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fixed_size_scale_mode,
      this._owner,
      _fixed_size_scale_mode
    );
    
  }
  get_fixed_size_scale_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fixed_size_scale_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_allow_system_fallback(_allow_system_fallback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_allow_system_fallback,
      this._owner,
      _allow_system_fallback
    );
    
  }
  is_allow_system_fallback() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_allow_system_fallback,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_force_autohinter(_force_autohinter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_force_autohinter,
      this._owner,
      _force_autohinter
    );
    
  }
  is_force_autohinter() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_force_autohinter,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_hinting(_hinting) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hinting,
      this._owner,
      _hinting
    );
    
  }
  get_hinting() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hinting,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_subpixel_positioning(_subpixel_positioning) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_subpixel_positioning,
      this._owner,
      _subpixel_positioning
    );
    
  }
  get_subpixel_positioning() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_subpixel_positioning,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_oversampling(_oversampling) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_oversampling,
      this._owner,
      _oversampling
    );
    
  }
  get_oversampling() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_oversampling,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_cache_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cache_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  clear_cache() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_cache,
      this._owner,
      
    );
    
  }
  remove_cache(_cache_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_cache,
      this._owner,
      _cache_index
    );
    
  }
  get_size_cache_list(_cache_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size_cache_list,
      this._owner,
			Variant.INT,
      _cache_index
    );
    
  }
  clear_size_cache(_cache_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_size_cache,
      this._owner,
      _cache_index
    );
    
  }
  remove_size_cache(_cache_index, _size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_size_cache,
      this._owner,
      _cache_index, _size
    );
    
  }
  set_variation_coordinates(_cache_index, _variation_coordinates) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_variation_coordinates,
      this._owner,
      _cache_index, _variation_coordinates
    );
    
  }
  get_variation_coordinates(_cache_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_variation_coordinates,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _cache_index
    );
    
  }
  set_embolden(_cache_index, _strength) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_embolden,
      this._owner,
      _cache_index, _strength
    );
    
  }
  get_embolden(_cache_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_embolden,
      this._owner,
			Variant.Type.FLOAT,
      _cache_index
    );
    
  }
  set_transform(_cache_index, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_transform,
      this._owner,
      _cache_index, _transform
    );
    
  }
  get_transform(_cache_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transform,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      _cache_index
    );
    
  }
  set_extra_spacing(_cache_index, _spacing, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_extra_spacing,
      this._owner,
      _cache_index, _spacing, _value
    );
    
  }
  get_extra_spacing(_cache_index, _spacing) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_extra_spacing,
      this._owner,
			Variant.Type.INT,
      _cache_index, _spacing
    );
    
  }
  set_extra_baseline_offset(_cache_index, _baseline_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_extra_baseline_offset,
      this._owner,
      _cache_index, _baseline_offset
    );
    
  }
  get_extra_baseline_offset(_cache_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_extra_baseline_offset,
      this._owner,
			Variant.Type.FLOAT,
      _cache_index
    );
    
  }
  set_face_index(_cache_index, _face_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_face_index,
      this._owner,
      _cache_index, _face_index
    );
    
  }
  get_face_index(_cache_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_face_index,
      this._owner,
			Variant.Type.INT,
      _cache_index
    );
    
  }
  set_cache_ascent(_cache_index, _size, _ascent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cache_ascent,
      this._owner,
      _cache_index, _size, _ascent
    );
    
  }
  get_cache_ascent(_cache_index, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cache_ascent,
      this._owner,
			Variant.Type.FLOAT,
      _cache_index, _size
    );
    
  }
  set_cache_descent(_cache_index, _size, _descent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cache_descent,
      this._owner,
      _cache_index, _size, _descent
    );
    
  }
  get_cache_descent(_cache_index, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cache_descent,
      this._owner,
			Variant.Type.FLOAT,
      _cache_index, _size
    );
    
  }
  set_cache_underline_position(_cache_index, _size, _underline_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cache_underline_position,
      this._owner,
      _cache_index, _size, _underline_position
    );
    
  }
  get_cache_underline_position(_cache_index, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cache_underline_position,
      this._owner,
			Variant.Type.FLOAT,
      _cache_index, _size
    );
    
  }
  set_cache_underline_thickness(_cache_index, _size, _underline_thickness) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cache_underline_thickness,
      this._owner,
      _cache_index, _size, _underline_thickness
    );
    
  }
  get_cache_underline_thickness(_cache_index, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cache_underline_thickness,
      this._owner,
			Variant.Type.FLOAT,
      _cache_index, _size
    );
    
  }
  set_cache_scale(_cache_index, _size, _scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cache_scale,
      this._owner,
      _cache_index, _size, _scale
    );
    
  }
  get_cache_scale(_cache_index, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cache_scale,
      this._owner,
			Variant.Type.FLOAT,
      _cache_index, _size
    );
    
  }
  get_texture_count(_cache_index, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_count,
      this._owner,
			Variant.Type.INT,
      _cache_index, _size
    );
    
  }
  clear_textures(_cache_index, _size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_textures,
      this._owner,
      _cache_index, _size
    );
    
  }
  remove_texture(_cache_index, _size, _texture_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_texture,
      this._owner,
      _cache_index, _size, _texture_index
    );
    
  }
  set_texture_image(_cache_index, _size, _texture_index, _image) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_image,
      this._owner,
      _cache_index, _size, _texture_index, _image
    );
    
  }
  get_texture_image(_cache_index, _size, _texture_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_image,
      this._owner,
			Variant.INT,
      _cache_index, _size, _texture_index
    );
    
  }
  set_texture_offsets(_cache_index, _size, _texture_index, _offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_offsets,
      this._owner,
      _cache_index, _size, _texture_index, _offset
    );
    
  }
  get_texture_offsets(_cache_index, _size, _texture_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_offsets,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _cache_index, _size, _texture_index
    );
    
  }
  get_glyph_list(_cache_index, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glyph_list,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _cache_index, _size
    );
    
  }
  clear_glyphs(_cache_index, _size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_glyphs,
      this._owner,
      _cache_index, _size
    );
    
  }
  remove_glyph(_cache_index, _size, _glyph) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_glyph,
      this._owner,
      _cache_index, _size, _glyph
    );
    
  }
  set_glyph_advance(_cache_index, _size, _glyph, _advance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glyph_advance,
      this._owner,
      _cache_index, _size, _glyph, _advance
    );
    
  }
  get_glyph_advance(_cache_index, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glyph_advance,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _cache_index, _size, _glyph
    );
    
  }
  set_glyph_offset(_cache_index, _size, _glyph, _offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glyph_offset,
      this._owner,
      _cache_index, _size, _glyph, _offset
    );
    
  }
  get_glyph_offset(_cache_index, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glyph_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _cache_index, _size, _glyph
    );
    
  }
  set_glyph_size(_cache_index, _size, _glyph, _gl_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glyph_size,
      this._owner,
      _cache_index, _size, _glyph, _gl_size
    );
    
  }
  get_glyph_size(_cache_index, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glyph_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _cache_index, _size, _glyph
    );
    
  }
  set_glyph_uv_rect(_cache_index, _size, _glyph, _uv_rect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glyph_uv_rect,
      this._owner,
      _cache_index, _size, _glyph, _uv_rect
    );
    
  }
  get_glyph_uv_rect(_cache_index, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glyph_uv_rect,
      this._owner,
			Variant.Type.RECT2
    ,
      _cache_index, _size, _glyph
    );
    
  }
  set_glyph_texture_idx(_cache_index, _size, _glyph, _texture_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_glyph_texture_idx,
      this._owner,
      _cache_index, _size, _glyph, _texture_idx
    );
    
  }
  get_glyph_texture_idx(_cache_index, _size, _glyph) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glyph_texture_idx,
      this._owner,
			Variant.Type.INT,
      _cache_index, _size, _glyph
    );
    
  }
  get_kerning_list(_cache_index, _size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_kerning_list,
      this._owner,
			Variant.INT,
      _cache_index, _size
    );
    
  }
  clear_kerning_map(_cache_index, _size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_kerning_map,
      this._owner,
      _cache_index, _size
    );
    
  }
  remove_kerning(_cache_index, _size, _glyph_pair) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_kerning,
      this._owner,
      _cache_index, _size, _glyph_pair
    );
    
  }
  set_kerning(_cache_index, _size, _glyph_pair, _kerning) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_kerning,
      this._owner,
      _cache_index, _size, _glyph_pair, _kerning
    );
    
  }
  get_kerning(_cache_index, _size, _glyph_pair) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_kerning,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _cache_index, _size, _glyph_pair
    );
    
  }
  render_range(_cache_index, _size, _start, _end) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_render_range,
      this._owner,
      _cache_index, _size, _start, _end
    );
    
  }
  render_glyph(_cache_index, _size, _index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_render_glyph,
      this._owner,
      _cache_index, _size, _index
    );
    
  }
  set_language_support_override(_language, _supported) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_language_support_override,
      this._owner,
      _language, _supported
    );
    
  }
  get_language_support_override(_language) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_language_support_override,
      this._owner,
			Variant.Type.BOOL,
      _language
    );
    
  }
  remove_language_support_override(_language) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_language_support_override,
      this._owner,
      _language
    );
    
  }
  get_language_support_overrides() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_language_support_overrides,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
    
  }
  set_script_support_override(_script, _supported) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_script_support_override,
      this._owner,
      _script, _supported
    );
    
  }
  get_script_support_override(_script) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_script_support_override,
      this._owner,
			Variant.Type.BOOL,
      _script
    );
    
  }
  remove_script_support_override(_script) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_script_support_override,
      this._owner,
      _script
    );
    
  }
  get_script_support_overrides() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_script_support_overrides,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
    
  }
  set_opentype_feature_overrides(_overrides) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_opentype_feature_overrides,
      this._owner,
      _overrides
    );
    
  }
  get_opentype_feature_overrides() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_opentype_feature_overrides,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
    
  }
  get_glyph_index(_size, _char, _variation_selector) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_glyph_index,
      this._owner,
			Variant.Type.INT,
      _size, _char, _variation_selector
    );
    
  }
  get_char_from_glyph_index(_size, _glyph_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_char_from_glyph_index,
      this._owner,
			Variant.Type.INT,
      _size, _glyph_index
    );
    
  }
}