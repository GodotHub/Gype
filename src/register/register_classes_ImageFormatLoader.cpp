#include <godot_cpp/classes/image_format_loader.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ImageFormatLoader() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ImageFormatLoader>("ImageFormatLoader")
			.constructor<>()
			.base<RefCounted>();
	qjs::Value _LoaderFlags = context->newObject();
	_LoaderFlags[(new std::string("FLAG_NONE"))->c_str()] = ImageFormatLoader::LoaderFlags::FLAG_NONE;
	_LoaderFlags[(new std::string("FLAG_FORCE_LINEAR"))->c_str()] = ImageFormatLoader::LoaderFlags::FLAG_FORCE_LINEAR;
	_LoaderFlags[(new std::string("FLAG_CONVERT_COLORS"))->c_str()] = ImageFormatLoader::LoaderFlags::FLAG_CONVERT_COLORS;
	_module.add("LoaderFlags", std::move(_LoaderFlags));
}