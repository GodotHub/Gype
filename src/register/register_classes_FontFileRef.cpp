#include "register/register_classes.h"
#include <godot_cpp/classes/font_file.hpp>

using namespace godot;

void register_classes_FontFileRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<FontFile>>("FontFileRef").constructor<FontFile *>();
}