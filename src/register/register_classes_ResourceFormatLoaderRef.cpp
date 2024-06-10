#include "register/register_classes.h"
#include <godot_cpp/classes/resource_format_loader.hpp>

using namespace godot;

void register_classes_ResourceFormatLoaderRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ResourceFormatLoader>>("ResourceFormatLoaderRef").constructor<ResourceFormatLoader *>();
}