#include "register/register_classes.h"
#include <godot_cpp/classes/tls_options.hpp>

using namespace godot;

void register_classes_TLSOptionsRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TLSOptions>>("TLSOptionsRef").constructor<TLSOptions *>();
}