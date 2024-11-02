
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/gd_script.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gd_script_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gd_script_class_def = {
	"GDScript",
	.finalizer = gd_script_class_finalizer
};

static JSValue gd_script_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GDScript::__class_id);
	if (JS_IsException(obj))
		return obj;

	GDScript *gd_script_class;
	if (argc == 1) 
		gd_script_class = static_cast<GDScript *>(Variant(*argv).operator Object *());
	else 
		gd_script_class = memnew(GDScript);
	if (!gd_script_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gd_script_class);
	return obj;
}
static JSValue gd_script_class_new_(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_vararg_method_ret(&GDScript::js_new_, ctx, this_val, argc, argv);
}
static const JSCFunctionListEntry gd_script_class_proto_funcs[] = {
	JS_CFUNC_DEF("new_", 0, &gd_script_class_new_),
};

static void define_gd_script_property(JSContext *ctx, JSValue proto) {
	
}

static void define_gd_script_enum(JSContext *ctx, JSValue proto) {
}

static int js_gd_script_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["GDScript"] = GDScript::__class_id;
	class_id_list.insert(GDScript::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GDScript::__class_id, &gd_script_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GDScript::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Script::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GDScript::__class_id, proto);

	define_gd_script_property(ctx, proto);
	define_gd_script_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gd_script_class_proto_funcs, _countof(gd_script_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gd_script_class_constructor, "GDScript", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GDScript", ctor);

	return 0;
}

JSModuleDef *_js_init_gd_script_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/script';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gd_script_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GDScript");
	return m;
}

JSModuleDef *js_init_gd_script_module(JSContext *ctx) {
	return _js_init_gd_script_module(ctx, "@godot/classes/gd_script");
}

void register_gd_script() {
	GDScript::__init_js_class_id();
	js_init_gd_script_module(ctx);
}