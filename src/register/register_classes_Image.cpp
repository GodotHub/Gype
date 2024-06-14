
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Image() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Image>("Image")
			.constructor<>()
			.base<Resource>()
			.static_fun<&Image::MAX_WIDTH>((new std::string("MAX_WIDTH"))->c_str())
			.static_fun<&Image::MAX_HEIGHT>((new std::string("MAX_HEIGHT"))->c_str())
			.fun<static_cast<int32_t (Image::*)() const>(&Image::get_width)>((new std::string("get_width"))->c_str())
			.fun<static_cast<int32_t (Image::*)() const>(&Image::get_height)>((new std::string("get_height"))->c_str())
			.fun<static_cast<Vector2i (Image::*)() const>(&Image::get_size)>((new std::string("get_size"))->c_str())
			.fun<static_cast<bool (Image::*)() const>(&Image::has_mipmaps)>((new std::string("has_mipmaps"))->c_str())
			.fun<static_cast<Image::Format (Image::*)() const>(&Image::get_format)>((new std::string("get_format"))->c_str())
			.fun<static_cast<PackedByteArray (Image::*)() const>(&Image::get_data)>((new std::string("get_data"))->c_str())
			.fun<static_cast<void (Image::*)(Image::Format)>(&Image::convert)>((new std::string("convert"))->c_str())
			.fun<static_cast<int32_t (Image::*)() const>(&Image::get_mipmap_count)>((new std::string("get_mipmap_count"))->c_str())
			.fun<static_cast<int32_t (Image::*)(int32_t) const>(&Image::get_mipmap_offset)>((new std::string("get_mipmap_offset"))->c_str())
			.fun<static_cast<void (Image::*)(bool, Image::Interpolation)>(&Image::resize_to_po2)>((new std::string("resize_to_po2"))->c_str())
			.fun<static_cast<void (Image::*)(int32_t, int32_t, Image::Interpolation)>(&Image::resize)>((new std::string("resize"))->c_str())
			.fun<static_cast<void (Image::*)()>(&Image::shrink_x2)>((new std::string("shrink_x2"))->c_str())
			.fun<static_cast<void (Image::*)(int32_t, int32_t)>(&Image::crop)>((new std::string("crop"))->c_str())
			.fun<static_cast<void (Image::*)()>(&Image::flip_x)>((new std::string("flip_x"))->c_str())
			.fun<static_cast<void (Image::*)()>(&Image::flip_y)>((new std::string("flip_y"))->c_str())
			.fun<static_cast<Error (Image::*)(bool)>(&Image::generate_mipmaps)>((new std::string("generate_mipmaps"))->c_str())
			.fun<static_cast<void (Image::*)()>(&Image::clear_mipmaps)>((new std::string("clear_mipmaps"))->c_str())
			.static_fun<static_cast<Ref<Image> (*)(int32_t, int32_t, bool, Image::Format)>(&Image::create)>((new std::string("create"))->c_str())
			.static_fun<static_cast<Ref<Image> (*)(int32_t, int32_t, bool, Image::Format, const PackedByteArray &)>(&Image::create_from_data)>((new std::string("create_from_data"))->c_str())
			.fun<static_cast<void (Image::*)(int32_t, int32_t, bool, Image::Format, const PackedByteArray &)>(&Image::set_data)>((new std::string("set_data"))->c_str())
			.fun<static_cast<bool (Image::*)() const>(&Image::is_empty)>((new std::string("is_empty"))->c_str())
			.fun<static_cast<Error (Image::*)(const String &)>(&Image::load)>((new std::string("load"))->c_str())
			.static_fun<static_cast<Ref<Image> (*)(const String &)>(&Image::load_from_file)>((new std::string("load_from_file"))->c_str())
			.fun<static_cast<Error (Image::*)(const String &) const>(&Image::save_png)>((new std::string("save_png"))->c_str())
			.fun<static_cast<PackedByteArray (Image::*)() const>(&Image::save_png_to_buffer)>((new std::string("save_png_to_buffer"))->c_str())
			.fun<static_cast<Error (Image::*)(const String &, double) const>(&Image::save_jpg)>((new std::string("save_jpg"))->c_str())
			.fun<static_cast<PackedByteArray (Image::*)(double) const>(&Image::save_jpg_to_buffer)>((new std::string("save_jpg_to_buffer"))->c_str())
			.fun<static_cast<Error (Image::*)(const String &, bool) const>(&Image::save_exr)>((new std::string("save_exr"))->c_str())
			.fun<static_cast<PackedByteArray (Image::*)(bool) const>(&Image::save_exr_to_buffer)>((new std::string("save_exr_to_buffer"))->c_str())
			.fun<static_cast<Error (Image::*)(const String &, bool, double) const>(&Image::save_webp)>((new std::string("save_webp"))->c_str())
			.fun<static_cast<PackedByteArray (Image::*)(bool, double) const>(&Image::save_webp_to_buffer)>((new std::string("save_webp_to_buffer"))->c_str())
			.fun<static_cast<Image::AlphaMode (Image::*)() const>(&Image::detect_alpha)>((new std::string("detect_alpha"))->c_str())
			.fun<static_cast<bool (Image::*)() const>(&Image::is_invisible)>((new std::string("is_invisible"))->c_str())
			.fun<static_cast<Image::UsedChannels (Image::*)(Image::CompressSource) const>(&Image::detect_used_channels)>((new std::string("detect_used_channels"))->c_str())
			.fun<static_cast<Error (Image::*)(Image::CompressMode, Image::CompressSource, Image::ASTCFormat)>(&Image::compress)>((new std::string("compress"))->c_str())
			.fun<static_cast<Error (Image::*)(Image::CompressMode, Image::UsedChannels, Image::ASTCFormat)>(&Image::compress_from_channels)>((new std::string("compress_from_channels"))->c_str())
			.fun<static_cast<Error (Image::*)()>(&Image::decompress)>((new std::string("decompress"))->c_str())
			.fun<static_cast<bool (Image::*)() const>(&Image::is_compressed)>((new std::string("is_compressed"))->c_str())
			.fun<static_cast<void (Image::*)(ClockDirection)>(&Image::rotate_90)>((new std::string("rotate_90"))->c_str())
			.fun<static_cast<void (Image::*)()>(&Image::rotate_180)>((new std::string("rotate_180"))->c_str())
			.fun<static_cast<void (Image::*)()>(&Image::fix_alpha_edges)>((new std::string("fix_alpha_edges"))->c_str())
			.fun<static_cast<void (Image::*)()>(&Image::premultiply_alpha)>((new std::string("premultiply_alpha"))->c_str())
			.fun<static_cast<void (Image::*)()>(&Image::srgb_to_linear)>((new std::string("srgb_to_linear"))->c_str())
			.fun<static_cast<void (Image::*)()>(&Image::normal_map_to_xy)>((new std::string("normal_map_to_xy"))->c_str())
			.fun<static_cast<Ref<Image> (Image::*)()>(&Image::rgbe_to_srgb)>((new std::string("rgbe_to_srgb"))->c_str())
			.fun<static_cast<void (Image::*)(double)>(&Image::bump_map_to_normal_map)>((new std::string("bump_map_to_normal_map"))->c_str())
			.fun<static_cast<Dictionary (Image::*)(const Ref<Image> &, bool)>(&Image::compute_image_metrics)>((new std::string("compute_image_metrics"))->c_str())
			.fun<static_cast<void (Image::*)(const Ref<Image> &, const Rect2i &, const Vector2i &)>(&Image::blit_rect)>((new std::string("blit_rect"))->c_str())
			.fun<static_cast<void (Image::*)(const Ref<Image> &, const Ref<Image> &, const Rect2i &, const Vector2i &)>(&Image::blit_rect_mask)>((new std::string("blit_rect_mask"))->c_str())
			.fun<static_cast<void (Image::*)(const Ref<Image> &, const Rect2i &, const Vector2i &)>(&Image::blend_rect)>((new std::string("blend_rect"))->c_str())
			.fun<static_cast<void (Image::*)(const Ref<Image> &, const Ref<Image> &, const Rect2i &, const Vector2i &)>(&Image::blend_rect_mask)>((new std::string("blend_rect_mask"))->c_str())
			.fun<static_cast<void (Image::*)(const Color &)>(&Image::fill)>((new std::string("fill"))->c_str())
			.fun<static_cast<void (Image::*)(const Rect2i &, const Color &)>(&Image::fill_rect)>((new std::string("fill_rect"))->c_str())
			.fun<static_cast<Rect2i (Image::*)() const>(&Image::get_used_rect)>((new std::string("get_used_rect"))->c_str())
			.fun<static_cast<Ref<Image> (Image::*)(const Rect2i &) const>(&Image::get_region)>((new std::string("get_region"))->c_str())
			.fun<static_cast<void (Image::*)(const Ref<Image> &)>(&Image::copy_from)>((new std::string("copy_from"))->c_str())
			.fun<static_cast<Color (Image::*)(const Vector2i &) const>(&Image::get_pixelv)>((new std::string("get_pixelv"))->c_str())
			.fun<static_cast<Color (Image::*)(int32_t, int32_t) const>(&Image::get_pixel)>((new std::string("get_pixel"))->c_str())
			.fun<static_cast<void (Image::*)(const Vector2i &, const Color &)>(&Image::set_pixelv)>((new std::string("set_pixelv"))->c_str())
			.fun<static_cast<void (Image::*)(int32_t, int32_t, const Color &)>(&Image::set_pixel)>((new std::string("set_pixel"))->c_str())
			.fun<static_cast<void (Image::*)(double, double, double)>(&Image::adjust_bcs)>((new std::string("adjust_bcs"))->c_str())
			.fun<static_cast<Error (Image::*)(const PackedByteArray &)>(&Image::load_png_from_buffer)>((new std::string("load_png_from_buffer"))->c_str())
			.fun<static_cast<Error (Image::*)(const PackedByteArray &)>(&Image::load_jpg_from_buffer)>((new std::string("load_jpg_from_buffer"))->c_str())
			.fun<static_cast<Error (Image::*)(const PackedByteArray &)>(&Image::load_webp_from_buffer)>((new std::string("load_webp_from_buffer"))->c_str())
			.fun<static_cast<Error (Image::*)(const PackedByteArray &)>(&Image::load_tga_from_buffer)>((new std::string("load_tga_from_buffer"))->c_str())
			.fun<static_cast<Error (Image::*)(const PackedByteArray &)>(&Image::load_bmp_from_buffer)>((new std::string("load_bmp_from_buffer"))->c_str())
			.fun<static_cast<Error (Image::*)(const PackedByteArray &)>(&Image::load_ktx_from_buffer)>((new std::string("load_ktx_from_buffer"))->c_str())
			.fun<static_cast<Error (Image::*)(const PackedByteArray &, double)>(&Image::load_svg_from_buffer)>((new std::string("load_svg_from_buffer"))->c_str())
			.fun<static_cast<Error (Image::*)(const String &, double)>(&Image::load_svg_from_string)>((new std::string("load_svg_from_string"))->c_str());
	qjs::Value _Format = context->newObject();
	_Format[(new std::string("FORMAT_L8"))->c_str()] = Image::Format::FORMAT_L8;
	_Format[(new std::string("FORMAT_LA8"))->c_str()] = Image::Format::FORMAT_LA8;
	_Format[(new std::string("FORMAT_R8"))->c_str()] = Image::Format::FORMAT_R8;
	_Format[(new std::string("FORMAT_RG8"))->c_str()] = Image::Format::FORMAT_RG8;
	_Format[(new std::string("FORMAT_RGB8"))->c_str()] = Image::Format::FORMAT_RGB8;
	_Format[(new std::string("FORMAT_RGBA8"))->c_str()] = Image::Format::FORMAT_RGBA8;
	_Format[(new std::string("FORMAT_RGBA4444"))->c_str()] = Image::Format::FORMAT_RGBA4444;
	_Format[(new std::string("FORMAT_RGB565"))->c_str()] = Image::Format::FORMAT_RGB565;
	_Format[(new std::string("FORMAT_RF"))->c_str()] = Image::Format::FORMAT_RF;
	_Format[(new std::string("FORMAT_RGF"))->c_str()] = Image::Format::FORMAT_RGF;
	_Format[(new std::string("FORMAT_RGBF"))->c_str()] = Image::Format::FORMAT_RGBF;
	_Format[(new std::string("FORMAT_RGBAF"))->c_str()] = Image::Format::FORMAT_RGBAF;
	_Format[(new std::string("FORMAT_RH"))->c_str()] = Image::Format::FORMAT_RH;
	_Format[(new std::string("FORMAT_RGH"))->c_str()] = Image::Format::FORMAT_RGH;
	_Format[(new std::string("FORMAT_RGBH"))->c_str()] = Image::Format::FORMAT_RGBH;
	_Format[(new std::string("FORMAT_RGBAH"))->c_str()] = Image::Format::FORMAT_RGBAH;
	_Format[(new std::string("FORMAT_RGBE9995"))->c_str()] = Image::Format::FORMAT_RGBE9995;
	_Format[(new std::string("FORMAT_DXT1"))->c_str()] = Image::Format::FORMAT_DXT1;
	_Format[(new std::string("FORMAT_DXT3"))->c_str()] = Image::Format::FORMAT_DXT3;
	_Format[(new std::string("FORMAT_DXT5"))->c_str()] = Image::Format::FORMAT_DXT5;
	_Format[(new std::string("FORMAT_RGTC_R"))->c_str()] = Image::Format::FORMAT_RGTC_R;
	_Format[(new std::string("FORMAT_RGTC_RG"))->c_str()] = Image::Format::FORMAT_RGTC_RG;
	_Format[(new std::string("FORMAT_BPTC_RGBA"))->c_str()] = Image::Format::FORMAT_BPTC_RGBA;
	_Format[(new std::string("FORMAT_BPTC_RGBF"))->c_str()] = Image::Format::FORMAT_BPTC_RGBF;
	_Format[(new std::string("FORMAT_BPTC_RGBFU"))->c_str()] = Image::Format::FORMAT_BPTC_RGBFU;
	_Format[(new std::string("FORMAT_ETC"))->c_str()] = Image::Format::FORMAT_ETC;
	_Format[(new std::string("FORMAT_ETC2_R11"))->c_str()] = Image::Format::FORMAT_ETC2_R11;
	_Format[(new std::string("FORMAT_ETC2_R11S"))->c_str()] = Image::Format::FORMAT_ETC2_R11S;
	_Format[(new std::string("FORMAT_ETC2_RG11"))->c_str()] = Image::Format::FORMAT_ETC2_RG11;
	_Format[(new std::string("FORMAT_ETC2_RG11S"))->c_str()] = Image::Format::FORMAT_ETC2_RG11S;
	_Format[(new std::string("FORMAT_ETC2_RGB8"))->c_str()] = Image::Format::FORMAT_ETC2_RGB8;
	_Format[(new std::string("FORMAT_ETC2_RGBA8"))->c_str()] = Image::Format::FORMAT_ETC2_RGBA8;
	_Format[(new std::string("FORMAT_ETC2_RGB8A1"))->c_str()] = Image::Format::FORMAT_ETC2_RGB8A1;
	_Format[(new std::string("FORMAT_ETC2_RA_AS_RG"))->c_str()] = Image::Format::FORMAT_ETC2_RA_AS_RG;
	_Format[(new std::string("FORMAT_DXT5_RA_AS_RG"))->c_str()] = Image::Format::FORMAT_DXT5_RA_AS_RG;
	_Format[(new std::string("FORMAT_ASTC_4x4"))->c_str()] = Image::Format::FORMAT_ASTC_4x4;
	_Format[(new std::string("FORMAT_ASTC_4x4_HDR"))->c_str()] = Image::Format::FORMAT_ASTC_4x4_HDR;
	_Format[(new std::string("FORMAT_ASTC_8x8"))->c_str()] = Image::Format::FORMAT_ASTC_8x8;
	_Format[(new std::string("FORMAT_ASTC_8x8_HDR"))->c_str()] = Image::Format::FORMAT_ASTC_8x8_HDR;
	_Format[(new std::string("FORMAT_MAX"))->c_str()] = Image::Format::FORMAT_MAX;
	_module.add("Format", std::move(_Format));
	qjs::Value _Interpolation = context->newObject();
	_Interpolation[(new std::string("INTERPOLATE_NEAREST"))->c_str()] = Image::Interpolation::INTERPOLATE_NEAREST;
	_Interpolation[(new std::string("INTERPOLATE_BILINEAR"))->c_str()] = Image::Interpolation::INTERPOLATE_BILINEAR;
	_Interpolation[(new std::string("INTERPOLATE_CUBIC"))->c_str()] = Image::Interpolation::INTERPOLATE_CUBIC;
	_Interpolation[(new std::string("INTERPOLATE_TRILINEAR"))->c_str()] = Image::Interpolation::INTERPOLATE_TRILINEAR;
	_Interpolation[(new std::string("INTERPOLATE_LANCZOS"))->c_str()] = Image::Interpolation::INTERPOLATE_LANCZOS;
	_module.add("Interpolation", std::move(_Interpolation));
	qjs::Value _AlphaMode = context->newObject();
	_AlphaMode[(new std::string("ALPHA_NONE"))->c_str()] = Image::AlphaMode::ALPHA_NONE;
	_AlphaMode[(new std::string("ALPHA_BIT"))->c_str()] = Image::AlphaMode::ALPHA_BIT;
	_AlphaMode[(new std::string("ALPHA_BLEND"))->c_str()] = Image::AlphaMode::ALPHA_BLEND;
	_module.add("AlphaMode", std::move(_AlphaMode));
	qjs::Value _CompressMode = context->newObject();
	_CompressMode[(new std::string("COMPRESS_S3TC"))->c_str()] = Image::CompressMode::COMPRESS_S3TC;
	_CompressMode[(new std::string("COMPRESS_ETC"))->c_str()] = Image::CompressMode::COMPRESS_ETC;
	_CompressMode[(new std::string("COMPRESS_ETC2"))->c_str()] = Image::CompressMode::COMPRESS_ETC2;
	_CompressMode[(new std::string("COMPRESS_BPTC"))->c_str()] = Image::CompressMode::COMPRESS_BPTC;
	_CompressMode[(new std::string("COMPRESS_ASTC"))->c_str()] = Image::CompressMode::COMPRESS_ASTC;
	_CompressMode[(new std::string("COMPRESS_MAX"))->c_str()] = Image::CompressMode::COMPRESS_MAX;
	_module.add("CompressMode", std::move(_CompressMode));
	qjs::Value _UsedChannels = context->newObject();
	_UsedChannels[(new std::string("USED_CHANNELS_L"))->c_str()] = Image::UsedChannels::USED_CHANNELS_L;
	_UsedChannels[(new std::string("USED_CHANNELS_LA"))->c_str()] = Image::UsedChannels::USED_CHANNELS_LA;
	_UsedChannels[(new std::string("USED_CHANNELS_R"))->c_str()] = Image::UsedChannels::USED_CHANNELS_R;
	_UsedChannels[(new std::string("USED_CHANNELS_RG"))->c_str()] = Image::UsedChannels::USED_CHANNELS_RG;
	_UsedChannels[(new std::string("USED_CHANNELS_RGB"))->c_str()] = Image::UsedChannels::USED_CHANNELS_RGB;
	_UsedChannels[(new std::string("USED_CHANNELS_RGBA"))->c_str()] = Image::UsedChannels::USED_CHANNELS_RGBA;
	_module.add("UsedChannels", std::move(_UsedChannels));
	qjs::Value _CompressSource = context->newObject();
	_CompressSource[(new std::string("COMPRESS_SOURCE_GENERIC"))->c_str()] = Image::CompressSource::COMPRESS_SOURCE_GENERIC;
	_CompressSource[(new std::string("COMPRESS_SOURCE_SRGB"))->c_str()] = Image::CompressSource::COMPRESS_SOURCE_SRGB;
	_CompressSource[(new std::string("COMPRESS_SOURCE_NORMAL"))->c_str()] = Image::CompressSource::COMPRESS_SOURCE_NORMAL;
	_module.add("CompressSource", std::move(_CompressSource));
	qjs::Value _ASTCFormat = context->newObject();
	_ASTCFormat[(new std::string("ASTC_FORMAT_4x4"))->c_str()] = Image::ASTCFormat::ASTC_FORMAT_4x4;
	_ASTCFormat[(new std::string("ASTC_FORMAT_8x8"))->c_str()] = Image::ASTCFormat::ASTC_FORMAT_8x8;
	_module.add("ASTCFormat", std::move(_ASTCFormat));
}