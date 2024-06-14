#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Button() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<Button>("Button")
			.constructor<>()
			.base<BaseButton>()
			.property<static_cast<String (Button::*)() const>(&Button::get_text), static_cast<void (Button::*)(const String &)>(&Button::set_text)>((new std::string("text"))->c_str())
			.property<static_cast<Ref<Texture2D> (Button::*)() const>(&Button::get_button_icon), static_cast<void (Button::*)(const Ref<Texture2D> &)>(&Button::set_button_icon)>((new std::string("icon"))->c_str())
			.property<static_cast<bool (Button::*)() const>(&Button::is_flat), static_cast<void (Button::*)(bool)>(&Button::set_flat)>((new std::string("flat"))->c_str())
			.property<static_cast<HorizontalAlignment (Button::*)() const>(&Button::get_text_alignment), static_cast<void (Button::*)(HorizontalAlignment)>(&Button::set_text_alignment)>((new std::string("alignment"))->c_str())
			.property<static_cast<TextServer::OverrunBehavior (Button::*)() const>(&Button::get_text_overrun_behavior), static_cast<void (Button::*)(TextServer::OverrunBehavior)>(&Button::set_text_overrun_behavior)>((new std::string("text_overrun_behavior"))->c_str())
			.property<static_cast<TextServer::AutowrapMode (Button::*)() const>(&Button::get_autowrap_mode), static_cast<void (Button::*)(TextServer::AutowrapMode)>(&Button::set_autowrap_mode)>((new std::string("autowrap_mode"))->c_str())
			.property<static_cast<bool (Button::*)() const>(&Button::get_clip_text), static_cast<void (Button::*)(bool)>(&Button::set_clip_text)>((new std::string("clip_text"))->c_str())
			.property<static_cast<HorizontalAlignment (Button::*)() const>(&Button::get_icon_alignment), static_cast<void (Button::*)(HorizontalAlignment)>(&Button::set_icon_alignment)>((new std::string("icon_alignment"))->c_str())
			.property<static_cast<VerticalAlignment (Button::*)() const>(&Button::get_vertical_icon_alignment), static_cast<void (Button::*)(VerticalAlignment)>(&Button::set_vertical_icon_alignment)>((new std::string("vertical_icon_alignment"))->c_str())
			.property<static_cast<bool (Button::*)() const>(&Button::is_expand_icon), static_cast<void (Button::*)(bool)>(&Button::set_expand_icon)>((new std::string("expand_icon"))->c_str())
			.property<static_cast<Control::TextDirection (Button::*)() const>(&Button::get_text_direction), static_cast<void (Button::*)(Control::TextDirection)>(&Button::set_text_direction)>((new std::string("text_direction"))->c_str())
			.property<static_cast<String (Button::*)() const>(&Button::get_language), static_cast<void (Button::*)(const String &)>(&Button::set_language)>((new std::string("language"))->c_str());
}