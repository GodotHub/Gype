
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void animation_root_node_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef animation_root_node_class_def = {
	"AnimationRootNode",
	.finalizer = animation_root_node_class_finalizer
};

static JSValue animation_root_node_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimationRootNode::__class_id);
	if (JS_IsException(obj))
		return obj;
	AnimationRootNode *animation_root_node_class = memnew(AnimationRootNode);
	if (!animation_root_node_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animation_root_node_class);
	return obj;
}

void define_animation_root_node_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_animation_root_node_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimationRootNode::__class_id);
	classes["AnimationRootNode"] = AnimationRootNode::__class_id;
	class_id_list.insert(AnimationRootNode::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationRootNode::__class_id, &animation_root_node_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimationRootNode::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AnimationNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationRootNode::__class_id, proto);

	define_animation_root_node_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, animation_root_node_class_constructor, "AnimationRootNode", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimationRootNode", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_root_node_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/animation_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	AnimationRootNode::__init_js_class_id();
	js_init_animation_root_node_module(ctx);
}