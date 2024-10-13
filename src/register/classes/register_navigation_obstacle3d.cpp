
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/navigation_obstacle3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void navigation_obstacle3d_class_finalizer(JSRuntime *rt, JSValue val) {
	NavigationObstacle3D *navigation_obstacle3d = static_cast<NavigationObstacle3D *>(JS_GetOpaque(val, NavigationObstacle3D::__class_id));
	if (navigation_obstacle3d)
		NavigationObstacle3D::free(nullptr, navigation_obstacle3d);
}

static JSClassDef navigation_obstacle3d_class_def = {
	"NavigationObstacle3D",
	.finalizer = navigation_obstacle3d_class_finalizer
};

static JSValue navigation_obstacle3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NavigationObstacle3D *navigation_obstacle3d_class;
	JSValue obj = JS_NewObjectClass(ctx, NavigationObstacle3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	navigation_obstacle3d_class = memnew(NavigationObstacle3D);
	if (!navigation_obstacle3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, navigation_obstacle3d_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue navigation_obstacle3d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle3D::get_rid, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle3d_class_set_avoidance_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationObstacle3D::set_avoidance_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle3d_class_get_avoidance_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle3D::get_avoidance_enabled, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle3d_class_set_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationObstacle3D::set_navigation_map, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle3d_class_get_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle3D::get_navigation_map, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle3d_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationObstacle3D::set_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle3d_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle3D::get_radius, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle3d_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationObstacle3D::set_height, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle3d_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle3D::get_height, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle3d_class_set_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationObstacle3D::set_velocity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle3d_class_get_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle3D::get_velocity, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle3d_class_set_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationObstacle3D::set_vertices, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle3d_class_get_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle3D::get_vertices, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle3d_class_set_avoidance_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationObstacle3D::set_avoidance_layers, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle3d_class_get_avoidance_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle3D::get_avoidance_layers, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle3d_class_set_avoidance_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationObstacle3D::set_avoidance_layer_value, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle3d_class_get_avoidance_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle3D::get_avoidance_layer_value, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle3d_class_set_use_3d_avoidance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationObstacle3D::set_use_3d_avoidance, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle3d_class_get_use_3d_avoidance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle3D::get_use_3d_avoidance, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle3d_class_set_affect_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationObstacle3D::set_affect_navigation_mesh, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle3d_class_get_affect_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle3D::get_affect_navigation_mesh, ctx, this_val, argc, argv);
};
static JSValue navigation_obstacle3d_class_set_carve_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationObstacle3D::set_carve_navigation_mesh, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_obstacle3d_class_get_carve_navigation_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationObstacle3D::get_carve_navigation_mesh, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry navigation_obstacle3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_rid", 0, &navigation_obstacle3d_class_get_rid),
	JS_CFUNC_DEF("set_avoidance_enabled", 1, &navigation_obstacle3d_class_set_avoidance_enabled),
	JS_CFUNC_DEF("get_avoidance_enabled", 0, &navigation_obstacle3d_class_get_avoidance_enabled),
	JS_CFUNC_DEF("set_navigation_map", 1, &navigation_obstacle3d_class_set_navigation_map),
	JS_CFUNC_DEF("get_navigation_map", 0, &navigation_obstacle3d_class_get_navigation_map),
	JS_CFUNC_DEF("set_radius", 1, &navigation_obstacle3d_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &navigation_obstacle3d_class_get_radius),
	JS_CFUNC_DEF("set_height", 1, &navigation_obstacle3d_class_set_height),
	JS_CFUNC_DEF("get_height", 0, &navigation_obstacle3d_class_get_height),
	JS_CFUNC_DEF("set_velocity", 1, &navigation_obstacle3d_class_set_velocity),
	JS_CFUNC_DEF("get_velocity", 0, &navigation_obstacle3d_class_get_velocity),
	JS_CFUNC_DEF("set_vertices", 1, &navigation_obstacle3d_class_set_vertices),
	JS_CFUNC_DEF("get_vertices", 0, &navigation_obstacle3d_class_get_vertices),
	JS_CFUNC_DEF("set_avoidance_layers", 1, &navigation_obstacle3d_class_set_avoidance_layers),
	JS_CFUNC_DEF("get_avoidance_layers", 0, &navigation_obstacle3d_class_get_avoidance_layers),
	JS_CFUNC_DEF("set_avoidance_layer_value", 2, &navigation_obstacle3d_class_set_avoidance_layer_value),
	JS_CFUNC_DEF("get_avoidance_layer_value", 1, &navigation_obstacle3d_class_get_avoidance_layer_value),
	JS_CFUNC_DEF("set_use_3d_avoidance", 1, &navigation_obstacle3d_class_set_use_3d_avoidance),
	JS_CFUNC_DEF("get_use_3d_avoidance", 0, &navigation_obstacle3d_class_get_use_3d_avoidance),
	JS_CFUNC_DEF("set_affect_navigation_mesh", 1, &navigation_obstacle3d_class_set_affect_navigation_mesh),
	JS_CFUNC_DEF("get_affect_navigation_mesh", 0, &navigation_obstacle3d_class_get_affect_navigation_mesh),
	JS_CFUNC_DEF("set_carve_navigation_mesh", 1, &navigation_obstacle3d_class_set_carve_navigation_mesh),
	JS_CFUNC_DEF("get_carve_navigation_mesh", 0, &navigation_obstacle3d_class_get_carve_navigation_mesh),
};

