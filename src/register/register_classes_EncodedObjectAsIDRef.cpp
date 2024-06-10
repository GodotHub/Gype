#include "register/register_classes.h"
#include <godot_cpp/classes/encoded_object_as_id.hpp>

using namespace godot;

void register_classes_EncodedObjectAsIDRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EncodedObjectAsID>>("EncodedObjectAsIDRef").constructor<EncodedObjectAsID *>();
}