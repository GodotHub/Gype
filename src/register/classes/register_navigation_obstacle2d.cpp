
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/navigation_obstacle2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void navigation_obstacle2d_class_finalizer(JSRuntime *rt, JSValue val) {
	NavigationObstacle2D *navigation_obstacle2d = static_cast<NavigationObstacle2D *>(JS_GetOpaque(val, NavigationObstacle2D::__class_id));
	if (navigation_obstacle2d)
		NavigationObstacle2D::free(nullptr, navigation_obstacle2d);
}

static JSClassDef navigation_obstacle2d_class_def = {
	"NavigationObstacle2D",
	.finalizer = navigation_obstacle2d_class_finalizer
};

static JSValue navigation_obstacle2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NavigationObstacle2D *navigation_obstacle2d_class;
	JSValue obj = JS_NewObjectClass(ctx, NavigationObstacle2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	navigation_obstacle2d_class = memnew(NavigationObstacle2D);
	if (!navigation_obstacle2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, navigation_obstacle2d_class);
	return obj;
}
static JSValue navigation_obstacle2d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_rid, NavigationObstacle2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_obstacle2d_class_set_avoidance_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationObstacle2D::set_avoidance_enabled, NavigationObstacle2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_avoidance_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_avoidance_enabled, NavigationObstacle2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_obstacle2d_class_set_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationObstacle2D::set_navigation_map, NavigationObstacle2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_navigation_map, NavigationObstacle2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_obstacle2d_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationObstacle2D::set_radius, NavigationObstacle2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_radius, NavigationObstacle2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_obstacle2d_class_set_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationObstacle2D::set_velocity, NavigationObstacle2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_velocity, NavigationObstacle2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_obstacle2d_class_set_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationObstacle2D::set_vertices, NavigationObstacle2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_vertices, NavigationObstacle2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_obstacle2d_class_set_avoidance_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationObstacle2D::set_avoidance_layers, NavigationObstacle2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_avoidance_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_avoidance_layers, NavigationObstacle2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_obstacle2d_class_set_avoidance_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationObstacle2D::set_avoidance_layer_value, NavigationObstacle2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_avoidance_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_avoidance_layer_value, NavigationObstacle2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_obstacle2d_class_set_affect_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationObstacle2D::set_affect_navigation_mesh, NavigationObstacle2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_affect_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_affect_navigation_mesh, NavigationObstacle2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_obstacle2d_class_set_carve_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationObstacle2D::set_carve_navigation_mesh, NavigationObstacle2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_carve_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_carve_navigation_mesh, NavigationObstacle2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry navigation_obstacle2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_rid", 0, &navigation_obstacle2d_class_get_rid),
	JS_CFUNC_DEF("set_avoidance_enabled", 1, &navigation_obstacle2d_class_set_avoidance_enabled),
	JS_CFUNC_DEF("get_avoidance_enabled", 0, &navigation_obstacle2d_class_get_avoidance_enabled),
	JS_CFUNC_DEF("set_navigation_map", 1, &navigation_obstacle2d_class_set_navigation_map),
	JS_CFUNC_DEF("get_navigation_map", 0, &navigation_obstacle2d_class_get_navigation_map),
	JS_CFUNC_DEF("set_radius", 1, &navigation_obstacle2d_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &navigation_obstacle2d_class_get_radius),
	JS_CFUNC_DEF("set_velocity", 1, &navigation_obstacle2d_class_set_velocity),
	JS_CFUNC_DEF("get_velocity", 0, &navigation_obstacle2d_class_get_velocity),
	JS_CFUNC_DEF("set_vertices", 1, &navigation_obstacle2d_class_set_vertices),
	JS_CFUNC_DEF("get_vertices", 0, &navigation_obstacle2d_class_get_vertices),
	JS_CFUNC_DEF("set_avoidance_layers", 1, &navigation_obstacle2d_class_set_avoidance_layers),
	JS_CFUNC_DEF("get_avoidance_layers", 0, &navigation_obstacle2d_class_get_avoidance_layers),
	JS_CFUNC_DEF("set_avoidance_layer_value", 2, &navigation_obstacle2d_class_set_avoidance_layer_value),
	JS_CFUNC_DEF("get_avoidance_layer_value", 1, &navigation_obstacle2d_class_get_avoidance_layer_value),
	JS_CFUNC_DEF("set_affect_navigation_mesh", 1, &navigation_obstacle2d_class_set_affect_navigation_mesh),
	JS_CFUNC_DEF("get_affect_navigation_mesh", 0, &navigation_obstacle2d_class_get_affect_navigation_mesh),
	JS_CFUNC_DEF("set_carve_navigation_mesh", 1, &navigation_obstacle2d_class_set_carve_navigation_mesh),
	JS_CFUNC_DEF("get_carve_navigation_mesh", 0, &navigation_obstacle2d_class_get_carve_navigation_mesh),
};

static int js_navigation_obstacle2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&NavigationObstacle2D::__class_id);
	classes["NavigationObstacle2D"] = NavigationObstacle2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NavigationObstacle2D::__class_id, &navigation_obstacle2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationObstacle2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_obstacle2d_class_proto_funcs, _countof(navigation_obstacle2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, navigation_obstacle2d_class_constructor, "NavigationObstacle2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "NavigationObstacle2D", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_obstacle2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_obstacle2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationObstacle2D");
	return m;
}

JSModuleDef *js_init_navigation_obstacle2d_module(JSContext *ctx) {
	return _js_init_navigation_obstacle2d_module(ctx, "godot/classes/navigation_obstacle2d");
}

void register_navigation_obstacle2d() {
	js_init_navigation_obstacle2d_module(ctx);
}