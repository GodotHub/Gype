
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packed_data_container.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PackedDataContainer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PackedDataContainer>("PackedDataContainer")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<Error (PackedDataContainer::*)(const Variant &)>(&PackedDataContainer::pack)>((new std::string("pack"))->c_str())
			.fun<static_cast<int32_t (PackedDataContainer::*)() const>(&PackedDataContainer::size)>((new std::string("size"))->c_str());
}