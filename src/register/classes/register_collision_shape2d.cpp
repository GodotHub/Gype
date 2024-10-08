
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/collision_shape2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void collision_shape2d_class_finalizer(JSRuntime *rt, JSValue val) {
	CollisionShape2D *collision_shape2d = static_cast<CollisionShape2D *>(JS_GetOpaque(val, CollisionShape2D::__class_id));
	if (collision_shape2d)
		CollisionShape2D::free(nullptr, collision_shape2d);
}

static JSClassDef collision_shape2d_class_def = {
	"CollisionShape2D",
	.finalizer = collision_shape2d_class_finalizer
};

static JSValue collision_shape2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CollisionShape2D *collision_shape2d_class;
	JSValue obj = JS_NewObjectClass(ctx, CollisionShape2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	collision_shape2d_class = memnew(CollisionShape2D);
	if (!collision_shape2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, collision_shape2d_class);
	return obj;
}
static JSValue collision_shape2d_class_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionShape2D::set_shape, CollisionShape2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_shape2d_class_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionShape2D::get_shape, CollisionShape2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_shape2d_class_set_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionShape2D::set_disabled, CollisionShape2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_shape2d_class_is_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionShape2D::is_disabled, CollisionShape2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_shape2d_class_set_one_way_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionShape2D::set_one_way_collision, CollisionShape2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_shape2d_class_is_one_way_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionShape2D::is_one_way_collision_enabled, CollisionShape2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_shape2d_class_set_one_way_collision_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionShape2D::set_one_way_collision_margin, CollisionShape2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_shape2d_class_get_one_way_collision_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionShape2D::get_one_way_collision_margin, CollisionShape2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_shape2d_class_set_debug_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionShape2D::set_debug_color, CollisionShape2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_shape2d_class_get_debug_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionShape2D::get_debug_color, CollisionShape2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry collision_shape2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_shape", 1, &collision_shape2d_class_set_shape),
	JS_CFUNC_DEF("get_shape", 0, &collision_shape2d_class_get_shape),
	JS_CFUNC_DEF("set_disabled", 1, &collision_shape2d_class_set_disabled),
	JS_CFUNC_DEF("is_disabled", 0, &collision_shape2d_class_is_disabled),
	JS_CFUNC_DEF("set_one_way_collision", 1, &collision_shape2d_class_set_one_way_collision),
	JS_CFUNC_DEF("is_one_way_collision_enabled", 0, &collision_shape2d_class_is_one_way_collision_enabled),
	JS_CFUNC_DEF("set_one_way_collision_margin", 1, &collision_shape2d_class_set_one_way_collision_margin),
	JS_CFUNC_DEF("get_one_way_collision_margin", 0, &collision_shape2d_class_get_one_way_collision_margin),
	JS_CFUNC_DEF("set_debug_color", 1, &collision_shape2d_class_set_debug_color),
	JS_CFUNC_DEF("get_debug_color", 0, &collision_shape2d_class_get_debug_color),
};

static int js_collision_shape2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CollisionShape2D::__class_id);
	classes["CollisionShape2D"] = CollisionShape2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CollisionShape2D::__class_id, &collision_shape2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CollisionShape2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, collision_shape2d_class_proto_funcs, _countof(collision_shape2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, collision_shape2d_class_constructor, "CollisionShape2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CollisionShape2D", ctor);

	return 0;
}

JSModuleDef *_js_init_collision_shape2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_collision_shape2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CollisionShape2D");
	return m;
}

JSModuleDef *js_init_collision_shape2d_module(JSContext *ctx) {
	return _js_init_collision_shape2d_module(ctx, "godot/classes/collision_shape2d");
}

void register_collision_shape2d() {
	js_init_collision_shape2d_module(ctx);
}