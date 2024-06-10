#include "register/register_classes.h"
#include <godot_cpp/classes/font.hpp>

using namespace godot;

void register_classes_FontRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Font>>("FontRef").constructor<Font *>();
}