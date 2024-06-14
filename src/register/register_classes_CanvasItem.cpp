
#include <godot_cpp/classes/canvas_item.hpp>
#include <godot_cpp/classes/canvas_layer.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/multi_mesh.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/world2d.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CanvasItem() {
	qjs::Context::Module &_module = get_CanvasItem_module();
	_module.class_<CanvasItem>("CanvasItem")
			.constructor<>()
			.base<Node>()
			.static_fun<&CanvasItem::NOTIFICATION_TRANSFORM_CHANGED>((new std::string("NOTIFICATION_TRANSFORM_CHANGED"))->c_str())
			.static_fun<&CanvasItem::NOTIFICATION_LOCAL_TRANSFORM_CHANGED>((new std::string("NOTIFICATION_LOCAL_TRANSFORM_CHANGED"))->c_str())
			.static_fun<&CanvasItem::NOTIFICATION_DRAW>((new std::string("NOTIFICATION_DRAW"))->c_str())
			.static_fun<&CanvasItem::NOTIFICATION_VISIBILITY_CHANGED>((new std::string("NOTIFICATION_VISIBILITY_CHANGED"))->c_str())
			.static_fun<&CanvasItem::NOTIFICATION_ENTER_CANVAS>((new std::string("NOTIFICATION_ENTER_CANVAS"))->c_str())
			.static_fun<&CanvasItem::NOTIFICATION_EXIT_CANVAS>((new std::string("NOTIFICATION_EXIT_CANVAS"))->c_str())
			.static_fun<&CanvasItem::NOTIFICATION_WORLD_2D_CHANGED>((new std::string("NOTIFICATION_WORLD_2D_CHANGED"))->c_str())
			.property<static_cast<bool (CanvasItem::*)() const>(&CanvasItem::is_visible), static_cast<void (CanvasItem::*)(bool)>(&CanvasItem::set_visible)>((new std::string("visible"))->c_str())
			.property<static_cast<Color (CanvasItem::*)() const>(&CanvasItem::get_modulate), static_cast<void (CanvasItem::*)(const Color &)>(&CanvasItem::set_modulate)>((new std::string("modulate"))->c_str())
			.property<static_cast<Color (CanvasItem::*)() const>(&CanvasItem::get_self_modulate), static_cast<void (CanvasItem::*)(const Color &)>(&CanvasItem::set_self_modulate)>((new std::string("self_modulate"))->c_str())
			.property<static_cast<bool (CanvasItem::*)() const>(&CanvasItem::is_draw_behind_parent_enabled), static_cast<void (CanvasItem::*)(bool)>(&CanvasItem::set_draw_behind_parent)>((new std::string("show_behind_parent"))->c_str())
			.property<static_cast<bool (CanvasItem::*)() const>(&CanvasItem::is_set_as_top_level), static_cast<void (CanvasItem::*)(bool)>(&CanvasItem::set_as_top_level)>((new std::string("top_level"))->c_str())
			.property<static_cast<CanvasItem::ClipChildrenMode (CanvasItem::*)() const>(&CanvasItem::get_clip_children_mode), static_cast<void (CanvasItem::*)(CanvasItem::ClipChildrenMode)>(&CanvasItem::set_clip_children_mode)>((new std::string("clip_children"))->c_str())
			.property<static_cast<int32_t (CanvasItem::*)() const>(&CanvasItem::get_light_mask), static_cast<void (CanvasItem::*)(int32_t)>(&CanvasItem::set_light_mask)>((new std::string("light_mask"))->c_str())
			.property<static_cast<uint32_t (CanvasItem::*)() const>(&CanvasItem::get_visibility_layer), static_cast<void (CanvasItem::*)(uint32_t)>(&CanvasItem::set_visibility_layer)>((new std::string("visibility_layer"))->c_str())
			.property<static_cast<int32_t (CanvasItem::*)() const>(&CanvasItem::get_z_index), static_cast<void (CanvasItem::*)(int32_t)>(&CanvasItem::set_z_index)>((new std::string("z_index"))->c_str())
			.property<static_cast<bool (CanvasItem::*)() const>(&CanvasItem::is_z_relative), static_cast<void (CanvasItem::*)(bool)>(&CanvasItem::set_z_as_relative)>((new std::string("z_as_relative"))->c_str())
			.property<static_cast<bool (CanvasItem::*)() const>(&CanvasItem::is_y_sort_enabled), static_cast<void (CanvasItem::*)(bool)>(&CanvasItem::set_y_sort_enabled)>((new std::string("y_sort_enabled"))->c_str())
			.property<static_cast<CanvasItem::TextureFilter (CanvasItem::*)() const>(&CanvasItem::get_texture_filter), static_cast<void (CanvasItem::*)(CanvasItem::TextureFilter)>(&CanvasItem::set_texture_filter)>((new std::string("texture_filter"))->c_str())
			.property<static_cast<CanvasItem::TextureRepeat (CanvasItem::*)() const>(&CanvasItem::get_texture_repeat), static_cast<void (CanvasItem::*)(CanvasItem::TextureRepeat)>(&CanvasItem::set_texture_repeat)>((new std::string("texture_repeat"))->c_str())
			.property<static_cast<Ref<Material> (CanvasItem::*)() const>(&CanvasItem::get_material), static_cast<void (CanvasItem::*)(const Ref<Material> &)>(&CanvasItem::set_material)>((new std::string("material"))->c_str())
			.property<static_cast<bool (CanvasItem::*)() const>(&CanvasItem::get_use_parent_material), static_cast<void (CanvasItem::*)(bool)>(&CanvasItem::set_use_parent_material)>((new std::string("use_parent_material"))->c_str())
			.fun<static_cast<void (CanvasItem::*)()>(&CanvasItem::_draw)>((new std::string("_draw"))->c_str())
			.fun<static_cast<RID (CanvasItem::*)() const>(&CanvasItem::get_canvas_item)>((new std::string("get_canvas_item"))->c_str())
			.fun<static_cast<bool (CanvasItem::*)() const>(&CanvasItem::is_visible_in_tree)>((new std::string("is_visible_in_tree"))->c_str())
			.fun<static_cast<void (CanvasItem::*)()>(&CanvasItem::show)>((new std::string("show"))->c_str())
			.fun<static_cast<void (CanvasItem::*)()>(&CanvasItem::hide)>((new std::string("hide"))->c_str())
			.fun<static_cast<void (CanvasItem::*)()>(&CanvasItem::queue_redraw)>((new std::string("queue_redraw"))->c_str())
			.fun<static_cast<void (CanvasItem::*)()>(&CanvasItem::move_to_front)>((new std::string("move_to_front"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Vector2 &, const Vector2 &, const Color &, double, bool)>(&CanvasItem::draw_line)>((new std::string("draw_line"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Vector2 &, const Vector2 &, const Color &, double, double, bool, bool)>(&CanvasItem::draw_dashed_line)>((new std::string("draw_dashed_line"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const PackedVector2Array &, const Color &, double, bool)>(&CanvasItem::draw_polyline)>((new std::string("draw_polyline"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const PackedVector2Array &, const PackedColorArray &, double, bool)>(&CanvasItem::draw_polyline_colors)>((new std::string("draw_polyline_colors"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Vector2 &, double, double, double, int32_t, const Color &, double, bool)>(&CanvasItem::draw_arc)>((new std::string("draw_arc"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const PackedVector2Array &, const Color &, double, bool)>(&CanvasItem::draw_multiline)>((new std::string("draw_multiline"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const PackedVector2Array &, const PackedColorArray &, double, bool)>(&CanvasItem::draw_multiline_colors)>((new std::string("draw_multiline_colors"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Rect2 &, const Color &, bool, double, bool)>(&CanvasItem::draw_rect)>((new std::string("draw_rect"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Vector2 &, double, const Color &, bool, double, bool)>(&CanvasItem::draw_circle)>((new std::string("draw_circle"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Ref<Texture2D> &, const Vector2 &, const Color &)>(&CanvasItem::draw_texture)>((new std::string("draw_texture"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Ref<Texture2D> &, const Rect2 &, bool, const Color &, bool)>(&CanvasItem::draw_texture_rect)>((new std::string("draw_texture_rect"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Ref<Texture2D> &, const Rect2 &, const Rect2 &, const Color &, bool, bool)>(&CanvasItem::draw_texture_rect_region)>((new std::string("draw_texture_rect_region"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Ref<Texture2D> &, const Rect2 &, const Rect2 &, const Color &, double, double, double)>(&CanvasItem::draw_msdf_texture_rect_region)>((new std::string("draw_msdf_texture_rect_region"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Ref<Texture2D> &, const Rect2 &, const Rect2 &, const Color &)>(&CanvasItem::draw_lcd_texture_rect_region)>((new std::string("draw_lcd_texture_rect_region"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Ref<StyleBox> &, const Rect2 &)>(&CanvasItem::draw_style_box)>((new std::string("draw_style_box"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const PackedVector2Array &, const PackedColorArray &, const PackedVector2Array &, const Ref<Texture2D> &)>(&CanvasItem::draw_primitive)>((new std::string("draw_primitive"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const PackedVector2Array &, const PackedColorArray &, const PackedVector2Array &, const Ref<Texture2D> &)>(&CanvasItem::draw_polygon)>((new std::string("draw_polygon"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const PackedVector2Array &, const Color &, const PackedVector2Array &, const Ref<Texture2D> &)>(&CanvasItem::draw_colored_polygon)>((new std::string("draw_colored_polygon"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Ref<Font> &, const Vector2 &, const String &, HorizontalAlignment, double, int32_t, const Color &, BitField<TextServer::JustificationFlag>, TextServer::Direction, TextServer::Orientation) const>(&CanvasItem::draw_string)>((new std::string("draw_string"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Ref<Font> &, const Vector2 &, const String &, HorizontalAlignment, double, int32_t, int32_t, const Color &, BitField<TextServer::LineBreakFlag>, BitField<TextServer::JustificationFlag>, TextServer::Direction, TextServer::Orientation) const>(&CanvasItem::draw_multiline_string)>((new std::string("draw_multiline_string"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Ref<Font> &, const Vector2 &, const String &, HorizontalAlignment, double, int32_t, int32_t, const Color &, BitField<TextServer::JustificationFlag>, TextServer::Direction, TextServer::Orientation) const>(&CanvasItem::draw_string_outline)>((new std::string("draw_string_outline"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Ref<Font> &, const Vector2 &, const String &, HorizontalAlignment, double, int32_t, int32_t, int32_t, const Color &, BitField<TextServer::LineBreakFlag>, BitField<TextServer::JustificationFlag>, TextServer::Direction, TextServer::Orientation) const>(&CanvasItem::draw_multiline_string_outline)>((new std::string("draw_multiline_string_outline"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Ref<Font> &, const Vector2 &, const String &, int32_t, const Color &) const>(&CanvasItem::draw_char)>((new std::string("draw_char"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Ref<Font> &, const Vector2 &, const String &, int32_t, int32_t, const Color &) const>(&CanvasItem::draw_char_outline)>((new std::string("draw_char_outline"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Ref<Mesh> &, const Ref<Texture2D> &, const Transform2D &, const Color &)>(&CanvasItem::draw_mesh)>((new std::string("draw_mesh"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Ref<MultiMesh> &, const Ref<Texture2D> &)>(&CanvasItem::draw_multimesh)>((new std::string("draw_multimesh"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Vector2 &, double, const Vector2 &)>(&CanvasItem::draw_set_transform)>((new std::string("draw_set_transform"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(const Transform2D &)>(&CanvasItem::draw_set_transform_matrix)>((new std::string("draw_set_transform_matrix"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(double, double, double, double)>(&CanvasItem::draw_animation_slice)>((new std::string("draw_animation_slice"))->c_str())
			.fun<static_cast<void (CanvasItem::*)()>(&CanvasItem::draw_end_animation)>((new std::string("draw_end_animation"))->c_str())
			.fun<static_cast<Transform2D (CanvasItem::*)() const>(&CanvasItem::get_transform)>((new std::string("get_transform"))->c_str())
			.fun<static_cast<Transform2D (CanvasItem::*)() const>(&CanvasItem::get_global_transform)>((new std::string("get_global_transform"))->c_str())
			.fun<static_cast<Transform2D (CanvasItem::*)() const>(&CanvasItem::get_global_transform_with_canvas)>((new std::string("get_global_transform_with_canvas"))->c_str())
			.fun<static_cast<Transform2D (CanvasItem::*)() const>(&CanvasItem::get_viewport_transform)>((new std::string("get_viewport_transform"))->c_str())
			.fun<static_cast<Rect2 (CanvasItem::*)() const>(&CanvasItem::get_viewport_rect)>((new std::string("get_viewport_rect"))->c_str())
			.fun<static_cast<Transform2D (CanvasItem::*)() const>(&CanvasItem::get_canvas_transform)>((new std::string("get_canvas_transform"))->c_str())
			.fun<static_cast<Transform2D (CanvasItem::*)() const>(&CanvasItem::get_screen_transform)>((new std::string("get_screen_transform"))->c_str())
			.fun<static_cast<Vector2 (CanvasItem::*)() const>(&CanvasItem::get_local_mouse_position)>((new std::string("get_local_mouse_position"))->c_str())
			.fun<static_cast<Vector2 (CanvasItem::*)() const>(&CanvasItem::get_global_mouse_position)>((new std::string("get_global_mouse_position"))->c_str())
			.fun<static_cast<RID (CanvasItem::*)() const>(&CanvasItem::get_canvas)>((new std::string("get_canvas"))->c_str())
			.fun<static_cast<CanvasLayer *(CanvasItem::*)() const>(&CanvasItem::get_canvas_layer_node)>((new std::string("get_canvas_layer_node"))->c_str())
			.fun<static_cast<Ref<World2D> (CanvasItem::*)() const>(&CanvasItem::get_world_2d)>((new std::string("get_world_2d"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(bool)>(&CanvasItem::set_notify_local_transform)>((new std::string("set_notify_local_transform"))->c_str())
			.fun<static_cast<bool (CanvasItem::*)() const>(&CanvasItem::is_local_transform_notification_enabled)>((new std::string("is_local_transform_notification_enabled"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(bool)>(&CanvasItem::set_notify_transform)>((new std::string("set_notify_transform"))->c_str())
			.fun<static_cast<bool (CanvasItem::*)() const>(&CanvasItem::is_transform_notification_enabled)>((new std::string("is_transform_notification_enabled"))->c_str())
			.fun<static_cast<void (CanvasItem::*)()>(&CanvasItem::force_update_transform)>((new std::string("force_update_transform"))->c_str())
			.fun<static_cast<Vector2 (CanvasItem::*)(const Vector2 &) const>(&CanvasItem::make_canvas_position_local)>((new std::string("make_canvas_position_local"))->c_str())
			.fun<static_cast<Ref<InputEvent> (CanvasItem::*)(const Ref<InputEvent> &) const>(&CanvasItem::make_input_local)>((new std::string("make_input_local"))->c_str())
			.fun<static_cast<void (CanvasItem::*)(uint32_t, bool)>(&CanvasItem::set_visibility_layer_bit)>((new std::string("set_visibility_layer_bit"))->c_str())
			.fun<static_cast<bool (CanvasItem::*)(uint32_t) const>(&CanvasItem::get_visibility_layer_bit)>((new std::string("get_visibility_layer_bit"))->c_str());
	qjs::Value _TextureFilter = context->newObject();
	_TextureFilter[(new std::string("TEXTURE_FILTER_PARENT_NODE"))->c_str()] = CanvasItem::TextureFilter::TEXTURE_FILTER_PARENT_NODE;
	_TextureFilter[(new std::string("TEXTURE_FILTER_NEAREST"))->c_str()] = CanvasItem::TextureFilter::TEXTURE_FILTER_NEAREST;
	_TextureFilter[(new std::string("TEXTURE_FILTER_LINEAR"))->c_str()] = CanvasItem::TextureFilter::TEXTURE_FILTER_LINEAR;
	_TextureFilter[(new std::string("TEXTURE_FILTER_NEAREST_WITH_MIPMAPS"))->c_str()] = CanvasItem::TextureFilter::TEXTURE_FILTER_NEAREST_WITH_MIPMAPS;
	_TextureFilter[(new std::string("TEXTURE_FILTER_LINEAR_WITH_MIPMAPS"))->c_str()] = CanvasItem::TextureFilter::TEXTURE_FILTER_LINEAR_WITH_MIPMAPS;
	_TextureFilter[(new std::string("TEXTURE_FILTER_NEAREST_WITH_MIPMAPS_ANISOTROPIC"))->c_str()] = CanvasItem::TextureFilter::TEXTURE_FILTER_NEAREST_WITH_MIPMAPS_ANISOTROPIC;
	_TextureFilter[(new std::string("TEXTURE_FILTER_LINEAR_WITH_MIPMAPS_ANISOTROPIC"))->c_str()] = CanvasItem::TextureFilter::TEXTURE_FILTER_LINEAR_WITH_MIPMAPS_ANISOTROPIC;
	_TextureFilter[(new std::string("TEXTURE_FILTER_MAX"))->c_str()] = CanvasItem::TextureFilter::TEXTURE_FILTER_MAX;
	_module.add("TextureFilter", std::move(_TextureFilter));
	qjs::Value _TextureRepeat = context->newObject();
	_TextureRepeat[(new std::string("TEXTURE_REPEAT_PARENT_NODE"))->c_str()] = CanvasItem::TextureRepeat::TEXTURE_REPEAT_PARENT_NODE;
	_TextureRepeat[(new std::string("TEXTURE_REPEAT_DISABLED"))->c_str()] = CanvasItem::TextureRepeat::TEXTURE_REPEAT_DISABLED;
	_TextureRepeat[(new std::string("TEXTURE_REPEAT_ENABLED"))->c_str()] = CanvasItem::TextureRepeat::TEXTURE_REPEAT_ENABLED;
	_TextureRepeat[(new std::string("TEXTURE_REPEAT_MIRROR"))->c_str()] = CanvasItem::TextureRepeat::TEXTURE_REPEAT_MIRROR;
	_TextureRepeat[(new std::string("TEXTURE_REPEAT_MAX"))->c_str()] = CanvasItem::TextureRepeat::TEXTURE_REPEAT_MAX;
	_module.add("TextureRepeat", std::move(_TextureRepeat));
	qjs::Value _ClipChildrenMode = context->newObject();
	_ClipChildrenMode[(new std::string("CLIP_CHILDREN_DISABLED"))->c_str()] = CanvasItem::ClipChildrenMode::CLIP_CHILDREN_DISABLED;
	_ClipChildrenMode[(new std::string("CLIP_CHILDREN_ONLY"))->c_str()] = CanvasItem::ClipChildrenMode::CLIP_CHILDREN_ONLY;
	_ClipChildrenMode[(new std::string("CLIP_CHILDREN_AND_DRAW"))->c_str()] = CanvasItem::ClipChildrenMode::CLIP_CHILDREN_AND_DRAW;
	_ClipChildrenMode[(new std::string("CLIP_CHILDREN_MAX"))->c_str()] = CanvasItem::ClipChildrenMode::CLIP_CHILDREN_MAX;
	_module.add("ClipChildrenMode", std::move(_ClipChildrenMode));
}