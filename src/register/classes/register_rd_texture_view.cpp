
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/rd_texture_view.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rd_texture_view_class_finalizer(JSRuntime *rt, JSValue val) {
	RDTextureView *rd_texture_view = static_cast<RDTextureView *>(JS_GetOpaque(val, RDTextureView::__class_id));
	if (rd_texture_view)
		RDTextureView::free(nullptr, rd_texture_view);
}

static JSClassDef rd_texture_view_class_def = {
	"RDTextureView",
	.finalizer = rd_texture_view_class_finalizer
};

static JSValue rd_texture_view_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RDTextureView *rd_texture_view_class;
	JSValue obj = JS_NewObjectClass(ctx, RDTextureView::__class_id);
	if (JS_IsException(obj))
		return obj;
	rd_texture_view_class = memnew(RDTextureView);
	if (!rd_texture_view_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rd_texture_view_class);
	return obj;
}
static JSValue rd_texture_view_class_set_format_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDTextureView::set_format_override, RDTextureView::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_texture_view_class_get_format_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDTextureView::get_format_override, RDTextureView::__class_id, ctx, this_val, argv);
};
static JSValue rd_texture_view_class_set_swizzle_r(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDTextureView::set_swizzle_r, RDTextureView::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_texture_view_class_get_swizzle_r(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDTextureView::get_swizzle_r, RDTextureView::__class_id, ctx, this_val, argv);
};
static JSValue rd_texture_view_class_set_swizzle_g(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDTextureView::set_swizzle_g, RDTextureView::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_texture_view_class_get_swizzle_g(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDTextureView::get_swizzle_g, RDTextureView::__class_id, ctx, this_val, argv);
};
static JSValue rd_texture_view_class_set_swizzle_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDTextureView::set_swizzle_b, RDTextureView::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_texture_view_class_get_swizzle_b(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDTextureView::get_swizzle_b, RDTextureView::__class_id, ctx, this_val, argv);
};
static JSValue rd_texture_view_class_set_swizzle_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDTextureView::set_swizzle_a, RDTextureView::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_texture_view_class_get_swizzle_a(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDTextureView::get_swizzle_a, RDTextureView::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rd_texture_view_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_format_override", 1, &rd_texture_view_class_set_format_override),
	JS_CFUNC_DEF("get_format_override", 0, &rd_texture_view_class_get_format_override),
	JS_CFUNC_DEF("set_swizzle_r", 1, &rd_texture_view_class_set_swizzle_r),
	JS_CFUNC_DEF("get_swizzle_r", 0, &rd_texture_view_class_get_swizzle_r),
	JS_CFUNC_DEF("set_swizzle_g", 1, &rd_texture_view_class_set_swizzle_g),
	JS_CFUNC_DEF("get_swizzle_g", 0, &rd_texture_view_class_get_swizzle_g),
	JS_CFUNC_DEF("set_swizzle_b", 1, &rd_texture_view_class_set_swizzle_b),
	JS_CFUNC_DEF("get_swizzle_b", 0, &rd_texture_view_class_get_swizzle_b),
	JS_CFUNC_DEF("set_swizzle_a", 1, &rd_texture_view_class_set_swizzle_a),
	JS_CFUNC_DEF("get_swizzle_a", 0, &rd_texture_view_class_get_swizzle_a),
};

static int js_rd_texture_view_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RDTextureView::__class_id);
	classes["RDTextureView"] = RDTextureView::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RDTextureView::__class_id, &rd_texture_view_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDTextureView::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_texture_view_class_proto_funcs, _countof(rd_texture_view_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rd_texture_view_class_constructor, "RDTextureView", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RDTextureView", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_texture_view_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_texture_view_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDTextureView");
	return m;
}

JSModuleDef *js_init_rd_texture_view_module(JSContext *ctx) {
	return _js_init_rd_texture_view_module(ctx, "godot/classes/rd_texture_view");
}

void register_rd_texture_view() {
	js_init_rd_texture_view_module(ctx);
}