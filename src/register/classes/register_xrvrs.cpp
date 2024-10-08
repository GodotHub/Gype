
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/xrvrs.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void xrvrs_class_finalizer(JSRuntime *rt, JSValue val) {
	XRVRS *xrvrs = static_cast<XRVRS *>(JS_GetOpaque(val, XRVRS::__class_id));
	if (xrvrs)
		XRVRS::free(nullptr, xrvrs);
}

static JSClassDef xrvrs_class_def = {
	"XRVRS",
	.finalizer = xrvrs_class_finalizer
};

static JSValue xrvrs_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	XRVRS *xrvrs_class;
	JSValue obj = JS_NewObjectClass(ctx, XRVRS::__class_id);
	if (JS_IsException(obj))
		return obj;
	xrvrs_class = memnew(XRVRS);
	if (!xrvrs_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, xrvrs_class);
	return obj;
}
static JSValue xrvrs_class_get_vrs_min_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRVRS::get_vrs_min_radius, XRVRS::__class_id, ctx, this_val, argv);
};
static JSValue xrvrs_class_set_vrs_min_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRVRS::set_vrs_min_radius, XRVRS::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xrvrs_class_get_vrs_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&XRVRS::get_vrs_strength, XRVRS::__class_id, ctx, this_val, argv);
};
static JSValue xrvrs_class_set_vrs_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&XRVRS::set_vrs_strength, XRVRS::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue xrvrs_class_make_vrs_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&XRVRS::make_vrs_texture, XRVRS::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry xrvrs_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_vrs_min_radius", 0, &xrvrs_class_get_vrs_min_radius),
	JS_CFUNC_DEF("set_vrs_min_radius", 1, &xrvrs_class_set_vrs_min_radius),
	JS_CFUNC_DEF("get_vrs_strength", 0, &xrvrs_class_get_vrs_strength),
	JS_CFUNC_DEF("set_vrs_strength", 1, &xrvrs_class_set_vrs_strength),
	JS_CFUNC_DEF("make_vrs_texture", 2, &xrvrs_class_make_vrs_texture),
};

static int js_xrvrs_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&XRVRS::__class_id);
	classes["XRVRS"] = XRVRS::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), XRVRS::__class_id, &xrvrs_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, XRVRS::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, xrvrs_class_proto_funcs, _countof(xrvrs_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, xrvrs_class_constructor, "XRVRS", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "XRVRS", ctor);

	return 0;
}

JSModuleDef *_js_init_xrvrs_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_xrvrs_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "XRVRS");
	return m;
}

JSModuleDef *js_init_xrvrs_module(JSContext *ctx) {
	return _js_init_xrvrs_module(ctx, "godot/classes/xrvrs");
}

void register_xrvrs() {
	js_init_xrvrs_module(ctx);
}