#include "register/register_classes.h"
#include <godot_cpp/classes/http_client.hpp>

using namespace godot;

void register_classes_HTTPClientRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<HTTPClient>>("HTTPClientRef").constructor<HTTPClient *>();
}