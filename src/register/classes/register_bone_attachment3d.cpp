
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/bone_attachment3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void bone_attachment3d_class_finalizer(JSRuntime *rt, JSValue val) {
	BoneAttachment3D *bone_attachment3d = static_cast<BoneAttachment3D *>(JS_GetOpaque(val, BoneAttachment3D::__class_id));
	if (bone_attachment3d)
		BoneAttachment3D::free(nullptr, bone_attachment3d);
}

static JSClassDef bone_attachment3d_class_def = {
	"BoneAttachment3D",
	.finalizer = bone_attachment3d_class_finalizer
};

static JSValue bone_attachment3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	BoneAttachment3D *bone_attachment3d_class;
	JSValue obj = JS_NewObjectClass(ctx, BoneAttachment3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	bone_attachment3d_class = memnew(BoneAttachment3D);
	if (!bone_attachment3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, bone_attachment3d_class);
	return obj;
}
static JSValue bone_attachment3d_class_set_bone_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BoneAttachment3D::set_bone_name, BoneAttachment3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bone_attachment3d_class_get_bone_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BoneAttachment3D::get_bone_name, BoneAttachment3D::__class_id, ctx, this_val, argv);
};
static JSValue bone_attachment3d_class_set_bone_idx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BoneAttachment3D::set_bone_idx, BoneAttachment3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bone_attachment3d_class_get_bone_idx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BoneAttachment3D::get_bone_idx, BoneAttachment3D::__class_id, ctx, this_val, argv);
};
static JSValue bone_attachment3d_class_on_skeleton_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BoneAttachment3D::on_skeleton_update, BoneAttachment3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bone_attachment3d_class_set_override_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BoneAttachment3D::set_override_pose, BoneAttachment3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bone_attachment3d_class_get_override_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BoneAttachment3D::get_override_pose, BoneAttachment3D::__class_id, ctx, this_val, argv);
};
static JSValue bone_attachment3d_class_set_use_external_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BoneAttachment3D::set_use_external_skeleton, BoneAttachment3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bone_attachment3d_class_get_use_external_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BoneAttachment3D::get_use_external_skeleton, BoneAttachment3D::__class_id, ctx, this_val, argv);
};
static JSValue bone_attachment3d_class_set_external_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BoneAttachment3D::set_external_skeleton, BoneAttachment3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue bone_attachment3d_class_get_external_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BoneAttachment3D::get_external_skeleton, BoneAttachment3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry bone_attachment3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_bone_name", 1, &bone_attachment3d_class_set_bone_name),
	JS_CFUNC_DEF("get_bone_name", 0, &bone_attachment3d_class_get_bone_name),
	JS_CFUNC_DEF("set_bone_idx", 1, &bone_attachment3d_class_set_bone_idx),
	JS_CFUNC_DEF("get_bone_idx", 0, &bone_attachment3d_class_get_bone_idx),
	JS_CFUNC_DEF("on_skeleton_update", 0, &bone_attachment3d_class_on_skeleton_update),
	JS_CFUNC_DEF("set_override_pose", 1, &bone_attachment3d_class_set_override_pose),
	JS_CFUNC_DEF("get_override_pose", 0, &bone_attachment3d_class_get_override_pose),
	JS_CFUNC_DEF("set_use_external_skeleton", 1, &bone_attachment3d_class_set_use_external_skeleton),
	JS_CFUNC_DEF("get_use_external_skeleton", 0, &bone_attachment3d_class_get_use_external_skeleton),
	JS_CFUNC_DEF("set_external_skeleton", 1, &bone_attachment3d_class_set_external_skeleton),
	JS_CFUNC_DEF("get_external_skeleton", 0, &bone_attachment3d_class_get_external_skeleton),
};

static int js_bone_attachment3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&BoneAttachment3D::__class_id);
	classes["BoneAttachment3D"] = BoneAttachment3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), BoneAttachment3D::__class_id, &bone_attachment3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, BoneAttachment3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, bone_attachment3d_class_proto_funcs, _countof(bone_attachment3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, bone_attachment3d_class_constructor, "BoneAttachment3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "BoneAttachment3D", ctor);

	return 0;
}

JSModuleDef *_js_init_bone_attachment3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_bone_attachment3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "BoneAttachment3D");
	return m;
}

JSModuleDef *js_init_bone_attachment3d_module(JSContext *ctx) {
	return _js_init_bone_attachment3d_module(ctx, "godot/classes/bone_attachment3d");
}

void register_bone_attachment3d() {
	js_init_bone_attachment3d_module(ctx);
}