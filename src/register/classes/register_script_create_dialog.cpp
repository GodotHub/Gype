
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/classes/script_create_dialog.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void script_create_dialog_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef script_create_dialog_class_def = {
	"ScriptCreateDialog",
	.finalizer = script_create_dialog_class_finalizer
};

static JSValue script_create_dialog_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ScriptCreateDialog::__class_id);
	if (JS_IsException(obj))
		return obj;
	ScriptCreateDialog *script_create_dialog_class = memnew(ScriptCreateDialog);
	if (!script_create_dialog_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, script_create_dialog_class);
	return obj;
}
static JSValue script_create_dialog_class_config(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&ScriptCreateDialog::config, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry script_create_dialog_class_proto_funcs[] = {
	JS_CFUNC_DEF("config", 4, &script_create_dialog_class_config),
};

void define_script_create_dialog_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_script_create_dialog_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ScriptCreateDialog::__class_id);
	classes["ScriptCreateDialog"] = ScriptCreateDialog::__class_id;
	class_id_list.insert(ScriptCreateDialog::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ScriptCreateDialog::__class_id, &script_create_dialog_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ScriptCreateDialog::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, ConfirmationDialog::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ScriptCreateDialog::__class_id, proto);

	define_script_create_dialog_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, script_create_dialog_class_proto_funcs, _countof(script_create_dialog_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, script_create_dialog_class_constructor, "ScriptCreateDialog", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ScriptCreateDialog", ctor);

	return 0;
}

JSModuleDef *_js_init_script_create_dialog_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/confirmation_dialog';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	ScriptCreateDialog::__init_js_class_id();
	js_init_script_create_dialog_module(ctx);
}