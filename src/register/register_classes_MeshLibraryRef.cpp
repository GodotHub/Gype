#include "register/register_classes.h"
#include <godot_cpp/classes/mesh_library.hpp>

using namespace godot;

void register_classes_MeshLibraryRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<MeshLibrary>>("MeshLibraryRef").constructor<MeshLibrary *>();
}