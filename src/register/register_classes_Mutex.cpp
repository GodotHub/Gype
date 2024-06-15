#include <godot_cpp/classes/mutex.hpp>
#include <godot_cpp/classes/ref_counted.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Mutex() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Mutex>("Mutex")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<void(Mutex::*)()>(&Mutex::lock)>("lock")
            .fun<static_cast<bool(Mutex::*)()>(&Mutex::try_lock)>("try_lock")
            .fun<static_cast<void(Mutex::*)()>(&Mutex::unlock)>("unlock")
;}