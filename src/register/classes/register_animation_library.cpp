
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/animation_library.hpp>
#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_library_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef animation_library_class_def = {
	"AnimationLibrary",
	.finalizer = animation_library_class_finalizer
};

static JSValue animation_library_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimationLibrary::__class_id);
	if (JS_IsException(obj))
		return obj;

	AnimationLibrary *animation_library_class;
	if (argc == 1) 
		animation_library_class = static_cast<AnimationLibrary *>(static_cast<Object *>(Variant(*argv)));
	else 
		animation_library_class = memnew(AnimationLibrary);
	if (!animation_library_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animation_library_class);	
	return obj;
}
static JSValue animation_library_class_add_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AnimationLibrary::add_animation, ctx, this_val, argc, argv);
};
static JSValue animation_library_class_remove_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationLibrary::remove_animation, ctx, this_val, argc, argv);
};
static JSValue animation_library_class_rename_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AnimationLibrary::rename_animation, ctx, this_val, argc, argv);
};
static JSValue animation_library_class_has_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationLibrary::has_animation, ctx, this_val, argc, argv);
};
static JSValue animation_library_class_get_animation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationLibrary::get_animation, ctx, this_val, argc, argv);
};
static JSValue animation_library_class_get_animation_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AnimationLibrary::get_animation_list, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry animation_library_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_animation", 2, &animation_library_class_add_animation),
	JS_CFUNC_DEF("remove_animation", 1, &animation_library_class_remove_animation),
	JS_CFUNC_DEF("rename_animation", 2, &animation_library_class_rename_animation),
	JS_CFUNC_DEF("has_animation", 1, &animation_library_class_has_animation),
	JS_CFUNC_DEF("get_animation", 1, &animation_library_class_get_animation),
	JS_CFUNC_DEF("get_animation_list", 0, &animation_library_class_get_animation_list),
};
static JSValue animation_library_class_get_animation_added_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimationLibrary *opaque = reinterpret_cast<AnimationLibrary *>(JS_GetOpaque(this_val, AnimationLibrary::__class_id));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "animation_added_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "animation_added").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "animation_added_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue animation_library_class_get_animation_removed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimationLibrary *opaque = reinterpret_cast<AnimationLibrary *>(JS_GetOpaque(this_val, AnimationLibrary::__class_id));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "animation_removed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "animation_removed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "animation_removed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue animation_library_class_get_animation_renamed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimationLibrary *opaque = reinterpret_cast<AnimationLibrary *>(JS_GetOpaque(this_val, AnimationLibrary::__class_id));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "animation_renamed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "animation_renamed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "animation_renamed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue animation_library_class_get_animation_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AnimationLibrary *opaque = reinterpret_cast<AnimationLibrary *>(JS_GetOpaque(this_val, AnimationLibrary::__class_id));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "animation_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "animation_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "animation_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_animation_library_property(JSContext *ctx, JSValue proto) {
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "animation_added"),
		JS_NewCFunction(ctx, animation_library_class_get_animation_added_signal, "get_animation_added_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "animation_removed"),
		JS_NewCFunction(ctx, animation_library_class_get_animation_removed_signal, "get_animation_removed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "animation_renamed"),
		JS_NewCFunction(ctx, animation_library_class_get_animation_renamed_signal, "get_animation_renamed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "animation_changed"),
		JS_NewCFunction(ctx, animation_library_class_get_animation_changed_signal, "get_animation_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_animation_library_enum(JSContext *ctx, JSValue proto) {
}

static int js_animation_library_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AnimationLibrary::__class_id);
	classes["AnimationLibrary"] = AnimationLibrary::__class_id;
	class_id_list.insert(AnimationLibrary::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationLibrary::__class_id, &animation_library_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimationLibrary::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationLibrary::__class_id, proto);

	define_animation_library_property(ctx, proto);
	define_animation_library_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_library_class_proto_funcs, _countof(animation_library_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, animation_library_class_constructor, "AnimationLibrary", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimationLibrary", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_library_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_library_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationLibrary");
	return m;
}

JSModuleDef *js_init_animation_library_module(JSContext *ctx) {
	return _js_init_animation_library_module(ctx, "@godot/classes/animation_library");
}

void register_animation_library() {
	AnimationLibrary::__init_js_class_id();
	js_init_animation_library_module(ctx);
}