#include "register/register_types.h"
#include "gde/gdextension_api.h"
#include "register/utils.h"

void register_gdextension_api() {
	context.global().add("printWarning", printWarning);
}

void initialize_tgds_types(void *user_data, GDExtensionInitializationLevel p_level) {
	if (p_level != GDEXTENSION_MAX_INITIALIZATION_LEVEL) {
		return;
	}
}

void uninitialize_tgds_types(void *user_data, GDExtensionInitializationLevel p_level) {
	if (p_level != GDEXTENSION_MAX_INITIALIZATION_LEVEL) {
		return;
	}
}

extern "C" {

// Initialization.

GDExtensionBool __declspec(dllexport) tgds_library_init(GDExtensionInterfaceGetProcAddress p_get_proc_address, GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization) {
	r_initialization->initialize = initialize_tgds_types;
	r_initialization->deinitialize = uninitialize_tgds_types;
	r_initialization->minimum_initialization_level = GDEXTENSION_MAX_INITIALIZATION_LEVEL;

	printWarning = (GDExtensionInterfacePrintWarning)p_get_proc_address("print_warning");
	printWarning("test", "test", "test", 0, false);
	return true;
}
}