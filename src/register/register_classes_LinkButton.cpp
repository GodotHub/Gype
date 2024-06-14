#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/link_button.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_LinkButton() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<LinkButton>("LinkButton")
			.constructor<>()
			.base<BaseButton>()
			.property<static_cast<String (LinkButton::*)() const>(&LinkButton::get_text), static_cast<void (LinkButton::*)(const String &)>(&LinkButton::set_text)>((new std::string("text"))->c_str())
			.property<static_cast<LinkButton::UnderlineMode (LinkButton::*)() const>(&LinkButton::get_underline_mode), static_cast<void (LinkButton::*)(LinkButton::UnderlineMode)>(&LinkButton::set_underline_mode)>((new std::string("underline"))->c_str())
			.property<static_cast<String (LinkButton::*)() const>(&LinkButton::get_uri), static_cast<void (LinkButton::*)(const String &)>(&LinkButton::set_uri)>((new std::string("uri"))->c_str())
			.property<static_cast<Control::TextDirection (LinkButton::*)() const>(&LinkButton::get_text_direction), static_cast<void (LinkButton::*)(Control::TextDirection)>(&LinkButton::set_text_direction)>((new std::string("text_direction"))->c_str())
			.property<static_cast<String (LinkButton::*)() const>(&LinkButton::get_language), static_cast<void (LinkButton::*)(const String &)>(&LinkButton::set_language)>((new std::string("language"))->c_str())
			.property<static_cast<TextServer::StructuredTextParser (LinkButton::*)() const>(&LinkButton::get_structured_text_bidi_override), static_cast<void (LinkButton::*)(TextServer::StructuredTextParser)>(&LinkButton::set_structured_text_bidi_override)>((new std::string("structured_text_bidi_override"))->c_str())
			.property<static_cast<Array (LinkButton::*)() const>(&LinkButton::get_structured_text_bidi_override_options), static_cast<void (LinkButton::*)(const Array &)>(&LinkButton::set_structured_text_bidi_override_options)>((new std::string("structured_text_bidi_override_options"))->c_str());
	qjs::Value _UnderlineMode = context->newObject();
	_UnderlineMode[(new std::string("UNDERLINE_MODE_ALWAYS"))->c_str()] = LinkButton::UnderlineMode::UNDERLINE_MODE_ALWAYS;
	_UnderlineMode[(new std::string("UNDERLINE_MODE_ON_HOVER"))->c_str()] = LinkButton::UnderlineMode::UNDERLINE_MODE_ON_HOVER;
	_UnderlineMode[(new std::string("UNDERLINE_MODE_NEVER"))->c_str()] = LinkButton::UnderlineMode::UNDERLINE_MODE_NEVER;
	_module.add("UnderlineMode", std::move(_UnderlineMode));
}