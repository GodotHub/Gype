#include <godot_cpp/classes/label.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/label_settings.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Label() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<Label>("Label")
            .constructor<>()
            .base<Control>()
            .property<static_cast<String(Label::*)()const>(&Label::get_text),static_cast<void(Label::*)(const String &)>(&Label::set_text)>("text")
            .property<static_cast<Ref<LabelSettings>(Label::*)()const>(&Label::get_label_settings),static_cast<void(Label::*)(const Ref<LabelSettings> &)>(&Label::set_label_settings)>("label_settings")
            .property<static_cast<HorizontalAlignment(Label::*)()const>(&Label::get_horizontal_alignment),static_cast<void(Label::*)(HorizontalAlignment)>(&Label::set_horizontal_alignment)>("horizontal_alignment")
            .property<static_cast<VerticalAlignment(Label::*)()const>(&Label::get_vertical_alignment),static_cast<void(Label::*)(VerticalAlignment)>(&Label::set_vertical_alignment)>("vertical_alignment")
            .property<static_cast<TextServer::AutowrapMode(Label::*)()const>(&Label::get_autowrap_mode),static_cast<void(Label::*)(TextServer::AutowrapMode)>(&Label::set_autowrap_mode)>("autowrap_mode")
            .property<static_cast<BitField<TextServer::JustificationFlag>(Label::*)()const>(&Label::get_justification_flags),static_cast<void(Label::*)(BitField<TextServer::JustificationFlag>)>(&Label::set_justification_flags)>("justification_flags")
            .property<static_cast<bool(Label::*)()const>(&Label::is_clipping_text),static_cast<void(Label::*)(bool)>(&Label::set_clip_text)>("clip_text")
            .property<static_cast<TextServer::OverrunBehavior(Label::*)()const>(&Label::get_text_overrun_behavior),static_cast<void(Label::*)(TextServer::OverrunBehavior)>(&Label::set_text_overrun_behavior)>("text_overrun_behavior")
            .property<static_cast<String(Label::*)()const>(&Label::get_ellipsis_char),static_cast<void(Label::*)(const String &)>(&Label::set_ellipsis_char)>("ellipsis_char")
            .property<static_cast<bool(Label::*)()const>(&Label::is_uppercase),static_cast<void(Label::*)(bool)>(&Label::set_uppercase)>("uppercase")
            .property<static_cast<PackedFloat32Array(Label::*)()const>(&Label::get_tab_stops),static_cast<void(Label::*)(const PackedFloat32Array &)>(&Label::set_tab_stops)>("tab_stops")
            .property<static_cast<int32_t(Label::*)()const>(&Label::get_lines_skipped),static_cast<void(Label::*)(int32_t)>(&Label::set_lines_skipped)>("lines_skipped")
            .property<static_cast<int32_t(Label::*)()const>(&Label::get_max_lines_visible),static_cast<void(Label::*)(int32_t)>(&Label::set_max_lines_visible)>("max_lines_visible")
            .property<static_cast<int32_t(Label::*)()const>(&Label::get_visible_characters),static_cast<void(Label::*)(int32_t)>(&Label::set_visible_characters)>("visible_characters")
            .property<static_cast<TextServer::VisibleCharactersBehavior(Label::*)()const>(&Label::get_visible_characters_behavior),static_cast<void(Label::*)(TextServer::VisibleCharactersBehavior)>(&Label::set_visible_characters_behavior)>("visible_characters_behavior")
            .property<static_cast<double(Label::*)()const>(&Label::get_visible_ratio),static_cast<void(Label::*)(double)>(&Label::set_visible_ratio)>("visible_ratio")
            .property<static_cast<Control::TextDirection(Label::*)()const>(&Label::get_text_direction),static_cast<void(Label::*)(Control::TextDirection)>(&Label::set_text_direction)>("text_direction")
            .property<static_cast<String(Label::*)()const>(&Label::get_language),static_cast<void(Label::*)(const String &)>(&Label::set_language)>("language")
            .property<static_cast<TextServer::StructuredTextParser(Label::*)()const>(&Label::get_structured_text_bidi_override),static_cast<void(Label::*)(TextServer::StructuredTextParser)>(&Label::set_structured_text_bidi_override)>("structured_text_bidi_override")
            .property<static_cast<Array(Label::*)()const>(&Label::get_structured_text_bidi_override_options),static_cast<void(Label::*)(const Array &)>(&Label::set_structured_text_bidi_override_options)>("structured_text_bidi_override_options")
            .fun<static_cast<int32_t(Label::*)(int32_t)const>(&Label::get_line_height)>("get_line_height")
            .fun<static_cast<int32_t(Label::*)()const>(&Label::get_line_count)>("get_line_count")
            .fun<static_cast<int32_t(Label::*)()const>(&Label::get_visible_line_count)>("get_visible_line_count")
            .fun<static_cast<int32_t(Label::*)()const>(&Label::get_total_character_count)>("get_total_character_count")
            .fun<static_cast<Rect2(Label::*)(int32_t)const>(&Label::get_character_bounds)>("get_character_bounds")
;}