#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/missing_resource.hpp>

using namespace godot;

void register_classes_MissingResource() {
    qjs::Context::Module &_module = _General;
    _module.class_<MissingResource>("MissingResource")
           .constructor<>()
           .property<MissingResource::get_original_class, MissingResource::set_original_class>("original_class")
           .property<MissingResource::is_recording_properties, MissingResource::set_recording_properties>("recording_properties")
;}