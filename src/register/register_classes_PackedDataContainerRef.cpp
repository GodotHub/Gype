#include "register/register_classes.h"
#include <godot_cpp/classes/packed_data_container.hpp>

using namespace godot;

void register_classes_PackedDataContainerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PackedDataContainer>>("PackedDataContainerRef").constructor<PackedDataContainer *>();
}