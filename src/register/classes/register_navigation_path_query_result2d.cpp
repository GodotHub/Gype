
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/navigation_path_query_result2d.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void navigation_path_query_result2d_class_finalizer(JSRuntime *rt, JSValue val) {
	NavigationPathQueryResult2D *navigation_path_query_result2d = static_cast<NavigationPathQueryResult2D *>(JS_GetOpaque(val, NavigationPathQueryResult2D::__class_id));
	if (navigation_path_query_result2d)
		NavigationPathQueryResult2D::free(nullptr, navigation_path_query_result2d);
}

static JSClassDef navigation_path_query_result2d_class_def = {
	"NavigationPathQueryResult2D",
	.finalizer = navigation_path_query_result2d_class_finalizer
};

static JSValue navigation_path_query_result2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NavigationPathQueryResult2D *navigation_path_query_result2d_class;
	JSValue obj = JS_NewObjectClass(ctx, NavigationPathQueryResult2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	navigation_path_query_result2d_class = memnew(NavigationPathQueryResult2D);
	if (!navigation_path_query_result2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, navigation_path_query_result2d_class);
	return obj;
}
static JSValue navigation_path_query_result2d_class_set_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPathQueryResult2D::set_path, NavigationPathQueryResult2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_result2d_class_get_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPathQueryResult2D::get_path, NavigationPathQueryResult2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_path_query_result2d_class_set_path_types(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPathQueryResult2D::set_path_types, NavigationPathQueryResult2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_result2d_class_get_path_types(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPathQueryResult2D::get_path_types, NavigationPathQueryResult2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_path_query_result2d_class_set_path_rids(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPathQueryResult2D::set_path_rids, NavigationPathQueryResult2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_result2d_class_get_path_rids(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPathQueryResult2D::get_path_rids, NavigationPathQueryResult2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_path_query_result2d_class_set_path_owner_ids(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPathQueryResult2D::set_path_owner_ids, NavigationPathQueryResult2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_path_query_result2d_class_get_path_owner_ids(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&NavigationPathQueryResult2D::get_path_owner_ids, NavigationPathQueryResult2D::__class_id, ctx, this_val, argv);
};
static JSValue navigation_path_query_result2d_class_reset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&NavigationPathQueryResult2D::reset, NavigationPathQueryResult2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry navigation_path_query_result2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_path", 1, &navigation_path_query_result2d_class_set_path),
	JS_CFUNC_DEF("get_path", 0, &navigation_path_query_result2d_class_get_path),
	JS_CFUNC_DEF("set_path_types", 1, &navigation_path_query_result2d_class_set_path_types),
	JS_CFUNC_DEF("get_path_types", 0, &navigation_path_query_result2d_class_get_path_types),
	JS_CFUNC_DEF("set_path_rids", 1, &navigation_path_query_result2d_class_set_path_rids),
	JS_CFUNC_DEF("get_path_rids", 0, &navigation_path_query_result2d_class_get_path_rids),
	JS_CFUNC_DEF("set_path_owner_ids", 1, &navigation_path_query_result2d_class_set_path_owner_ids),
	JS_CFUNC_DEF("get_path_owner_ids", 0, &navigation_path_query_result2d_class_get_path_owner_ids),
	JS_CFUNC_DEF("reset", 0, &navigation_path_query_result2d_class_reset),
};

static int js_navigation_path_query_result2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&NavigationPathQueryResult2D::__class_id);
	classes["NavigationPathQueryResult2D"] = NavigationPathQueryResult2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NavigationPathQueryResult2D::__class_id, &navigation_path_query_result2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationPathQueryResult2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_path_query_result2d_class_proto_funcs, _countof(navigation_path_query_result2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, navigation_path_query_result2d_class_constructor, "NavigationPathQueryResult2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "NavigationPathQueryResult2D", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_path_query_result2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_path_query_result2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationPathQueryResult2D");
	return m;
}

JSModuleDef *js_init_navigation_path_query_result2d_module(JSContext *ctx) {
	return _js_init_navigation_path_query_result2d_module(ctx, "godot/classes/navigation_path_query_result2d");
}

void register_navigation_path_query_result2d() {
	js_init_navigation_path_query_result2d_module(ctx);
}