#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/mutex.hpp>

using namespace godot;

void register_classes_Mutex() {
    qjs::Context::Module &_module = _General;
    _module.class_<Mutex>("Mutex")
           .constructor<>()
		    .fun<static_cast<void(Mutex::*)()>(&Mutex::lock)>("lock")
		    .fun<static_cast<bool(Mutex::*)()>(&Mutex::try_lock)>("try_lock")
		    .fun<static_cast<void(Mutex::*)()>(&Mutex::unlock)>("unlock")
;}