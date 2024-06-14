#include "register/register_builtin_classes.h"

#include "qjspp/utils.h"

using namespace godot;

qjs::Context::Module &get_Variant_module() {
	static qjs::Context::Module &_Variant = context->addModule("Variant");
	return _Variant;
}