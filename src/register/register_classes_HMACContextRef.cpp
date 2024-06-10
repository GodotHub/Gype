#include "register/register_classes.h"
#include <godot_cpp/classes/hmac_context.hpp>

using namespace godot;

void register_classes_HMACContextRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<HMACContext>>("HMACContextRef").constructor<HMACContext *>();
}