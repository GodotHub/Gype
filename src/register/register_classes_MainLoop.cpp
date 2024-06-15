#include <godot_cpp/classes/main_loop.hpp>
#include <godot_cpp/classes/object.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_MainLoop() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<MainLoop>("MainLoop")
            .constructor<>()
            .base<Object>()
            .static_fun<&MainLoop::NOTIFICATION_OS_MEMORY_WARNING>("NOTIFICATION_OS_MEMORY_WARNING")
            .static_fun<&MainLoop::NOTIFICATION_TRANSLATION_CHANGED>("NOTIFICATION_TRANSLATION_CHANGED")
            .static_fun<&MainLoop::NOTIFICATION_WM_ABOUT>("NOTIFICATION_WM_ABOUT")
            .static_fun<&MainLoop::NOTIFICATION_CRASH>("NOTIFICATION_CRASH")
            .static_fun<&MainLoop::NOTIFICATION_OS_IME_UPDATE>("NOTIFICATION_OS_IME_UPDATE")
            .static_fun<&MainLoop::NOTIFICATION_APPLICATION_RESUMED>("NOTIFICATION_APPLICATION_RESUMED")
            .static_fun<&MainLoop::NOTIFICATION_APPLICATION_PAUSED>("NOTIFICATION_APPLICATION_PAUSED")
            .static_fun<&MainLoop::NOTIFICATION_APPLICATION_FOCUS_IN>("NOTIFICATION_APPLICATION_FOCUS_IN")
            .static_fun<&MainLoop::NOTIFICATION_APPLICATION_FOCUS_OUT>("NOTIFICATION_APPLICATION_FOCUS_OUT")
            .static_fun<&MainLoop::NOTIFICATION_TEXT_SERVER_CHANGED>("NOTIFICATION_TEXT_SERVER_CHANGED")
            .fun<static_cast<void(MainLoop::*)()>(&MainLoop::_initialize)>("_initialize")
            .fun<static_cast<bool(MainLoop::*)(double)>(&MainLoop::_physics_process)>("_physics_process")
            .fun<static_cast<bool(MainLoop::*)(double)>(&MainLoop::_process)>("_process")
            .fun<static_cast<void(MainLoop::*)()>(&MainLoop::_finalize)>("_finalize")
;}