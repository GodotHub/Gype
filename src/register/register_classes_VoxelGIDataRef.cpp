#include "register/register_classes.h"
#include <godot_cpp/classes/voxel_gi_data.hpp>

using namespace godot;

void register_classes_VoxelGIDataRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<VoxelGIData>>("VoxelGIDataRef").constructor<VoxelGIData *>();
}