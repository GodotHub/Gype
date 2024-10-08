
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/open_xr_hand.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void open_xr_hand_class_finalizer(JSRuntime *rt, JSValue val) {
	OpenXRHand *open_xr_hand = static_cast<OpenXRHand *>(JS_GetOpaque(val, OpenXRHand::__class_id));
	if (open_xr_hand)
		OpenXRHand::free(nullptr, open_xr_hand);
}

static JSClassDef open_xr_hand_class_def = {
	"OpenXRHand",
	.finalizer = open_xr_hand_class_finalizer
};

static JSValue open_xr_hand_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OpenXRHand *open_xr_hand_class;
	JSValue obj = JS_NewObjectClass(ctx, OpenXRHand::__class_id);
	if (JS_IsException(obj))
		return obj;
	open_xr_hand_class = memnew(OpenXRHand);
	if (!open_xr_hand_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, open_xr_hand_class);
	return obj;
}
static JSValue open_xr_hand_class_set_hand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRHand::set_hand, OpenXRHand::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_hand_class_get_hand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRHand::get_hand, OpenXRHand::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_hand_class_set_hand_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRHand::set_hand_skeleton, OpenXRHand::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_hand_class_get_hand_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRHand::get_hand_skeleton, OpenXRHand::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_hand_class_set_motion_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRHand::set_motion_range, OpenXRHand::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_hand_class_get_motion_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRHand::get_motion_range, OpenXRHand::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_hand_class_set_skeleton_rig(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRHand::set_skeleton_rig, OpenXRHand::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_hand_class_get_skeleton_rig(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRHand::get_skeleton_rig, OpenXRHand::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_hand_class_set_bone_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OpenXRHand::set_bone_update, OpenXRHand::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_hand_class_get_bone_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRHand::get_bone_update, OpenXRHand::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry open_xr_hand_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_hand", 1, &open_xr_hand_class_set_hand),
	JS_CFUNC_DEF("get_hand", 0, &open_xr_hand_class_get_hand),
	JS_CFUNC_DEF("set_hand_skeleton", 1, &open_xr_hand_class_set_hand_skeleton),
	JS_CFUNC_DEF("get_hand_skeleton", 0, &open_xr_hand_class_get_hand_skeleton),
	JS_CFUNC_DEF("set_motion_range", 1, &open_xr_hand_class_set_motion_range),
	JS_CFUNC_DEF("get_motion_range", 0, &open_xr_hand_class_get_motion_range),
	JS_CFUNC_DEF("set_skeleton_rig", 1, &open_xr_hand_class_set_skeleton_rig),
	JS_CFUNC_DEF("get_skeleton_rig", 0, &open_xr_hand_class_get_skeleton_rig),
	JS_CFUNC_DEF("set_bone_update", 1, &open_xr_hand_class_set_bone_update),
	JS_CFUNC_DEF("get_bone_update", 0, &open_xr_hand_class_get_bone_update),
};

static int js_open_xr_hand_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OpenXRHand::__class_id);
	classes["OpenXRHand"] = OpenXRHand::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OpenXRHand::__class_id, &open_xr_hand_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRHand::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_hand_class_proto_funcs, _countof(open_xr_hand_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, open_xr_hand_class_constructor, "OpenXRHand", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OpenXRHand", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_hand_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_hand_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRHand");
	return m;
}

JSModuleDef *js_init_open_xr_hand_module(JSContext *ctx) {
	return _js_init_open_xr_hand_module(ctx, "godot/classes/open_xr_hand");
}

void register_open_xr_hand() {
	js_init_open_xr_hand_module(ctx);
}