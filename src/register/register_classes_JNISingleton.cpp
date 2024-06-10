#include <godot_cpp/classes/jni_singleton.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_JNISingleton() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<JNISingleton>("JNISingleton")
			.constructor<>();
}