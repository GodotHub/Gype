#include "register/register_classes.h"
#include <godot_cpp/classes/image_format_loader.hpp>

using namespace godot;

void register_classes_ImageFormatLoaderRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ImageFormatLoader>>("ImageFormatLoaderRef").constructor<ImageFormatLoader *>();
}