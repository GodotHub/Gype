
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/skeleton_modifier3d.hpp>
#include <godot_cpp/classes/skeleton_ik3d.hpp>
#include <godot_cpp/classes/skeleton3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void skeleton_ik3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef skeleton_ik3d_class_def = {
	"SkeletonIK3D",
	.finalizer = skeleton_ik3d_class_finalizer
};

static JSValue skeleton_ik3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SkeletonIK3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	SkeletonIK3D *skeleton_ik3d_class;
	if (argc == 1) 
		skeleton_ik3d_class = static_cast<SkeletonIK3D *>(Variant(*argv).operator Object *());
	else 
		skeleton_ik3d_class = memnew(SkeletonIK3D);
	if (!skeleton_ik3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, skeleton_ik3d_class);
	return obj;
}
static JSValue skeleton_ik3d_class_set_root_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonIK3D::set_root_bone, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_get_root_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonIK3D::get_root_bone, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_set_tip_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonIK3D::set_tip_bone, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_get_tip_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonIK3D::get_tip_bone, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_set_target_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonIK3D::set_target_transform, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_get_target_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonIK3D::get_target_transform, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_set_target_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonIK3D::set_target_node, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_get_target_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&SkeletonIK3D::get_target_node, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_set_override_tip_basis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonIK3D::set_override_tip_basis, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_is_override_tip_basis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonIK3D::is_override_tip_basis, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_set_use_magnet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonIK3D::set_use_magnet, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_is_using_magnet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonIK3D::is_using_magnet, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_set_magnet_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonIK3D::set_magnet_position, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_get_magnet_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonIK3D::get_magnet_position, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_get_parent_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonIK3D::get_parent_skeleton, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_is_running(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&SkeletonIK3D::is_running, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_set_min_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonIK3D::set_min_distance, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_get_min_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonIK3D::get_min_distance, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_set_max_iterations(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonIK3D::set_max_iterations, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_get_max_iterations(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonIK3D::get_max_iterations, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonIK3D::start, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonIK3D::stop, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_set_interpolation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonIK3D::set_interpolation, ctx, this_val, argc, argv);
};
static JSValue skeleton_ik3d_class_get_interpolation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonIK3D::get_interpolation, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry skeleton_ik3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_root_bone", 1, &skeleton_ik3d_class_set_root_bone),
	JS_CFUNC_DEF("get_root_bone", 0, &skeleton_ik3d_class_get_root_bone),
	JS_CFUNC_DEF("set_tip_bone", 1, &skeleton_ik3d_class_set_tip_bone),
	JS_CFUNC_DEF("get_tip_bone", 0, &skeleton_ik3d_class_get_tip_bone),
	JS_CFUNC_DEF("set_target_transform", 1, &skeleton_ik3d_class_set_target_transform),
	JS_CFUNC_DEF("get_target_transform", 0, &skeleton_ik3d_class_get_target_transform),
	JS_CFUNC_DEF("set_target_node", 1, &skeleton_ik3d_class_set_target_node),
	JS_CFUNC_DEF("get_target_node", 0, &skeleton_ik3d_class_get_target_node),
	JS_CFUNC_DEF("set_override_tip_basis", 1, &skeleton_ik3d_class_set_override_tip_basis),
	JS_CFUNC_DEF("is_override_tip_basis", 0, &skeleton_ik3d_class_is_override_tip_basis),
	JS_CFUNC_DEF("set_use_magnet", 1, &skeleton_ik3d_class_set_use_magnet),
	JS_CFUNC_DEF("is_using_magnet", 0, &skeleton_ik3d_class_is_using_magnet),
	JS_CFUNC_DEF("set_magnet_position", 1, &skeleton_ik3d_class_set_magnet_position),
	JS_CFUNC_DEF("get_magnet_position", 0, &skeleton_ik3d_class_get_magnet_position),
	JS_CFUNC_DEF("get_parent_skeleton", 0, &skeleton_ik3d_class_get_parent_skeleton),
	JS_CFUNC_DEF("is_running", 0, &skeleton_ik3d_class_is_running),
	JS_CFUNC_DEF("set_min_distance", 1, &skeleton_ik3d_class_set_min_distance),
	JS_CFUNC_DEF("get_min_distance", 0, &skeleton_ik3d_class_get_min_distance),
	JS_CFUNC_DEF("set_max_iterations", 1, &skeleton_ik3d_class_set_max_iterations),
	JS_CFUNC_DEF("get_max_iterations", 0, &skeleton_ik3d_class_get_max_iterations),
	JS_CFUNC_DEF("start", 1, &skeleton_ik3d_class_start),
	JS_CFUNC_DEF("stop", 0, &skeleton_ik3d_class_stop),
	JS_CFUNC_DEF("set_interpolation", 1, &skeleton_ik3d_class_set_interpolation),
	JS_CFUNC_DEF("get_interpolation", 0, &skeleton_ik3d_class_get_interpolation),
};

