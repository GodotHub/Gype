#include <godot_cpp/classes/sub_viewport.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SubViewport() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<SubViewport>("SubViewport")
			.constructor<>()
			.base<Viewport>()
			.property<static_cast<Vector2i (SubViewport::*)() const>(&SubViewport::get_size), static_cast<void (SubViewport::*)(const Vector2i &)>(&SubViewport::set_size)>((new std::string("size"))->c_str())
			.property<static_cast<Vector2i (SubViewport::*)() const>(&SubViewport::get_size_2d_override), static_cast<void (SubViewport::*)(const Vector2i &)>(&SubViewport::set_size_2d_override)>((new std::string("size_2d_override"))->c_str())
			.property<static_cast<bool (SubViewport::*)() const>(&SubViewport::is_size_2d_override_stretch_enabled), static_cast<void (SubViewport::*)(bool)>(&SubViewport::set_size_2d_override_stretch)>((new std::string("size_2d_override_stretch"))->c_str())
			.property<static_cast<SubViewport::ClearMode (SubViewport::*)() const>(&SubViewport::get_clear_mode), static_cast<void (SubViewport::*)(SubViewport::ClearMode)>(&SubViewport::set_clear_mode)>((new std::string("render_target_clear_mode"))->c_str())
			.property<static_cast<SubViewport::UpdateMode (SubViewport::*)() const>(&SubViewport::get_update_mode), static_cast<void (SubViewport::*)(SubViewport::UpdateMode)>(&SubViewport::set_update_mode)>((new std::string("render_target_update_mode"))->c_str());
	qjs::Value _ClearMode = context->newObject();
	_ClearMode[(new std::string("CLEAR_MODE_ALWAYS"))->c_str()] = SubViewport::ClearMode::CLEAR_MODE_ALWAYS;
	_ClearMode[(new std::string("CLEAR_MODE_NEVER"))->c_str()] = SubViewport::ClearMode::CLEAR_MODE_NEVER;
	_ClearMode[(new std::string("CLEAR_MODE_ONCE"))->c_str()] = SubViewport::ClearMode::CLEAR_MODE_ONCE;
	_module.add("ClearMode", std::move(_ClearMode));
	qjs::Value _UpdateMode = context->newObject();
	_UpdateMode[(new std::string("UPDATE_DISABLED"))->c_str()] = SubViewport::UpdateMode::UPDATE_DISABLED;
	_UpdateMode[(new std::string("UPDATE_ONCE"))->c_str()] = SubViewport::UpdateMode::UPDATE_ONCE;
	_UpdateMode[(new std::string("UPDATE_WHEN_VISIBLE"))->c_str()] = SubViewport::UpdateMode::UPDATE_WHEN_VISIBLE;
	_UpdateMode[(new std::string("UPDATE_WHEN_PARENT_VISIBLE"))->c_str()] = SubViewport::UpdateMode::UPDATE_WHEN_PARENT_VISIBLE;
	_UpdateMode[(new std::string("UPDATE_ALWAYS"))->c_str()] = SubViewport::UpdateMode::UPDATE_ALWAYS;
	_module.add("UpdateMode", std::move(_UpdateMode));
}