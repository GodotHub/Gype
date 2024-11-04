
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/navigation_path_query_result3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void navigation_path_query_result3d_class_finalizer(JSRuntime *rt, JSValue val) {
	NavigationPathQueryResult3D *navigation_path_query_result3d = static_cast<NavigationPathQueryResult3D *>(JS_GetOpaque(val, NavigationPathQueryResult3D::__class_id));
	if (navigation_path_query_result3d)
		memdelete(navigation_path_query_result3d);
}

static JSClassDef navigation_path_query_result3d_class_def = {
	"NavigationPathQueryResult3D",
	.finalizer = navigation_path_query_result3d_class_finalizer
};

static JSValue navigation_path_query_result3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, NavigationPathQueryResult3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	NavigationPathQueryResult3D *navigation_path_query_result3d_class;
	if (argc == 1) 
		navigation_path_query_result3d_class = static_cast<NavigationPathQueryResult3D *>(Variant(*argv).operator Object *());
	else 
		navigation_path_query_result3d_class = memnew(NavigationPathQueryResult3D);
	if (!navigation_path_query_result3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, navigation_path_query_result3d_class);
	return obj;
}
static JSValue navigation_path_query_result3d_class_set_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationPathQueryResult3D::set_path, ctx, this_val, argc, argv);
};
static JSValue navigation_path_query_result3d_class_get_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationPathQueryResult3D::get_path, ctx, this_val, argc, argv);
};
static JSValue navigation_path_query_result3d_class_set_path_types(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationPathQueryResult3D::set_path_types, ctx, this_val, argc, argv);
};
static JSValue navigation_path_query_result3d_class_get_path_types(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationPathQueryResult3D::get_path_types, ctx, this_val, argc, argv);
};
static JSValue navigation_path_query_result3d_class_set_path_rids(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationPathQueryResult3D::set_path_rids, ctx, this_val, argc, argv);
};
static JSValue navigation_path_query_result3d_class_get_path_rids(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationPathQueryResult3D::get_path_rids, ctx, this_val, argc, argv);
};
static JSValue navigation_path_query_result3d_class_set_path_owner_ids(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationPathQueryResult3D::set_path_owner_ids, ctx, this_val, argc, argv);
};
static JSValue navigation_path_query_result3d_class_get_path_owner_ids(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationPathQueryResult3D::get_path_owner_ids, ctx, this_val, argc, argv);
};
static JSValue navigation_path_query_result3d_class_reset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationPathQueryResult3D::reset, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry navigation_path_query_result3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_path", 1, &navigation_path_query_result3d_class_set_path),
	JS_CFUNC_DEF("get_path", 0, &navigation_path_query_result3d_class_get_path),
	JS_CFUNC_DEF("set_path_types", 1, &navigation_path_query_result3d_class_set_path_types),
	JS_CFUNC_DEF("get_path_types", 0, &navigation_path_query_result3d_class_get_path_types),
	JS_CFUNC_DEF("set_path_rids", 1, &navigation_path_query_result3d_class_set_path_rids),
	JS_CFUNC_DEF("get_path_rids", 0, &navigation_path_query_result3d_class_get_path_rids),
	JS_CFUNC_DEF("set_path_owner_ids", 1, &navigation_path_query_result3d_class_set_path_owner_ids),
	JS_CFUNC_DEF("get_path_owner_ids", 0, &navigation_path_query_result3d_class_get_path_owner_ids),
	JS_CFUNC_DEF("reset", 0, &navigation_path_query_result3d_class_reset),
};

static void define_navigation_path_query_result3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path"),
        JS_NewCFunction(ctx, navigation_path_query_result3d_class_get_path, "get_path", 0),
        JS_NewCFunction(ctx, navigation_path_query_result3d_class_set_path, "set_path", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path_types"),
        JS_NewCFunction(ctx, navigation_path_query_result3d_class_get_path_types, "get_path_types", 0),
        JS_NewCFunction(ctx, navigation_path_query_result3d_class_set_path_types, "set_path_types", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path_rids"),
        JS_NewCFunction(ctx, navigation_path_query_result3d_class_get_path_rids, "get_path_rids", 0),
        JS_NewCFunction(ctx, navigation_path_query_result3d_class_set_path_rids, "set_path_rids", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "path_owner_ids"),
        JS_NewCFunction(ctx, navigation_path_query_result3d_class_get_path_owner_ids, "get_path_owner_ids", 0),
        JS_NewCFunction(ctx, navigation_path_query_result3d_class_set_path_owner_ids, "set_path_owner_ids", 1),
        JS_PROP_GETSET
    );
	
}

static void define_navigation_path_query_result3d_enum(JSContext *ctx, JSValue proto) {
	JSValue PathSegmentType_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, PathSegmentType_obj, "PATH_SEGMENT_TYPE_REGION", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, PathSegmentType_obj, "PATH_SEGMENT_TYPE_LINK", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "PathSegmentType", PathSegmentType_obj);
}

static int js_navigation_path_query_result3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["NavigationPathQueryResult3D"] = NavigationPathQueryResult3D::__class_id;
	class_id_list.insert(NavigationPathQueryResult3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), NavigationPathQueryResult3D::__class_id, &navigation_path_query_result3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, NavigationPathQueryResult3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationPathQueryResult3D::__class_id, proto);

	define_navigation_path_query_result3d_property(ctx, proto);
	define_navigation_path_query_result3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_path_query_result3d_class_proto_funcs, _countof(navigation_path_query_result3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, navigation_path_query_result3d_class_constructor, "NavigationPathQueryResult3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "NavigationPathQueryResult3D", ctor);
	constructors[NavigationPathQueryResult3D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_navigation_path_query_result3d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_path_query_result3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationPathQueryResult3D");
	return m;
}

JSModuleDef *js_init_navigation_path_query_result3d_module(JSContext *ctx) {
	return _js_init_navigation_path_query_result3d_module(ctx, "@godot/classes/navigation_path_query_result3d");
}

void register_navigation_path_query_result3d() {
	NavigationPathQueryResult3D::__init_js_class_id();
	js_init_navigation_path_query_result3d_module(ctx);
}