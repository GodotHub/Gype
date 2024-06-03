#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/packed_data_container.hpp>

using namespace godot;

void register_classes_PackedDataContainer() {
    qjs::Context::Module &_module = _General;
    _module.class_<PackedDataContainer>("PackedDataContainer")
           .constructor<>()
		    .fun<static_cast<Error(PackedDataContainer::*)(const Variant &)>(&PackedDataContainer::pack)>("pack")
		    .fun<static_cast<int32_t(PackedDataContainer::*)()const>(&PackedDataContainer::size)>("size")
;}