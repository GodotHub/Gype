
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/aspect_ratio_container.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void aspect_ratio_container_class_finalizer(JSRuntime *rt, JSValue val) {
	AspectRatioContainer *aspect_ratio_container = static_cast<AspectRatioContainer *>(JS_GetOpaque(val, AspectRatioContainer::__class_id));
	if (aspect_ratio_container)
		AspectRatioContainer::free(nullptr, aspect_ratio_container);
}

static JSClassDef aspect_ratio_container_class_def = {
	"AspectRatioContainer",
	.finalizer = aspect_ratio_container_class_finalizer
};

static JSValue aspect_ratio_container_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AspectRatioContainer *aspect_ratio_container_class;
	JSValue obj = JS_NewObjectClass(ctx, AspectRatioContainer::__class_id);
	if (JS_IsException(obj))
		return obj;
	aspect_ratio_container_class = memnew(AspectRatioContainer);
	if (!aspect_ratio_container_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, aspect_ratio_container_class);
	return obj;
}
static JSValue aspect_ratio_container_class_set_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AspectRatioContainer::set_ratio, AspectRatioContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue aspect_ratio_container_class_get_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AspectRatioContainer::get_ratio, AspectRatioContainer::__class_id, ctx, this_val, argv);
};
static JSValue aspect_ratio_container_class_set_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AspectRatioContainer::set_stretch_mode, AspectRatioContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue aspect_ratio_container_class_get_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AspectRatioContainer::get_stretch_mode, AspectRatioContainer::__class_id, ctx, this_val, argv);
};
static JSValue aspect_ratio_container_class_set_alignment_horizontal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AspectRatioContainer::set_alignment_horizontal, AspectRatioContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue aspect_ratio_container_class_get_alignment_horizontal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AspectRatioContainer::get_alignment_horizontal, AspectRatioContainer::__class_id, ctx, this_val, argv);
};
static JSValue aspect_ratio_container_class_set_alignment_vertical(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&AspectRatioContainer::set_alignment_vertical, AspectRatioContainer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue aspect_ratio_container_class_get_alignment_vertical(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AspectRatioContainer::get_alignment_vertical, AspectRatioContainer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry aspect_ratio_container_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_ratio", 1, &aspect_ratio_container_class_set_ratio),
	JS_CFUNC_DEF("get_ratio", 0, &aspect_ratio_container_class_get_ratio),
	JS_CFUNC_DEF("set_stretch_mode", 1, &aspect_ratio_container_class_set_stretch_mode),
	JS_CFUNC_DEF("get_stretch_mode", 0, &aspect_ratio_container_class_get_stretch_mode),
	JS_CFUNC_DEF("set_alignment_horizontal", 1, &aspect_ratio_container_class_set_alignment_horizontal),
	JS_CFUNC_DEF("get_alignment_horizontal", 0, &aspect_ratio_container_class_get_alignment_horizontal),
	JS_CFUNC_DEF("set_alignment_vertical", 1, &aspect_ratio_container_class_set_alignment_vertical),
	JS_CFUNC_DEF("get_alignment_vertical", 0, &aspect_ratio_container_class_get_alignment_vertical),
};

static int js_aspect_ratio_container_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AspectRatioContainer::__class_id);
	classes["AspectRatioContainer"] = AspectRatioContainer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AspectRatioContainer::__class_id, &aspect_ratio_container_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Container::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AspectRatioContainer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, aspect_ratio_container_class_proto_funcs, _countof(aspect_ratio_container_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, aspect_ratio_container_class_constructor, "AspectRatioContainer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AspectRatioContainer", ctor);

	return 0;
}

JSModuleDef *_js_init_aspect_ratio_container_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_aspect_ratio_container_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AspectRatioContainer");
	return m;
}

JSModuleDef *js_init_aspect_ratio_container_module(JSContext *ctx) {
	return _js_init_aspect_ratio_container_module(ctx, "godot/classes/aspect_ratio_container");
}

void register_aspect_ratio_container() {
	js_init_aspect_ratio_container_module(ctx);
}