#include "register/register_classes.h"
#include <godot_cpp/classes/style_box_line.hpp>

using namespace godot;

void register_classes_StyleBoxLineRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<StyleBoxLine>>("StyleBoxLineRef").constructor<StyleBoxLine *>();
}