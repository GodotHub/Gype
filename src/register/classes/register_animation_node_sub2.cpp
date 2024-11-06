
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/animation_node_sub2.hpp>
#include <godot_cpp/classes/animation_node_sync.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_node_sub2_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationNodeSub2 *animation_node_sub2 = static_cast<AnimationNodeSub2 *>(JS_GetOpaque(val, AnimationNodeSub2::__class_id));
	if (animation_node_sub2)
		memdelete(animation_node_sub2);
}

static JSClassDef animation_node_sub2_class_def = {
	"AnimationNodeSub2",
	.finalizer = animation_node_sub2_class_finalizer
};

static JSValue animation_node_sub2_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimationNodeSub2::__class_id);
	if (JS_IsException(obj))
		return obj;

	AnimationNodeSub2 *animation_node_sub2_class;
	if (argc == 1) 
		animation_node_sub2_class = static_cast<AnimationNodeSub2 *>(Variant(*argv).operator Object *());
	else 
		animation_node_sub2_class = memnew(AnimationNodeSub2);
	if (!animation_node_sub2_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animation_node_sub2_class);
	return obj;
}

static void define_animation_node_sub2_property(JSContext *ctx, JSValue proto) {
	
}

static void define_animation_node_sub2_enum(JSContext *ctx, JSValue proto) {
}

static int js_animation_node_sub2_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AnimationNodeSub2"] = AnimationNodeSub2::__class_id;
	class_id_list.insert(AnimationNodeSub2::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeSub2::__class_id, &animation_node_sub2_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimationNodeSub2::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AnimationNodeSync::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeSub2::__class_id, proto);

	define_animation_node_sub2_property(ctx, proto);
	define_animation_node_sub2_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, animation_node_sub2_class_constructor, "AnimationNodeSub2", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "AnimationNodeSub2", ctor);
	constructors[AnimationNodeSub2::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_animation_node_sub2_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/animation_node_sync';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_sub2_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeSub2");
	return m;
}

JSModuleDef *js_init_animation_node_sub2_module(JSContext *ctx) {
	return _js_init_animation_node_sub2_module(ctx, "@godot/classes/animation_node_sub2");
}

void register_animation_node_sub2() {
	AnimationNodeSub2::__init_js_class_id();
	js_init_animation_node_sub2_module(ctx);
}