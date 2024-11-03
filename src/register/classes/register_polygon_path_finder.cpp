
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/polygon_path_finder.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void polygon_path_finder_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef polygon_path_finder_class_def = {
	"PolygonPathFinder",
	.finalizer = polygon_path_finder_class_finalizer
};

static JSValue polygon_path_finder_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PolygonPathFinder::__class_id);
	if (JS_IsException(obj))
		return obj;

	PolygonPathFinder *polygon_path_finder_class;
	if (argc == 1) 
		polygon_path_finder_class = static_cast<PolygonPathFinder *>(Variant(*argv).operator Object *());
	else 
		polygon_path_finder_class = memnew(PolygonPathFinder);
	if (!polygon_path_finder_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, polygon_path_finder_class);
	return obj;
}
static JSValue polygon_path_finder_class_setup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PolygonPathFinder::setup, ctx, this_val, argc, argv);
};
static JSValue polygon_path_finder_class_find_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&PolygonPathFinder::find_path, ctx, this_val, argc, argv);
};
static JSValue polygon_path_finder_class_get_intersections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PolygonPathFinder::get_intersections, ctx, this_val, argc, argv);
};
static JSValue polygon_path_finder_class_get_closest_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PolygonPathFinder::get_closest_point, ctx, this_val, argc, argv);
};
static JSValue polygon_path_finder_class_is_point_inside(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PolygonPathFinder::is_point_inside, ctx, this_val, argc, argv);
};
static JSValue polygon_path_finder_class_set_point_penalty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PolygonPathFinder::set_point_penalty, ctx, this_val, argc, argv);
};
static JSValue polygon_path_finder_class_get_point_penalty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PolygonPathFinder::get_point_penalty, ctx, this_val, argc, argv);
};
static JSValue polygon_path_finder_class_get_bounds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PolygonPathFinder::get_bounds, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry polygon_path_finder_class_proto_funcs[] = {
	JS_CFUNC_DEF("setup", 2, &polygon_path_finder_class_setup),
	JS_CFUNC_DEF("find_path", 2, &polygon_path_finder_class_find_path),
	JS_CFUNC_DEF("get_intersections", 2, &polygon_path_finder_class_get_intersections),
	JS_CFUNC_DEF("get_closest_point", 1, &polygon_path_finder_class_get_closest_point),
	JS_CFUNC_DEF("is_point_inside", 1, &polygon_path_finder_class_is_point_inside),
	JS_CFUNC_DEF("set_point_penalty", 2, &polygon_path_finder_class_set_point_penalty),
	JS_CFUNC_DEF("get_point_penalty", 1, &polygon_path_finder_class_get_point_penalty),
	JS_CFUNC_DEF("get_bounds", 0, &polygon_path_finder_class_get_bounds),
};

static void define_polygon_path_finder_property(JSContext *ctx, JSValue proto) {
	
}

static void define_polygon_path_finder_enum(JSContext *ctx, JSValue proto) {
}

static int js_polygon_path_finder_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PolygonPathFinder"] = PolygonPathFinder::__class_id;
	class_id_list.insert(PolygonPathFinder::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PolygonPathFinder::__class_id, &polygon_path_finder_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PolygonPathFinder::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PolygonPathFinder::__class_id, proto);

	define_polygon_path_finder_property(ctx, proto);
	define_polygon_path_finder_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, polygon_path_finder_class_proto_funcs, _countof(polygon_path_finder_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, polygon_path_finder_class_constructor, "PolygonPathFinder", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "PolygonPathFinder", ctor);
	constructors[PolygonPathFinder::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_polygon_path_finder_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_polygon_path_finder_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PolygonPathFinder");
	return m;
}

JSModuleDef *js_init_polygon_path_finder_module(JSContext *ctx) {
	return _js_init_polygon_path_finder_module(ctx, "@godot/classes/polygon_path_finder");
}

void register_polygon_path_finder() {
	PolygonPathFinder::__init_js_class_id();
	js_init_polygon_path_finder_module(ctx);
}