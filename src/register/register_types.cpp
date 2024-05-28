#include "register/register_types.h"
#include "register/utils.h"
#include "godot_cpp/variant/utility_functions.hpp"

using namespace godot;

void initialize_tgds_types(ModuleInitializationLevel p_level)
{
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE)
	{
		return;
	}
}

void uninitialize_tgds_types(ModuleInitializationLevel p_level)
{
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE)
	{
		return;
	}
	context.global().add<UtilityFunctions::print>("print");
}

extern "C"
{
	// Initialization.
	GDExtensionBool __declspec(dllexport) tgds_library_init(GDExtensionInterfaceGetProcAddress p_get_proc_address, GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization)
	{
		GDExtensionBinding::InitObject init(p_get_proc_address, p_library, r_initialization);
		init.register_initializer(initialize_tgds_types);
		init.register_terminator(uninitialize_tgds_types);
		init.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);
		return true;
	}
}