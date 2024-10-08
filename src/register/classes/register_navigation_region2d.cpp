
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/navigation_polygon.hpp>
#include <godot_cpp/classes/navigation_region2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void navigation_region2d_class_finalizer(JSRuntime *rt, JSValue val) {
	NavigationRegion2D *navigation_region2d = static_cast<NavigationRegion2D *>(JS_GetOpaque(val, NavigationRegion2D::__class_id));
	if (navigation_region2d)
		NavigationRegion2D::free(nullptr, navigation_region2d);
}

static JSClassDef navigation_region2d_class_def = {
	"NavigationRegion2D",
	.finalizer = navigation_region2d_class_finalizer
};

static JSValue navigation_region2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NavigationRegion2D *navigation_region2d_class;
	JSValue obj = JS_NewObjectClass(ctx, NavigationRegion2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	navigation_region2d_class = memnew(NavigationRegion2D);
	if (!navigation_region2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, navigation_region2d_class);
	return obj;
}
static JSValue navigation_region2d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion2D::get_rid, NavigationRegion2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region2d_class_set_navigation_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationRegion2D::set_navigation_polygon, NavigationRegion2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region2d_class_get_navigation_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion2D::get_navigation_polygon, NavigationRegion2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region2d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationRegion2D::set_enabled, NavigationRegion2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region2d_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion2D::is_enabled, NavigationRegion2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region2d_class_set_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationRegion2D::set_navigation_map, NavigationRegion2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region2d_class_get_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion2D::get_navigation_map, NavigationRegion2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region2d_class_set_use_edge_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationRegion2D::set_use_edge_connections, NavigationRegion2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region2d_class_get_use_edge_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion2D::get_use_edge_connections, NavigationRegion2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region2d_class_set_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationRegion2D::set_navigation_layers, NavigationRegion2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region2d_class_get_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion2D::get_navigation_layers, NavigationRegion2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region2d_class_set_navigation_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationRegion2D::set_navigation_layer_value, NavigationRegion2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region2d_class_get_navigation_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion2D::get_navigation_layer_value, NavigationRegion2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region2d_class_get_region_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion2D::get_region_rid, NavigationRegion2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region2d_class_set_enter_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationRegion2D::set_enter_cost, NavigationRegion2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region2d_class_get_enter_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion2D::get_enter_cost, NavigationRegion2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region2d_class_set_travel_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationRegion2D::set_travel_cost, NavigationRegion2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region2d_class_get_travel_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion2D::get_travel_cost, NavigationRegion2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region2d_class_bake_navigation_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationRegion2D::bake_navigation_polygon, NavigationRegion2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region2d_class_is_baking(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion2D::is_baking, NavigationRegion2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry navigation_region2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_rid", 0, &navigation_region2d_class_get_rid),
	JS_CFUNC_DEF("set_navigation_polygon", 1, &navigation_region2d_class_set_navigation_polygon),
	JS_CFUNC_DEF("get_navigation_polygon", 0, &navigation_region2d_class_get_navigation_polygon),
	JS_CFUNC_DEF("set_enabled", 1, &navigation_region2d_class_set_enabled),
	JS_CFUNC_DEF("is_enabled", 0, &navigation_region2d_class_is_enabled),
	JS_CFUNC_DEF("set_navigation_map", 1, &navigation_region2d_class_set_navigation_map),
	JS_CFUNC_DEF("get_navigation_map", 0, &navigation_region2d_class_get_navigation_map),
	JS_CFUNC_DEF("set_use_edge_connections", 1, &navigation_region2d_class_set_use_edge_connections),
	JS_CFUNC_DEF("get_use_edge_connections", 0, &navigation_region2d_class_get_use_edge_connections),
	JS_CFUNC_DEF("set_navigation_layers", 1, &navigation_region2d_class_set_navigation_layers),
	JS_CFUNC_DEF("get_navigation_layers", 0, &navigation_region2d_class_get_navigation_layers),
	JS_CFUNC_DEF("set_navigation_layer_value", 2, &navigation_region2d_class_set_navigation_layer_value),
	JS_CFUNC_DEF("get_navigation_layer_value", 1, &navigation_region2d_class_get_navigation_layer_value),
	JS_CFUNC_DEF("get_region_rid", 0, &navigation_region2d_class_get_region_rid),
	JS_CFUNC_DEF("set_enter_cost", 1, &navigation_region2d_class_set_enter_cost),
	JS_CFUNC_DEF("get_enter_cost", 0, &navigation_region2d_class_get_enter_cost),
	JS_CFUNC_DEF("set_travel_cost", 1, &navigation_region2d_class_set_travel_cost),
	JS_CFUNC_DEF("get_travel_cost", 0, &navigation_region2d_class_get_travel_cost),
	JS_CFUNC_DEF("bake_navigation_polygon", 1, &navigation_region2d_class_bake_navigation_polygon),
	JS_CFUNC_DEF("is_baking", 0, &navigation_region2d_class_is_baking),
};

static int js_navigation_region2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&NavigationRegion2D::__class_id);
	classes["NavigationRegion2D"] = NavigationRegion2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NavigationRegion2D::__class_id, &navigation_region2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationRegion2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_region2d_class_proto_funcs, _countof(navigation_region2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, navigation_region2d_class_constructor, "NavigationRegion2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "NavigationRegion2D", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_region2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_region2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationRegion2D");
	return m;
}

JSModuleDef *js_init_navigation_region2d_module(JSContext *ctx) {
	return _js_init_navigation_region2d_module(ctx, "godot/classes/navigation_region2d");
}

void register_navigation_region2d() {
	js_init_navigation_region2d_module(ctx);
}