
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/animatable_body2d.hpp>
#include <godot_cpp/classes/static_body2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animatable_body2d_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimatableBody2D *animatable_body2d = static_cast<AnimatableBody2D *>(JS_GetOpaque(val, AnimatableBody2D::__class_id));
	if (animatable_body2d)
		memdelete(animatable_body2d);
}

static JSClassDef animatable_body2d_class_def = {
	"AnimatableBody2D",
	.finalizer = animatable_body2d_class_finalizer
};

static JSValue animatable_body2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimatableBody2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	AnimatableBody2D *animatable_body2d_class = memnew(AnimatableBody2D);
	if (!animatable_body2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animatable_body2d_class);	
	return obj;
}
static JSValue animatable_body2d_class_set_sync_to_physics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimatableBody2D::set_sync_to_physics, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animatable_body2d_class_is_sync_to_physics_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimatableBody2D::is_sync_to_physics_enabled, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry animatable_body2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_sync_to_physics", 1, &animatable_body2d_class_set_sync_to_physics),
	JS_CFUNC_DEF("is_sync_to_physics_enabled", 0, &animatable_body2d_class_is_sync_to_physics_enabled),
};

void define_animatable_body2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sync_to_physics"),
        JS_NewCFunction(ctx, animatable_body2d_class_is_sync_to_physics_enabled, "is_sync_to_physics_enabled", 0),
        JS_NewCFunction(ctx, animatable_body2d_class_set_sync_to_physics, "set_sync_to_physics", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_animatable_body2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AnimatableBody2D::__class_id);
	classes["AnimatableBody2D"] = AnimatableBody2D::__class_id;
	class_id_list.insert(AnimatableBody2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimatableBody2D::__class_id, &animatable_body2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimatableBody2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, StaticBody2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimatableBody2D::__class_id, proto);

	define_animatable_body2d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, animatable_body2d_class_proto_funcs, _countof(animatable_body2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, animatable_body2d_class_constructor, "AnimatableBody2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimatableBody2D", ctor);

	return 0;
}

JSModuleDef *_js_init_animatable_body2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/static_body2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animatable_body2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimatableBody2D");
	return m;
}

JSModuleDef *js_init_animatable_body2d_module(JSContext *ctx) {
	return _js_init_animatable_body2d_module(ctx, "godot/classes/animatable_body2d");
}

void register_animatable_body2d() {
	AnimatableBody2D::__init_js_class_id();
	js_init_animatable_body2d_module(ctx);
}