
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/classes/animation_node_sync.hpp>
#include <godot_cpp/core/convert_helper.hpp>
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
	return obj;
}
static JSValue animation_node_sync_class_set_use_sync(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AnimationNodeSync::set_use_sync, AnimationNodeSync::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue animation_node_sync_class_is_using_sync(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AnimationNodeSync::is_using_sync, AnimationNodeSync::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry animation_node_sync_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_use_sync", 1, &animation_node_sync_class_set_use_sync),
	JS_CFUNC_DEF("is_using_sync", 0, &animation_node_sync_class_is_using_sync),
};

static int js_animation_node_sync_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimationNodeSync::__class_id);
	classes["AnimationNodeSync"] = AnimationNodeSync::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeSync::__class_id, &animation_node_sync_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AnimationNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeSync::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, animation_node_sync_class_proto_funcs, _countof(animation_node_sync_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, animation_node_sync_class_constructor, "AnimationNodeSync", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimationNodeSync", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_sync_module(JSContext *ctx, const char *module_name) {
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
	js_init_animation_node_sync_module(ctx);
}