
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/script_create_dialog.hpp>
#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void script_create_dialog_class_finalizer(JSRuntime *rt, JSValue val) {
	ScriptCreateDialog *script_create_dialog = static_cast<ScriptCreateDialog *>(JS_GetOpaque(val, ScriptCreateDialog::__class_id));
	if (script_create_dialog)
		ScriptCreateDialog::free(nullptr, script_create_dialog);
}

static JSClassDef script_create_dialog_class_def = {
	"ScriptCreateDialog",
	.finalizer = script_create_dialog_class_finalizer
};

static JSValue script_create_dialog_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ScriptCreateDialog *script_create_dialog_class;
	JSValue obj = JS_NewObjectClass(ctx, ScriptCreateDialog::__class_id);
	if (JS_IsException(obj))
		return obj;
	script_create_dialog_class = memnew(ScriptCreateDialog);
	if (!script_create_dialog_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, script_create_dialog_class);
	return obj;
}
static JSValue script_create_dialog_class_config(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ScriptCreateDialog::config, ScriptCreateDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry script_create_dialog_class_proto_funcs[] = {
	JS_CFUNC_DEF("config", 4, &script_create_dialog_class_config),
};

static int js_script_create_dialog_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ScriptCreateDialog::__class_id);
	classes["ScriptCreateDialog"] = ScriptCreateDialog::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ScriptCreateDialog::__class_id, &script_create_dialog_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, ConfirmationDialog::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ScriptCreateDialog::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, script_create_dialog_class_proto_funcs, _countof(script_create_dialog_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, script_create_dialog_class_constructor, "ScriptCreateDialog", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ScriptCreateDialog", ctor);

	return 0;
}

JSModuleDef *_js_init_script_create_dialog_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_script_create_dialog_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ScriptCreateDialog");
	return m;
}

JSModuleDef *js_init_script_create_dialog_module(JSContext *ctx) {
	return _js_init_script_create_dialog_module(ctx, "godot/classes/script_create_dialog");
}

void register_script_create_dialog() {
	js_init_script_create_dialog_module(ctx);
}