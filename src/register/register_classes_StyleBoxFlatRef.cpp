#include "register/register_classes.h"
#include <godot_cpp/classes/style_box_flat.hpp>

using namespace godot;

void register_classes_StyleBoxFlatRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<StyleBoxFlat>>("StyleBoxFlatRef").constructor<StyleBoxFlat *>();
}