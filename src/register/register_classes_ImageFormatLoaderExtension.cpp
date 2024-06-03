#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/image_format_loader_extension.hpp>

using namespace godot;

void register_classes_ImageFormatLoaderExtension() {
    qjs::Context::Module &_module = _General;
    _module.class_<ImageFormatLoaderExtension>("ImageFormatLoaderExtension")
           .constructor<>()
		    .fun<static_cast<PackedStringArray(ImageFormatLoaderExtension::*)()const>(&ImageFormatLoaderExtension::_get_recognized_extensions)>("_get_recognized_extensions")
		    .fun<static_cast<Error(ImageFormatLoaderExtension::*)(const Ref<Image> &,const Ref<FileAccess> &,BitField<ImageFormatLoader::LoaderFlags>,double)>(&ImageFormatLoaderExtension::_load_image)>("_load_image")
		    .fun<static_cast<void(ImageFormatLoaderExtension::*)()>(&ImageFormatLoaderExtension::add_format_loader)>("add_format_loader")
		    .fun<static_cast<void(ImageFormatLoaderExtension::*)()>(&ImageFormatLoaderExtension::remove_format_loader)>("remove_format_loader")
;}