#include <godot_cpp/classes/canvas_item.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/canvas_layer.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/multi_mesh.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/world2d.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CanvasItem() {
    qjs::Context::Module &_module = get_CanvasItem_module();
    _module.class_<CanvasItem>("CanvasItem")
            .constructor<>()
            .base<Node>()
            .static_fun<&CanvasItem::NOTIFICATION_TRANSFORM_CHANGED>("NOTIFICATION_TRANSFORM_CHANGED")
            .static_fun<&CanvasItem::NOTIFICATION_LOCAL_TRANSFORM_CHANGED>("NOTIFICATION_LOCAL_TRANSFORM_CHANGED")
            .static_fun<&CanvasItem::NOTIFICATION_DRAW>("NOTIFICATION_DRAW")
            .static_fun<&CanvasItem::NOTIFICATION_VISIBILITY_CHANGED>("NOTIFICATION_VISIBILITY_CHANGED")
            .static_fun<&CanvasItem::NOTIFICATION_ENTER_CANVAS>("NOTIFICATION_ENTER_CANVAS")
            .static_fun<&CanvasItem::NOTIFICATION_EXIT_CANVAS>("NOTIFICATION_EXIT_CANVAS")
            .static_fun<&CanvasItem::NOTIFICATION_WORLD_2D_CHANGED>("NOTIFICATION_WORLD_2D_CHANGED")
            .property<static_cast<bool(CanvasItem::*)()const>(&CanvasItem::is_visible),static_cast<void(CanvasItem::*)(bool)>(&CanvasItem::set_visible)>("visible")
            .property<static_cast<Color(CanvasItem::*)()const>(&CanvasItem::get_modulate),static_cast<void(CanvasItem::*)(const Color &)>(&CanvasItem::set_modulate)>("modulate")
            .property<static_cast<Color(CanvasItem::*)()const>(&CanvasItem::get_self_modulate),static_cast<void(CanvasItem::*)(const Color &)>(&CanvasItem::set_self_modulate)>("self_modulate")
            .property<static_cast<bool(CanvasItem::*)()const>(&CanvasItem::is_draw_behind_parent_enabled),static_cast<void(CanvasItem::*)(bool)>(&CanvasItem::set_draw_behind_parent)>("show_behind_parent")
            .property<static_cast<bool(CanvasItem::*)()const>(&CanvasItem::is_set_as_top_level),static_cast<void(CanvasItem::*)(bool)>(&CanvasItem::set_as_top_level)>("top_level")
            .property<static_cast<CanvasItem::ClipChildrenMode(CanvasItem::*)()const>(&CanvasItem::get_clip_children_mode),static_cast<void(CanvasItem::*)(CanvasItem::ClipChildrenMode)>(&CanvasItem::set_clip_children_mode)>("clip_children")
            .property<static_cast<int32_t(CanvasItem::*)()const>(&CanvasItem::get_light_mask),static_cast<void(CanvasItem::*)(int32_t)>(&CanvasItem::set_light_mask)>("light_mask")
            .property<static_cast<uint32_t(CanvasItem::*)()const>(&CanvasItem::get_visibility_layer),static_cast<void(CanvasItem::*)(uint32_t)>(&CanvasItem::set_visibility_layer)>("visibility_layer")
            .property<static_cast<int32_t(CanvasItem::*)()const>(&CanvasItem::get_z_index),static_cast<void(CanvasItem::*)(int32_t)>(&CanvasItem::set_z_index)>("z_index")
            .property<static_cast<bool(CanvasItem::*)()const>(&CanvasItem::is_z_relative),static_cast<void(CanvasItem::*)(bool)>(&CanvasItem::set_z_as_relative)>("z_as_relative")
            .property<static_cast<bool(CanvasItem::*)()const>(&CanvasItem::is_y_sort_enabled),static_cast<void(CanvasItem::*)(bool)>(&CanvasItem::set_y_sort_enabled)>("y_sort_enabled")
            .property<static_cast<CanvasItem::TextureFilter(CanvasItem::*)()const>(&CanvasItem::get_texture_filter),static_cast<void(CanvasItem::*)(CanvasItem::TextureFilter)>(&CanvasItem::set_texture_filter)>("texture_filter")
            .property<static_cast<CanvasItem::TextureRepeat(CanvasItem::*)()const>(&CanvasItem::get_texture_repeat),static_cast<void(CanvasItem::*)(CanvasItem::TextureRepeat)>(&CanvasItem::set_texture_repeat)>("texture_repeat")
            .property<static_cast<Ref<Material>(CanvasItem::*)()const>(&CanvasItem::get_material),static_cast<void(CanvasItem::*)(const Ref<Material> &)>(&CanvasItem::set_material)>("material")
            .property<static_cast<bool(CanvasItem::*)()const>(&CanvasItem::get_use_parent_material),static_cast<void(CanvasItem::*)(bool)>(&CanvasItem::set_use_parent_material)>("use_parent_material")
            .fun<static_cast<void(CanvasItem::*)()>(&CanvasItem::_draw)>("_draw")
            .fun<static_cast<RID(CanvasItem::*)()const>(&CanvasItem::get_canvas_item)>("get_canvas_item")
            .fun<static_cast<bool(CanvasItem::*)()const>(&CanvasItem::is_visible_in_tree)>("is_visible_in_tree")
            .fun<static_cast<void(CanvasItem::*)()>(&CanvasItem::show)>("show")
            .fun<static_cast<void(CanvasItem::*)()>(&CanvasItem::hide)>("hide")
            .fun<static_cast<void(CanvasItem::*)()>(&CanvasItem::queue_redraw)>("queue_redraw")
            .fun<static_cast<void(CanvasItem::*)()>(&CanvasItem::move_to_front)>("move_to_front")
            .fun<static_cast<void(CanvasItem::*)(const Vector2 &,const Vector2 &,const Color &,double,bool)>(&CanvasItem::draw_line)>("draw_line")
            .fun<static_cast<void(CanvasItem::*)(const Vector2 &,const Vector2 &,const Color &,double,double,bool,bool)>(&CanvasItem::draw_dashed_line)>("draw_dashed_line")
            .fun<static_cast<void(CanvasItem::*)(const PackedVector2Array &,const Color &,double,bool)>(&CanvasItem::draw_polyline)>("draw_polyline")
            .fun<static_cast<void(CanvasItem::*)(const PackedVector2Array &,const PackedColorArray &,double,bool)>(&CanvasItem::draw_polyline_colors)>("draw_polyline_colors")
            .fun<static_cast<void(CanvasItem::*)(const Vector2 &,double,double,double,int32_t,const Color &,double,bool)>(&CanvasItem::draw_arc)>("draw_arc")
            .fun<static_cast<void(CanvasItem::*)(const PackedVector2Array &,const Color &,double,bool)>(&CanvasItem::draw_multiline)>("draw_multiline")
            .fun<static_cast<void(CanvasItem::*)(const PackedVector2Array &,const PackedColorArray &,double,bool)>(&CanvasItem::draw_multiline_colors)>("draw_multiline_colors")
            .fun<static_cast<void(CanvasItem::*)(const Rect2 &,const Color &,bool,double,bool)>(&CanvasItem::draw_rect)>("draw_rect")
            .fun<static_cast<void(CanvasItem::*)(const Vector2 &,double,const Color &,bool,double,bool)>(&CanvasItem::draw_circle)>("draw_circle")
            .fun<static_cast<void(CanvasItem::*)(const Ref<Texture2D> &,const Vector2 &,const Color &)>(&CanvasItem::draw_texture)>("draw_texture")
            .fun<static_cast<void(CanvasItem::*)(const Ref<Texture2D> &,const Rect2 &,bool,const Color &,bool)>(&CanvasItem::draw_texture_rect)>("draw_texture_rect")
            .fun<static_cast<void(CanvasItem::*)(const Ref<Texture2D> &,const Rect2 &,const Rect2 &,const Color &,bool,bool)>(&CanvasItem::draw_texture_rect_region)>("draw_texture_rect_region")
            .fun<static_cast<void(CanvasItem::*)(const Ref<Texture2D> &,const Rect2 &,const Rect2 &,const Color &,double,double,double)>(&CanvasItem::draw_msdf_texture_rect_region)>("draw_msdf_texture_rect_region")
            .fun<static_cast<void(CanvasItem::*)(const Ref<Texture2D> &,const Rect2 &,const Rect2 &,const Color &)>(&CanvasItem::draw_lcd_texture_rect_region)>("draw_lcd_texture_rect_region")
            .fun<static_cast<void(CanvasItem::*)(const Ref<StyleBox> &,const Rect2 &)>(&CanvasItem::draw_style_box)>("draw_style_box")
            .fun<static_cast<void(CanvasItem::*)(const PackedVector2Array &,const PackedColorArray &,const PackedVector2Array &,const Ref<Texture2D> &)>(&CanvasItem::draw_primitive)>("draw_primitive")
            .fun<static_cast<void(CanvasItem::*)(const PackedVector2Array &,const PackedColorArray &,const PackedVector2Array &,const Ref<Texture2D> &)>(&CanvasItem::draw_polygon)>("draw_polygon")
            .fun<static_cast<void(CanvasItem::*)(const PackedVector2Array &,const Color &,const PackedVector2Array &,const Ref<Texture2D> &)>(&CanvasItem::draw_colored_polygon)>("draw_colored_polygon")
            .fun<static_cast<void(CanvasItem::*)(const Ref<Font> &,const Vector2 &,const String &,HorizontalAlignment,double,int32_t,const Color &,BitField<TextServer::JustificationFlag>,TextServer::Direction,TextServer::Orientation)const>(&CanvasItem::draw_string)>("draw_string")
            .fun<static_cast<void(CanvasItem::*)(const Ref<Font> &,const Vector2 &,const String &,HorizontalAlignment,double,int32_t,int32_t,const Color &,BitField<TextServer::LineBreakFlag>,BitField<TextServer::JustificationFlag>,TextServer::Direction,TextServer::Orientation)const>(&CanvasItem::draw_multiline_string)>("draw_multiline_string")
            .fun<static_cast<void(CanvasItem::*)(const Ref<Font> &,const Vector2 &,const String &,HorizontalAlignment,double,int32_t,int32_t,const Color &,BitField<TextServer::JustificationFlag>,TextServer::Direction,TextServer::Orientation)const>(&CanvasItem::draw_string_outline)>("draw_string_outline")
            .fun<static_cast<void(CanvasItem::*)(const Ref<Font> &,const Vector2 &,const String &,HorizontalAlignment,double,int32_t,int32_t,int32_t,const Color &,BitField<TextServer::LineBreakFlag>,BitField<TextServer::JustificationFlag>,TextServer::Direction,TextServer::Orientation)const>(&CanvasItem::draw_multiline_string_outline)>("draw_multiline_string_outline")
            .fun<static_cast<void(CanvasItem::*)(const Ref<Font> &,const Vector2 &,const String &,int32_t,const Color &)const>(&CanvasItem::draw_char)>("draw_char")
            .fun<static_cast<void(CanvasItem::*)(const Ref<Font> &,const Vector2 &,const String &,int32_t,int32_t,const Color &)const>(&CanvasItem::draw_char_outline)>("draw_char_outline")
            .fun<static_cast<void(CanvasItem::*)(const Ref<Mesh> &,const Ref<Texture2D> &,const Transform2D &,const Color &)>(&CanvasItem::draw_mesh)>("draw_mesh")
            .fun<static_cast<void(CanvasItem::*)(const Ref<MultiMesh> &,const Ref<Texture2D> &)>(&CanvasItem::draw_multimesh)>("draw_multimesh")
            .fun<static_cast<void(CanvasItem::*)(const Vector2 &,double,const Vector2 &)>(&CanvasItem::draw_set_transform)>("draw_set_transform")
            .fun<static_cast<void(CanvasItem::*)(const Transform2D &)>(&CanvasItem::draw_set_transform_matrix)>("draw_set_transform_matrix")
            .fun<static_cast<void(CanvasItem::*)(double,double,double,double)>(&CanvasItem::draw_animation_slice)>("draw_animation_slice")
            .fun<static_cast<void(CanvasItem::*)()>(&CanvasItem::draw_end_animation)>("draw_end_animation")
            .fun<static_cast<Transform2D(CanvasItem::*)()const>(&CanvasItem::get_transform)>("get_transform")
            .fun<static_cast<Transform2D(CanvasItem::*)()const>(&CanvasItem::get_global_transform)>("get_global_transform")
            .fun<static_cast<Transform2D(CanvasItem::*)()const>(&CanvasItem::get_global_transform_with_canvas)>("get_global_transform_with_canvas")
            .fun<static_cast<Transform2D(CanvasItem::*)()const>(&CanvasItem::get_viewport_transform)>("get_viewport_transform")
            .fun<static_cast<Rect2(CanvasItem::*)()const>(&CanvasItem::get_viewport_rect)>("get_viewport_rect")
            .fun<static_cast<Transform2D(CanvasItem::*)()const>(&CanvasItem::get_canvas_transform)>("get_canvas_transform")
            .fun<static_cast<Transform2D(CanvasItem::*)()const>(&CanvasItem::get_screen_transform)>("get_screen_transform")
            .fun<static_cast<Vector2(CanvasItem::*)()const>(&CanvasItem::get_local_mouse_position)>("get_local_mouse_position")
            .fun<static_cast<Vector2(CanvasItem::*)()const>(&CanvasItem::get_global_mouse_position)>("get_global_mouse_position")
            .fun<static_cast<RID(CanvasItem::*)()const>(&CanvasItem::get_canvas)>("get_canvas")
            .fun<static_cast<CanvasLayer *(CanvasItem::*)()const>(&CanvasItem::get_canvas_layer_node)>("get_canvas_layer_node")
            .fun<static_cast<Ref<World2D>(CanvasItem::*)()const>(&CanvasItem::get_world_2d)>("get_world_2d")
            .fun<static_cast<void(CanvasItem::*)(bool)>(&CanvasItem::set_notify_local_transform)>("set_notify_local_transform")
            .fun<static_cast<bool(CanvasItem::*)()const>(&CanvasItem::is_local_transform_notification_enabled)>("is_local_transform_notification_enabled")
            .fun<static_cast<void(CanvasItem::*)(bool)>(&CanvasItem::set_notify_transform)>("set_notify_transform")
            .fun<static_cast<bool(CanvasItem::*)()const>(&CanvasItem::is_transform_notification_enabled)>("is_transform_notification_enabled")
            .fun<static_cast<void(CanvasItem::*)()>(&CanvasItem::force_update_transform)>("force_update_transform")
            .fun<static_cast<Vector2(CanvasItem::*)(const Vector2 &)const>(&CanvasItem::make_canvas_position_local)>("make_canvas_position_local")
            .fun<static_cast<Ref<InputEvent>(CanvasItem::*)(const Ref<InputEvent> &)const>(&CanvasItem::make_input_local)>("make_input_local")
            .fun<static_cast<void(CanvasItem::*)(uint32_t,bool)>(&CanvasItem::set_visibility_layer_bit)>("set_visibility_layer_bit")
            .fun<static_cast<bool(CanvasItem::*)(uint32_t)const>(&CanvasItem::get_visibility_layer_bit)>("get_visibility_layer_bit")
