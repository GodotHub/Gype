#include "register/register_types.h"
#include "quickjspp/quickjspp.hpp"
#include <gdextension_interface.h>
#include <functional>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/godot.hpp>

using namespace godot;

qjs::Runtime runtime;
qjs::Context context(runtime);
std::function<void *(size_t)> gdextension_function_mem_alloc = internal::gdextension_interface_mem_alloc;

void register_gdextension_api() {
	context.global().add("memAlloc", gdextension_function_mem_alloc);
}

void initialize_typed_gds_types(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	register_gdextension_api();
}

void uninitialize_typed_gds_types(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}

extern "C" {

// Initialization.

GDExtensionBool GDE_EXPORT gmui_library_init(GDExtensionInterfaceGetProcAddress p_get_proc_address, GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization) {
	GDExtensionBinding::InitObject init_obj(p_get_proc_address, p_library, r_initialization);

	init_obj.register_initializer(initialize_typed_gds_types);
	init_obj.register_terminator(uninitialize_typed_gds_types);
	init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);

	return init_obj.init();
}
}