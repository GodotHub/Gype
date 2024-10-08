
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/box_container.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void h_box_container_class_finalizer(JSRuntime *rt, JSValue val) {
	HBoxContainer *h_box_container = static_cast<HBoxContainer *>(JS_GetOpaque(val, HBoxContainer::__class_id));
	if (h_box_container)
		HBoxContainer::free(nullptr, h_box_container);
}

static JSClassDef h_box_container_class_def = {
	"HBoxContainer",
	.finalizer = h_box_container_class_finalizer
};

static JSValue h_box_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	HBoxContainer *h_box_container_class;
	JSValue obj = JS_NewObjectClass(ctx, HBoxContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	h_box_container_class = memnew(HBoxContainer);
	if (!h_box_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, h_box_container_class);
	return obj;
}

static int js_h_box_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&HBoxContainer::__class_id);
	classes["HBoxContainer"] = HBoxContainer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), HBoxContainer::__class_id, &h_box_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, BoxContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HBoxContainer::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, h_box_container_class_constructor, "HBoxContainer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "HBoxContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_h_box_container_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_h_box_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "HBoxContainer");
	return m;
}

JSModuleDef *js_init_h_box_container_module(JSContext *ctx) {
	return _js_init_h_box_container_module(ctx, "godot/classes/h_box_container");
}

void register_h_box_container() {
	js_init_h_box_container_module(ctx);
}