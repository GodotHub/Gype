#include "register/register_classes.h"
#include <godot_cpp/classes/ref_counted.hpp>

using namespace godot;

void register_classes_RefCountedRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RefCounted>>("RefCountedRef").constructor<RefCounted *>();
}