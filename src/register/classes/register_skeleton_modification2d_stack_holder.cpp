
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/skeleton_modification2d_stack_holder.hpp>
#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void skeleton_modification2d_stack_holder_class_finalizer(JSRuntime *rt, JSValue val) {
	SkeletonModification2DStackHolder *skeleton_modification2d_stack_holder = static_cast<SkeletonModification2DStackHolder *>(JS_GetOpaque(val, SkeletonModification2DStackHolder::__class_id));
	if (skeleton_modification2d_stack_holder)
		SkeletonModification2DStackHolder::free(nullptr, skeleton_modification2d_stack_holder);
}

static JSClassDef skeleton_modification2d_stack_holder_class_def = {
	"SkeletonModification2DStackHolder",
	.finalizer = skeleton_modification2d_stack_holder_class_finalizer
};

static JSValue skeleton_modification2d_stack_holder_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SkeletonModification2DStackHolder *skeleton_modification2d_stack_holder_class;
	JSValue obj = JS_NewObjectClass(ctx, SkeletonModification2DStackHolder::__class_id);
	if (JS_IsException(obj))
		return obj;
	skeleton_modification2d_stack_holder_class = memnew(SkeletonModification2DStackHolder);
	if (!skeleton_modification2d_stack_holder_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, skeleton_modification2d_stack_holder_class);
	return obj;
}
static JSValue skeleton_modification2d_stack_holder_class_set_held_modification_stack(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DStackHolder::set_held_modification_stack, SkeletonModification2DStackHolder::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_stack_holder_class_get_held_modification_stack(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DStackHolder::get_held_modification_stack, SkeletonModification2DStackHolder::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry skeleton_modification2d_stack_holder_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_held_modification_stack", 1, &skeleton_modification2d_stack_holder_class_set_held_modification_stack),
	JS_CFUNC_DEF("get_held_modification_stack", 0, &skeleton_modification2d_stack_holder_class_get_held_modification_stack),
};

static int js_skeleton_modification2d_stack_holder_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SkeletonModification2DStackHolder::__class_id);
	classes["SkeletonModification2DStackHolder"] = SkeletonModification2DStackHolder::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SkeletonModification2DStackHolder::__class_id, &skeleton_modification2d_stack_holder_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonModification2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonModification2DStackHolder::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_modification2d_stack_holder_class_proto_funcs, _countof(skeleton_modification2d_stack_holder_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, skeleton_modification2d_stack_holder_class_constructor, "SkeletonModification2DStackHolder", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SkeletonModification2DStackHolder", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton_modification2d_stack_holder_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_modification2d_stack_holder_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonModification2DStackHolder");
	return m;
}

JSModuleDef *js_init_skeleton_modification2d_stack_holder_module(JSContext *ctx) {
	return _js_init_skeleton_modification2d_stack_holder_module(ctx, "godot/classes/skeleton_modification2d_stack_holder");
}

void register_skeleton_modification2d_stack_holder() {
	js_init_skeleton_modification2d_stack_holder_module(ctx);
}