#include "register/register_types.h"
#include "quickjs/env.h"
#include "register/register_enums.h"
#include "register/register_internal_api.h"
#include "support/console_support.hpp"
#include "support/javascript.hpp"
#include "support/javascript_language.hpp"
#include "support/javascript_loader.hpp"
#include "support/javascript_saver.hpp"
#include "support/module_loader.hpp"
#include <gdextension_interface.h>
#include <quickjs/finalizer.h>
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/resource_loader.hpp>
#include <godot_cpp/classes/resource_saver.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/defs.hpp>

#ifdef DEBUG_ENABLED
#include "class_db_test/class_db_test.hpp"
#include "gdstring_test/gdstring_test.hpp"
#include "node_path_test/node_path_test.hpp"
#include "variant_test/variant_test.hpp"

#endif

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
	init_language();
	init_quickjs();
#ifdef DEBUG_ENABLED
	// test_variant();
	// test_gdstring();
	// test_node_path();
	// test_class_db();
#endif // DEBUG
	// JSValue value = context.eval("import { GD } from 'variant/utility_functions.js';GD.print('123');", "<eval>", JS_EVAL_TYPE_MODULE);
	// context.eval("import { StringName } from 'variant/string_name.js';new StringName();", "<eval>", JS_EVAL_TYPE_MODULE);
	// context.eval(R"xxx(
	// 	// import { StringName } from 'variant/string_name';
	// 	// import { GDString } from 'variant/gdstring';
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

void uninitialize_tgds_types(godot::ModuleInitializationLevel p_level) {
	if (p_level != godot::ModuleInitializationLevel::MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	printf("Quickjs close\n");
}

void init_quickjs() {
	register_enums();
	register_internal_api();
	js_init_module(context.ctx);
	JS_AddIntrinsicOperators(context.ctx);
	JS_SetModuleLoaderFunc(runtime.rt, NULL, module_loader, NULL);
	JSValue ret = context.eval(R"xxx(
		import { Variant } from "@js_godot/variant/variant";
		Variant._init_bindings();
	)xxx",
			"<input>", JS_EVAL_TYPE_MODULE);
	ret = context.eval(R"xxx(
		import { GodotObject } from "@js_godot/classes/godot_object";
		GodotObject._init_bindings();
	)xxx",
			"<input>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(ret)) {
		JSValue exp = JS_GetException(context.ctx);
		JSValue message = JS_GetPropertyStr(context.ctx, exp, "message");
		const char *message_str = JS_ToCString(context.ctx, message);
		printf("%s\n", message_str);
	}
	JS_FreeValue(context.ctx, ret);
}

void init_language() {
	GDREGISTER_CLASS(JavaScriptLoader);
	GDREGISTER_CLASS(JavaScriptSaver);
	GDREGISTER_CLASS(JavaScriptLanguage);
	GDREGISTER_CLASS(JavaScript);
	ResourceSaver::get_singleton()->add_resource_format_saver(JavaScriptSaver::get_singleton());
	ResourceLoader::get_singleton()->add_resource_format_loader(JavaScriptLoader::get_singleton());
	Engine::get_singleton()->register_script_language(JavaScriptLanguage::get_singleton());
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