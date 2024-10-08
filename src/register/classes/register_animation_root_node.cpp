
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void animation_root_node_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationRootNode *animation_root_node = static_cast<AnimationRootNode *>(JS_GetOpaque(val, AnimationRootNode::__class_id));
	if (animation_root_node)
		AnimationRootNode::free(nullptr, animation_root_node);
}

static JSClassDef animation_root_node_class_def = {
	"AnimationRootNode",
	.finalizer = animation_root_node_class_finalizer
};

static JSValue animation_root_node_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationRootNode *animation_root_node_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationRootNode::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_root_node_class = memnew(AnimationRootNode);
	if (!animation_root_node_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_root_node_class);
	return obj;
}

static int js_animation_root_node_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimationRootNode::__class_id);
	classes["AnimationRootNode"] = AnimationRootNode::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimationRootNode::__class_id, &animation_root_node_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AnimationNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationRootNode::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, animation_root_node_class_constructor, "AnimationRootNode", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimationRootNode", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_root_node_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_root_node_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationRootNode");
	return m;
}

JSModuleDef *js_init_animation_root_node_module(JSContext *ctx) {
	return _js_init_animation_root_node_module(ctx, "godot/classes/animation_root_node");
}

void register_animation_root_node() {
	js_init_animation_root_node_module(ctx);
}