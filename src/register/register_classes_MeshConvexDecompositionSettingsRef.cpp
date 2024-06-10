#include "register/register_classes.h"
#include <godot_cpp/classes/mesh_convex_decomposition_settings.hpp>

using namespace godot;

void register_classes_MeshConvexDecompositionSettingsRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<MeshConvexDecompositionSettings>>("MeshConvexDecompositionSettingsRef").constructor<MeshConvexDecompositionSettings *>();
}