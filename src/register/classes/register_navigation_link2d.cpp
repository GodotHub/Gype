
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/navigation_link2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void navigation_link2d_class_finalizer(JSRuntime *rt, JSValue val) {
	NavigationLink2D *navigation_link2d = static_cast<NavigationLink2D *>(JS_GetOpaque(val, NavigationLink2D::__class_id));
	if (navigation_link2d)
		NavigationLink2D::free(nullptr, navigation_link2d);
}

static JSClassDef navigation_link2d_class_def = {
	"NavigationLink2D",
	.finalizer = navigation_link2d_class_finalizer
};

static JSValue navigation_link2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NavigationLink2D *navigation_link2d_class;
	JSValue obj = JS_NewObjectClass(ctx, NavigationLink2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	navigation_link2d_class = memnew(NavigationLink2D);
	if (!navigation_link2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, navigation_link2d_class);
	return obj;
}
static JSValue navigation_link2d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_rid, NavigationLink2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link2d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationLink2D::set_enabled, NavigationLink2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::is_enabled, NavigationLink2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link2d_class_set_bidirectional(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationLink2D::set_bidirectional, NavigationLink2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_is_bidirectional(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::is_bidirectional, NavigationLink2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link2d_class_set_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationLink2D::set_navigation_layers, NavigationLink2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_get_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_navigation_layers, NavigationLink2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link2d_class_set_navigation_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationLink2D::set_navigation_layer_value, NavigationLink2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_get_navigation_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_navigation_layer_value, NavigationLink2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link2d_class_set_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationLink2D::set_start_position, NavigationLink2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_get_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_start_position, NavigationLink2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link2d_class_set_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationLink2D::set_end_position, NavigationLink2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_get_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_end_position, NavigationLink2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link2d_class_set_global_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationLink2D::set_global_start_position, NavigationLink2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_get_global_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_global_start_position, NavigationLink2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link2d_class_set_global_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationLink2D::set_global_end_position, NavigationLink2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_get_global_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_global_end_position, NavigationLink2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link2d_class_set_enter_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationLink2D::set_enter_cost, NavigationLink2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_get_enter_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_enter_cost, NavigationLink2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_link2d_class_set_travel_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationLink2D::set_travel_cost, NavigationLink2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_get_travel_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_travel_cost, NavigationLink2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry navigation_link2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_rid", 0, &navigation_link2d_class_get_rid),
	JS_CFUNC_DEF("set_enabled", 1, &navigation_link2d_class_set_enabled),
	JS_CFUNC_DEF("is_enabled", 0, &navigation_link2d_class_is_enabled),
	JS_CFUNC_DEF("set_bidirectional", 1, &navigation_link2d_class_set_bidirectional),
	JS_CFUNC_DEF("is_bidirectional", 0, &navigation_link2d_class_is_bidirectional),
	JS_CFUNC_DEF("set_navigation_layers", 1, &navigation_link2d_class_set_navigation_layers),
	JS_CFUNC_DEF("get_navigation_layers", 0, &navigation_link2d_class_get_navigation_layers),
	JS_CFUNC_DEF("set_navigation_layer_value", 2, &navigation_link2d_class_set_navigation_layer_value),
	JS_CFUNC_DEF("get_navigation_layer_value", 1, &navigation_link2d_class_get_navigation_layer_value),
	JS_CFUNC_DEF("set_start_position", 1, &navigation_link2d_class_set_start_position),
	JS_CFUNC_DEF("get_start_position", 0, &navigation_link2d_class_get_start_position),
	JS_CFUNC_DEF("set_end_position", 1, &navigation_link2d_class_set_end_position),
	JS_CFUNC_DEF("get_end_position", 0, &navigation_link2d_class_get_end_position),
	JS_CFUNC_DEF("set_global_start_position", 1, &navigation_link2d_class_set_global_start_position),
	JS_CFUNC_DEF("get_global_start_position", 0, &navigation_link2d_class_get_global_start_position),
	JS_CFUNC_DEF("set_global_end_position", 1, &navigation_link2d_class_set_global_end_position),
	JS_CFUNC_DEF("get_global_end_position", 0, &navigation_link2d_class_get_global_end_position),
	JS_CFUNC_DEF("set_enter_cost", 1, &navigation_link2d_class_set_enter_cost),
	JS_CFUNC_DEF("get_enter_cost", 0, &navigation_link2d_class_get_enter_cost),
	JS_CFUNC_DEF("set_travel_cost", 1, &navigation_link2d_class_set_travel_cost),
	JS_CFUNC_DEF("get_travel_cost", 0, &navigation_link2d_class_get_travel_cost),
};

static int js_navigation_link2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&NavigationLink2D::__class_id);
	classes["NavigationLink2D"] = NavigationLink2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NavigationLink2D::__class_id, &navigation_link2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationLink2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_link2d_class_proto_funcs, _countof(navigation_link2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, navigation_link2d_class_constructor, "NavigationLink2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "NavigationLink2D", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_link2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_link2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationLink2D");
	return m;
}

JSModuleDef *js_init_navigation_link2d_module(JSContext *ctx) {
	return _js_init_navigation_link2d_module(ctx, "godot/classes/navigation_link2d");
}

void register_navigation_link2d() {
	js_init_navigation_link2d_module(ctx);
}