#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/resource_saver.hpp>

using namespace godot;

void register_classes_ResourceSaver() {
    qjs::Context::Module &_module = _General;
    _module.class_<ResourceSaver>("ResourceSaver")
           .constructor<>()
		    .fun<static_cast<Error(ResourceSaver::*)(const Ref<Resource> &,const String &,BitField<ResourceSaver::SaverFlags>)>(&ResourceSaver::save)>("save")
		    .fun<static_cast<PackedStringArray(ResourceSaver::*)(const Ref<Resource> &)>(&ResourceSaver::get_recognized_extensions)>("get_recognized_extensions")
		    .fun<static_cast<void(ResourceSaver::*)(const Ref<ResourceFormatSaver> &,bool)>(&ResourceSaver::add_resource_format_saver)>("add_resource_format_saver")
		    .fun<static_cast<void(ResourceSaver::*)(const Ref<ResourceFormatSaver> &)>(&ResourceSaver::remove_resource_format_saver)>("remove_resource_format_saver")
;}