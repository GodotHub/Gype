#include <godot_cpp/classes/link_button.hpp>
#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_LinkButton() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<LinkButton>("LinkButton")
            .constructor<>()
            .base<BaseButton>()
            .property<static_cast<String(LinkButton::*)()const>(&LinkButton::get_text),static_cast<void(LinkButton::*)(const String &)>(&LinkButton::set_text)>("text")
            .property<static_cast<LinkButton::UnderlineMode(LinkButton::*)()const>(&LinkButton::get_underline_mode),static_cast<void(LinkButton::*)(LinkButton::UnderlineMode)>(&LinkButton::set_underline_mode)>("underline")
            .property<static_cast<String(LinkButton::*)()const>(&LinkButton::get_uri),static_cast<void(LinkButton::*)(const String &)>(&LinkButton::set_uri)>("uri")
            .property<static_cast<Control::TextDirection(LinkButton::*)()const>(&LinkButton::get_text_direction),static_cast<void(LinkButton::*)(Control::TextDirection)>(&LinkButton::set_text_direction)>("text_direction")
            .property<static_cast<String(LinkButton::*)()const>(&LinkButton::get_language),static_cast<void(LinkButton::*)(const String &)>(&LinkButton::set_language)>("language")
            .property<static_cast<TextServer::StructuredTextParser(LinkButton::*)()const>(&LinkButton::get_structured_text_bidi_override),static_cast<void(LinkButton::*)(TextServer::StructuredTextParser)>(&LinkButton::set_structured_text_bidi_override)>("structured_text_bidi_override")
            .property<static_cast<Array(LinkButton::*)()const>(&LinkButton::get_structured_text_bidi_override_options),static_cast<void(LinkButton::*)(const Array &)>(&LinkButton::set_structured_text_bidi_override_options)>("structured_text_bidi_override_options")
;    qjs::Value _UnderlineMode = context->newObject();
    _UnderlineMode["UNDERLINE_MODE_ALWAYS"] = LinkButton::UnderlineMode::UNDERLINE_MODE_ALWAYS;
    _UnderlineMode["UNDERLINE_MODE_ON_HOVER"] = LinkButton::UnderlineMode::UNDERLINE_MODE_ON_HOVER;
    _UnderlineMode["UNDERLINE_MODE_NEVER"] = LinkButton::UnderlineMode::UNDERLINE_MODE_NEVER;
    _module.add("UnderlineMode", std::move(_UnderlineMode));
}