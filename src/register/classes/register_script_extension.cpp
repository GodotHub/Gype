
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/script_extension.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/script_language.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void script_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	ScriptExtension *script_extension = static_cast<ScriptExtension *>(JS_GetOpaque(val, ScriptExtension::__class_id));
	if (script_extension)
		ScriptExtension::free(nullptr, script_extension);
}

static JSClassDef script_extension_class_def = {
	"ScriptExtension",
	.finalizer = script_extension_class_finalizer
};

static JSValue script_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ScriptExtension *script_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, ScriptExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	script_extension_class = memnew(ScriptExtension);
	if (!script_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, script_extension_class);
	return obj;
}

static int js_script_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ScriptExtension::__class_id);
	classes["ScriptExtension"] = ScriptExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ScriptExtension::__class_id, &script_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Script::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ScriptExtension::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, script_extension_class_constructor, "ScriptExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ScriptExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_script_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_script_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ScriptExtension");
	return m;
}

JSModuleDef *js_init_script_extension_module(JSContext *ctx) {
	return _js_init_script_extension_module(ctx, "godot/classes/script_extension");
}

void register_script_extension() {
	js_init_script_extension_module(ctx);
}