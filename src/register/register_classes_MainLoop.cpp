#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_MainLoop() {
    qjs::Context::Module &_module = _System;
    _module.class_<MainLoop>("MainLoop")
           .constructor<>()
		   .fun<static_cast<void(MainLoop::*)()>(&MainLoop::_initialize)>("_initialize")
		   .fun<static_cast<bool(MainLoop::*)(double)>(&MainLoop::_physics_process)>("_physics_process")
		   .fun<static_cast<bool(MainLoop::*)(double)>(&MainLoop::_process)>("_process")
		   .fun<static_cast<void(MainLoop::*)()>(&MainLoop::_finalize)>("_finalize")
;}