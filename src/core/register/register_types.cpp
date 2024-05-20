#include "register/register_types.h"
#include "quickjs/quickjspp.hpp"
#include <gdextension_interface.h>
#include <functional>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/godot.hpp>

using namespace godot;

qjs::Runtime runtime;
qjs::Context context(runtime);

void register_gdextension_api() {
	context.global().add("memAlloc", internal::gdextension_interface_mem_alloc);
	context.global().add("memRealloc", internal::gdextension_interface_mem_realloc);
	context.global().add("print_warning", internal::gdextension_interface_print_warning);
}

void initialize_tgds_types(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_EDITOR) {
		return;
	}
	register_gdextension_api();
	// context.eval(R"(print_warning('test2','test2','test2',0,false))");
}

void uninitialize_tgds_types(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_EDITOR) {
		return;
	}
}

extern "C" {

// Initialization.

GDExtensionBool GDE_EXPORT tgds_library_init(GDExtensionInterfaceGetProcAddress p_get_proc_address, GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization) {
	GDExtensionBinding::InitObject init_obj(p_get_proc_address, p_library, r_initialization);

	init_obj.register_initializer(initialize_tgds_types);
	init_obj.register_terminator(uninitialize_tgds_types);
	init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_EDITOR);

	return init_obj.init();
}
}