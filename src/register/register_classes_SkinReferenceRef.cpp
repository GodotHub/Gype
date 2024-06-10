#include "register/register_classes.h"
#include <godot_cpp/classes/skin_reference.hpp>

using namespace godot;

void register_classes_SkinReferenceRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SkinReference>>("SkinReferenceRef").constructor<SkinReference *>();
}