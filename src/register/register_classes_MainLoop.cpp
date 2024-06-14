#include <godot_cpp/classes/main_loop.hpp>
#include <godot_cpp/classes/object.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MainLoop() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<MainLoop>("MainLoop")
			.constructor<>()
			.base<Object>()
			.static_fun<&MainLoop::NOTIFICATION_OS_MEMORY_WARNING>((new std::string("NOTIFICATION_OS_MEMORY_WARNING"))->c_str())
			.static_fun<&MainLoop::NOTIFICATION_TRANSLATION_CHANGED>((new std::string("NOTIFICATION_TRANSLATION_CHANGED"))->c_str())
			.static_fun<&MainLoop::NOTIFICATION_WM_ABOUT>((new std::string("NOTIFICATION_WM_ABOUT"))->c_str())
			.static_fun<&MainLoop::NOTIFICATION_CRASH>((new std::string("NOTIFICATION_CRASH"))->c_str())
			.static_fun<&MainLoop::NOTIFICATION_OS_IME_UPDATE>((new std::string("NOTIFICATION_OS_IME_UPDATE"))->c_str())
			.static_fun<&MainLoop::NOTIFICATION_APPLICATION_RESUMED>((new std::string("NOTIFICATION_APPLICATION_RESUMED"))->c_str())
			.static_fun<&MainLoop::NOTIFICATION_APPLICATION_PAUSED>((new std::string("NOTIFICATION_APPLICATION_PAUSED"))->c_str())
			.static_fun<&MainLoop::NOTIFICATION_APPLICATION_FOCUS_IN>((new std::string("NOTIFICATION_APPLICATION_FOCUS_IN"))->c_str())
			.static_fun<&MainLoop::NOTIFICATION_APPLICATION_FOCUS_OUT>((new std::string("NOTIFICATION_APPLICATION_FOCUS_OUT"))->c_str())
			.static_fun<&MainLoop::NOTIFICATION_TEXT_SERVER_CHANGED>((new std::string("NOTIFICATION_TEXT_SERVER_CHANGED"))->c_str())
			.fun<static_cast<void (MainLoop::*)()>(&MainLoop::_initialize)>((new std::string("_initialize"))->c_str())
			.fun<static_cast<bool (MainLoop::*)(double)>(&MainLoop::_physics_process)>((new std::string("_physics_process"))->c_str())
			.fun<static_cast<bool (MainLoop::*)(double)>(&MainLoop::_process)>((new std::string("_process"))->c_str())
			.fun<static_cast<void (MainLoop::*)()>(&MainLoop::_finalize)>((new std::string("_finalize"))->c_str());
}