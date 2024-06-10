#include "register/register_classes.h"
#include <godot_cpp/classes/image_format_loader_extension.hpp>

using namespace godot;

void register_classes_ImageFormatLoaderExtensionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ImageFormatLoaderExtension>>("ImageFormatLoaderExtensionRef").constructor<ImageFormatLoaderExtension *>();
}