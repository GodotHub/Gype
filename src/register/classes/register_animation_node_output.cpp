
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/animation_node_output.hpp>
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_node_output_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef animation_node_output_class_def = {
	"AnimationNodeOutput",
	.finalizer = animation_node_output_class_finalizer
};

static JSValue animation_node_output_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimationNodeOutput::__class_id);
	if (JS_IsException(obj))
		return obj;

	AnimationNodeOutput *animation_node_output_class;
	if (argc == 1) 
		animation_node_output_class = static_cast<AnimationNodeOutput *>(static_cast<Object *>(Variant(*argv)));
	else 
		animation_node_output_class = memnew(AnimationNodeOutput);
	if (!animation_node_output_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animation_node_output_class);	
	return obj;
}

static void define_animation_node_output_property(JSContext *ctx, JSValue proto) {
	
}

static void define_animation_node_output_enum(JSContext *ctx, JSValue proto) {
}

static int js_animation_node_output_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AnimationNodeOutput::__class_id);
	classes["AnimationNodeOutput"] = AnimationNodeOutput::__class_id;
	class_id_list.insert(AnimationNodeOutput::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeOutput::__class_id, &animation_node_output_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimationNodeOutput::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AnimationNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeOutput::__class_id, proto);

	define_animation_node_output_property(ctx, proto);
	define_animation_node_output_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, animation_node_output_class_constructor, "AnimationNodeOutput", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimationNodeOutput", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_output_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/animation_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_output_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeOutput");
	return m;
}

JSModuleDef *js_init_animation_node_output_module(JSContext *ctx) {
	return _js_init_animation_node_output_module(ctx, "@godot/classes/animation_node_output");
}

void register_animation_node_output() {
	AnimationNodeOutput::__init_js_class_id();
	js_init_animation_node_output_module(ctx);
}