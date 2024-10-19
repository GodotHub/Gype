
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/concave_polygon_shape3d.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void concave_polygon_shape3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef concave_polygon_shape3d_class_def = {
	"ConcavePolygonShape3D",
	.finalizer = concave_polygon_shape3d_class_finalizer
};

static JSValue concave_polygon_shape3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ConcavePolygonShape3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	ConcavePolygonShape3D *concave_polygon_shape3d_class = memnew(ConcavePolygonShape3D);
	if (!concave_polygon_shape3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, concave_polygon_shape3d_class);	
	return obj;
}
static JSValue concave_polygon_shape3d_class_set_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ConcavePolygonShape3D::set_faces, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue concave_polygon_shape3d_class_get_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ConcavePolygonShape3D::get_faces, ctx, this_val, argc, argv);
};
static JSValue concave_polygon_shape3d_class_set_backface_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ConcavePolygonShape3D::set_backface_collision_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue concave_polygon_shape3d_class_is_backface_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ConcavePolygonShape3D::is_backface_collision_enabled, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry concave_polygon_shape3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_faces", 1, &concave_polygon_shape3d_class_set_faces),
	JS_CFUNC_DEF("get_faces", 0, &concave_polygon_shape3d_class_get_faces),
	JS_CFUNC_DEF("set_backface_collision_enabled", 1, &concave_polygon_shape3d_class_set_backface_collision_enabled),
	JS_CFUNC_DEF("is_backface_collision_enabled", 0, &concave_polygon_shape3d_class_is_backface_collision_enabled),
};

void define_concave_polygon_shape3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "data"),
        JS_NewCFunction(ctx, concave_polygon_shape3d_class_get_faces, "get_faces", 0),
        JS_NewCFunction(ctx, concave_polygon_shape3d_class_set_faces, "set_faces", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "backface_collision"),
        JS_NewCFunction(ctx, concave_polygon_shape3d_class_is_backface_collision_enabled, "is_backface_collision_enabled", 0),
        JS_NewCFunction(ctx, concave_polygon_shape3d_class_set_backface_collision_enabled, "set_backface_collision_enabled", 1),
        JS_PROP_GETSET
    );
}

static int js_concave_polygon_shape3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ConcavePolygonShape3D::__class_id);
	classes["ConcavePolygonShape3D"] = ConcavePolygonShape3D::__class_id;
	class_id_list.insert(ConcavePolygonShape3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ConcavePolygonShape3D::__class_id, &concave_polygon_shape3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ConcavePolygonShape3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Shape3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ConcavePolygonShape3D::__class_id, proto);

	define_concave_polygon_shape3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, concave_polygon_shape3d_class_proto_funcs, _countof(concave_polygon_shape3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, concave_polygon_shape3d_class_constructor, "ConcavePolygonShape3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ConcavePolygonShape3D", ctor);

	return 0;
}

JSModuleDef *_js_init_concave_polygon_shape3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/shape3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_concave_polygon_shape3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ConcavePolygonShape3D");
	return m;
}

JSModuleDef *js_init_concave_polygon_shape3d_module(JSContext *ctx) {
	return _js_init_concave_polygon_shape3d_module(ctx, "godot/classes/concave_polygon_shape3d");
}

void register_concave_polygon_shape3d() {
	ConcavePolygonShape3D::__init_js_class_id();
	js_init_concave_polygon_shape3d_module(ctx);
}