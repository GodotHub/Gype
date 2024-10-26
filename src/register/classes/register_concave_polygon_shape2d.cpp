
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/classes/concave_polygon_shape2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void concave_polygon_shape2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef concave_polygon_shape2d_class_def = {
	"ConcavePolygonShape2D",
	.finalizer = concave_polygon_shape2d_class_finalizer
};

static JSValue concave_polygon_shape2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ConcavePolygonShape2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	ConcavePolygonShape2D *concave_polygon_shape2d_class = memnew(ConcavePolygonShape2D);
	if (!concave_polygon_shape2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, concave_polygon_shape2d_class);	
	return obj;
}
static JSValue concave_polygon_shape2d_class_set_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ConcavePolygonShape2D::set_segments, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue concave_polygon_shape2d_class_get_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ConcavePolygonShape2D::get_segments, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry concave_polygon_shape2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_segments", 1, &concave_polygon_shape2d_class_set_segments),
	JS_CFUNC_DEF("get_segments", 0, &concave_polygon_shape2d_class_get_segments),
};

void define_concave_polygon_shape2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "segments"),
        JS_NewCFunction(ctx, concave_polygon_shape2d_class_get_segments, "get_segments", 0),
        JS_NewCFunction(ctx, concave_polygon_shape2d_class_set_segments, "set_segments", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_concave_polygon_shape2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ConcavePolygonShape2D::__class_id);
	classes["ConcavePolygonShape2D"] = ConcavePolygonShape2D::__class_id;
	class_id_list.insert(ConcavePolygonShape2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ConcavePolygonShape2D::__class_id, &concave_polygon_shape2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ConcavePolygonShape2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Shape2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ConcavePolygonShape2D::__class_id, proto);

	define_concave_polygon_shape2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, concave_polygon_shape2d_class_proto_funcs, _countof(concave_polygon_shape2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, concave_polygon_shape2d_class_constructor, "ConcavePolygonShape2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ConcavePolygonShape2D", ctor);

	return 0;
}

JSModuleDef *_js_init_concave_polygon_shape2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/shape2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	ConcavePolygonShape2D::__init_js_class_id();
	js_init_concave_polygon_shape2d_module(ctx);
}