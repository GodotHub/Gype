
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/convex_polygon_shape2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void convex_polygon_shape2d_class_finalizer(JSRuntime *rt, JSValue val) {
	ConvexPolygonShape2D *convex_polygon_shape2d = static_cast<ConvexPolygonShape2D *>(JS_GetOpaque(val, ConvexPolygonShape2D::__class_id));
	if (convex_polygon_shape2d)
		ConvexPolygonShape2D::free(nullptr, convex_polygon_shape2d);
}

static JSClassDef convex_polygon_shape2d_class_def = {
	"ConvexPolygonShape2D",
	.finalizer = convex_polygon_shape2d_class_finalizer
};

static JSValue convex_polygon_shape2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ConvexPolygonShape2D *convex_polygon_shape2d_class;
	JSValue obj = JS_NewObjectClass(ctx, ConvexPolygonShape2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	convex_polygon_shape2d_class = memnew(ConvexPolygonShape2D);
	if (!convex_polygon_shape2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, convex_polygon_shape2d_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue convex_polygon_shape2d_class_set_point_cloud(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ConvexPolygonShape2D::set_point_cloud, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue convex_polygon_shape2d_class_set_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ConvexPolygonShape2D::set_points, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue convex_polygon_shape2d_class_get_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ConvexPolygonShape2D::get_points, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry convex_polygon_shape2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_point_cloud", 1, &convex_polygon_shape2d_class_set_point_cloud),
	JS_CFUNC_DEF("set_points", 1, &convex_polygon_shape2d_class_set_points),
	JS_CFUNC_DEF("get_points", 0, &convex_polygon_shape2d_class_get_points),
};

void define_convex_polygon_shape2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "points"),
        JS_NewCFunction(ctx, convex_polygon_shape2d_class_get_points, "get_points", 0),
        JS_NewCFunction(ctx, convex_polygon_shape2d_class_set_points, "set_points", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_convex_polygon_shape2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ConvexPolygonShape2D::__class_id);
	classes["ConvexPolygonShape2D"] = ConvexPolygonShape2D::__class_id;
	class_id_list.insert(ConvexPolygonShape2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ConvexPolygonShape2D::__class_id, &convex_polygon_shape2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Shape2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ConvexPolygonShape2D::__class_id, proto);
	define_convex_polygon_shape2d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, convex_polygon_shape2d_class_proto_funcs, _countof(convex_polygon_shape2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, convex_polygon_shape2d_class_constructor, "ConvexPolygonShape2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ConvexPolygonShape2D", ctor);

	return 0;
}

JSModuleDef *_js_init_convex_polygon_shape2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/shape2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_convex_polygon_shape2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ConvexPolygonShape2D");
	return m;
}

JSModuleDef *js_init_convex_polygon_shape2d_module(JSContext *ctx) {
	return _js_init_convex_polygon_shape2d_module(ctx, "godot/classes/convex_polygon_shape2d");
}

void register_convex_polygon_shape2d() {
	ConvexPolygonShape2D::__init_js_class_id();
	js_init_convex_polygon_shape2d_module(ctx);
}