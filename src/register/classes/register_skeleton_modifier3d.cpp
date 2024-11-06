
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/skeleton3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/skeleton_modifier3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void skeleton_modifier3d_class_finalizer(JSRuntime *rt, JSValue val) {
	SkeletonModifier3D *skeleton_modifier3d = static_cast<SkeletonModifier3D *>(JS_GetOpaque(val, SkeletonModifier3D::__class_id));
	if (skeleton_modifier3d)
		memdelete(skeleton_modifier3d);
}

static JSClassDef skeleton_modifier3d_class_def = {
	"SkeletonModifier3D",
	.finalizer = skeleton_modifier3d_class_finalizer
};

static JSValue skeleton_modifier3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SkeletonModifier3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	SkeletonModifier3D *skeleton_modifier3d_class;
	if (argc == 1) 
		skeleton_modifier3d_class = static_cast<SkeletonModifier3D *>(Variant(*argv).operator Object *());
	else 
		skeleton_modifier3d_class = memnew(SkeletonModifier3D);
	if (!skeleton_modifier3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, skeleton_modifier3d_class);
	return obj;
}
static JSValue skeleton_modifier3d_class_get_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModifier3D::get_skeleton, ctx, this_val, argc, argv);
};
static JSValue skeleton_modifier3d_class_set_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModifier3D::set_active, ctx, this_val, argc, argv);
};
static JSValue skeleton_modifier3d_class_is_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModifier3D::is_active, ctx, this_val, argc, argv);
};
static JSValue skeleton_modifier3d_class_set_influence(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModifier3D::set_influence, ctx, this_val, argc, argv);
};
static JSValue skeleton_modifier3d_class_get_influence(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModifier3D::get_influence, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry skeleton_modifier3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_skeleton", 0, &skeleton_modifier3d_class_get_skeleton),
	JS_CFUNC_DEF("set_active", 1, &skeleton_modifier3d_class_set_active),
	JS_CFUNC_DEF("is_active", 0, &skeleton_modifier3d_class_is_active),
	JS_CFUNC_DEF("set_influence", 1, &skeleton_modifier3d_class_set_influence),
	JS_CFUNC_DEF("get_influence", 0, &skeleton_modifier3d_class_get_influence),
};
static JSValue skeleton_modifier3d_class_get_modification_processed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	SkeletonModifier3D *opaque = reinterpret_cast<SkeletonModifier3D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "modification_processed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "modification_processed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "modification_processed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_skeleton_modifier3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "active"),
        JS_NewCFunction(ctx, skeleton_modifier3d_class_is_active, "is_active", 0),
        JS_NewCFunction(ctx, skeleton_modifier3d_class_set_active, "set_active", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "influence"),
        JS_NewCFunction(ctx, skeleton_modifier3d_class_get_influence, "get_influence", 0),
        JS_NewCFunction(ctx, skeleton_modifier3d_class_set_influence, "set_influence", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "modification_processed"),
		JS_NewCFunction(ctx, skeleton_modifier3d_class_get_modification_processed_signal, "get_modification_processed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_skeleton_modifier3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_skeleton_modifier3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["SkeletonModifier3D"] = SkeletonModifier3D::__class_id;
	class_id_list.insert(SkeletonModifier3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SkeletonModifier3D::__class_id, &skeleton_modifier3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SkeletonModifier3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonModifier3D::__class_id, proto);

	define_skeleton_modifier3d_property(ctx, proto);
	define_skeleton_modifier3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_modifier3d_class_proto_funcs, _countof(skeleton_modifier3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, skeleton_modifier3d_class_constructor, "SkeletonModifier3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "SkeletonModifier3D", ctor);
	constructors[SkeletonModifier3D::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_skeleton_modifier3d_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_modifier3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonModifier3D");
	return m;
}

JSModuleDef *js_init_skeleton_modifier3d_module(JSContext *ctx) {
	return _js_init_skeleton_modifier3d_module(ctx, "@godot/classes/skeleton_modifier3d");
}

void register_skeleton_modifier3d() {
	SkeletonModifier3D::__init_js_class_id();
	js_init_skeleton_modifier3d_module(ctx);
}