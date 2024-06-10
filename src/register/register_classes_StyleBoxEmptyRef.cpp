#include "register/register_classes.h"
#include <godot_cpp/classes/style_box_empty.hpp>

using namespace godot;

void register_classes_StyleBoxEmptyRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<StyleBoxEmpty>>("StyleBoxEmptyRef").constructor<StyleBoxEmpty *>();
}