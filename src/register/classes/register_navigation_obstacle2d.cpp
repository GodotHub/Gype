
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/navigation_obstacle2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void navigation_obstacle2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef navigation_obstacle2d_class_def = {
	"NavigationObstacle2D",
	.finalizer = navigation_obstacle2d_class_finalizer
};

static JSValue navigation_obstacle2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, NavigationObstacle2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	NavigationObstacle2D *navigation_obstacle2d_class = memnew(NavigationObstacle2D);
	if (!navigation_obstacle2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, navigation_obstacle2d_class);	
	return obj;
}
static JSValue navigation_obstacle2d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_rid, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle2d_class_set_avoidance_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationObstacle2D::set_avoidance_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_avoidance_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_avoidance_enabled, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle2d_class_set_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationObstacle2D::set_navigation_map, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_navigation_map, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle2d_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationObstacle2D::set_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_radius, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle2d_class_set_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationObstacle2D::set_velocity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_velocity, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle2d_class_set_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationObstacle2D::set_vertices, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_vertices, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle2d_class_set_avoidance_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationObstacle2D::set_avoidance_layers, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_avoidance_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_avoidance_layers, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle2d_class_set_avoidance_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationObstacle2D::set_avoidance_layer_value, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_avoidance_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_avoidance_layer_value, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle2d_class_set_affect_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationObstacle2D::set_affect_navigation_mesh, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_affect_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_affect_navigation_mesh, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle2d_class_set_carve_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationObstacle2D::set_carve_navigation_mesh, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle2d_class_get_carve_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationObstacle2D::get_carve_navigation_mesh, ctx, this_val, argc, argv);
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

void define_navigation_obstacle2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radius"),
        JS_NewCFunction(ctx, navigation_obstacle2d_class_get_radius, "get_radius", 0),
        JS_NewCFunction(ctx, navigation_obstacle2d_class_set_radius, "set_radius", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "vertices"),
        JS_NewCFunction(ctx, navigation_obstacle2d_class_get_vertices, "get_vertices", 0),
        JS_NewCFunction(ctx, navigation_obstacle2d_class_set_vertices, "set_vertices", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "affect_navigation_mesh"),
        JS_NewCFunction(ctx, navigation_obstacle2d_class_get_affect_navigation_mesh, "get_affect_navigation_mesh", 0),
        JS_NewCFunction(ctx, navigation_obstacle2d_class_set_affect_navigation_mesh, "set_affect_navigation_mesh", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "carve_navigation_mesh"),
        JS_NewCFunction(ctx, navigation_obstacle2d_class_get_carve_navigation_mesh, "get_carve_navigation_mesh", 0),
        JS_NewCFunction(ctx, navigation_obstacle2d_class_set_carve_navigation_mesh, "set_carve_navigation_mesh", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "avoidance_enabled"),
        JS_NewCFunction(ctx, navigation_obstacle2d_class_get_avoidance_enabled, "get_avoidance_enabled", 0),
        JS_NewCFunction(ctx, navigation_obstacle2d_class_set_avoidance_enabled, "set_avoidance_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "velocity"),
        JS_NewCFunction(ctx, navigation_obstacle2d_class_get_velocity, "get_velocity", 0),
        JS_NewCFunction(ctx, navigation_obstacle2d_class_set_velocity, "set_velocity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "avoidance_layers"),
        JS_NewCFunction(ctx, navigation_obstacle2d_class_get_avoidance_layers, "get_avoidance_layers", 0),
        JS_NewCFunction(ctx, navigation_obstacle2d_class_set_avoidance_layers, "set_avoidance_layers", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_navigation_obstacle2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&NavigationObstacle2D::__class_id);
	classes["NavigationObstacle2D"] = NavigationObstacle2D::__class_id;
	class_id_list.insert(NavigationObstacle2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), NavigationObstacle2D::__class_id, &navigation_obstacle2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, NavigationObstacle2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationObstacle2D::__class_id, proto);

	define_navigation_obstacle2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_obstacle2d_class_proto_funcs, _countof(navigation_obstacle2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, navigation_obstacle2d_class_constructor, "NavigationObstacle2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "NavigationObstacle2D", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_obstacle2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	NavigationObstacle2D::__init_js_class_id();
	js_init_navigation_obstacle2d_module(ctx);
}