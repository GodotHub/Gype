
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/classes/animation_node_sync.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_node_sync_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationNodeSync *animation_node_sync = static_cast<AnimationNodeSync *>(JS_GetOpaque(val, AnimationNodeSync::__class_id));
	if (animation_node_sync)
		AnimationNodeSync::free(nullptr, animation_node_sync);
}

static JSClassDef animation_node_sync_class_def = {
	"AnimationNodeSync",
	.finalizer = animation_node_sync_class_finalizer
};

static JSValue animation_node_sync_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationNodeSync *animation_node_sync_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationNodeSync::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_node_sync_class = memnew(AnimationNodeSync);
	if (!animation_node_sync_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_node_sync_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue animation_node_sync_class_set_use_sync(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeSync::set_use_sync, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_sync_class_is_using_sync(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeSync::is_using_sync, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry animation_node_sync_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_use_sync", 1, &animation_node_sync_class_set_use_sync),
	JS_CFUNC_DEF("is_using_sync", 0, &animation_node_sync_class_is_using_sync),
};

void define_animation_node_sync_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sync"),
        JS_NewCFunction(ctx, animation_node_sync_class_is_using_sync, "is_using_sync", 0),
        JS_NewCFunction(ctx, animation_node_sync_class_set_use_sync, "set_use_sync", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_animation_node_sync_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AnimationNodeSync::__class_id);
	classes["AnimationNodeSync"] = AnimationNodeSync::__class_id;
	class_id_list.insert(AnimationNodeSync::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeSync::__class_id, &animation_node_sync_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AnimationNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeSync::__class_id, proto);
	define_animation_node_sync_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_sync_class_proto_funcs, _countof(animation_node_sync_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animation_node_sync_class_constructor, "AnimationNodeSync", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimationNodeSync", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_sync_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/animation_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_sync_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeSync");
	return m;
}

JSModuleDef *js_init_animation_node_sync_module(JSContext *ctx) {
	return _js_init_animation_node_sync_module(ctx, "godot/classes/animation_node_sync");
}

void register_animation_node_sync() {
	AnimationNodeSync::__init_js_class_id();
	js_init_animation_node_sync_module(ctx);
}