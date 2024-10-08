
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/sub_viewport_container.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void sub_viewport_container_class_finalizer(JSRuntime *rt, JSValue val) {
	SubViewportContainer *sub_viewport_container = static_cast<SubViewportContainer *>(JS_GetOpaque(val, SubViewportContainer::__class_id));
	if (sub_viewport_container)
		SubViewportContainer::free(nullptr, sub_viewport_container);
}

static JSClassDef sub_viewport_container_class_def = {
	"SubViewportContainer",
	.finalizer = sub_viewport_container_class_finalizer
};

static JSValue sub_viewport_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SubViewportContainer *sub_viewport_container_class;
	JSValue obj = JS_NewObjectClass(ctx, SubViewportContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	sub_viewport_container_class = memnew(SubViewportContainer);
	if (!sub_viewport_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, sub_viewport_container_class);
	return obj;
}
static JSValue sub_viewport_container_class_set_stretch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SubViewportContainer::set_stretch, SubViewportContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sub_viewport_container_class_is_stretch_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SubViewportContainer::is_stretch_enabled, SubViewportContainer::__class_id, ctx, this_val, argv);
};
static JSValue sub_viewport_container_class_set_stretch_shrink(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SubViewportContainer::set_stretch_shrink, SubViewportContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sub_viewport_container_class_get_stretch_shrink(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SubViewportContainer::get_stretch_shrink, SubViewportContainer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry sub_viewport_container_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_stretch", 1, &sub_viewport_container_class_set_stretch),
	JS_CFUNC_DEF("is_stretch_enabled", 0, &sub_viewport_container_class_is_stretch_enabled),
	JS_CFUNC_DEF("set_stretch_shrink", 1, &sub_viewport_container_class_set_stretch_shrink),
	JS_CFUNC_DEF("get_stretch_shrink", 0, &sub_viewport_container_class_get_stretch_shrink),
};

static int js_sub_viewport_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SubViewportContainer::__class_id);
	classes["SubViewportContainer"] = SubViewportContainer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SubViewportContainer::__class_id, &sub_viewport_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SubViewportContainer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, sub_viewport_container_class_proto_funcs, _countof(sub_viewport_container_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, sub_viewport_container_class_constructor, "SubViewportContainer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SubViewportContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_sub_viewport_container_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_sub_viewport_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SubViewportContainer");
	return m;
}

JSModuleDef *js_init_sub_viewport_container_module(JSContext *ctx) {
	return _js_init_sub_viewport_container_module(ctx, "godot/classes/sub_viewport_container");
}

void register_sub_viewport_container() {
	js_init_sub_viewport_container_module(ctx);
}