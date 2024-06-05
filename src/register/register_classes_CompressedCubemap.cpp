#include <godot_cpp/classes/compressed_cubemap.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_CompressedCubemap() {
	qjs::Context::Module &_module = _General;
	_module.class_<CompressedCubemap>("CompressedCubemap")
			.constructor<>();
}