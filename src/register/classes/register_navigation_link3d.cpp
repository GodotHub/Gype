
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/navigation_link3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void navigation_link3d_class_finalizer(JSRuntime *rt, JSValue val) {
	NavigationLink3D *navigation_link3d = static_cast<NavigationLink3D *>(JS_GetOpaque(val, NavigationLink3D::__class_id));
	if (navigation_link3d)
		NavigationLink3D::free(nullptr, navigation_link3d);
}

static JSClassDef navigation_link3d_class_def = {
	"NavigationLink3D",
	.finalizer = navigation_link3d_class_finalizer
};

static JSValue navigation_link3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NavigationLink3D *navigation_link3d_class;
	JSValue obj = JS_NewObjectClass(ctx, NavigationLink3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	navigation_link3d_class = memnew(NavigationLink3D);
	if (!navigation_link3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, navigation_link3d_class);
	return obj;
}
static JSValue navigation_link3d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink3D::get_rid, NavigationLink3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link3d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink3D::set_enabled, NavigationLink3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link3d_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink3D::is_enabled, NavigationLink3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link3d_class_set_bidirectional(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink3D::set_bidirectional, NavigationLink3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link3d_class_is_bidirectional(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink3D::is_bidirectional, NavigationLink3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link3d_class_set_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink3D::set_navigation_layers, NavigationLink3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link3d_class_get_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink3D::get_navigation_layers, NavigationLink3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link3d_class_set_navigation_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink3D::set_navigation_layer_value, NavigationLink3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link3d_class_get_navigation_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink3D::get_navigation_layer_value, NavigationLink3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link3d_class_set_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink3D::set_start_position, NavigationLink3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link3d_class_get_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink3D::get_start_position, NavigationLink3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link3d_class_set_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink3D::set_end_position, NavigationLink3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link3d_class_get_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink3D::get_end_position, NavigationLink3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link3d_class_set_global_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink3D::set_global_start_position, NavigationLink3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link3d_class_get_global_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink3D::get_global_start_position, NavigationLink3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link3d_class_set_global_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink3D::set_global_end_position, NavigationLink3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link3d_class_get_global_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink3D::get_global_end_position, NavigationLink3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link3d_class_set_enter_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink3D::set_enter_cost, NavigationLink3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link3d_class_get_enter_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink3D::get_enter_cost, NavigationLink3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link3d_class_set_travel_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink3D::set_travel_cost, NavigationLink3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link3d_class_get_travel_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink3D::get_travel_cost, NavigationLink3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry navigation_link3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_rid", 0, &navigation_link3d_class_get_rid),
	JS_CFUNC_DEF("set_enabled", 1, &navigation_link3d_class_set_enabled),
	JS_CFUNC_DEF("is_enabled", 0, &navigation_link3d_class_is_enabled),
	JS_CFUNC_DEF("set_bidirectional", 1, &navigation_link3d_class_set_bidirectional),
	JS_CFUNC_DEF("is_bidirectional", 0, &navigation_link3d_class_is_bidirectional),
	JS_CFUNC_DEF("set_navigation_layers", 1, &navigation_link3d_class_set_navigation_layers),
	JS_CFUNC_DEF("get_navigation_layers", 0, &navigation_link3d_class_get_navigation_layers),
	JS_CFUNC_DEF("set_navigation_layer_value", 2, &navigation_link3d_class_set_navigation_layer_value),
	JS_CFUNC_DEF("get_navigation_layer_value", 1, &navigation_link3d_class_get_navigation_layer_value),
	JS_CFUNC_DEF("set_start_position", 1, &navigation_link3d_class_set_start_position),
	JS_CFUNC_DEF("get_start_position", 0, &navigation_link3d_class_get_start_position),
	JS_CFUNC_DEF("set_end_position", 1, &navigation_link3d_class_set_end_position),
	JS_CFUNC_DEF("get_end_position", 0, &navigation_link3d_class_get_end_position),
	JS_CFUNC_DEF("set_global_start_position", 1, &navigation_link3d_class_set_global_start_position),
	JS_CFUNC_DEF("get_global_start_position", 0, &navigation_link3d_class_get_global_start_position),
	JS_CFUNC_DEF("set_global_end_position", 1, &navigation_link3d_class_set_global_end_position),
	JS_CFUNC_DEF("get_global_end_position", 0, &navigation_link3d_class_get_global_end_position),
	JS_CFUNC_DEF("set_enter_cost", 1, &navigation_link3d_class_set_enter_cost),
	JS_CFUNC_DEF("get_enter_cost", 0, &navigation_link3d_class_get_enter_cost),
	JS_CFUNC_DEF("set_travel_cost", 1, &navigation_link3d_class_set_travel_cost),
	JS_CFUNC_DEF("get_travel_cost", 0, &navigation_link3d_class_get_travel_cost),
};

static int js_navigation_link3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&NavigationLink3D::__class_id);
	classes["NavigationLink3D"] = NavigationLink3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NavigationLink3D::__class_id, &navigation_link3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationLink3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_link3d_class_proto_funcs, _countof(navigation_link3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, navigation_link3d_class_constructor, "NavigationLink3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "NavigationLink3D", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_link3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_link3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationLink3D");
	return m;
}

JSModuleDef *js_init_navigation_link3d_module(JSContext *ctx) {
	return _js_init_navigation_link3d_module(ctx, "godot/classes/navigation_link3d");
}

void register_navigation_link3d() {
	js_init_navigation_link3d_module(ctx);
}