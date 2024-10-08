
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/animation_library.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void animation_library_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationLibrary *animation_library = static_cast<AnimationLibrary *>(JS_GetOpaque(val, AnimationLibrary::__class_id));
	if (animation_library)
		AnimationLibrary::free(nullptr, animation_library);
}

static JSClassDef animation_library_class_def = {
	"AnimationLibrary",
	.finalizer = animation_library_class_finalizer
};

static JSValue animation_library_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationLibrary *animation_library_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationLibrary::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_library_class = memnew(AnimationLibrary);
	if (!animation_library_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_library_class);
	return obj;
}
static JSValue animation_library_class_add_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AnimationLibrary::add_animation, AnimationLibrary::__class_id, ctx, this_val, argv);
};
static JSValue animation_library_class_remove_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationLibrary::remove_animation, AnimationLibrary::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_library_class_rename_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationLibrary::rename_animation, AnimationLibrary::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_library_class_has_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationLibrary::has_animation, AnimationLibrary::__class_id, ctx, this_val, argv);
};
static JSValue animation_library_class_get_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationLibrary::get_animation, AnimationLibrary::__class_id, ctx, this_val, argv);
};
static JSValue animation_library_class_get_animation_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationLibrary::get_animation_list, AnimationLibrary::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry animation_library_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_animation", 2, &animation_library_class_add_animation),
	JS_CFUNC_DEF("remove_animation", 1, &animation_library_class_remove_animation),
	JS_CFUNC_DEF("rename_animation", 2, &animation_library_class_rename_animation),
	JS_CFUNC_DEF("has_animation", 1, &animation_library_class_has_animation),
	JS_CFUNC_DEF("get_animation", 1, &animation_library_class_get_animation),
	JS_CFUNC_DEF("get_animation_list", 0, &animation_library_class_get_animation_list),
};

static int js_animation_library_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimationLibrary::__class_id);
	classes["AnimationLibrary"] = AnimationLibrary::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimationLibrary::__class_id, &animation_library_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationLibrary::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_library_class_proto_funcs, _countof(animation_library_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animation_library_class_constructor, "AnimationLibrary", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimationLibrary", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_library_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_library_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationLibrary");
	return m;
}

JSModuleDef *js_init_animation_library_module(JSContext *ctx) {
	return _js_init_animation_library_module(ctx, "godot/classes/animation_library");
}

void register_animation_library() {
	js_init_animation_library_module(ctx);
}