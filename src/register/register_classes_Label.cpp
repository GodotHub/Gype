#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/label.hpp>

using namespace godot;

void register_classes_Label() {
    qjs::Context::Module &_module = _Control;
    _module.class_<Label>("Label")
           .constructor<>()
           .property<Label::get_text, Label::set_text>("text")
           .property<Label::get_label_settings, Label::set_label_settings>("label_settings")
           .property<Label::get_horizontal_alignment, Label::set_horizontal_alignment>("horizontal_alignment")
           .property<Label::get_vertical_alignment, Label::set_vertical_alignment>("vertical_alignment")
           .property<Label::get_autowrap_mode, Label::set_autowrap_mode>("autowrap_mode")
           .property<Label::get_justification_flags, Label::set_justification_flags>("justification_flags")
           .property<Label::is_clipping_text, Label::set_clip_text>("clip_text")
           .property<Label::get_text_overrun_behavior, Label::set_text_overrun_behavior>("text_overrun_behavior")
           .property<Label::is_uppercase, Label::set_uppercase>("uppercase")
           .property<Label::get_tab_stops, Label::set_tab_stops>("tab_stops")
           .property<Label::get_lines_skipped, Label::set_lines_skipped>("lines_skipped")
           .property<Label::get_max_lines_visible, Label::set_max_lines_visible>("max_lines_visible")
           .property<Label::get_visible_characters, Label::set_visible_characters>("visible_characters")
           .property<Label::get_visible_characters_behavior, Label::set_visible_characters_behavior>("visible_characters_behavior")
           .property<Label::get_visible_ratio, Label::set_visible_ratio>("visible_ratio")
           .property<Label::get_text_direction, Label::set_text_direction>("text_direction")
           .property<Label::get_language, Label::set_language>("language")
           .property<Label::get_structured_text_bidi_override, Label::set_structured_text_bidi_override>("structured_text_bidi_override")
           .property<Label::get_structured_text_bidi_override_options, Label::set_structured_text_bidi_override_options>("structured_text_bidi_override_options")
		    .fun<static_cast<int32_t(Label::*)(int32_t)const>(&Label::get_line_height)>("get_line_height")
		    .fun<static_cast<int32_t(Label::*)()const>(&Label::get_line_count)>("get_line_count")
		    .fun<static_cast<int32_t(Label::*)()const>(&Label::get_visible_line_count)>("get_visible_line_count")
		    .fun<static_cast<int32_t(Label::*)()const>(&Label::get_total_character_count)>("get_total_character_count")
;}