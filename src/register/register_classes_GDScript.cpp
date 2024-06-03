#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gd_script.hpp>

using namespace godot;

void register_classes_GDScript() {
    qjs::Context::Module &_module = _General;
    _module.class_<GDScript>("GDScript")
           .constructor<>()
		    .fun<static_cast<Variant(GDScript::*)()>(&GDScript::new)>("new")
;}