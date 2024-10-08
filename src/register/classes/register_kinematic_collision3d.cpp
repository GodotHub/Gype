
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/kinematic_collision3d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void kinematic_collision3d_class_finalizer(JSRuntime *rt, JSValue val) {
	KinematicCollision3D *kinematic_collision3d = static_cast<KinematicCollision3D *>(JS_GetOpaque(val, KinematicCollision3D::__class_id));
	if (kinematic_collision3d)
		KinematicCollision3D::free(nullptr, kinematic_collision3d);
}

static JSClassDef kinematic_collision3d_class_def = {
	"KinematicCollision3D",
	.finalizer = kinematic_collision3d_class_finalizer
};

static JSValue kinematic_collision3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	KinematicCollision3D *kinematic_collision3d_class;
	JSValue obj = JS_NewObjectClass(ctx, KinematicCollision3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	kinematic_collision3d_class = memnew(KinematicCollision3D);
	if (!kinematic_collision3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, kinematic_collision3d_class);
	return obj;
}
static JSValue kinematic_collision3d_class_get_travel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&KinematicCollision3D::get_travel, KinematicCollision3D::__class_id, ctx, this_val, argv);
};
static JSValue kinematic_collision3d_class_get_remainder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&KinematicCollision3D::get_remainder, KinematicCollision3D::__class_id, ctx, this_val, argv);
};
static JSValue kinematic_collision3d_class_get_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&KinematicCollision3D::get_depth, KinematicCollision3D::__class_id, ctx, this_val, argv);
};
static JSValue kinematic_collision3d_class_get_collision_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&KinematicCollision3D::get_collision_count, KinematicCollision3D::__class_id, ctx, this_val, argv);
};
static JSValue kinematic_collision3d_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&KinematicCollision3D::get_position, KinematicCollision3D::__class_id, ctx, this_val, argv);
};
static JSValue kinematic_collision3d_class_get_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&KinematicCollision3D::get_normal, KinematicCollision3D::__class_id, ctx, this_val, argv);
};
static JSValue kinematic_collision3d_class_get_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&KinematicCollision3D::get_angle, KinematicCollision3D::__class_id, ctx, this_val, argv);
};
static JSValue kinematic_collision3d_class_get_local_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&KinematicCollision3D::get_local_shape, KinematicCollision3D::__class_id, ctx, this_val, argv);
};
static JSValue kinematic_collision3d_class_get_collider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&KinematicCollision3D::get_collider, KinematicCollision3D::__class_id, ctx, this_val, argv);
};
static JSValue kinematic_collision3d_class_get_collider_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&KinematicCollision3D::get_collider_id, KinematicCollision3D::__class_id, ctx, this_val, argv);
};
static JSValue kinematic_collision3d_class_get_collider_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&KinematicCollision3D::get_collider_rid, KinematicCollision3D::__class_id, ctx, this_val, argv);
};
static JSValue kinematic_collision3d_class_get_collider_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&KinematicCollision3D::get_collider_shape, KinematicCollision3D::__class_id, ctx, this_val, argv);
};
static JSValue kinematic_collision3d_class_get_collider_shape_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&KinematicCollision3D::get_collider_shape_index, KinematicCollision3D::__class_id, ctx, this_val, argv);
};
static JSValue kinematic_collision3d_class_get_collider_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&KinematicCollision3D::get_collider_velocity, KinematicCollision3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry kinematic_collision3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_travel", 0, &kinematic_collision3d_class_get_travel),
	JS_CFUNC_DEF("get_remainder", 0, &kinematic_collision3d_class_get_remainder),
	JS_CFUNC_DEF("get_depth", 0, &kinematic_collision3d_class_get_depth),
	JS_CFUNC_DEF("get_collision_count", 0, &kinematic_collision3d_class_get_collision_count),
	JS_CFUNC_DEF("get_position", 1, &kinematic_collision3d_class_get_position),
	JS_CFUNC_DEF("get_normal", 1, &kinematic_collision3d_class_get_normal),
	JS_CFUNC_DEF("get_angle", 2, &kinematic_collision3d_class_get_angle),
	JS_CFUNC_DEF("get_local_shape", 1, &kinematic_collision3d_class_get_local_shape),
	JS_CFUNC_DEF("get_collider", 1, &kinematic_collision3d_class_get_collider),
	JS_CFUNC_DEF("get_collider_id", 1, &kinematic_collision3d_class_get_collider_id),
	JS_CFUNC_DEF("get_collider_rid", 1, &kinematic_collision3d_class_get_collider_rid),
	JS_CFUNC_DEF("get_collider_shape", 1, &kinematic_collision3d_class_get_collider_shape),
	JS_CFUNC_DEF("get_collider_shape_index", 1, &kinematic_collision3d_class_get_collider_shape_index),
	JS_CFUNC_DEF("get_collider_velocity", 1, &kinematic_collision3d_class_get_collider_velocity),
};

static int js_kinematic_collision3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&KinematicCollision3D::__class_id);
	classes["KinematicCollision3D"] = KinematicCollision3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), KinematicCollision3D::__class_id, &kinematic_collision3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, KinematicCollision3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, kinematic_collision3d_class_proto_funcs, _countof(kinematic_collision3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, kinematic_collision3d_class_constructor, "KinematicCollision3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "KinematicCollision3D", ctor);

	return 0;
}

JSModuleDef *_js_init_kinematic_collision3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_kinematic_collision3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "KinematicCollision3D");
	return m;
}

JSModuleDef *js_init_kinematic_collision3d_module(JSContext *ctx) {
	return _js_init_kinematic_collision3d_module(ctx, "godot/classes/kinematic_collision3d");
}

void register_kinematic_collision3d() {
	js_init_kinematic_collision3d_module(ctx);
}