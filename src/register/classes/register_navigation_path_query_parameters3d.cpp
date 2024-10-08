
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/navigation_path_query_parameters3d.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void navigation_path_query_parameters3d_class_finalizer(JSRuntime *rt, JSValue val) {
	NavigationPathQueryParameters3D *navigation_path_query_parameters3d = static_cast<NavigationPathQueryParameters3D *>(JS_GetOpaque(val, NavigationPathQueryParameters3D::__class_id));
	if (navigation_path_query_parameters3d)
		NavigationPathQueryParameters3D::free(nullptr, navigation_path_query_parameters3d);
}

static JSClassDef navigation_path_query_parameters3d_class_def = {
	"NavigationPathQueryParameters3D",
	.finalizer = navigation_path_query_parameters3d_class_finalizer
};

static JSValue navigation_path_query_parameters3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NavigationPathQueryParameters3D *navigation_path_query_parameters3d_class;
	JSValue obj = JS_NewObjectClass(ctx, NavigationPathQueryParameters3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	navigation_path_query_parameters3d_class = memnew(NavigationPathQueryParameters3D);
	if (!navigation_path_query_parameters3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, navigation_path_query_parameters3d_class);
	return obj;
}
static JSValue navigation_path_query_parameters3d_class_set_pathfinding_algorithm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_pathfinding_algorithm, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_pathfinding_algorithm(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_pathfinding_algorithm, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_path_query_parameters3d_class_set_path_postprocessing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_path_postprocessing, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_path_postprocessing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_path_postprocessing, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_path_query_parameters3d_class_set_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_map, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_map, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_path_query_parameters3d_class_set_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_start_position, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_start_position, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_path_query_parameters3d_class_set_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_target_position, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_target_position, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_path_query_parameters3d_class_set_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_navigation_layers, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_navigation_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_navigation_layers, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_path_query_parameters3d_class_set_metadata_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_metadata_flags, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_metadata_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_metadata_flags, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_path_query_parameters3d_class_set_simplify_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_simplify_path, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_simplify_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_simplify_path, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_path_query_parameters3d_class_set_simplify_epsilon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPathQueryParameters3D::set_simplify_epsilon, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_parameters3d_class_get_simplify_epsilon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPathQueryParameters3D::get_simplify_epsilon, NavigationPathQueryParameters3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry navigation_path_query_parameters3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_pathfinding_algorithm", 1, &navigation_path_query_parameters3d_class_set_pathfinding_algorithm),
	JS_CFUNC_DEF("get_pathfinding_algorithm", 0, &navigation_path_query_parameters3d_class_get_pathfinding_algorithm),
	JS_CFUNC_DEF("set_path_postprocessing", 1, &navigation_path_query_parameters3d_class_set_path_postprocessing),
	JS_CFUNC_DEF("get_path_postprocessing", 0, &navigation_path_query_parameters3d_class_get_path_postprocessing),
	JS_CFUNC_DEF("set_map", 1, &navigation_path_query_parameters3d_class_set_map),
	JS_CFUNC_DEF("get_map", 0, &navigation_path_query_parameters3d_class_get_map),
	JS_CFUNC_DEF("set_start_position", 1, &navigation_path_query_parameters3d_class_set_start_position),
	JS_CFUNC_DEF("get_start_position", 0, &navigation_path_query_parameters3d_class_get_start_position),
	JS_CFUNC_DEF("set_target_position", 1, &navigation_path_query_parameters3d_class_set_target_position),
	JS_CFUNC_DEF("get_target_position", 0, &navigation_path_query_parameters3d_class_get_target_position),
	JS_CFUNC_DEF("set_navigation_layers", 1, &navigation_path_query_parameters3d_class_set_navigation_layers),
	JS_CFUNC_DEF("get_navigation_layers", 0, &navigation_path_query_parameters3d_class_get_navigation_layers),
	JS_CFUNC_DEF("set_metadata_flags", 1, &navigation_path_query_parameters3d_class_set_metadata_flags),
	JS_CFUNC_DEF("get_metadata_flags", 0, &navigation_path_query_parameters3d_class_get_metadata_flags),
	JS_CFUNC_DEF("set_simplify_path", 1, &navigation_path_query_parameters3d_class_set_simplify_path),
	JS_CFUNC_DEF("get_simplify_path", 0, &navigation_path_query_parameters3d_class_get_simplify_path),
	JS_CFUNC_DEF("set_simplify_epsilon", 1, &navigation_path_query_parameters3d_class_set_simplify_epsilon),
	JS_CFUNC_DEF("get_simplify_epsilon", 0, &navigation_path_query_parameters3d_class_get_simplify_epsilon),
};

static int js_navigation_path_query_parameters3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&NavigationPathQueryParameters3D::__class_id);
	classes["NavigationPathQueryParameters3D"] = NavigationPathQueryParameters3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NavigationPathQueryParameters3D::__class_id, &navigation_path_query_parameters3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationPathQueryParameters3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_path_query_parameters3d_class_proto_funcs, _countof(navigation_path_query_parameters3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, navigation_path_query_parameters3d_class_constructor, "NavigationPathQueryParameters3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "NavigationPathQueryParameters3D", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_path_query_parameters3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_path_query_parameters3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationPathQueryParameters3D");
	return m;
}

JSModuleDef *js_init_navigation_path_query_parameters3d_module(JSContext *ctx) {
	return _js_init_navigation_path_query_parameters3d_module(ctx, "godot/classes/navigation_path_query_parameters3d");
}

void register_navigation_path_query_parameters3d() {
	js_init_navigation_path_query_parameters3d_module(ctx);
}