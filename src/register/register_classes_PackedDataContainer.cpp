#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packed_data_container.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PackedDataContainer() {
	qjs::Context::Module &_module = _General;
	_module.class_<PackedDataContainer>("PackedDataContainer")
			.constructor<>()
			.fun<static_cast<Error (PackedDataContainer::*)(const Variant &)>(&PackedDataContainer::pack)>("pack")
			.fun<static_cast<int32_t (PackedDataContainer::*)() const>(&PackedDataContainer::size)>("size");
}