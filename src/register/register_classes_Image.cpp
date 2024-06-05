#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Image() {
	qjs::Context::Module &_module = _General;
	_module.class_<Image>("Image")
			.constructor<>()
			.fun<static_cast<int32_t (Image::*)() const>(&Image::get_width)>("get_width")
			.fun<static_cast<int32_t (Image::*)() const>(&Image::get_height)>("get_height")
			.fun<static_cast<Vector2i (Image::*)() const>(&Image::get_size)>("get_size")
			.fun<static_cast<bool (Image::*)() const>(&Image::has_mipmaps)>("has_mipmaps")
			.fun<static_cast<Image::Format (Image::*)() const>(&Image::get_format)>("get_format")
			.fun<static_cast<PackedByteArray (Image::*)() const>(&Image::get_data)>("get_data")
			.fun<static_cast<void (Image::*)(Image::Format)>(&Image::convert)>("convert")
			.fun<static_cast<int32_t (Image::*)() const>(&Image::get_mipmap_count)>("get_mipmap_count")
			.fun<static_cast<int32_t (Image::*)(int32_t) const>(&Image::get_mipmap_offset)>("get_mipmap_offset")
			.fun<static_cast<void (Image::*)(bool, Image::Interpolation)>(&Image::resize_to_po2)>("resize_to_po2")
			.fun<static_cast<void (Image::*)(int32_t, int32_t, Image::Interpolation)>(&Image::resize)>("resize")
			.fun<static_cast<void (Image::*)()>(&Image::shrink_x2)>("shrink_x2")
			.fun<static_cast<void (Image::*)(int32_t, int32_t)>(&Image::crop)>("crop")
			.fun<static_cast<void (Image::*)()>(&Image::flip_x)>("flip_x")
			.fun<static_cast<void (Image::*)()>(&Image::flip_y)>("flip_y")
			.fun<static_cast<Error (Image::*)(bool)>(&Image::generate_mipmaps)>("generate_mipmaps")
			.fun<static_cast<void (Image::*)()>(&Image::clear_mipmaps)>("clear_mipmaps")
			.static_fun<&Image::create>("create")
			.static_fun<&Image::create_from_data>("create_from_data")
			.fun<static_cast<void (Image::*)(int32_t, int32_t, bool, Image::Format, const PackedByteArray &)>(&Image::set_data)>("set_data")
			.fun<static_cast<bool (Image::*)() const>(&Image::is_empty)>("is_empty")
			.fun<static_cast<Error (Image::*)(const String &)>(&Image::load)>("load")
			.static_fun<&Image::load_from_file>("load_from_file")
			.fun<static_cast<Error (Image::*)(const String &) const>(&Image::save_png)>("save_png")
			.fun<static_cast<PackedByteArray (Image::*)() const>(&Image::save_png_to_buffer)>("save_png_to_buffer")
			.fun<static_cast<Error (Image::*)(const String &, double) const>(&Image::save_jpg)>("save_jpg")
			.fun<static_cast<PackedByteArray (Image::*)(double) const>(&Image::save_jpg_to_buffer)>("save_jpg_to_buffer")
			.fun<static_cast<Error (Image::*)(const String &, bool) const>(&Image::save_exr)>("save_exr")
			.fun<static_cast<PackedByteArray (Image::*)(bool) const>(&Image::save_exr_to_buffer)>("save_exr_to_buffer")
			.fun<static_cast<Error (Image::*)(const String &, bool, double) const>(&Image::save_webp)>("save_webp")
			.fun<static_cast<PackedByteArray (Image::*)(bool, double) const>(&Image::save_webp_to_buffer)>("save_webp_to_buffer")
			.fun<static_cast<Image::AlphaMode (Image::*)() const>(&Image::detect_alpha)>("detect_alpha")
			.fun<static_cast<bool (Image::*)() const>(&Image::is_invisible)>("is_invisible")
			.fun<static_cast<Image::UsedChannels (Image::*)(Image::CompressSource) const>(&Image::detect_used_channels)>("detect_used_channels")
			.fun<static_cast<Error (Image::*)(Image::CompressMode, Image::CompressSource, Image::ASTCFormat)>(&Image::compress)>("compress")
			.fun<static_cast<Error (Image::*)(Image::CompressMode, Image::UsedChannels, Image::ASTCFormat)>(&Image::compress_from_channels)>("compress_from_channels")
			.fun<static_cast<Error (Image::*)()>(&Image::decompress)>("decompress")
			.fun<static_cast<bool (Image::*)() const>(&Image::is_compressed)>("is_compressed")
			.fun<static_cast<void (Image::*)(ClockDirection)>(&Image::rotate_90)>("rotate_90")
			.fun<static_cast<void (Image::*)()>(&Image::rotate_180)>("rotate_180")
			.fun<static_cast<void (Image::*)()>(&Image::fix_alpha_edges)>("fix_alpha_edges")
			.fun<static_cast<void (Image::*)()>(&Image::premultiply_alpha)>("premultiply_alpha")
			.fun<static_cast<void (Image::*)()>(&Image::srgb_to_linear)>("srgb_to_linear")
			.fun<static_cast<void (Image::*)()>(&Image::normal_map_to_xy)>("normal_map_to_xy")
			.fun<static_cast<Ref<Image> (Image::*)()>(&Image::rgbe_to_srgb)>("rgbe_to_srgb")
			.fun<static_cast<void (Image::*)(double)>(&Image::bump_map_to_normal_map)>("bump_map_to_normal_map")
			.fun<static_cast<Dictionary (Image::*)(const Ref<Image> &, bool)>(&Image::compute_image_metrics)>("compute_image_metrics")
			.fun<static_cast<void (Image::*)(const Ref<Image> &, const Rect2i &, const Vector2i &)>(&Image::blit_rect)>("blit_rect")
			.fun<static_cast<void (Image::*)(const Ref<Image> &, const Ref<Image> &, const Rect2i &, const Vector2i &)>(&Image::blit_rect_mask)>("blit_rect_mask")
			.fun<static_cast<void (Image::*)(const Ref<Image> &, const Rect2i &, const Vector2i &)>(&Image::blend_rect)>("blend_rect")
			.fun<static_cast<void (Image::*)(const Ref<Image> &, const Ref<Image> &, const Rect2i &, const Vector2i &)>(&Image::blend_rect_mask)>("blend_rect_mask")
			.fun<static_cast<void (Image::*)(const Color &)>(&Image::fill)>("fill")
			.fun<static_cast<void (Image::*)(const Rect2i &, const Color &)>(&Image::fill_rect)>("fill_rect")
			.fun<static_cast<Rect2i (Image::*)() const>(&Image::get_used_rect)>("get_used_rect")
			.fun<static_cast<Ref<Image> (Image::*)(const Rect2i &) const>(&Image::get_region)>("get_region")
			.fun<static_cast<void (Image::*)(const Ref<Image> &)>(&Image::copy_from)>("copy_from")
			.fun<static_cast<Color (Image::*)(const Vector2i &) const>(&Image::get_pixelv)>("get_pixelv")
			.fun<static_cast<Color (Image::*)(int32_t, int32_t) const>(&Image::get_pixel)>("get_pixel")
			.fun<static_cast<void (Image::*)(const Vector2i &, const Color &)>(&Image::set_pixelv)>("set_pixelv")
			.fun<static_cast<void (Image::*)(int32_t, int32_t, const Color &)>(&Image::set_pixel)>("set_pixel")
			.fun<static_cast<void (Image::*)(double, double, double)>(&Image::adjust_bcs)>("adjust_bcs")
			.fun<static_cast<Error (Image::*)(const PackedByteArray &)>(&Image::load_png_from_buffer)>("load_png_from_buffer")
			.fun<static_cast<Error (Image::*)(const PackedByteArray &)>(&Image::load_jpg_from_buffer)>("load_jpg_from_buffer")
			.fun<static_cast<Error (Image::*)(const PackedByteArray &)>(&Image::load_webp_from_buffer)>("load_webp_from_buffer")
			.fun<static_cast<Error (Image::*)(const PackedByteArray &)>(&Image::load_tga_from_buffer)>("load_tga_from_buffer")
			.fun<static_cast<Error (Image::*)(const PackedByteArray &)>(&Image::load_bmp_from_buffer)>("load_bmp_from_buffer")
			.fun<static_cast<Error (Image::*)(const PackedByteArray &)>(&Image::load_ktx_from_buffer)>("load_ktx_from_buffer")
			.fun<static_cast<Error (Image::*)(const PackedByteArray &, double)>(&Image::load_svg_from_buffer)>("load_svg_from_buffer")
			.fun<static_cast<Error (Image::*)(const String &, double)>(&Image::load_svg_from_string)>("load_svg_from_string");
}