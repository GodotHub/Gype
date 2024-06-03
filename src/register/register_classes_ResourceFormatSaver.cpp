#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/resource_format_saver.hpp>

using namespace godot;

void register_classes_ResourceFormatSaver() {
    qjs::Context::Module &_module = _General;
    _module.class_<ResourceFormatSaver>("ResourceFormatSaver")
           .constructor<>()
		    .fun<static_cast<Error(ResourceFormatSaver::*)(const Ref<Resource> &,const String &,uint32_t)>(&ResourceFormatSaver::_save)>("_save")
		    .fun<static_cast<Error(ResourceFormatSaver::*)(const String &,int64_t)>(&ResourceFormatSaver::_set_uid)>("_set_uid")
		    .fun<static_cast<bool(ResourceFormatSaver::*)(const Ref<Resource> &)const>(&ResourceFormatSaver::_recognize)>("_recognize")
		    .fun<static_cast<PackedStringArray(ResourceFormatSaver::*)(const Ref<Resource> &)const>(&ResourceFormatSaver::_get_recognized_extensions)>("_get_recognized_extensions")
		    .fun<static_cast<bool(ResourceFormatSaver::*)(const Ref<Resource> &,const String &)const>(&ResourceFormatSaver::_recognize_path)>("_recognize_path")
;}