#include <godot_cpp/classes/back_buffer_copy.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_BackBufferCopy() {
	qjs::Context::Module &_module = _Node2D;
	_module.class_<BackBufferCopy>("BackBufferCopy")
			.constructor<>()
			.property<&BackBufferCopy::get_copy_mode, &BackBufferCopy::set_copy_mode>("copy_mode")
			.property<&BackBufferCopy::get_rect, &BackBufferCopy::set_rect>("rect");
}