#include "register/register_types.h"
#include "gde/gdextension_interface.h"
#include "godot_cpp/godot.hpp"
#include "qjspp/utils.h"
#include "register/register_internal_api.h"
#include <godot_cpp/core/os_windows.hpp>

// #include "support/typescript.h"
// #include "support/typescript_language.h"
// #include "support/typescript_loader.h"
// #include "support/typescript_saver.h"

void initialize_tgds_types(void *user_data, GDExtensionInitializationLevel p_level) {
	if (p_level != GDEXTENSION_INITIALIZATION_SCENE) {
		return;
	}
	RedirectIOToConsole();
	register_internal_api();
	JS_SetModuleLoaderFunc(runtime.rt, NULL, module_loader, (void *)"D:/Godot/Gype");
	context.eval("import { Variant } from 'src/js_godot/variant/variant';Variant._init_bindings();", "<eval>", JS_EVAL_TYPE_MODULE);
	// JSValue value = context.eval("import { GD } from 'src/js_godot/variant/utility_functions.js';GD.print('123');", "<eval>", JS_EVAL_TYPE_MODULE);
	// context.eval("import { StringName } from 'src/js_godot/variant/string_name.js';new StringName();", "<eval>", JS_EVAL_TYPE_MODULE);
	context.eval("import { StringName } from 'src/js_godot/variant/string_name';import { GD } from 'src/js_godot/variant/utility_functions'; GD.print(new StringName('123'));", "<eval>", JS_EVAL_TYPE_MODULE);
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
}

void uninitialize_tgds_types(void *user_data, GDExtensionInitializationLevel p_level) {
	if (p_level != GDEXTENSION_INITIALIZATION_SCENE) {
		return;
	}
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