void define_navigation_obstacle3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radius"),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_get_radius, "get_radius", 0),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_set_radius, "set_radius", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "height"),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_get_height, "get_height", 0),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_set_height, "set_height", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "vertices"),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_get_vertices, "get_vertices", 0),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_set_vertices, "set_vertices", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "affect_navigation_mesh"),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_get_affect_navigation_mesh, "get_affect_navigation_mesh", 0),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_set_affect_navigation_mesh, "set_affect_navigation_mesh", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "carve_navigation_mesh"),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_get_carve_navigation_mesh, "get_carve_navigation_mesh", 0),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_set_carve_navigation_mesh, "set_carve_navigation_mesh", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "avoidance_enabled"),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_get_avoidance_enabled, "get_avoidance_enabled", 0),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_set_avoidance_enabled, "set_avoidance_enabled", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "velocity"),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_get_velocity, "get_velocity", 0),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_set_velocity, "set_velocity", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "avoidance_layers"),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_get_avoidance_layers, "get_avoidance_layers", 0),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_set_avoidance_layers, "set_avoidance_layers", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "use_3d_avoidance"),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_get_use_3d_avoidance, "get_use_3d_avoidance", 0),
        JS_NewCFunction(ctx, navigation_obstacle3d_class_set_use_3d_avoidance, "set_use_3d_avoidance", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_navigation_obstacle3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&NavigationObstacle3D::__class_id);
	classes["NavigationObstacle3D"] = NavigationObstacle3D::__class_id;
	class_id_list.insert(NavigationObstacle3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), NavigationObstacle3D::__class_id, &navigation_obstacle3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationObstacle3D::__class_id, proto);
	define_navigation_obstacle3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_obstacle3d_class_proto_funcs, _countof(navigation_obstacle3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, navigation_obstacle3d_class_constructor, "NavigationObstacle3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "NavigationObstacle3D", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_obstacle3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_obstacle3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationObstacle3D");
	return m;
}

JSModuleDef *js_init_navigation_obstacle3d_module(JSContext *ctx) {
	return _js_init_navigation_obstacle3d_module(ctx, "godot/classes/navigation_obstacle3d");
}

void register_navigation_obstacle3d() {
	NavigationObstacle3D::__init_js_class_id();
	js_init_navigation_obstacle3d_module(ctx);
}