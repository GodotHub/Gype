
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/classes/convex_polygon_shape3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void convex_polygon_shape3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef convex_polygon_shape3d_class_def = {
	"ConvexPolygonShape3D",
	.finalizer = convex_polygon_shape3d_class_finalizer
};

static JSValue convex_polygon_shape3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ConvexPolygonShape3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	ConvexPolygonShape3D *convex_polygon_shape3d_class;
	if (argc == 1) 
		convex_polygon_shape3d_class = static_cast<ConvexPolygonShape3D *>(Variant(*argv).operator Object *());
	else 
		convex_polygon_shape3d_class = memnew(ConvexPolygonShape3D);
	if (!convex_polygon_shape3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, convex_polygon_shape3d_class);
	return obj;
}
static JSValue convex_polygon_shape3d_class_set_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ConvexPolygonShape3D::set_points, ctx, this_val, argc, argv);
};
static JSValue convex_polygon_shape3d_class_get_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ConvexPolygonShape3D::get_points, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry convex_polygon_shape3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_points", 1, &convex_polygon_shape3d_class_set_points),
	JS_CFUNC_DEF("get_points", 0, &convex_polygon_shape3d_class_get_points),
};

static void define_convex_polygon_shape3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "points"),
        JS_NewCFunction(ctx, convex_polygon_shape3d_class_get_points, "get_points", 0),
        JS_NewCFunction(ctx, convex_polygon_shape3d_class_set_points, "set_points", 1),
        JS_PROP_GETSET
    );
	
}

static void define_convex_polygon_shape3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_convex_polygon_shape3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ConvexPolygonShape3D"] = ConvexPolygonShape3D::__class_id;
	class_id_list.insert(ConvexPolygonShape3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ConvexPolygonShape3D::__class_id, &convex_polygon_shape3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ConvexPolygonShape3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Shape3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ConvexPolygonShape3D::__class_id, proto);

	define_convex_polygon_shape3d_property(ctx, proto);
	define_convex_polygon_shape3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, convex_polygon_shape3d_class_proto_funcs, _countof(convex_polygon_shape3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, convex_polygon_shape3d_class_constructor, "ConvexPolygonShape3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ConvexPolygonShape3D", ctor);

	return 0;
}

JSModuleDef *_js_init_convex_polygon_shape3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/shape3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_convex_polygon_shape3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ConvexPolygonShape3D");
	return m;
}

JSModuleDef *js_init_convex_polygon_shape3d_module(JSContext *ctx) {
	return _js_init_convex_polygon_shape3d_module(ctx, "@godot/classes/convex_polygon_shape3d");
}

void register_convex_polygon_shape3d() {
	ConvexPolygonShape3D::__init_js_class_id();
	js_init_convex_polygon_shape3d_module(ctx);
}