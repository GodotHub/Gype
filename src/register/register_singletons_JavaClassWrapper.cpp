#include <godot_cpp/classes/java_class_wrapper.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/java_class.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_JavaClassWrapper() {
	qjs::Value js_singleton = context->newObject();
    JavaClassWrapper *singleton = JavaClassWrapper::get_singleton();
    js_singleton.add("wrap", [singleton](const String & name)->Ref<JavaClass>{return singleton->wrap(name);});
    context->global()["JavaClassWrapper"] = js_singleton;

}