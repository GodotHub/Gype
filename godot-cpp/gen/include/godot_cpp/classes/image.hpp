/**************************************************************************/
/*  image.hpp                                                             */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#ifndef GODOT_CPP_IMAGE_HPP
#define GODOT_CPP_IMAGE_HPP

#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class String;

class Image : public Resource {
	GDEXTENSION_CLASS(Image, Resource)

public:

	enum Format {
		FORMAT_L8 = 0,
		FORMAT_LA8 = 1,
		FORMAT_R8 = 2,
		FORMAT_RG8 = 3,
		FORMAT_RGB8 = 4,
		FORMAT_RGBA8 = 5,
		FORMAT_RGBA4444 = 6,
		FORMAT_RGB565 = 7,
		FORMAT_RF = 8,
		FORMAT_RGF = 9,
		FORMAT_RGBF = 10,
		FORMAT_RGBAF = 11,
		FORMAT_RH = 12,
		FORMAT_RGH = 13,
		FORMAT_RGBH = 14,
		FORMAT_RGBAH = 15,
		FORMAT_RGBE9995 = 16,
		FORMAT_DXT1 = 17,
		FORMAT_DXT3 = 18,
		FORMAT_DXT5 = 19,
		FORMAT_RGTC_R = 20,
		FORMAT_RGTC_RG = 21,
		FORMAT_BPTC_RGBA = 22,
		FORMAT_BPTC_RGBF = 23,
		FORMAT_BPTC_RGBFU = 24,
		FORMAT_ETC = 25,
		FORMAT_ETC2_R11 = 26,
		FORMAT_ETC2_R11S = 27,
		FORMAT_ETC2_RG11 = 28,
		FORMAT_ETC2_RG11S = 29,
		FORMAT_ETC2_RGB8 = 30,
		FORMAT_ETC2_RGBA8 = 31,
		FORMAT_ETC2_RGB8A1 = 32,
		FORMAT_ETC2_RA_AS_RG = 33,
		FORMAT_DXT5_RA_AS_RG = 34,
		FORMAT_ASTC_4x4 = 35,
		FORMAT_ASTC_4x4_HDR = 36,
		FORMAT_ASTC_8x8 = 37,
		FORMAT_ASTC_8x8_HDR = 38,
		FORMAT_MAX = 39,
	};

	enum Interpolation {
		INTERPOLATE_NEAREST = 0,
		INTERPOLATE_BILINEAR = 1,
		INTERPOLATE_CUBIC = 2,
		INTERPOLATE_TRILINEAR = 3,
		INTERPOLATE_LANCZOS = 4,
	};

	enum AlphaMode {
		ALPHA_NONE = 0,
		ALPHA_BIT = 1,
		ALPHA_BLEND = 2,
	};

	enum CompressMode {
		COMPRESS_S3TC = 0,
		COMPRESS_ETC = 1,
		COMPRESS_ETC2 = 2,
		COMPRESS_BPTC = 3,
		COMPRESS_ASTC = 4,
		COMPRESS_MAX = 5,
	};

	enum UsedChannels {
		USED_CHANNELS_L = 0,
		USED_CHANNELS_LA = 1,
		USED_CHANNELS_R = 2,
		USED_CHANNELS_RG = 3,
		USED_CHANNELS_RGB = 4,
		USED_CHANNELS_RGBA = 5,
	};

	enum CompressSource {
		COMPRESS_SOURCE_GENERIC = 0,
		COMPRESS_SOURCE_SRGB = 1,
		COMPRESS_SOURCE_NORMAL = 2,
	};

	enum ASTCFormat {
		ASTC_FORMAT_4x4 = 0,
		ASTC_FORMAT_8x8 = 1,
	};

	static const int MAX_WIDTH = 16777216;
	static const int MAX_HEIGHT = 16777216;

