
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/bone2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void bone2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Bone2D *bone2d = static_cast<Bone2D *>(JS_GetOpaque(val, Bone2D::__class_id));
	if (bone2d)
		Bone2D::free(nullptr, bone2d);
}

static JSClassDef bone2d_class_def = {
	"Bone2D",
	.finalizer = bone2d_class_finalizer
};

static JSValue bone2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Bone2D *bone2d_class;
	JSValue obj = JS_NewObjectClass(ctx, Bone2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	bone2d_class = memnew(Bone2D);
	if (!bone2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, bone2d_class);
	return obj;
}
static JSValue bone2d_class_set_rest(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Bone2D::set_rest, Bone2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bone2d_class_get_rest(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Bone2D::get_rest, Bone2D::__class_id, ctx, this_val, argv);
};
static JSValue bone2d_class_apply_rest(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Bone2D::apply_rest, Bone2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bone2d_class_get_skeleton_rest(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Bone2D::get_skeleton_rest, Bone2D::__class_id, ctx, this_val, argv);
};
static JSValue bone2d_class_get_index_in_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Bone2D::get_index_in_skeleton, Bone2D::__class_id, ctx, this_val, argv);
};
static JSValue bone2d_class_set_autocalculate_length_and_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Bone2D::set_autocalculate_length_and_angle, Bone2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bone2d_class_get_autocalculate_length_and_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Bone2D::get_autocalculate_length_and_angle, Bone2D::__class_id, ctx, this_val, argv);
};
static JSValue bone2d_class_set_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Bone2D::set_length, Bone2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bone2d_class_get_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Bone2D::get_length, Bone2D::__class_id, ctx, this_val, argv);
};
static JSValue bone2d_class_set_bone_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Bone2D::set_bone_angle, Bone2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bone2d_class_get_bone_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Bone2D::get_bone_angle, Bone2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry bone2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_rest", 1, &bone2d_class_set_rest),
	JS_CFUNC_DEF("get_rest", 0, &bone2d_class_get_rest),
	JS_CFUNC_DEF("apply_rest", 0, &bone2d_class_apply_rest),
	JS_CFUNC_DEF("get_skeleton_rest", 0, &bone2d_class_get_skeleton_rest),
	JS_CFUNC_DEF("get_index_in_skeleton", 0, &bone2d_class_get_index_in_skeleton),
	JS_CFUNC_DEF("set_autocalculate_length_and_angle", 1, &bone2d_class_set_autocalculate_length_and_angle),
	JS_CFUNC_DEF("get_autocalculate_length_and_angle", 0, &bone2d_class_get_autocalculate_length_and_angle),
	JS_CFUNC_DEF("set_length", 1, &bone2d_class_set_length),
	JS_CFUNC_DEF("get_length", 0, &bone2d_class_get_length),
	JS_CFUNC_DEF("set_bone_angle", 1, &bone2d_class_set_bone_angle),
	JS_CFUNC_DEF("get_bone_angle", 0, &bone2d_class_get_bone_angle),
};

static int js_bone2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Bone2D::__class_id);
	classes["Bone2D"] = Bone2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Bone2D::__class_id, &bone2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Bone2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, bone2d_class_proto_funcs, _countof(bone2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, bone2d_class_constructor, "Bone2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Bone2D", ctor);

	return 0;
}

JSModuleDef *_js_init_bone2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_bone2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Bone2D");
	return m;
}

JSModuleDef *js_init_bone2d_module(JSContext *ctx) {
	return _js_init_bone2d_module(ctx, "godot/classes/bone2d");
}

void register_bone2d() {
	js_init_bone2d_module(ctx);
}