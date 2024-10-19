#include "register/register_types.h"
#include "quickjs/env.h"
#include "register/builtin_classes/register_builtin_classes.h"
#include "register/classes/register_classes.h"
#include "register/utility_functions/register_utility_functions.h"
#include "support/console_support.hpp"
#include "support/javascript.hpp"
#include "support/javascript_language.hpp"
#include "support/javascript_loader.hpp"
#include "support/javascript_saver.hpp"
#include "support/module_loader.hpp"
#include <gdextension_interface.h>
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/resource_loader.hpp>
#include <godot_cpp/classes/resource_saver.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/defs.hpp>

// bug 无法关闭程序
// #ifdef DEBUG_ENABLED
#include "array_test/array_test.hpp"
#include "call_test/call_test.hpp"
#include "dict_test/dict_test.hpp"
#include "gdstring_test/gdstring_test.hpp"
#include "node_test/node_test.hpp"
#include "number_test/number_test.hpp"

// #endif

using namespace godot;

// #include "support/typescript.h"
// #include "support/typescript_language.h"
// #include "support/typescript_loader.h"
// #include "support/typescript_saver.h"

void initialize_tgds_types(godot::ModuleInitializationLevel p_level) {
	if (p_level != godot::ModuleInitializationLevel::MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	RedirectIOToConsole();
	printf("%s", "Quickjs start initialization\n");
	init_quickjs();
	init_language();
#ifdef DEBUG_ENABLED
	// test_gdstring();
	// test_number();
	// test_array();
	// test_dict();
	// test_call();
	// test_node();
#endif // DEBUG
	printf("%s", "Quickjs initialization is over\n");
}

void uninitialize_tgds_types(godot::ModuleInitializationLevel p_level) {
	if (p_level != godot::ModuleInitializationLevel::MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	Engine::get_singleton()->unregister_script_language(JavaScriptLanguage::get_singleton());
	ResourceSaver::get_singleton()->remove_resource_format_saver(JavaScriptSaver::get_singleton());
	ResourceLoader::get_singleton()->remove_resource_format_loader(JavaScriptLoader::get_singleton());
	// memdelete(JavaScriptLanguage::get_singleton());
	// memdelete(JavaScriptSaver::get_singleton());
	// memdelete(JavaScriptLoader::get_singleton());
	printf("Quickjs close\n");
}

void init_quickjs() {
	rt = JS_NewRuntime();
	ctx = JS_NewContext(rt);
	register_utility_functions();
	register_builtin_classes();
	register_classes();
	JS_AddIntrinsicOperators(ctx);
	JS_SetModuleLoaderFunc(rt, NULL, module_loader, NULL);
}

void init_language() {
	GDREGISTER_CLASS(JavaScriptLoader);
	GDREGISTER_CLASS(JavaScriptSaver);
	GDREGISTER_CLASS(JavaScriptLanguage);
	GDREGISTER_CLASS(JavaScript);
	Engine::get_singleton()->register_script_language(JavaScriptLanguage::get_singleton());
	ResourceSaver::get_singleton()->add_resource_format_saver(JavaScriptSaver::get_singleton());
	ResourceLoader::get_singleton()->add_resource_format_loader(JavaScriptLoader::get_singleton());
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