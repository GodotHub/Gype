#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Image() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Image>("Image")
            .constructor<>()
            .base<Resource>()
            .static_fun<&Image::MAX_WIDTH>("MAX_WIDTH")
            .static_fun<&Image::MAX_HEIGHT>("MAX_HEIGHT")
            .fun<static_cast<int32_t(Image::*)()const>(&Image::get_width)>("get_width")
            .fun<static_cast<int32_t(Image::*)()const>(&Image::get_height)>("get_height")
            .fun<static_cast<Vector2i(Image::*)()const>(&Image::get_size)>("get_size")
            .fun<static_cast<bool(Image::*)()const>(&Image::has_mipmaps)>("has_mipmaps")
            .fun<static_cast<Image::Format(Image::*)()const>(&Image::get_format)>("get_format")
            .fun<static_cast<PackedByteArray(Image::*)()const>(&Image::get_data)>("get_data")
            .fun<static_cast<void(Image::*)(Image::Format)>(&Image::convert)>("convert")
            .fun<static_cast<int32_t(Image::*)()const>(&Image::get_mipmap_count)>("get_mipmap_count")
            .fun<static_cast<int32_t(Image::*)(int32_t)const>(&Image::get_mipmap_offset)>("get_mipmap_offset")
            .fun<static_cast<void(Image::*)(bool,Image::Interpolation)>(&Image::resize_to_po2)>("resize_to_po2")
            .fun<static_cast<void(Image::*)(int32_t,int32_t,Image::Interpolation)>(&Image::resize)>("resize")
            .fun<static_cast<void(Image::*)()>(&Image::shrink_x2)>("shrink_x2")
            .fun<static_cast<void(Image::*)(int32_t,int32_t)>(&Image::crop)>("crop")
            .fun<static_cast<void(Image::*)()>(&Image::flip_x)>("flip_x")
            .fun<static_cast<void(Image::*)()>(&Image::flip_y)>("flip_y")
            .fun<static_cast<Error(Image::*)(bool)>(&Image::generate_mipmaps)>("generate_mipmaps")
            .fun<static_cast<void(Image::*)()>(&Image::clear_mipmaps)>("clear_mipmaps")
            .static_fun<static_cast<Ref<Image>(*)(int32_t,int32_t,bool,Image::Format)>(&Image::create)>("create")
            .static_fun<static_cast<Ref<Image>(*)(int32_t,int32_t,bool,Image::Format,const PackedByteArray &)>(&Image::create_from_data)>("create_from_data")
            .fun<static_cast<void(Image::*)(int32_t,int32_t,bool,Image::Format,const PackedByteArray &)>(&Image::set_data)>("set_data")
            .fun<static_cast<bool(Image::*)()const>(&Image::is_empty)>("is_empty")
            .fun<static_cast<Error(Image::*)(const String &)>(&Image::load)>("load")
            .static_fun<static_cast<Ref<Image>(*)(const String &)>(&Image::load_from_file)>("load_from_file")
            .fun<static_cast<Error(Image::*)(const String &)const>(&Image::save_png)>("save_png")
            .fun<static_cast<PackedByteArray(Image::*)()const>(&Image::save_png_to_buffer)>("save_png_to_buffer")
            .fun<static_cast<Error(Image::*)(const String &,double)const>(&Image::save_jpg)>("save_jpg")
            .fun<static_cast<PackedByteArray(Image::*)(double)const>(&Image::save_jpg_to_buffer)>("save_jpg_to_buffer")
            .fun<static_cast<Error(Image::*)(const String &,bool)const>(&Image::save_exr)>("save_exr")
            .fun<static_cast<PackedByteArray(Image::*)(bool)const>(&Image::save_exr_to_buffer)>("save_exr_to_buffer")
            .fun<static_cast<Error(Image::*)(const String &,bool,double)const>(&Image::save_webp)>("save_webp")
            .fun<static_cast<PackedByteArray(Image::*)(bool,double)const>(&Image::save_webp_to_buffer)>("save_webp_to_buffer")
            .fun<static_cast<Image::AlphaMode(Image::*)()const>(&Image::detect_alpha)>("detect_alpha")
            .fun<static_cast<bool(Image::*)()const>(&Image::is_invisible)>("is_invisible")
            .fun<static_cast<Image::UsedChannels(Image::*)(Image::CompressSource)const>(&Image::detect_used_channels)>("detect_used_channels")
            .fun<static_cast<Error(Image::*)(Image::CompressMode,Image::CompressSource,Image::ASTCFormat)>(&Image::compress)>("compress")
            .fun<static_cast<Error(Image::*)(Image::CompressMode,Image::UsedChannels,Image::ASTCFormat)>(&Image::compress_from_channels)>("compress_from_channels")
            .fun<static_cast<Error(Image::*)()>(&Image::decompress)>("decompress")
            .fun<static_cast<bool(Image::*)()const>(&Image::is_compressed)>("is_compressed")
            .fun<static_cast<void(Image::*)(ClockDirection)>(&Image::rotate_90)>("rotate_90")
            .fun<static_cast<void(Image::*)()>(&Image::rotate_180)>("rotate_180")
            .fun<static_cast<void(Image::*)()>(&Image::fix_alpha_edges)>("fix_alpha_edges")
            .fun<static_cast<void(Image::*)()>(&Image::premultiply_alpha)>("premultiply_alpha")
            .fun<static_cast<void(Image::*)()>(&Image::srgb_to_linear)>("srgb_to_linear")
            .fun<static_cast<void(Image::*)()>(&Image::normal_map_to_xy)>("normal_map_to_xy")
            .fun<static_cast<Ref<Image>(Image::*)()>(&Image::rgbe_to_srgb)>("rgbe_to_srgb")
            .fun<static_cast<void(Image::*)(double)>(&Image::bump_map_to_normal_map)>("bump_map_to_normal_map")
            .fun<static_cast<Dictionary(Image::*)(const Ref<Image> &,bool)>(&Image::compute_image_metrics)>("compute_image_metrics")
            .fun<static_cast<void(Image::*)(const Ref<Image> &,const Rect2i &,const Vector2i &)>(&Image::blit_rect)>("blit_rect")
            .fun<static_cast<void(Image::*)(const Ref<Image> &,const Ref<Image> &,const Rect2i &,const Vector2i &)>(&Image::blit_rect_mask)>("blit_rect_mask")
            .fun<static_cast<void(Image::*)(const Ref<Image> &,const Rect2i &,const Vector2i &)>(&Image::blend_rect)>("blend_rect")
            .fun<static_cast<void(Image::*)(const Ref<Image> &,const Ref<Image> &,const Rect2i &,const Vector2i &)>(&Image::blend_rect_mask)>("blend_rect_mask")
            .fun<static_cast<void(Image::*)(const Color &)>(&Image::fill)>("fill")
            .fun<static_cast<void(Image::*)(const Rect2i &,const Color &)>(&Image::fill_rect)>("fill_rect")
            .fun<static_cast<Rect2i(Image::*)()const>(&Image::get_used_rect)>("get_used_rect")
            .fun<static_cast<Ref<Image>(Image::*)(const Rect2i &)const>(&Image::get_region)>("get_region")
            .fun<static_cast<void(Image::*)(const Ref<Image> &)>(&Image::copy_from)>("copy_from")
            .fun<static_cast<Color(Image::*)(const Vector2i &)const>(&Image::get_pixelv)>("get_pixelv")
            .fun<static_cast<Color(Image::*)(int32_t,int32_t)const>(&Image::get_pixel)>("get_pixel")
            .fun<static_cast<void(Image::*)(const Vector2i &,const Color &)>(&Image::set_pixelv)>("set_pixelv")
            .fun<static_cast<void(Image::*)(int32_t,int32_t,const Color &)>(&Image::set_pixel)>("set_pixel")
            .fun<static_cast<void(Image::*)(double,double,double)>(&Image::adjust_bcs)>("adjust_bcs")
            .fun<static_cast<Error(Image::*)(const PackedByteArray &)>(&Image::load_png_from_buffer)>("load_png_from_buffer")
            .fun<static_cast<Error(Image::*)(const PackedByteArray &)>(&Image::load_jpg_from_buffer)>("load_jpg_from_buffer")
            .fun<static_cast<Error(Image::*)(const PackedByteArray &)>(&Image::load_webp_from_buffer)>("load_webp_from_buffer")
            .fun<static_cast<Error(Image::*)(const PackedByteArray &)>(&Image::load_tga_from_buffer)>("load_tga_from_buffer")
            .fun<static_cast<Error(Image::*)(const PackedByteArray &)>(&Image::load_bmp_from_buffer)>("load_bmp_from_buffer")
            .fun<static_cast<Error(Image::*)(const PackedByteArray &)>(&Image::load_ktx_from_buffer)>("load_ktx_from_buffer")
            .fun<static_cast<Error(Image::*)(const PackedByteArray &,double)>(&Image::load_svg_from_buffer)>("load_svg_from_buffer")
            .fun<static_cast<Error(Image::*)(const String &,double)>(&Image::load_svg_from_string)>("load_svg_from_string")
