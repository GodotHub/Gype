
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/navigation_link3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void navigation_link3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef navigation_link3d_class_def = {
	"NavigationLink3D",
	.finalizer = navigation_link3d_class_finalizer
};

static JSValue navigation_link3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, NavigationLink3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	NavigationLink3D *navigation_link3d_class;
	if (argc == 1) 
		navigation_link3d_class = static_cast<NavigationLink3D *>(Variant(*argv).operator Object *());
	else 
		navigation_link3d_class = memnew(NavigationLink3D);
	if (!navigation_link3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, navigation_link3d_class);
	return obj;
}
static JSValue navigation_link3d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationLink3D::get_rid, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationLink3D::set_enabled, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationLink3D::is_enabled, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_set_bidirectional(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationLink3D::set_bidirectional, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_is_bidirectional(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationLink3D::is_bidirectional, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_set_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationLink3D::set_navigation_layers, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_get_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationLink3D::get_navigation_layers, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_set_navigation_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationLink3D::set_navigation_layer_value, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_get_navigation_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationLink3D::get_navigation_layer_value, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_set_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationLink3D::set_start_position, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_get_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationLink3D::get_start_position, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_set_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationLink3D::set_end_position, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_get_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationLink3D::get_end_position, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_set_global_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationLink3D::set_global_start_position, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_get_global_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationLink3D::get_global_start_position, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_set_global_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationLink3D::set_global_end_position, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_get_global_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationLink3D::get_global_end_position, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_set_enter_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationLink3D::set_enter_cost, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_get_enter_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationLink3D::get_enter_cost, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_set_travel_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationLink3D::set_travel_cost, ctx, this_val, argc, argv);
};
static JSValue navigation_link3d_class_get_travel_cost(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationLink3D::get_travel_cost, ctx, this_val, argc, argv);
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

static void define_navigation_link3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "enabled"),
        JS_NewCFunction(ctx, navigation_link3d_class_is_enabled, "is_enabled", 0),
        JS_NewCFunction(ctx, navigation_link3d_class_set_enabled, "set_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bidirectional"),
        JS_NewCFunction(ctx, navigation_link3d_class_is_bidirectional, "is_bidirectional", 0),
        JS_NewCFunction(ctx, navigation_link3d_class_set_bidirectional, "set_bidirectional", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "navigation_layers"),
        JS_NewCFunction(ctx, navigation_link3d_class_get_navigation_layers, "get_navigation_layers", 0),
        JS_NewCFunction(ctx, navigation_link3d_class_set_navigation_layers, "set_navigation_layers", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "start_position"),
        JS_NewCFunction(ctx, navigation_link3d_class_get_start_position, "get_start_position", 0),
        JS_NewCFunction(ctx, navigation_link3d_class_set_start_position, "set_start_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "end_position"),
        JS_NewCFunction(ctx, navigation_link3d_class_get_end_position, "get_end_position", 0),
        JS_NewCFunction(ctx, navigation_link3d_class_set_end_position, "set_end_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "enter_cost"),
        JS_NewCFunction(ctx, navigation_link3d_class_get_enter_cost, "get_enter_cost", 0),
        JS_NewCFunction(ctx, navigation_link3d_class_set_enter_cost, "set_enter_cost", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "travel_cost"),
        JS_NewCFunction(ctx, navigation_link3d_class_get_travel_cost, "get_travel_cost", 0),
        JS_NewCFunction(ctx, navigation_link3d_class_set_travel_cost, "set_travel_cost", 1),
        JS_PROP_GETSET
    );
	
}

static void define_navigation_link3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_navigation_link3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["NavigationLink3D"] = NavigationLink3D::__class_id;
	class_id_list.insert(NavigationLink3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), NavigationLink3D::__class_id, &navigation_link3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, NavigationLink3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationLink3D::__class_id, proto);

	define_navigation_link3d_property(ctx, proto);
	define_navigation_link3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_link3d_class_proto_funcs, _countof(navigation_link3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, navigation_link3d_class_constructor, "NavigationLink3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "NavigationLink3D", ctor);
	constructors[NavigationLink3D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_navigation_link3d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_link3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationLink3D");
	return m;
}

JSModuleDef *js_init_navigation_link3d_module(JSContext *ctx) {
	return _js_init_navigation_link3d_module(ctx, "@godot/classes/navigation_link3d");
}

void register_navigation_link3d() {
	NavigationLink3D::__init_js_class_id();
	js_init_navigation_link3d_module(ctx);
}