	int32_t get_width() const;
	int32_t get_height() const;
	Vector2i get_size() const;
	bool has_mipmaps() const;
	Image::Format get_format() const;
	PackedByteArray get_data() const;
	void convert(Image::Format format);
	int32_t get_mipmap_count() const;
	int32_t get_mipmap_offset(int32_t mipmap) const;
	void resize_to_po2(bool square = false, Image::Interpolation interpolation = (Image::Interpolation)1);
	void resize(int32_t width, int32_t height, Image::Interpolation interpolation = (Image::Interpolation)1);
	void shrink_x2();
	void crop(int32_t width, int32_t height);
	void flip_x();
	void flip_y();
	Error generate_mipmaps(bool renormalize = false);
	void clear_mipmaps();
	static Ref<Image> create(int32_t width, int32_t height, bool use_mipmaps, Image::Format format);
	static Ref<Image> create_from_data(int32_t width, int32_t height, bool use_mipmaps, Image::Format format, const PackedByteArray &data);
	void set_data(int32_t width, int32_t height, bool use_mipmaps, Image::Format format, const PackedByteArray &data);
	bool is_empty() const;
	Error load(const String &path);
	static Ref<Image> load_from_file(const String &path);
	Error save_png(const String &path) const;
	PackedByteArray save_png_to_buffer() const;
	Error save_jpg(const String &path, double quality = 0.75) const;
	PackedByteArray save_jpg_to_buffer(double quality = 0.75) const;
	Error save_exr(const String &path, bool grayscale = false) const;
	PackedByteArray save_exr_to_buffer(bool grayscale = false) const;
	Error save_webp(const String &path, bool lossy = false, double quality = 0.75) const;
	PackedByteArray save_webp_to_buffer(bool lossy = false, double quality = 0.75) const;
	Image::AlphaMode detect_alpha() const;
	bool is_invisible() const;
	Image::UsedChannels detect_used_channels(Image::CompressSource source = (Image::CompressSource)0) const;
	Error compress(Image::CompressMode mode, Image::CompressSource source = (Image::CompressSource)0, Image::ASTCFormat astc_format = (Image::ASTCFormat)0);
	Error compress_from_channels(Image::CompressMode mode, Image::UsedChannels channels, Image::ASTCFormat astc_format = (Image::ASTCFormat)0);
	Error decompress();
	bool is_compressed() const;
	void rotate_90(ClockDirection direction);
	void rotate_180();
	void fix_alpha_edges();
	void premultiply_alpha();
	void srgb_to_linear();
	void normal_map_to_xy();
	Ref<Image> rgbe_to_srgb();
	void bump_map_to_normal_map(double bump_scale = 1.0);
	Dictionary compute_image_metrics(const Ref<Image> &compared_image, bool use_luma);
	void blit_rect(const Ref<Image> &src, const Rect2i &src_rect, const Vector2i &dst);
	void blit_rect_mask(const Ref<Image> &src, const Ref<Image> &mask, const Rect2i &src_rect, const Vector2i &dst);
	void blend_rect(const Ref<Image> &src, const Rect2i &src_rect, const Vector2i &dst);
	void blend_rect_mask(const Ref<Image> &src, const Ref<Image> &mask, const Rect2i &src_rect, const Vector2i &dst);
	void fill(const Color &color);
	void fill_rect(const Rect2i &rect, const Color &color);
	Rect2i get_used_rect() const;
	Ref<Image> get_region(const Rect2i &region) const;
	void copy_from(const Ref<Image> &src);
	Color get_pixelv(const Vector2i &point) const;
	Color get_pixel(int32_t x, int32_t y) const;
	void set_pixelv(const Vector2i &point, const Color &color);
	void set_pixel(int32_t x, int32_t y, const Color &color);
	void adjust_bcs(double brightness, double contrast, double saturation);
	Error load_png_from_buffer(const PackedByteArray &buffer);
	Error load_jpg_from_buffer(const PackedByteArray &buffer);
	Error load_webp_from_buffer(const PackedByteArray &buffer);
	Error load_tga_from_buffer(const PackedByteArray &buffer);
	Error load_bmp_from_buffer(const PackedByteArray &buffer);
	Error load_ktx_from_buffer(const PackedByteArray &buffer);
	Error load_svg_from_buffer(const PackedByteArray &buffer, double scale = 1.0);
	Error load_svg_from_string(const String &svg_str, double scale = 1.0);
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Resource::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(Image::Format);
VARIANT_ENUM_CAST(Image::Interpolation);
VARIANT_ENUM_CAST(Image::AlphaMode);
VARIANT_ENUM_CAST(Image::CompressMode);
VARIANT_ENUM_CAST(Image::UsedChannels);
VARIANT_ENUM_CAST(Image::CompressSource);
VARIANT_ENUM_CAST(Image::ASTCFormat);

#endif // ! GODOT_CPP_IMAGE_HPP