
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/separator.hpp>
#include <godot_cpp/classes/v_separator.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void v_separator_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef v_separator_class_def = {
	"VSeparator",
	.finalizer = v_separator_class_finalizer
};

static JSValue v_separator_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VSeparator::__class_id);
	if (JS_IsException(obj))
		return obj;
	VSeparator *v_separator_class = memnew(VSeparator);
	if (!v_separator_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, v_separator_class);	
	return obj;
}

void define_v_separator_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_v_separator_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VSeparator::__class_id);
	classes["VSeparator"] = VSeparator::__class_id;
	class_id_list.insert(VSeparator::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VSeparator::__class_id, &v_separator_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VSeparator::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Separator::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VSeparator::__class_id, proto);

	define_v_separator_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, v_separator_class_constructor, "VSeparator", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VSeparator", ctor);

	return 0;
}

JSModuleDef *_js_init_v_separator_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/separator';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_v_separator_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VSeparator");
	return m;
}

JSModuleDef *js_init_v_separator_module(JSContext *ctx) {
	return _js_init_v_separator_module(ctx, "@godot/classes/v_separator");
}

void register_v_separator() {
	VSeparator::__init_js_class_id();
	js_init_v_separator_module(ctx);
}