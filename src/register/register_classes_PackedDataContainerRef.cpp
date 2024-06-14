
#include <godot_cpp/classes/packed_data_container_ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PackedDataContainerRef() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PackedDataContainerRef>("PackedDataContainerRef")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<int32_t (PackedDataContainerRef::*)() const>(&PackedDataContainerRef::size)>((new std::string("size"))->c_str());
}