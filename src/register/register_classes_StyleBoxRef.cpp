#include "register/register_classes.h"
#include <godot_cpp/classes/style_box.hpp>

using namespace godot;

void register_classes_StyleBoxRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<StyleBox>>("StyleBoxRef").constructor<StyleBox *>();
}