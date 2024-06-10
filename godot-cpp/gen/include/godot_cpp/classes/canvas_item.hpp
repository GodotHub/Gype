/**************************************************************************/
/*  canvas_item.hpp                                                       */
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

#ifndef GODOT_CPP_CANVAS_ITEM_HPP
#define GODOT_CPP_CANVAS_ITEM_HPP

#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class CanvasLayer;
class Font;
class InputEvent;
class Material;
class Mesh;
class MultiMesh;
class PackedColorArray;
class String;
class StyleBox;
class World2D;

class CanvasItem : public Node {
	GDEXTENSION_CLASS(CanvasItem, Node)

public:

	enum TextureFilter {
		TEXTURE_FILTER_PARENT_NODE = 0,
		TEXTURE_FILTER_NEAREST = 1,
		TEXTURE_FILTER_LINEAR = 2,
		TEXTURE_FILTER_NEAREST_WITH_MIPMAPS = 3,
		TEXTURE_FILTER_LINEAR_WITH_MIPMAPS = 4,
		TEXTURE_FILTER_NEAREST_WITH_MIPMAPS_ANISOTROPIC = 5,
		TEXTURE_FILTER_LINEAR_WITH_MIPMAPS_ANISOTROPIC = 6,
		TEXTURE_FILTER_MAX = 7,
	};

	enum TextureRepeat {
		TEXTURE_REPEAT_PARENT_NODE = 0,
		TEXTURE_REPEAT_DISABLED = 1,
		TEXTURE_REPEAT_ENABLED = 2,
		TEXTURE_REPEAT_MIRROR = 3,
		TEXTURE_REPEAT_MAX = 4,
	};

	enum ClipChildrenMode {
		CLIP_CHILDREN_DISABLED = 0,
		CLIP_CHILDREN_ONLY = 1,
		CLIP_CHILDREN_AND_DRAW = 2,
		CLIP_CHILDREN_MAX = 3,
	};

	static const int NOTIFICATION_TRANSFORM_CHANGED = 2000;
	static const int NOTIFICATION_LOCAL_TRANSFORM_CHANGED = 35;
	static const int NOTIFICATION_DRAW = 30;
	static const int NOTIFICATION_VISIBILITY_CHANGED = 31;
	static const int NOTIFICATION_ENTER_CANVAS = 32;
	static const int NOTIFICATION_EXIT_CANVAS = 33;
	static const int NOTIFICATION_WORLD_2D_CHANGED = 36;

