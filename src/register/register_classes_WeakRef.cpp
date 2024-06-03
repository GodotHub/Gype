#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/weak_ref.hpp>

using namespace godot;

void register_classes_WeakRef() {
    qjs::Context::Module &_module = _General;
    _module.class_<WeakRef>("WeakRef")
           .constructor<>()
		    .fun<static_cast<Variant(WeakRef::*)()const>(&WeakRef::get_ref)>("get_ref")
;}