
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/script_create_dialog.hpp>
#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void script_create_dialog_class_finalizer(JSRuntime *rt, JSValue val) {
	ScriptCreateDialog *script_create_dialog = static_cast<ScriptCreateDialog *>(JS_GetOpaque(val, ScriptCreateDialog::__class_id));
	if (script_create_dialog)
		memdelete(script_create_dialog);
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

	ScriptCreateDialog *script_create_dialog_class;
	if (argc == 1) 
		script_create_dialog_class = static_cast<ScriptCreateDialog *>(Variant(*argv).operator Object *());
	else 
		script_create_dialog_class = memnew(ScriptCreateDialog);
	if (!script_create_dialog_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, script_create_dialog_class);
	return obj;
}
static JSValue script_create_dialog_class_config(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ScriptCreateDialog::config, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry script_create_dialog_class_proto_funcs[] = {
	JS_CFUNC_DEF("config", 4, &script_create_dialog_class_config),
};
static JSValue script_create_dialog_class_get_script_created_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	ScriptCreateDialog *opaque = reinterpret_cast<ScriptCreateDialog *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "script_created_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "script_created").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "script_created_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_script_create_dialog_property(JSContext *ctx, JSValue proto) {
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "script_created"),
		JS_NewCFunction(ctx, script_create_dialog_class_get_script_created_signal, "get_script_created_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_script_create_dialog_enum(JSContext *ctx, JSValue proto) {
}

static int js_script_create_dialog_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ScriptCreateDialog"] = ScriptCreateDialog::__class_id;
	class_id_list.insert(ScriptCreateDialog::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ScriptCreateDialog::__class_id, &script_create_dialog_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ScriptCreateDialog::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, ConfirmationDialog::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ScriptCreateDialog::__class_id, proto);

	define_script_create_dialog_property(ctx, proto);
	define_script_create_dialog_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, script_create_dialog_class_proto_funcs, _countof(script_create_dialog_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, script_create_dialog_class_constructor, "ScriptCreateDialog", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "ScriptCreateDialog", ctor);
	constructors[ScriptCreateDialog::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_script_create_dialog_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/confirmation_dialog';";
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
	return _js_init_script_create_dialog_module(ctx, "@godot/classes/script_create_dialog");
}

void register_script_create_dialog() {
	ScriptCreateDialog::__init_js_class_id();
	js_init_script_create_dialog_module(ctx);
}