;    qjs::Value _Format = context->newObject();
    _Format["FORMAT_L8"] = Image::Format::FORMAT_L8;
    _Format["FORMAT_LA8"] = Image::Format::FORMAT_LA8;
    _Format["FORMAT_R8"] = Image::Format::FORMAT_R8;
    _Format["FORMAT_RG8"] = Image::Format::FORMAT_RG8;
    _Format["FORMAT_RGB8"] = Image::Format::FORMAT_RGB8;
    _Format["FORMAT_RGBA8"] = Image::Format::FORMAT_RGBA8;
    _Format["FORMAT_RGBA4444"] = Image::Format::FORMAT_RGBA4444;
    _Format["FORMAT_RGB565"] = Image::Format::FORMAT_RGB565;
    _Format["FORMAT_RF"] = Image::Format::FORMAT_RF;
    _Format["FORMAT_RGF"] = Image::Format::FORMAT_RGF;
    _Format["FORMAT_RGBF"] = Image::Format::FORMAT_RGBF;
    _Format["FORMAT_RGBAF"] = Image::Format::FORMAT_RGBAF;
    _Format["FORMAT_RH"] = Image::Format::FORMAT_RH;
    _Format["FORMAT_RGH"] = Image::Format::FORMAT_RGH;
    _Format["FORMAT_RGBH"] = Image::Format::FORMAT_RGBH;
    _Format["FORMAT_RGBAH"] = Image::Format::FORMAT_RGBAH;
    _Format["FORMAT_RGBE9995"] = Image::Format::FORMAT_RGBE9995;
    _Format["FORMAT_DXT1"] = Image::Format::FORMAT_DXT1;
    _Format["FORMAT_DXT3"] = Image::Format::FORMAT_DXT3;
    _Format["FORMAT_DXT5"] = Image::Format::FORMAT_DXT5;
    _Format["FORMAT_RGTC_R"] = Image::Format::FORMAT_RGTC_R;
    _Format["FORMAT_RGTC_RG"] = Image::Format::FORMAT_RGTC_RG;
    _Format["FORMAT_BPTC_RGBA"] = Image::Format::FORMAT_BPTC_RGBA;
    _Format["FORMAT_BPTC_RGBF"] = Image::Format::FORMAT_BPTC_RGBF;
    _Format["FORMAT_BPTC_RGBFU"] = Image::Format::FORMAT_BPTC_RGBFU;
    _Format["FORMAT_ETC"] = Image::Format::FORMAT_ETC;
    _Format["FORMAT_ETC2_R11"] = Image::Format::FORMAT_ETC2_R11;
    _Format["FORMAT_ETC2_R11S"] = Image::Format::FORMAT_ETC2_R11S;
    _Format["FORMAT_ETC2_RG11"] = Image::Format::FORMAT_ETC2_RG11;
    _Format["FORMAT_ETC2_RG11S"] = Image::Format::FORMAT_ETC2_RG11S;
    _Format["FORMAT_ETC2_RGB8"] = Image::Format::FORMAT_ETC2_RGB8;
    _Format["FORMAT_ETC2_RGBA8"] = Image::Format::FORMAT_ETC2_RGBA8;
    _Format["FORMAT_ETC2_RGB8A1"] = Image::Format::FORMAT_ETC2_RGB8A1;
    _Format["FORMAT_ETC2_RA_AS_RG"] = Image::Format::FORMAT_ETC2_RA_AS_RG;
    _Format["FORMAT_DXT5_RA_AS_RG"] = Image::Format::FORMAT_DXT5_RA_AS_RG;
    _Format["FORMAT_ASTC_4x4"] = Image::Format::FORMAT_ASTC_4x4;
    _Format["FORMAT_ASTC_4x4_HDR"] = Image::Format::FORMAT_ASTC_4x4_HDR;
    _Format["FORMAT_ASTC_8x8"] = Image::Format::FORMAT_ASTC_8x8;
    _Format["FORMAT_ASTC_8x8_HDR"] = Image::Format::FORMAT_ASTC_8x8_HDR;
    _Format["FORMAT_MAX"] = Image::Format::FORMAT_MAX;
    _module.add("Format", std::move(_Format));
    qjs::Value _Interpolation = context->newObject();
    _Interpolation["INTERPOLATE_NEAREST"] = Image::Interpolation::INTERPOLATE_NEAREST;
    _Interpolation["INTERPOLATE_BILINEAR"] = Image::Interpolation::INTERPOLATE_BILINEAR;
    _Interpolation["INTERPOLATE_CUBIC"] = Image::Interpolation::INTERPOLATE_CUBIC;
    _Interpolation["INTERPOLATE_TRILINEAR"] = Image::Interpolation::INTERPOLATE_TRILINEAR;
    _Interpolation["INTERPOLATE_LANCZOS"] = Image::Interpolation::INTERPOLATE_LANCZOS;
    _module.add("Interpolation", std::move(_Interpolation));
    qjs::Value _AlphaMode = context->newObject();
    _AlphaMode["ALPHA_NONE"] = Image::AlphaMode::ALPHA_NONE;
    _AlphaMode["ALPHA_BIT"] = Image::AlphaMode::ALPHA_BIT;
    _AlphaMode["ALPHA_BLEND"] = Image::AlphaMode::ALPHA_BLEND;
    _module.add("AlphaMode", std::move(_AlphaMode));
    qjs::Value _CompressMode = context->newObject();
    _CompressMode["COMPRESS_S3TC"] = Image::CompressMode::COMPRESS_S3TC;
    _CompressMode["COMPRESS_ETC"] = Image::CompressMode::COMPRESS_ETC;
    _CompressMode["COMPRESS_ETC2"] = Image::CompressMode::COMPRESS_ETC2;
    _CompressMode["COMPRESS_BPTC"] = Image::CompressMode::COMPRESS_BPTC;
    _CompressMode["COMPRESS_ASTC"] = Image::CompressMode::COMPRESS_ASTC;
    _CompressMode["COMPRESS_MAX"] = Image::CompressMode::COMPRESS_MAX;
    _module.add("CompressMode", std::move(_CompressMode));
    qjs::Value _UsedChannels = context->newObject();
    _UsedChannels["USED_CHANNELS_L"] = Image::UsedChannels::USED_CHANNELS_L;
    _UsedChannels["USED_CHANNELS_LA"] = Image::UsedChannels::USED_CHANNELS_LA;
    _UsedChannels["USED_CHANNELS_R"] = Image::UsedChannels::USED_CHANNELS_R;
    _UsedChannels["USED_CHANNELS_RG"] = Image::UsedChannels::USED_CHANNELS_RG;
    _UsedChannels["USED_CHANNELS_RGB"] = Image::UsedChannels::USED_CHANNELS_RGB;
    _UsedChannels["USED_CHANNELS_RGBA"] = Image::UsedChannels::USED_CHANNELS_RGBA;
    _module.add("UsedChannels", std::move(_UsedChannels));
    qjs::Value _CompressSource = context->newObject();
    _CompressSource["COMPRESS_SOURCE_GENERIC"] = Image::CompressSource::COMPRESS_SOURCE_GENERIC;
    _CompressSource["COMPRESS_SOURCE_SRGB"] = Image::CompressSource::COMPRESS_SOURCE_SRGB;
    _CompressSource["COMPRESS_SOURCE_NORMAL"] = Image::CompressSource::COMPRESS_SOURCE_NORMAL;
    _module.add("CompressSource", std::move(_CompressSource));
    qjs::Value _ASTCFormat = context->newObject();
    _ASTCFormat["ASTC_FORMAT_4x4"] = Image::ASTCFormat::ASTC_FORMAT_4x4;
    _ASTCFormat["ASTC_FORMAT_8x8"] = Image::ASTCFormat::ASTC_FORMAT_8x8;
    _module.add("ASTCFormat", std::move(_ASTCFormat));
}