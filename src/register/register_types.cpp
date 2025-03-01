#include "register/register_types.h"
#include "quickjs/env.h"
#include "quickjs/event_loop.h"
#include "quickjs/quickjs.h"
#include "register/builtin_classes/register_builtin_classes.h"
#include "register/classes/register_classes.h"
#include "register/utility_functions/register_utility_functions.h"
#include "support/module_loader.hpp"
#include "support/typescript.hpp"
#include "support/typescript_language.hpp"
#include "support/typescript_loader.hpp"
#include "support/typescript_saver.hpp"
#include <gdextension_interface.h>
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/resource_loader.hpp>
#include <godot_cpp/classes/resource_saver.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/defs.hpp>

using namespace godot;

void initialize_tgds_types(godot::ModuleInitializationLevel p_level) {
	if (p_level != godot::ModuleInitializationLevel::MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	UtilityFunctions::print("Quickjs start initialization");
	init_language();
	init_quickjs();
	UtilityFunctions::print("Quickjs initialization is over");
}

void uninitialize_tgds_types(godot::ModuleInitializationLevel p_level) {
	if (p_level != godot::ModuleInitializationLevel::MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	Engine::get_singleton()->unregister_script_language(TypeScriptLanguage::get_singleton());
	ResourceSaver::get_singleton()->remove_resource_format_saver(TypeScriptSaver::get_singleton());
	ResourceLoader::get_singleton()->remove_resource_format_loader(TypeScriptLoader::get_singleton());
	memdelete(TypeScriptLanguage::get_singleton());
	memdelete(TypeScriptSaver::get_singleton());
	memdelete(TypeScriptLoader::get_singleton());
	UtilityFunctions::print("Quickjs close");
}

void init_quickjs() {
	rt = JS_NewRuntime();
	ctx = JS_NewContext(rt);
	create_event_loop(rt);
	register_builtin_classes();
	register_utility_functions();
	register_classes();
	JS_SetModuleLoaderFunc(rt, NULL, module_loader, NULL);
}

void init_language() {
	GDREGISTER_CLASS(TypeScriptLoader);
	GDREGISTER_CLASS(TypeScriptSaver);
	GDREGISTER_CLASS(TypeScriptLanguage);
	GDREGISTER_CLASS(TypeScript);
	Engine::get_singleton()->register_script_language(TypeScriptLanguage::get_singleton());
	ResourceSaver::get_singleton()->add_resource_format_saver(TypeScriptSaver::get_singleton());
	ResourceLoader::get_singleton()->add_resource_format_loader(TypeScriptLoader::get_singleton());
}

extern "C" {

GDExtensionBool GDE_EXPORT tgds_library_init(GDExtensionInterfaceGetProcAddress p_get_proc_address, GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization) {
	godot::GDExtensionBinding::InitObject initObj(p_get_proc_address, p_library, r_initialization);

	initObj.register_initializer(initialize_tgds_types);
	initObj.register_terminator(uninitialize_tgds_types);
	initObj.set_minimum_library_initialization_level(godot::ModuleInitializationLevel::MODULE_INITIALIZATION_LEVEL_SCENE);

	return initObj.init();
}
}