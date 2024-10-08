
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/navigation_region3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void navigation_region3d_class_finalizer(JSRuntime *rt, JSValue val) {
	NavigationRegion3D *navigation_region3d = static_cast<NavigationRegion3D *>(JS_GetOpaque(val, NavigationRegion3D::__class_id));
	if (navigation_region3d)
		NavigationRegion3D::free(nullptr, navigation_region3d);
}

static JSClassDef navigation_region3d_class_def = {
	"NavigationRegion3D",
	.finalizer = navigation_region3d_class_finalizer
};

static JSValue navigation_region3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NavigationRegion3D *navigation_region3d_class;
	JSValue obj = JS_NewObjectClass(ctx, NavigationRegion3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	navigation_region3d_class = memnew(NavigationRegion3D);
	if (!navigation_region3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, navigation_region3d_class);
	return obj;
}
static JSValue navigation_region3d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion3D::get_rid, NavigationRegion3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region3d_class_set_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationRegion3D::set_navigation_mesh, NavigationRegion3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region3d_class_get_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion3D::get_navigation_mesh, NavigationRegion3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region3d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationRegion3D::set_enabled, NavigationRegion3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region3d_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion3D::is_enabled, NavigationRegion3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region3d_class_set_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationRegion3D::set_navigation_map, NavigationRegion3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region3d_class_get_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion3D::get_navigation_map, NavigationRegion3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region3d_class_set_use_edge_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationRegion3D::set_use_edge_connections, NavigationRegion3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region3d_class_get_use_edge_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion3D::get_use_edge_connections, NavigationRegion3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region3d_class_set_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationRegion3D::set_navigation_layers, NavigationRegion3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region3d_class_get_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion3D::get_navigation_layers, NavigationRegion3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region3d_class_set_navigation_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationRegion3D::set_navigation_layer_value, NavigationRegion3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region3d_class_get_navigation_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion3D::get_navigation_layer_value, NavigationRegion3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region3d_class_get_region_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion3D::get_region_rid, NavigationRegion3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region3d_class_set_enter_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationRegion3D::set_enter_cost, NavigationRegion3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region3d_class_get_enter_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion3D::get_enter_cost, NavigationRegion3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region3d_class_set_travel_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationRegion3D::set_travel_cost, NavigationRegion3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region3d_class_get_travel_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion3D::get_travel_cost, NavigationRegion3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_region3d_class_bake_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationRegion3D::bake_navigation_mesh, NavigationRegion3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_region3d_class_is_baking(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationRegion3D::is_baking, NavigationRegion3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry navigation_region3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_rid", 0, &navigation_region3d_class_get_rid),
	JS_CFUNC_DEF("set_navigation_mesh", 1, &navigation_region3d_class_set_navigation_mesh),
	JS_CFUNC_DEF("get_navigation_mesh", 0, &navigation_region3d_class_get_navigation_mesh),
	JS_CFUNC_DEF("set_enabled", 1, &navigation_region3d_class_set_enabled),
	JS_CFUNC_DEF("is_enabled", 0, &navigation_region3d_class_is_enabled),
	JS_CFUNC_DEF("set_navigation_map", 1, &navigation_region3d_class_set_navigation_map),
	JS_CFUNC_DEF("get_navigation_map", 0, &navigation_region3d_class_get_navigation_map),
	JS_CFUNC_DEF("set_use_edge_connections", 1, &navigation_region3d_class_set_use_edge_connections),
	JS_CFUNC_DEF("get_use_edge_connections", 0, &navigation_region3d_class_get_use_edge_connections),
	JS_CFUNC_DEF("set_navigation_layers", 1, &navigation_region3d_class_set_navigation_layers),
	JS_CFUNC_DEF("get_navigation_layers", 0, &navigation_region3d_class_get_navigation_layers),
	JS_CFUNC_DEF("set_navigation_layer_value", 2, &navigation_region3d_class_set_navigation_layer_value),
	JS_CFUNC_DEF("get_navigation_layer_value", 1, &navigation_region3d_class_get_navigation_layer_value),
	JS_CFUNC_DEF("get_region_rid", 0, &navigation_region3d_class_get_region_rid),
	JS_CFUNC_DEF("set_enter_cost", 1, &navigation_region3d_class_set_enter_cost),
	JS_CFUNC_DEF("get_enter_cost", 0, &navigation_region3d_class_get_enter_cost),
	JS_CFUNC_DEF("set_travel_cost", 1, &navigation_region3d_class_set_travel_cost),
	JS_CFUNC_DEF("get_travel_cost", 0, &navigation_region3d_class_get_travel_cost),
	JS_CFUNC_DEF("bake_navigation_mesh", 1, &navigation_region3d_class_bake_navigation_mesh),
	JS_CFUNC_DEF("is_baking", 0, &navigation_region3d_class_is_baking),
};

static int js_navigation_region3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&NavigationRegion3D::__class_id);
	classes["NavigationRegion3D"] = NavigationRegion3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NavigationRegion3D::__class_id, &navigation_region3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationRegion3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_region3d_class_proto_funcs, _countof(navigation_region3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, navigation_region3d_class_constructor, "NavigationRegion3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "NavigationRegion3D", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_region3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_region3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationRegion3D");
	return m;
}

JSModuleDef *js_init_navigation_region3d_module(JSContext *ctx) {
	return _js_init_navigation_region3d_module(ctx, "godot/classes/navigation_region3d");
}

void register_navigation_region3d() {
	js_init_navigation_region3d_module(ctx);
}