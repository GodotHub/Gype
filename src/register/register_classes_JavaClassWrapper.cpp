#include <godot_cpp/classes/java_class.hpp>
#include <godot_cpp/classes/java_class_wrapper.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_JavaClassWrapper() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<JavaClassWrapper>("JavaClassWrapper")
			.fun<static_cast<Ref<JavaClass> (JavaClassWrapper::*)(const String &)>(&JavaClassWrapper::wrap)>("wrap");
}