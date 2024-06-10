#include "register/register_classes.h"
#include <godot_cpp/classes/packed_data_container_ref.hpp>

using namespace godot;

void register_classes_PackedDataContainerRefRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PackedDataContainerRef>>("PackedDataContainerRefRef").constructor<PackedDataContainerRef *>();
}