;    qjs::Value _TextureFilter = context->newObject();
    _TextureFilter["TEXTURE_FILTER_PARENT_NODE"] = CanvasItem::TextureFilter::TEXTURE_FILTER_PARENT_NODE;
    _TextureFilter["TEXTURE_FILTER_NEAREST"] = CanvasItem::TextureFilter::TEXTURE_FILTER_NEAREST;
    _TextureFilter["TEXTURE_FILTER_LINEAR"] = CanvasItem::TextureFilter::TEXTURE_FILTER_LINEAR;
    _TextureFilter["TEXTURE_FILTER_NEAREST_WITH_MIPMAPS"] = CanvasItem::TextureFilter::TEXTURE_FILTER_NEAREST_WITH_MIPMAPS;
    _TextureFilter["TEXTURE_FILTER_LINEAR_WITH_MIPMAPS"] = CanvasItem::TextureFilter::TEXTURE_FILTER_LINEAR_WITH_MIPMAPS;
    _TextureFilter["TEXTURE_FILTER_NEAREST_WITH_MIPMAPS_ANISOTROPIC"] = CanvasItem::TextureFilter::TEXTURE_FILTER_NEAREST_WITH_MIPMAPS_ANISOTROPIC;
    _TextureFilter["TEXTURE_FILTER_LINEAR_WITH_MIPMAPS_ANISOTROPIC"] = CanvasItem::TextureFilter::TEXTURE_FILTER_LINEAR_WITH_MIPMAPS_ANISOTROPIC;
    _TextureFilter["TEXTURE_FILTER_MAX"] = CanvasItem::TextureFilter::TEXTURE_FILTER_MAX;
    _module.add("TextureFilter", std::move(_TextureFilter));
    qjs::Value _TextureRepeat = context->newObject();
    _TextureRepeat["TEXTURE_REPEAT_PARENT_NODE"] = CanvasItem::TextureRepeat::TEXTURE_REPEAT_PARENT_NODE;
    _TextureRepeat["TEXTURE_REPEAT_DISABLED"] = CanvasItem::TextureRepeat::TEXTURE_REPEAT_DISABLED;
    _TextureRepeat["TEXTURE_REPEAT_ENABLED"] = CanvasItem::TextureRepeat::TEXTURE_REPEAT_ENABLED;
    _TextureRepeat["TEXTURE_REPEAT_MIRROR"] = CanvasItem::TextureRepeat::TEXTURE_REPEAT_MIRROR;
    _TextureRepeat["TEXTURE_REPEAT_MAX"] = CanvasItem::TextureRepeat::TEXTURE_REPEAT_MAX;
    _module.add("TextureRepeat", std::move(_TextureRepeat));
    qjs::Value _ClipChildrenMode = context->newObject();
    _ClipChildrenMode["CLIP_CHILDREN_DISABLED"] = CanvasItem::ClipChildrenMode::CLIP_CHILDREN_DISABLED;
    _ClipChildrenMode["CLIP_CHILDREN_ONLY"] = CanvasItem::ClipChildrenMode::CLIP_CHILDREN_ONLY;
    _ClipChildrenMode["CLIP_CHILDREN_AND_DRAW"] = CanvasItem::ClipChildrenMode::CLIP_CHILDREN_AND_DRAW;
    _ClipChildrenMode["CLIP_CHILDREN_MAX"] = CanvasItem::ClipChildrenMode::CLIP_CHILDREN_MAX;
    _module.add("ClipChildrenMode", std::move(_ClipChildrenMode));
}