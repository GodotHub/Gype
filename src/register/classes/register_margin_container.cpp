
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/margin_container.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void margin_container_class_finalizer(JSRuntime *rt, JSValue val) {
	MarginContainer *margin_container = static_cast<MarginContainer *>(JS_GetOpaque(val, MarginContainer::__class_id));
	if (margin_container)
		MarginContainer::free(nullptr, margin_container);
}

static JSClassDef margin_container_class_def = {
	"MarginContainer",
	.finalizer = margin_container_class_finalizer
};

static JSValue margin_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MarginContainer *margin_container_class;
	JSValue obj = JS_NewObjectClass(ctx, MarginContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	margin_container_class = memnew(MarginContainer);
	if (!margin_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, margin_container_class);
	return obj;
}

static int js_margin_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MarginContainer::__class_id);
	classes["MarginContainer"] = MarginContainer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), MarginContainer::__class_id, &margin_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MarginContainer::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, margin_container_class_constructor, "MarginContainer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "MarginContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_margin_container_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_margin_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MarginContainer");
	return m;
}

JSModuleDef *js_init_margin_container_module(JSContext *ctx) {
	return _js_init_margin_container_module(ctx, "godot/classes/margin_container");
}

void register_margin_container() {
	js_init_margin_container_module(ctx);
}