
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification2d_stack_holder.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void skeleton_modification2d_stack_holder_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef skeleton_modification2d_stack_holder_class_def = {
	"SkeletonModification2DStackHolder",
	.finalizer = skeleton_modification2d_stack_holder_class_finalizer
};

static JSValue skeleton_modification2d_stack_holder_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SkeletonModification2DStackHolder::__class_id);
	if (JS_IsException(obj))
		return obj;

	SkeletonModification2DStackHolder *skeleton_modification2d_stack_holder_class;
	if (argc == 1) 
		skeleton_modification2d_stack_holder_class = static_cast<SkeletonModification2DStackHolder *>(Variant(*argv).operator Object *());
	else 
		skeleton_modification2d_stack_holder_class = memnew(SkeletonModification2DStackHolder);
	if (!skeleton_modification2d_stack_holder_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, skeleton_modification2d_stack_holder_class);
	return obj;
}
static JSValue skeleton_modification2d_stack_holder_class_set_held_modification_stack(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModification2DStackHolder::set_held_modification_stack, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_stack_holder_class_get_held_modification_stack(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModification2DStackHolder::get_held_modification_stack, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry skeleton_modification2d_stack_holder_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_held_modification_stack", 1, &skeleton_modification2d_stack_holder_class_set_held_modification_stack),
	JS_CFUNC_DEF("get_held_modification_stack", 0, &skeleton_modification2d_stack_holder_class_get_held_modification_stack),
};

static void define_skeleton_modification2d_stack_holder_property(JSContext *ctx, JSValue proto) {
	
}

static void define_skeleton_modification2d_stack_holder_enum(JSContext *ctx, JSValue proto) {
}

static int js_skeleton_modification2d_stack_holder_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["SkeletonModification2DStackHolder"] = SkeletonModification2DStackHolder::__class_id;
	class_id_list.insert(SkeletonModification2DStackHolder::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SkeletonModification2DStackHolder::__class_id, &skeleton_modification2d_stack_holder_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SkeletonModification2DStackHolder::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonModification2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonModification2DStackHolder::__class_id, proto);

	define_skeleton_modification2d_stack_holder_property(ctx, proto);
	define_skeleton_modification2d_stack_holder_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_modification2d_stack_holder_class_proto_funcs, _countof(skeleton_modification2d_stack_holder_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, skeleton_modification2d_stack_holder_class_constructor, "SkeletonModification2DStackHolder", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SkeletonModification2DStackHolder", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton_modification2d_stack_holder_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/skeleton_modification2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_modification2d_stack_holder_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonModification2DStackHolder");
	return m;
}

JSModuleDef *js_init_skeleton_modification2d_stack_holder_module(JSContext *ctx) {
	return _js_init_skeleton_modification2d_stack_holder_module(ctx, "@godot/classes/skeleton_modification2d_stack_holder");
}

void register_skeleton_modification2d_stack_holder() {
	SkeletonModification2DStackHolder::__init_js_class_id();
	js_init_skeleton_modification2d_stack_holder_module(ctx);
}