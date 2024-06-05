/**************************************************************************/
/*  render_scene_buffers_rd.hpp                                           */
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

#ifndef GODOT_CPP_RENDER_SCENE_BUFFERS_RD_HPP
#define GODOT_CPP_RENDER_SCENE_BUFFERS_RD_HPP

#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/render_scene_buffers.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class RDTextureFormat;
class RDTextureView;
class StringName;

class RenderSceneBuffersRD : public RenderSceneBuffers {
	GDEXTENSION_CLASS(RenderSceneBuffersRD, RenderSceneBuffers)

public:

	bool has_texture(const StringName &context, const StringName &name) const;
	RID create_texture(const StringName &context, const StringName &name, RenderingDevice::DataFormat data_format, uint32_t usage_bits, RenderingDevice::TextureSamples texture_samples, const Vector2i &size, uint32_t layers, uint32_t mipmaps, bool unique);
	RID create_texture_from_format(const StringName &context, const StringName &name, const Ref<RDTextureFormat> &format, const Ref<RDTextureView> &view, bool unique);
	RID create_texture_view(const StringName &context, const StringName &name, const StringName &view_name, const Ref<RDTextureView> &view);
	RID get_texture(const StringName &context, const StringName &name) const;
	Ref<RDTextureFormat> get_texture_format(const StringName &context, const StringName &name) const;
	RID get_texture_slice(const StringName &context, const StringName &name, uint32_t layer, uint32_t mipmap, uint32_t layers, uint32_t mipmaps);
	RID get_texture_slice_view(const StringName &context, const StringName &name, uint32_t layer, uint32_t mipmap, uint32_t layers, uint32_t mipmaps, const Ref<RDTextureView> &view);
	Vector2i get_texture_slice_size(const StringName &context, const StringName &name, uint32_t mipmap);
	void clear_context(const StringName &context);
	RID get_color_texture();
	RID get_color_layer(uint32_t layer);
	RID get_depth_texture();
	RID get_depth_layer(uint32_t layer);
	RID get_velocity_texture();
	RID get_velocity_layer(uint32_t layer);
	RID get_render_target() const;
	uint32_t get_view_count() const;
	Vector2i get_internal_size() const;
	bool get_use_taa() const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		RenderSceneBuffers::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_RENDER_SCENE_BUFFERS_RD_HPP