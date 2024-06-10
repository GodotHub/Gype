#include "register/register_classes.h"
#include <godot_cpp/classes/resource_importer_image_font.hpp>

using namespace godot;

void register_classes_ResourceImporterImageFontRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ResourceImporterImageFont>>("ResourceImporterImageFontRef").constructor<ResourceImporterImageFont *>();
}