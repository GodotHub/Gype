#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gd_extension.hpp>

using namespace godot;

void register_classes_GDExtension() {
    qjs::Context::Module &_module = _General;
    _module.class_<GDExtension>("GDExtension")
           .constructor<>()
		    .fun<static_cast<Error(GDExtension::*)(const String &,const String &)>(&GDExtension::open_library)>("open_library")
		    .fun<static_cast<void(GDExtension::*)()>(&GDExtension::close_library)>("close_library")
		    .fun<static_cast<bool(GDExtension::*)()const>(&GDExtension::is_library_open)>("is_library_open")
		    .fun<static_cast<GDExtension::InitializationLevel(GDExtension::*)()const>(&GDExtension::get_minimum_library_initialization_level)>("get_minimum_library_initialization_level")
		    .fun<static_cast<void(GDExtension::*)(GDExtension::InitializationLevel)>(&GDExtension::initialize_library)>("initialize_library")
;}