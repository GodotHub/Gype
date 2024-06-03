#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/link_button.hpp>

using namespace godot;

void register_classes_LinkButton() {
    qjs::Context::Module &_module = _Control;
    _module.class_<LinkButton>("LinkButton")
           .constructor<>()
           .property<LinkButton::get_text, LinkButton::set_text>("text")
           .property<LinkButton::get_underline_mode, LinkButton::set_underline_mode>("underline")
           .property<LinkButton::get_uri, LinkButton::set_uri>("uri")
           .property<LinkButton::get_text_direction, LinkButton::set_text_direction>("text_direction")
           .property<LinkButton::get_language, LinkButton::set_language>("language")
           .property<LinkButton::get_structured_text_bidi_override, LinkButton::set_structured_text_bidi_override>("structured_text_bidi_override")
           .property<LinkButton::get_structured_text_bidi_override_options, LinkButton::set_structured_text_bidi_override_options>("structured_text_bidi_override_options")
;}