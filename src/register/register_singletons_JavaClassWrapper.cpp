#include <godot_cpp/classes/java_class.hpp>
#include <godot_cpp/classes/java_class_wrapper.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_JavaClassWrapper() {
	qjs::Value js_singleton = context->newObject();
	JavaClassWrapper *singleton = JavaClassWrapper::get_singleton();
	js_singleton.add((new std::string("wrap"))->c_str(), [singleton](const String &name) -> Ref<JavaClass> { return singleton->wrap(name); });
	context->global()[(new std::string("JavaClassWrapper"))->c_str()] = js_singleton;
}