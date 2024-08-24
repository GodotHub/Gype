#include "register/register_types.h"
#include "gdextension_interface.h"
#include "godot_cpp/godot.hpp"
#include "quickjs/env.h"
#include "quickjs/finalizer.h"
#include "register/register_internal_api.h"
#include "register/register_utility_functions.h"
#include <godot_cpp/core/os_windows.hpp>

#ifdef DEBUG_ENABLED
#include "class_db_test/class_db_test.hpp"
#include "gdstring_test/gdstring_test.hpp"
#include "node_path_test/node_path_test.hpp"
#include "variant_test/variant_test.hpp"

#endif

// #include "support/typescript.h"
// #include "support/typescript_language.h"
// #include "support/typescript_loader.h"
// #include "support/typescript_saver.h"

void initialize_tgds_types(void *user_data, GDExtensionInitializationLevel p_level) {
	if (p_level != GDEXTENSION_INITIALIZATION_SCENE) {
		return;
	}
	RedirectIOToConsole();
	printf("%s", "Quickjs start initialization\n");
	init_quickjs();
#ifdef DEBUG_ENABLED
	// test_variant();
	// test_gdstring();
	// test_node_path();
	test_class_db();
#endif // DEBUG
	// JSValue value = context.eval("import { GD } from 'src/js_godot/variant/utility_functions.js';GD.print('123');", "<eval>", JS_EVAL_TYPE_MODULE);
	// context.eval("import { StringName } from 'src/js_godot/variant/string_name.js';new StringName();", "<eval>", JS_EVAL_TYPE_MODULE);
	// context.eval(R"xxx(
	// 	// import { StringName } from 'src/js_godot/variant/string_name';
	// 	// import { GDString } from 'src/js_godot/variant/gdstring';
	// 	// let str = new StringName('123');
	// 	// GD.print(str);
	// 	// GD.print(new GDString('123'));
	// 	// GD.print(new GDString(new StringName('123')));
	// )xxx",
	// 		"<eval>", JS_EVAL_TYPE_GLOBAL | JS_EVAL_TYPE_MODULE);
	// GDREGISTER_CLASS(TypescriptLanguage);
	// GDREGISTER_CLASS(TypescriptLoader);
	// GDREGISTER_CLASS(TypescriptSaver);
	// GDREGISTER_CLASS(Typescript);
	// Engine::get_singleton()->register_script_language(memnew(TypescriptLanguage()));
	// ResourceLoader::get_singleton()->add_resource_format_loader(memnew(TypescriptLoader()));
	// ResourceSaver::get_singleton()->add_resource_format_saver(memnew(TypescriptSaver));
	// if (JS_IsException(value)) {
	// 	JSValue error = JS_GetException(context.ctx);
	// 	JSValue errorMessage = JS_GetPropertyStr(context.ctx, error, "message");
	// 	JSValue errorStack = JS_GetPropertyStr(context.ctx, error, "stack");
	// 	const char *message = JS_ToCString(context.ctx, errorMessage);
	// }
	printf("%s", "Quickjs initialization is over\n");
}

void uninitialize_tgds_types(void *user_data, GDExtensionInitializationLevel p_level) {
	if (p_level != GDEXTENSION_INITIALIZATION_SCENE) {
		return;
	}
	printf("Quickjs close\n");
}

void init_quickjs() {
	register_internal_api();
	// register_utility_functions();
	js_init_module(context.ctx);
	JS_AddIntrinsicOperators(context.ctx);
	JS_SetModuleLoaderFunc(runtime.rt, NULL, module_loader, (void *)"D:/Godot/Gype");
	JSValue ret = context.eval("import { Variant } from 'src/js_godot/variant/variant'; Variant._init_bindings();", "<eval>", JS_EVAL_TYPE_MODULE);
	JS_FreeValue(context.ctx, ret);
}

extern "C" {
GDExtensionBool __declspec(dllexport) tgds_library_init(GDExtensionInterfaceGetProcAddress p_get_proc_address, GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization) {
	JSGodot::Initializer initializer(p_get_proc_address, p_library, r_initialization);
	initializer.register_initializer(initialize_tgds_types);
	initializer.register_terminator(uninitialize_tgds_types);
	initializer.set_minimum_library_initialization_level(GDEXTENSION_INITIALIZATION_SCENE);
	return initializer.init();
}
}