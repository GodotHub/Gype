
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/kinematic_collision2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void kinematic_collision2d_class_finalizer(JSRuntime *rt, JSValue val) {
	KinematicCollision2D *kinematic_collision2d = static_cast<KinematicCollision2D *>(JS_GetOpaque(val, KinematicCollision2D::__class_id));
	if (kinematic_collision2d)
		memdelete(kinematic_collision2d);
}

static JSClassDef kinematic_collision2d_class_def = {
	"KinematicCollision2D",
	.finalizer = kinematic_collision2d_class_finalizer
};

static JSValue kinematic_collision2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, KinematicCollision2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	KinematicCollision2D *kinematic_collision2d_class;
	if (argc == 1) 
		kinematic_collision2d_class = static_cast<KinematicCollision2D *>(Variant(*argv).operator Object *());
	else 
		kinematic_collision2d_class = memnew(KinematicCollision2D);
	if (!kinematic_collision2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, kinematic_collision2d_class);
	return obj;
}
static JSValue kinematic_collision2d_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&KinematicCollision2D::get_position, ctx, this_val, argc, argv);
};
static JSValue kinematic_collision2d_class_get_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&KinematicCollision2D::get_normal, ctx, this_val, argc, argv);
};
static JSValue kinematic_collision2d_class_get_travel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&KinematicCollision2D::get_travel, ctx, this_val, argc, argv);
};
static JSValue kinematic_collision2d_class_get_remainder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&KinematicCollision2D::get_remainder, ctx, this_val, argc, argv);
};
static JSValue kinematic_collision2d_class_get_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&KinematicCollision2D::get_angle, ctx, this_val, argc, argv);
};
static JSValue kinematic_collision2d_class_get_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&KinematicCollision2D::get_depth, ctx, this_val, argc, argv);
};
static JSValue kinematic_collision2d_class_get_local_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&KinematicCollision2D::get_local_shape, ctx, this_val, argc, argv);
};
static JSValue kinematic_collision2d_class_get_collider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&KinematicCollision2D::get_collider, ctx, this_val, argc, argv);
};
static JSValue kinematic_collision2d_class_get_collider_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&KinematicCollision2D::get_collider_id, ctx, this_val, argc, argv);
};
static JSValue kinematic_collision2d_class_get_collider_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&KinematicCollision2D::get_collider_rid, ctx, this_val, argc, argv);
};
static JSValue kinematic_collision2d_class_get_collider_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&KinematicCollision2D::get_collider_shape, ctx, this_val, argc, argv);
};
static JSValue kinematic_collision2d_class_get_collider_shape_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&KinematicCollision2D::get_collider_shape_index, ctx, this_val, argc, argv);
};
static JSValue kinematic_collision2d_class_get_collider_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&KinematicCollision2D::get_collider_velocity, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry kinematic_collision2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_position", 0, &kinematic_collision2d_class_get_position),
	JS_CFUNC_DEF("get_normal", 0, &kinematic_collision2d_class_get_normal),
	JS_CFUNC_DEF("get_travel", 0, &kinematic_collision2d_class_get_travel),
	JS_CFUNC_DEF("get_remainder", 0, &kinematic_collision2d_class_get_remainder),
	JS_CFUNC_DEF("get_angle", 1, &kinematic_collision2d_class_get_angle),
	JS_CFUNC_DEF("get_depth", 0, &kinematic_collision2d_class_get_depth),
	JS_CFUNC_DEF("get_local_shape", 0, &kinematic_collision2d_class_get_local_shape),
	JS_CFUNC_DEF("get_collider", 0, &kinematic_collision2d_class_get_collider),
	JS_CFUNC_DEF("get_collider_id", 0, &kinematic_collision2d_class_get_collider_id),
	JS_CFUNC_DEF("get_collider_rid", 0, &kinematic_collision2d_class_get_collider_rid),
	JS_CFUNC_DEF("get_collider_shape", 0, &kinematic_collision2d_class_get_collider_shape),
	JS_CFUNC_DEF("get_collider_shape_index", 0, &kinematic_collision2d_class_get_collider_shape_index),
	JS_CFUNC_DEF("get_collider_velocity", 0, &kinematic_collision2d_class_get_collider_velocity),
};

static void define_kinematic_collision2d_property(JSContext *ctx, JSValue proto) {
	
}

static void define_kinematic_collision2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_kinematic_collision2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["KinematicCollision2D"] = KinematicCollision2D::__class_id;
	class_id_list.insert(KinematicCollision2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), KinematicCollision2D::__class_id, &kinematic_collision2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, KinematicCollision2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, KinematicCollision2D::__class_id, proto);

	define_kinematic_collision2d_property(ctx, proto);
	define_kinematic_collision2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, kinematic_collision2d_class_proto_funcs, _countof(kinematic_collision2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, kinematic_collision2d_class_constructor, "KinematicCollision2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "KinematicCollision2D", ctor);
	constructors[KinematicCollision2D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_kinematic_collision2d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_kinematic_collision2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "KinematicCollision2D");
	return m;
}

JSModuleDef *js_init_kinematic_collision2d_module(JSContext *ctx) {
	return _js_init_kinematic_collision2d_module(ctx, "@godot/classes/kinematic_collision2d");
}

void register_kinematic_collision2d() {
	KinematicCollision2D::__init_js_class_id();
	js_init_kinematic_collision2d_module(ctx);
}