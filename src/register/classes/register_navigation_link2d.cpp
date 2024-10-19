
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/navigation_link2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void navigation_link2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef navigation_link2d_class_def = {
	"NavigationLink2D",
	.finalizer = navigation_link2d_class_finalizer
};

static JSValue navigation_link2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, NavigationLink2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	NavigationLink2D *navigation_link2d_class = memnew(NavigationLink2D);
	if (!navigation_link2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, navigation_link2d_class);	
	return obj;
}
static JSValue navigation_link2d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_rid, ctx, this_val, argc, argv);
};
static JSValue navigation_link2d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink2D::set_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::is_enabled, ctx, this_val, argc, argv);
};
static JSValue navigation_link2d_class_set_bidirectional(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink2D::set_bidirectional, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_is_bidirectional(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::is_bidirectional, ctx, this_val, argc, argv);
};
static JSValue navigation_link2d_class_set_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink2D::set_navigation_layers, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_get_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_navigation_layers, ctx, this_val, argc, argv);
};
static JSValue navigation_link2d_class_set_navigation_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink2D::set_navigation_layer_value, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_get_navigation_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_navigation_layer_value, ctx, this_val, argc, argv);
};
static JSValue navigation_link2d_class_set_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink2D::set_start_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_get_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_start_position, ctx, this_val, argc, argv);
};
static JSValue navigation_link2d_class_set_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink2D::set_end_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_get_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_end_position, ctx, this_val, argc, argv);
};
static JSValue navigation_link2d_class_set_global_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink2D::set_global_start_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_get_global_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_global_start_position, ctx, this_val, argc, argv);
};
static JSValue navigation_link2d_class_set_global_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink2D::set_global_end_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_get_global_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_global_end_position, ctx, this_val, argc, argv);
};
static JSValue navigation_link2d_class_set_enter_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink2D::set_enter_cost, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_get_enter_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_enter_cost, ctx, this_val, argc, argv);
};
static JSValue navigation_link2d_class_set_travel_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationLink2D::set_travel_cost, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_link2d_class_get_travel_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationLink2D::get_travel_cost, ctx, this_val, argc, argv);
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

void define_navigation_link2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "enabled"),
        JS_NewCFunction(ctx, navigation_link2d_class_is_enabled, "is_enabled", 0),
        JS_NewCFunction(ctx, navigation_link2d_class_set_enabled, "set_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "bidirectional"),
        JS_NewCFunction(ctx, navigation_link2d_class_is_bidirectional, "is_bidirectional", 0),
        JS_NewCFunction(ctx, navigation_link2d_class_set_bidirectional, "set_bidirectional", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "navigation_layers"),
        JS_NewCFunction(ctx, navigation_link2d_class_get_navigation_layers, "get_navigation_layers", 0),
        JS_NewCFunction(ctx, navigation_link2d_class_set_navigation_layers, "set_navigation_layers", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "start_position"),
        JS_NewCFunction(ctx, navigation_link2d_class_get_start_position, "get_start_position", 0),
        JS_NewCFunction(ctx, navigation_link2d_class_set_start_position, "set_start_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "end_position"),
        JS_NewCFunction(ctx, navigation_link2d_class_get_end_position, "get_end_position", 0),
        JS_NewCFunction(ctx, navigation_link2d_class_set_end_position, "set_end_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "enter_cost"),
        JS_NewCFunction(ctx, navigation_link2d_class_get_enter_cost, "get_enter_cost", 0),
        JS_NewCFunction(ctx, navigation_link2d_class_set_enter_cost, "set_enter_cost", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "travel_cost"),
        JS_NewCFunction(ctx, navigation_link2d_class_get_travel_cost, "get_travel_cost", 0),
        JS_NewCFunction(ctx, navigation_link2d_class_set_travel_cost, "set_travel_cost", 1),
        JS_PROP_GETSET
    );
}

static int js_navigation_link2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&NavigationLink2D::__class_id);
	classes["NavigationLink2D"] = NavigationLink2D::__class_id;
	class_id_list.insert(NavigationLink2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), NavigationLink2D::__class_id, &navigation_link2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, NavigationLink2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationLink2D::__class_id, proto);

	define_navigation_link2d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_link2d_class_proto_funcs, _countof(navigation_link2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, navigation_link2d_class_constructor, "NavigationLink2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "NavigationLink2D", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_link2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	NavigationLink2D::__init_js_class_id();
	js_init_navigation_link2d_module(ctx);
}