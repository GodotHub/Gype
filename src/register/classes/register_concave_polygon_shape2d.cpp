
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/classes/concave_polygon_shape2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void concave_polygon_shape2d_class_finalizer(JSRuntime *rt, JSValue val) {
	ConcavePolygonShape2D *concave_polygon_shape2d = static_cast<ConcavePolygonShape2D *>(JS_GetOpaque(val, ConcavePolygonShape2D::__class_id));
	if (concave_polygon_shape2d)
		ConcavePolygonShape2D::free(nullptr, concave_polygon_shape2d);
}

static JSClassDef concave_polygon_shape2d_class_def = {
	"ConcavePolygonShape2D",
	.finalizer = concave_polygon_shape2d_class_finalizer
};

static JSValue concave_polygon_shape2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ConcavePolygonShape2D *concave_polygon_shape2d_class;
	JSValue obj = JS_NewObjectClass(ctx, ConcavePolygonShape2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	concave_polygon_shape2d_class = memnew(ConcavePolygonShape2D);
	if (!concave_polygon_shape2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, concave_polygon_shape2d_class);
	return obj;
}
static JSValue concave_polygon_shape2d_class_set_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ConcavePolygonShape2D::set_segments, ConcavePolygonShape2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue concave_polygon_shape2d_class_get_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ConcavePolygonShape2D::get_segments, ConcavePolygonShape2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry concave_polygon_shape2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_segments", 1, &concave_polygon_shape2d_class_set_segments),
	JS_CFUNC_DEF("get_segments", 0, &concave_polygon_shape2d_class_get_segments),
};

static int js_concave_polygon_shape2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ConcavePolygonShape2D::__class_id);
	classes["ConcavePolygonShape2D"] = ConcavePolygonShape2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ConcavePolygonShape2D::__class_id, &concave_polygon_shape2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Shape2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ConcavePolygonShape2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, concave_polygon_shape2d_class_proto_funcs, _countof(concave_polygon_shape2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, concave_polygon_shape2d_class_constructor, "ConcavePolygonShape2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ConcavePolygonShape2D", ctor);

	return 0;
}

JSModuleDef *_js_init_concave_polygon_shape2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_concave_polygon_shape2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ConcavePolygonShape2D");
	return m;
}

JSModuleDef *js_init_concave_polygon_shape2d_module(JSContext *ctx) {
	return _js_init_concave_polygon_shape2d_module(ctx, "godot/classes/concave_polygon_shape2d");
}

void register_concave_polygon_shape2d() {
	js_init_concave_polygon_shape2d_module(ctx);
}