
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/convex_polygon_shape3d.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void convex_polygon_shape3d_class_finalizer(JSRuntime *rt, JSValue val) {
	ConvexPolygonShape3D *convex_polygon_shape3d = static_cast<ConvexPolygonShape3D *>(JS_GetOpaque(val, ConvexPolygonShape3D::__class_id));
	if (convex_polygon_shape3d)
		ConvexPolygonShape3D::free(nullptr, convex_polygon_shape3d);
}

static JSClassDef convex_polygon_shape3d_class_def = {
	"ConvexPolygonShape3D",
	.finalizer = convex_polygon_shape3d_class_finalizer
};

static JSValue convex_polygon_shape3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ConvexPolygonShape3D *convex_polygon_shape3d_class;
	JSValue obj = JS_NewObjectClass(ctx, ConvexPolygonShape3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	convex_polygon_shape3d_class = memnew(ConvexPolygonShape3D);
	if (!convex_polygon_shape3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, convex_polygon_shape3d_class);
	return obj;
}
static JSValue convex_polygon_shape3d_class_set_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ConvexPolygonShape3D::set_points, ConvexPolygonShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue convex_polygon_shape3d_class_get_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ConvexPolygonShape3D::get_points, ConvexPolygonShape3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry convex_polygon_shape3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_points", 1, &convex_polygon_shape3d_class_set_points),
	JS_CFUNC_DEF("get_points", 0, &convex_polygon_shape3d_class_get_points),
};

static int js_convex_polygon_shape3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ConvexPolygonShape3D::__class_id);
	classes["ConvexPolygonShape3D"] = ConvexPolygonShape3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ConvexPolygonShape3D::__class_id, &convex_polygon_shape3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Shape3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ConvexPolygonShape3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, convex_polygon_shape3d_class_proto_funcs, _countof(convex_polygon_shape3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, convex_polygon_shape3d_class_constructor, "ConvexPolygonShape3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ConvexPolygonShape3D", ctor);

	return 0;
}

JSModuleDef *_js_init_convex_polygon_shape3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_convex_polygon_shape3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ConvexPolygonShape3D");
	return m;
}

JSModuleDef *js_init_convex_polygon_shape3d_module(JSContext *ctx) {
	return _js_init_convex_polygon_shape3d_module(ctx, "godot/classes/convex_polygon_shape3d");
}

void register_convex_polygon_shape3d() {
	js_init_convex_polygon_shape3d_module(ctx);
}