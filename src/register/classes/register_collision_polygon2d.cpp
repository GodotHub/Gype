
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/collision_polygon2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void collision_polygon2d_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef collision_polygon2d_class_def = {
	"CollisionPolygon2D",
	.finalizer = collision_polygon2d_class_finalizer
};

static JSValue collision_polygon2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CollisionPolygon2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	CollisionPolygon2D *collision_polygon2d_class = memnew(CollisionPolygon2D);
	if (!collision_polygon2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, collision_polygon2d_class);
	return obj;
}
static JSValue collision_polygon2d_class_set_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&CollisionPolygon2D::set_polygon, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon2d_class_get_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionPolygon2D::get_polygon, ctx, this_val, argc, argv);
};
static JSValue collision_polygon2d_class_set_build_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&CollisionPolygon2D::set_build_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon2d_class_get_build_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionPolygon2D::get_build_mode, ctx, this_val, argc, argv);
};
static JSValue collision_polygon2d_class_set_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&CollisionPolygon2D::set_disabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon2d_class_is_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionPolygon2D::is_disabled, ctx, this_val, argc, argv);
};
static JSValue collision_polygon2d_class_set_one_way_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&CollisionPolygon2D::set_one_way_collision, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon2d_class_is_one_way_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionPolygon2D::is_one_way_collision_enabled, ctx, this_val, argc, argv);
};
static JSValue collision_polygon2d_class_set_one_way_collision_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&CollisionPolygon2D::set_one_way_collision_margin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon2d_class_get_one_way_collision_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionPolygon2D::get_one_way_collision_margin, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry collision_polygon2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_polygon", 1, &collision_polygon2d_class_set_polygon),
	JS_CFUNC_DEF("get_polygon", 0, &collision_polygon2d_class_get_polygon),
	JS_CFUNC_DEF("set_build_mode", 1, &collision_polygon2d_class_set_build_mode),
	JS_CFUNC_DEF("get_build_mode", 0, &collision_polygon2d_class_get_build_mode),
	JS_CFUNC_DEF("set_disabled", 1, &collision_polygon2d_class_set_disabled),
	JS_CFUNC_DEF("is_disabled", 0, &collision_polygon2d_class_is_disabled),
	JS_CFUNC_DEF("set_one_way_collision", 1, &collision_polygon2d_class_set_one_way_collision),
	JS_CFUNC_DEF("is_one_way_collision_enabled", 0, &collision_polygon2d_class_is_one_way_collision_enabled),
	JS_CFUNC_DEF("set_one_way_collision_margin", 1, &collision_polygon2d_class_set_one_way_collision_margin),
	JS_CFUNC_DEF("get_one_way_collision_margin", 0, &collision_polygon2d_class_get_one_way_collision_margin),
};

void define_collision_polygon2d_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "build_mode"),
			JS_NewCFunction(ctx, collision_polygon2d_class_get_build_mode, "get_build_mode", 0),
			JS_NewCFunction(ctx, collision_polygon2d_class_set_build_mode, "set_build_mode", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "polygon"),
			JS_NewCFunction(ctx, collision_polygon2d_class_get_polygon, "get_polygon", 0),
			JS_NewCFunction(ctx, collision_polygon2d_class_set_polygon, "set_polygon", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "disabled"),
			JS_NewCFunction(ctx, collision_polygon2d_class_is_disabled, "is_disabled", 0),
			JS_NewCFunction(ctx, collision_polygon2d_class_set_disabled, "set_disabled", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "one_way_collision"),
			JS_NewCFunction(ctx, collision_polygon2d_class_is_one_way_collision_enabled, "is_one_way_collision_enabled", 0),
			JS_NewCFunction(ctx, collision_polygon2d_class_set_one_way_collision, "set_one_way_collision", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "one_way_collision_margin"),
			JS_NewCFunction(ctx, collision_polygon2d_class_get_one_way_collision_margin, "get_one_way_collision_margin", 0),
			JS_NewCFunction(ctx, collision_polygon2d_class_set_one_way_collision_margin, "set_one_way_collision_margin", 1),
			JS_PROP_GETSET);
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue BuildMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, BuildMode_obj, "BUILD_SOLIDS", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, BuildMode_obj, "BUILD_SEGMENTS", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "BuildMode", BuildMode_obj);
}

static int js_collision_polygon2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CollisionPolygon2D::__class_id);
	classes["CollisionPolygon2D"] = CollisionPolygon2D::__class_id;
	class_id_list.insert(CollisionPolygon2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CollisionPolygon2D::__class_id, &collision_polygon2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CollisionPolygon2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CollisionPolygon2D::__class_id, proto);

	define_collision_polygon2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, collision_polygon2d_class_proto_funcs, _countof(collision_polygon2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, collision_polygon2d_class_constructor, "CollisionPolygon2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CollisionPolygon2D", ctor);

	return 0;
}

JSModuleDef *_js_init_collision_polygon2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_collision_polygon2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CollisionPolygon2D");
	return m;
}

JSModuleDef *js_init_collision_polygon2d_module(JSContext *ctx) {
	return _js_init_collision_polygon2d_module(ctx, "godot/classes/collision_polygon2d");
}

void register_collision_polygon2d() {
	CollisionPolygon2D::__init_js_class_id();
	js_init_collision_polygon2d_module(ctx);
}