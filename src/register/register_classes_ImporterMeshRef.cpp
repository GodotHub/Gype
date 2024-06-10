#include "register/register_classes.h"
#include <godot_cpp/classes/importer_mesh.hpp>

using namespace godot;

void register_classes_ImporterMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ImporterMesh>>("ImporterMeshRef").constructor<ImporterMesh *>();
}