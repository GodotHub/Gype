
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/margin_container.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void margin_container_class_finalizer(JSRuntime *rt, JSValue val) {
	MarginContainer *margin_container = static_cast<MarginContainer *>(JS_GetOpaque(val, MarginContainer::__class_id));
	if (margin_container)
		memdelete(margin_container);
}

static JSClassDef margin_container_class_def = {
	"MarginContainer",
	.finalizer = margin_container_class_finalizer
};

static JSValue margin_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MarginContainer::__class_id);
	if (JS_IsException(obj))
		return obj;

	MarginContainer *margin_container_class;
	if (argc == 1) 
		margin_container_class = static_cast<MarginContainer *>(Variant(*argv).operator Object *());
	else 
		margin_container_class = memnew(MarginContainer);
	if (!margin_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, margin_container_class);
	return obj;
}

static void define_margin_container_property(JSContext *ctx, JSValue proto) {
	
}

static void define_margin_container_enum(JSContext *ctx, JSValue proto) {
}

static int js_margin_container_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["MarginContainer"] = MarginContainer::__class_id;
	class_id_list.insert(MarginContainer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MarginContainer::__class_id, &margin_container_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MarginContainer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MarginContainer::__class_id, proto);

	define_margin_container_property(ctx, proto);
	define_margin_container_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, margin_container_class_constructor, "MarginContainer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "MarginContainer", ctor);
	constructors[MarginContainer::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_margin_container_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_margin_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MarginContainer");
	return m;
}

JSModuleDef *js_init_margin_container_module(JSContext *ctx) {
	return _js_init_margin_container_module(ctx, "@godot/classes/margin_container");
}

void register_margin_container() {
	MarginContainer::__init_js_class_id();
	js_init_margin_container_module(ctx);
}