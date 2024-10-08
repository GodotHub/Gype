
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/collision_polygon2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void collision_polygon2d_class_finalizer(JSRuntime *rt, JSValue val) {
	CollisionPolygon2D *collision_polygon2d = static_cast<CollisionPolygon2D *>(JS_GetOpaque(val, CollisionPolygon2D::__class_id));
	if (collision_polygon2d)
		CollisionPolygon2D::free(nullptr, collision_polygon2d);
}

static JSClassDef collision_polygon2d_class_def = {
	"CollisionPolygon2D",
	.finalizer = collision_polygon2d_class_finalizer
};

static JSValue collision_polygon2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CollisionPolygon2D *collision_polygon2d_class;
	JSValue obj = JS_NewObjectClass(ctx, CollisionPolygon2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	collision_polygon2d_class = memnew(CollisionPolygon2D);
	if (!collision_polygon2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, collision_polygon2d_class);
	return obj;
}
static JSValue collision_polygon2d_class_set_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CollisionPolygon2D::set_polygon, CollisionPolygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon2d_class_get_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionPolygon2D::get_polygon, CollisionPolygon2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_polygon2d_class_set_build_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CollisionPolygon2D::set_build_mode, CollisionPolygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon2d_class_get_build_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionPolygon2D::get_build_mode, CollisionPolygon2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_polygon2d_class_set_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CollisionPolygon2D::set_disabled, CollisionPolygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon2d_class_is_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionPolygon2D::is_disabled, CollisionPolygon2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_polygon2d_class_set_one_way_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CollisionPolygon2D::set_one_way_collision, CollisionPolygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon2d_class_is_one_way_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionPolygon2D::is_one_way_collision_enabled, CollisionPolygon2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_polygon2d_class_set_one_way_collision_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CollisionPolygon2D::set_one_way_collision_margin, CollisionPolygon2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_polygon2d_class_get_one_way_collision_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionPolygon2D::get_one_way_collision_margin, CollisionPolygon2D::__class_id, ctx, this_val, argv);
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

static int js_collision_polygon2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CollisionPolygon2D::__class_id);
	classes["CollisionPolygon2D"] = CollisionPolygon2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CollisionPolygon2D::__class_id, &collision_polygon2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CollisionPolygon2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, collision_polygon2d_class_proto_funcs, _countof(collision_polygon2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, collision_polygon2d_class_constructor, "CollisionPolygon2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CollisionPolygon2D", ctor);

	return 0;
}

JSModuleDef *_js_init_collision_polygon2d_module(JSContext *ctx, const char *module_name) {
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
	js_init_collision_polygon2d_module(ctx);
}