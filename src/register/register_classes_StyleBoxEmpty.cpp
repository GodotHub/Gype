#include <godot_cpp/classes/style_box_empty.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_StyleBoxEmpty() {
	qjs::Context::Module &_module = _General;
	_module.class_<StyleBoxEmpty>("StyleBoxEmpty")
			.constructor<>();
}