static void define_skeleton_ik3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "root_bone"),
        JS_NewCFunction(ctx, skeleton_ik3d_class_get_root_bone, "get_root_bone", 0),
        JS_NewCFunction(ctx, skeleton_ik3d_class_set_root_bone, "set_root_bone", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "tip_bone"),
        JS_NewCFunction(ctx, skeleton_ik3d_class_get_tip_bone, "get_tip_bone", 0),
        JS_NewCFunction(ctx, skeleton_ik3d_class_set_tip_bone, "set_tip_bone", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "target"),
        JS_NewCFunction(ctx, skeleton_ik3d_class_get_target_transform, "get_target_transform", 0),
        JS_NewCFunction(ctx, skeleton_ik3d_class_set_target_transform, "set_target_transform", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "override_tip_basis"),
        JS_NewCFunction(ctx, skeleton_ik3d_class_is_override_tip_basis, "is_override_tip_basis", 0),
        JS_NewCFunction(ctx, skeleton_ik3d_class_set_override_tip_basis, "set_override_tip_basis", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "use_magnet"),
        JS_NewCFunction(ctx, skeleton_ik3d_class_is_using_magnet, "is_using_magnet", 0),
        JS_NewCFunction(ctx, skeleton_ik3d_class_set_use_magnet, "set_use_magnet", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "magnet"),
        JS_NewCFunction(ctx, skeleton_ik3d_class_get_magnet_position, "get_magnet_position", 0),
        JS_NewCFunction(ctx, skeleton_ik3d_class_set_magnet_position, "set_magnet_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "target_node"),
        JS_NewCFunction(ctx, skeleton_ik3d_class_get_target_node, "get_target_node", 0),
        JS_NewCFunction(ctx, skeleton_ik3d_class_set_target_node, "set_target_node", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "min_distance"),
        JS_NewCFunction(ctx, skeleton_ik3d_class_get_min_distance, "get_min_distance", 0),
        JS_NewCFunction(ctx, skeleton_ik3d_class_set_min_distance, "set_min_distance", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max_iterations"),
        JS_NewCFunction(ctx, skeleton_ik3d_class_get_max_iterations, "get_max_iterations", 0),
        JS_NewCFunction(ctx, skeleton_ik3d_class_set_max_iterations, "set_max_iterations", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "interpolation"),
        JS_NewCFunction(ctx, skeleton_ik3d_class_get_interpolation, "get_interpolation", 0),
        JS_NewCFunction(ctx, skeleton_ik3d_class_set_interpolation, "set_interpolation", 1),
        JS_PROP_GETSET
    );
	
}

static void define_skeleton_ik3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_skeleton_ik3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["SkeletonIK3D"] = SkeletonIK3D::__class_id;
	class_id_list.insert(SkeletonIK3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SkeletonIK3D::__class_id, &skeleton_ik3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SkeletonIK3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonModifier3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonIK3D::__class_id, proto);

	define_skeleton_ik3d_property(ctx, proto);
	define_skeleton_ik3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_ik3d_class_proto_funcs, _countof(skeleton_ik3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, skeleton_ik3d_class_constructor, "SkeletonIK3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "SkeletonIK3D", ctor);
	constructors[SkeletonIK3D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_skeleton_ik3d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/skeleton_modifier3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_ik3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonIK3D");
	return m;
}

JSModuleDef *js_init_skeleton_ik3d_module(JSContext *ctx) {
	return _js_init_skeleton_ik3d_module(ctx, "@godot/classes/skeleton_ik3d");
}

void register_skeleton_ik3d() {
	SkeletonIK3D::__init_js_class_id();
	js_init_skeleton_ik3d_module(ctx);
}