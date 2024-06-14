#include <godot_cpp/classes/file_access.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/image_format_loader.hpp>
#include <godot_cpp/classes/image_format_loader_extension.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ImageFormatLoaderExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ImageFormatLoaderExtension>("ImageFormatLoaderExtension")
			.constructor<>()
			.base<ImageFormatLoader>()
			.fun<static_cast<PackedStringArray (ImageFormatLoaderExtension::*)() const>(&ImageFormatLoaderExtension::_get_recognized_extensions)>((new std::string("_get_recognized_extensions"))->c_str())
			.fun<static_cast<Error (ImageFormatLoaderExtension::*)(const Ref<Image> &, const Ref<FileAccess> &, BitField<ImageFormatLoader::LoaderFlags>, double)>(&ImageFormatLoaderExtension::_load_image)>((new std::string("_load_image"))->c_str())
			.fun<static_cast<void (ImageFormatLoaderExtension::*)()>(&ImageFormatLoaderExtension::add_format_loader)>((new std::string("add_format_loader"))->c_str())
			.fun<static_cast<void (ImageFormatLoaderExtension::*)()>(&ImageFormatLoaderExtension::remove_format_loader)>((new std::string("remove_format_loader"))->c_str());
}