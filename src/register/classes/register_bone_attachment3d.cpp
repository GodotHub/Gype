
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/bone_attachment3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void bone_attachment3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef bone_attachment3d_class_def = {
	"BoneAttachment3D",
	.finalizer = bone_attachment3d_class_finalizer
};

static JSValue bone_attachment3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, BoneAttachment3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	BoneAttachment3D *bone_attachment3d_class = memnew(BoneAttachment3D);
	if (!bone_attachment3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, bone_attachment3d_class);	
	return obj;
}
static JSValue bone_attachment3d_class_set_bone_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BoneAttachment3D::set_bone_name, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue bone_attachment3d_class_get_bone_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BoneAttachment3D::get_bone_name, ctx, this_val, argc, argv);
};
static JSValue bone_attachment3d_class_set_bone_idx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BoneAttachment3D::set_bone_idx, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue bone_attachment3d_class_get_bone_idx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BoneAttachment3D::get_bone_idx, ctx, this_val, argc, argv);
};
static JSValue bone_attachment3d_class_on_skeleton_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BoneAttachment3D::on_skeleton_update, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue bone_attachment3d_class_set_override_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BoneAttachment3D::set_override_pose, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue bone_attachment3d_class_get_override_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BoneAttachment3D::get_override_pose, ctx, this_val, argc, argv);
};
static JSValue bone_attachment3d_class_set_use_external_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BoneAttachment3D::set_use_external_skeleton, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue bone_attachment3d_class_get_use_external_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BoneAttachment3D::get_use_external_skeleton, ctx, this_val, argc, argv);
};
static JSValue bone_attachment3d_class_set_external_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&BoneAttachment3D::set_external_skeleton, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue bone_attachment3d_class_get_external_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&BoneAttachment3D::get_external_skeleton, ctx, this_val, argc, argv);
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

void define_bone_attachment3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "bone_name"),
        JS_NewCFunction(ctx, bone_attachment3d_class_get_bone_name, "get_bone_name", 0),
        JS_NewCFunction(ctx, bone_attachment3d_class_set_bone_name, "set_bone_name", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "bone_idx"),
        JS_NewCFunction(ctx, bone_attachment3d_class_get_bone_idx, "get_bone_idx", 0),
        JS_NewCFunction(ctx, bone_attachment3d_class_set_bone_idx, "set_bone_idx", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "override_pose"),
        JS_NewCFunction(ctx, bone_attachment3d_class_get_override_pose, "get_override_pose", 0),
        JS_NewCFunction(ctx, bone_attachment3d_class_set_override_pose, "set_override_pose", 1),
        JS_PROP_GETSET
    );
}

static int js_bone_attachment3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&BoneAttachment3D::__class_id);
	classes["BoneAttachment3D"] = BoneAttachment3D::__class_id;
	class_id_list.insert(BoneAttachment3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), BoneAttachment3D::__class_id, &bone_attachment3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, BoneAttachment3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, BoneAttachment3D::__class_id, proto);

	define_bone_attachment3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, bone_attachment3d_class_proto_funcs, _countof(bone_attachment3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, bone_attachment3d_class_constructor, "BoneAttachment3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "BoneAttachment3D", ctor);

	return 0;
}

JSModuleDef *_js_init_bone_attachment3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	BoneAttachment3D::__init_js_class_id();
	js_init_bone_attachment3d_module(ctx);
}