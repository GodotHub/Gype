
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/classes/animation_node_output.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void animation_node_output_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationNodeOutput *animation_node_output = static_cast<AnimationNodeOutput *>(JS_GetOpaque(val, AnimationNodeOutput::__class_id));
	if (animation_node_output)
		AnimationNodeOutput::free(nullptr, animation_node_output);
}

static JSClassDef animation_node_output_class_def = {
	"AnimationNodeOutput",
	.finalizer = animation_node_output_class_finalizer
};

static JSValue animation_node_output_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationNodeOutput *animation_node_output_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationNodeOutput::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_node_output_class = memnew(AnimationNodeOutput);
	if (!animation_node_output_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_node_output_class);
	return obj;
}

static int js_animation_node_output_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimationNodeOutput::__class_id);
	classes["AnimationNodeOutput"] = AnimationNodeOutput::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeOutput::__class_id, &animation_node_output_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AnimationNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeOutput::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, animation_node_output_class_constructor, "AnimationNodeOutput", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimationNodeOutput", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_output_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_output_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeOutput");
	return m;
}

JSModuleDef *js_init_animation_node_output_module(JSContext *ctx) {
	return _js_init_animation_node_output_module(ctx, "godot/classes/animation_node_output");
}

void register_animation_node_output() {
	js_init_animation_node_output_module(ctx);
}