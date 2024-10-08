
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/center_container.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void center_container_class_finalizer(JSRuntime *rt, JSValue val) {
	CenterContainer *center_container = static_cast<CenterContainer *>(JS_GetOpaque(val, CenterContainer::__class_id));
	if (center_container)
		CenterContainer::free(nullptr, center_container);
}

static JSClassDef center_container_class_def = {
	"CenterContainer",
	.finalizer = center_container_class_finalizer
};

static JSValue center_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CenterContainer *center_container_class;
	JSValue obj = JS_NewObjectClass(ctx, CenterContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	center_container_class = memnew(CenterContainer);
	if (!center_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, center_container_class);
	return obj;
}
static JSValue center_container_class_set_use_top_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CenterContainer::set_use_top_left, CenterContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue center_container_class_is_using_top_left(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CenterContainer::is_using_top_left, CenterContainer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry center_container_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_use_top_left", 1, &center_container_class_set_use_top_left),
	JS_CFUNC_DEF("is_using_top_left", 0, &center_container_class_is_using_top_left),
};

static int js_center_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CenterContainer::__class_id);
	classes["CenterContainer"] = CenterContainer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CenterContainer::__class_id, &center_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CenterContainer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, center_container_class_proto_funcs, _countof(center_container_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, center_container_class_constructor, "CenterContainer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CenterContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_center_container_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_center_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CenterContainer");
	return m;
}

JSModuleDef *js_init_center_container_module(JSContext *ctx) {
	return _js_init_center_container_module(ctx, "godot/classes/center_container");
}

void register_center_container() {
	js_init_center_container_module(ctx);
}