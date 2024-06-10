#include "register/register_classes.h"
#include <godot_cpp/classes/weak_ref.hpp>

using namespace godot;

void register_classes_WeakRefRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<WeakRef>>("WeakRefRef").constructor<WeakRef *>();
}