	RID get_canvas_item() const;
	void set_visible(bool visible);
	bool is_visible() const;
	bool is_visible_in_tree() const;
	void show();
	void hide();
	void queue_redraw();
	void move_to_front();
	void set_as_top_level(bool enable);
	bool is_set_as_top_level() const;
	void set_light_mask(int32_t light_mask);
	int32_t get_light_mask() const;
	void set_modulate(const Color &modulate);
	Color get_modulate() const;
	void set_self_modulate(const Color &self_modulate);
	Color get_self_modulate() const;
	void set_z_index(int32_t z_index);
	int32_t get_z_index() const;
	void set_z_as_relative(bool enable);
	bool is_z_relative() const;
	void set_y_sort_enabled(bool enabled);
	bool is_y_sort_enabled() const;
	void set_draw_behind_parent(bool enable);
	bool is_draw_behind_parent_enabled() const;
	void draw_line(const Vector2 &from, const Vector2 &to, const Color &color, double width = -1.0, bool antialiased = false);
	void draw_dashed_line(const Vector2 &from, const Vector2 &to, const Color &color, double width = -1.0, double dash = 2.0, bool aligned = true, bool antialiased = false);
	void draw_polyline(const PackedVector2Array &points, const Color &color, double width = -1.0, bool antialiased = false);
	void draw_polyline_colors(const PackedVector2Array &points, const PackedColorArray &colors, double width = -1.0, bool antialiased = false);
	void draw_arc(const Vector2 &center, double radius, double start_angle, double end_angle, int32_t point_count, const Color &color, double width = -1.0, bool antialiased = false);
	void draw_multiline(const PackedVector2Array &points, const Color &color, double width = -1.0, bool antialiased = false);
	void draw_multiline_colors(const PackedVector2Array &points, const PackedColorArray &colors, double width = -1.0, bool antialiased = false);
	void draw_rect(const Rect2 &rect, const Color &color, bool filled = true, double width = -1.0, bool antialiased = false);
	void draw_circle(const Vector2 &position, double radius, const Color &color, bool filled = true, double width = -1.0, bool antialiased = false);
	void draw_texture(const Ref<Texture2D> &texture, const Vector2 &position, const Color &modulate = Color(1, 1, 1, 1));
	void draw_texture_rect(const Ref<Texture2D> &texture, const Rect2 &rect, bool tile, const Color &modulate = Color(1, 1, 1, 1), bool transpose = false);
	void draw_texture_rect_region(const Ref<Texture2D> &texture, const Rect2 &rect, const Rect2 &src_rect, const Color &modulate = Color(1, 1, 1, 1), bool transpose = false, bool clip_uv = true);
	void draw_msdf_texture_rect_region(const Ref<Texture2D> &texture, const Rect2 &rect, const Rect2 &src_rect, const Color &modulate = Color(1, 1, 1, 1), double outline = 0.0, double pixel_range = 4.0, double scale = 1.0);
	void draw_lcd_texture_rect_region(const Ref<Texture2D> &texture, const Rect2 &rect, const Rect2 &src_rect, const Color &modulate = Color(1, 1, 1, 1));
	void draw_style_box(const Ref<StyleBox> &style_box, const Rect2 &rect);
	void draw_primitive(const PackedVector2Array &points, const PackedColorArray &colors, const PackedVector2Array &uvs, const Ref<Texture2D> &texture = nullptr);
	void draw_polygon(const PackedVector2Array &points, const PackedColorArray &colors, const PackedVector2Array &uvs = PackedVector2Array(), const Ref<Texture2D> &texture = nullptr);
	void draw_colored_polygon(const PackedVector2Array &points, const Color &color, const PackedVector2Array &uvs = PackedVector2Array(), const Ref<Texture2D> &texture = nullptr);
	void draw_string(const Ref<Font> &font, const Vector2 &pos, const String &text, HorizontalAlignment alignment = (HorizontalAlignment)0, double width = -1, int32_t font_size = 16, const Color &modulate = Color(1, 1, 1, 1), BitField<TextServer::JustificationFlag> justification_flags = (BitField<TextServer::JustificationFlag>)3, TextServer::Direction direction = (TextServer::Direction)0, TextServer::Orientation orientation = (TextServer::Orientation)0) const;
	void draw_multiline_string(const Ref<Font> &font, const Vector2 &pos, const String &text, HorizontalAlignment alignment = (HorizontalAlignment)0, double width = -1, int32_t font_size = 16, int32_t max_lines = -1, const Color &modulate = Color(1, 1, 1, 1), BitField<TextServer::LineBreakFlag> brk_flags = (BitField<TextServer::LineBreakFlag>)3, BitField<TextServer::JustificationFlag> justification_flags = (BitField<TextServer::JustificationFlag>)3, TextServer::Direction direction = (TextServer::Direction)0, TextServer::Orientation orientation = (TextServer::Orientation)0) const;
	void draw_string_outline(const Ref<Font> &font, const Vector2 &pos, const String &text, HorizontalAlignment alignment = (HorizontalAlignment)0, double width = -1, int32_t font_size = 16, int32_t size = 1, const Color &modulate = Color(1, 1, 1, 1), BitField<TextServer::JustificationFlag> justification_flags = (BitField<TextServer::JustificationFlag>)3, TextServer::Direction direction = (TextServer::Direction)0, TextServer::Orientation orientation = (TextServer::Orientation)0) const;
	void draw_multiline_string_outline(const Ref<Font> &font, const Vector2 &pos, const String &text, HorizontalAlignment alignment = (HorizontalAlignment)0, double width = -1, int32_t font_size = 16, int32_t max_lines = -1, int32_t size = 1, const Color &modulate = Color(1, 1, 1, 1), BitField<TextServer::LineBreakFlag> brk_flags = (BitField<TextServer::LineBreakFlag>)3, BitField<TextServer::JustificationFlag> justification_flags = (BitField<TextServer::JustificationFlag>)3, TextServer::Direction direction = (TextServer::Direction)0, TextServer::Orientation orientation = (TextServer::Orientation)0) const;
	void draw_char(const Ref<Font> &font, const Vector2 &pos, const String &_char, int32_t font_size = 16, const Color &modulate = Color(1, 1, 1, 1)) const;
	void draw_char_outline(const Ref<Font> &font, const Vector2 &pos, const String &_char, int32_t font_size = 16, int32_t size = -1, const Color &modulate = Color(1, 1, 1, 1)) const;
	void draw_mesh(const Ref<Mesh> &mesh, const Ref<Texture2D> &texture, const Transform2D &transform = Transform2D(), const Color &modulate = Color(1, 1, 1, 1));
	void draw_multimesh(const Ref<MultiMesh> &multimesh, const Ref<Texture2D> &texture);
	void draw_set_transform(const Vector2 &position, double rotation = 0.0, const Vector2 &scale = Vector2(1, 1));
	void draw_set_transform_matrix(const Transform2D &xform);
	void draw_animation_slice(double animation_length, double slice_begin, double slice_end, double offset = 0.0);
	void draw_end_animation();
	Transform2D get_transform() const;
	Transform2D get_global_transform() const;
	Transform2D get_global_transform_with_canvas() const;
	Transform2D get_viewport_transform() const;
	Rect2 get_viewport_rect() const;
	Transform2D get_canvas_transform() const;
	Transform2D get_screen_transform() const;
	Vector2 get_local_mouse_position() const;
	Vector2 get_global_mouse_position() const;
	RID get_canvas() const;
	CanvasLayer *get_canvas_layer_node() const;
	Ref<World2D> get_world_2d() const;
	void set_material(const Ref<Material> &material);
	Ref<Material> get_material() const;
	void set_use_parent_material(bool enable);
	bool get_use_parent_material() const;
	void set_notify_local_transform(bool enable);
	bool is_local_transform_notification_enabled() const;
	void set_notify_transform(bool enable);
	bool is_transform_notification_enabled() const;
	void force_update_transform();
	Vector2 make_canvas_position_local(const Vector2 &screen_point) const;
	Ref<InputEvent> make_input_local(const Ref<InputEvent> &event) const;
	void set_visibility_layer(uint32_t layer);
	uint32_t get_visibility_layer() const;
	void set_visibility_layer_bit(uint32_t layer, bool enabled);
	bool get_visibility_layer_bit(uint32_t layer) const;
	void set_texture_filter(CanvasItem::TextureFilter mode);
	CanvasItem::TextureFilter get_texture_filter() const;
	void set_texture_repeat(CanvasItem::TextureRepeat mode);
	CanvasItem::TextureRepeat get_texture_repeat() const;
	void set_clip_children_mode(CanvasItem::ClipChildrenMode mode);
	CanvasItem::ClipChildrenMode get_clip_children_mode() const;
	virtual void _draw();
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Node::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_draw),decltype(&T::_draw)>) {
			BIND_VIRTUAL_METHOD(T, _draw);
		}
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(CanvasItem::TextureFilter);
VARIANT_ENUM_CAST(CanvasItem::TextureRepeat);
VARIANT_ENUM_CAST(CanvasItem::ClipChildrenMode);

#endif // ! GODOT_CPP_CANVAS_ITEM_HPP