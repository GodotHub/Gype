
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/spring_arm3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void spring_arm3d_class_finalizer(JSRuntime *rt, JSValue val) {
	SpringArm3D *spring_arm3d = static_cast<SpringArm3D *>(JS_GetOpaque(val, SpringArm3D::__class_id));
	if (spring_arm3d)
		SpringArm3D::free(nullptr, spring_arm3d);
}

static JSClassDef spring_arm3d_class_def = {
	"SpringArm3D",
	.finalizer = spring_arm3d_class_finalizer
};

static JSValue spring_arm3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SpringArm3D *spring_arm3d_class;
	JSValue obj = JS_NewObjectClass(ctx, SpringArm3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	spring_arm3d_class = memnew(SpringArm3D);
	if (!spring_arm3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, spring_arm3d_class);
	return obj;
}
static JSValue spring_arm3d_class_get_hit_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SpringArm3D::get_hit_length, SpringArm3D::__class_id, ctx, this_val, argv);
};
static JSValue spring_arm3d_class_set_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SpringArm3D::set_length, SpringArm3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue spring_arm3d_class_get_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpringArm3D::get_length, SpringArm3D::__class_id, ctx, this_val, argv);
};
static JSValue spring_arm3d_class_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SpringArm3D::set_shape, SpringArm3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue spring_arm3d_class_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpringArm3D::get_shape, SpringArm3D::__class_id, ctx, this_val, argv);
};
static JSValue spring_arm3d_class_add_excluded_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SpringArm3D::add_excluded_object, SpringArm3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue spring_arm3d_class_remove_excluded_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SpringArm3D::remove_excluded_object, SpringArm3D::__class_id, ctx, this_val, argv);
};
static JSValue spring_arm3d_class_clear_excluded_objects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SpringArm3D::clear_excluded_objects, SpringArm3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue spring_arm3d_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SpringArm3D::set_collision_mask, SpringArm3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue spring_arm3d_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SpringArm3D::get_collision_mask, SpringArm3D::__class_id, ctx, this_val, argv);
};
static JSValue spring_arm3d_class_set_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SpringArm3D::set_margin, SpringArm3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue spring_arm3d_class_get_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SpringArm3D::get_margin, SpringArm3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry spring_arm3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_hit_length", 0, &spring_arm3d_class_get_hit_length),
	JS_CFUNC_DEF("set_length", 1, &spring_arm3d_class_set_length),
	JS_CFUNC_DEF("get_length", 0, &spring_arm3d_class_get_length),
	JS_CFUNC_DEF("set_shape", 1, &spring_arm3d_class_set_shape),
	JS_CFUNC_DEF("get_shape", 0, &spring_arm3d_class_get_shape),
	JS_CFUNC_DEF("add_excluded_object", 1, &spring_arm3d_class_add_excluded_object),
	JS_CFUNC_DEF("remove_excluded_object", 1, &spring_arm3d_class_remove_excluded_object),
	JS_CFUNC_DEF("clear_excluded_objects", 0, &spring_arm3d_class_clear_excluded_objects),
	JS_CFUNC_DEF("set_collision_mask", 1, &spring_arm3d_class_set_collision_mask),
	JS_CFUNC_DEF("get_collision_mask", 0, &spring_arm3d_class_get_collision_mask),
	JS_CFUNC_DEF("set_margin", 1, &spring_arm3d_class_set_margin),
	JS_CFUNC_DEF("get_margin", 0, &spring_arm3d_class_get_margin),
};

static int js_spring_arm3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SpringArm3D::__class_id);
	classes["SpringArm3D"] = SpringArm3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SpringArm3D::__class_id, &spring_arm3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SpringArm3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, spring_arm3d_class_proto_funcs, _countof(spring_arm3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, spring_arm3d_class_constructor, "SpringArm3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SpringArm3D", ctor);

	return 0;
}

JSModuleDef *_js_init_spring_arm3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_spring_arm3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SpringArm3D");
	return m;
}

JSModuleDef *js_init_spring_arm3d_module(JSContext *ctx) {
	return _js_init_spring_arm3d_module(ctx, "godot/classes/spring_arm3d");
}

void register_spring_arm3d() {
	js_init_spring_arm3d_module(ctx);
}