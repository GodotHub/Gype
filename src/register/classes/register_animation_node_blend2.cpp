
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/animation_node_sync.hpp>
#include <godot_cpp/classes/animation_node_blend2.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_node_blend2_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef animation_node_blend2_class_def = {
	"AnimationNodeBlend2",
	.finalizer = animation_node_blend2_class_finalizer
};

static JSValue animation_node_blend2_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AnimationNodeBlend2::__class_id);
	if (JS_IsException(obj))
		return obj;
	AnimationNodeBlend2 *animation_node_blend2_class = memnew(AnimationNodeBlend2);
	if (!animation_node_blend2_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, animation_node_blend2_class);	
	return obj;
}

void define_animation_node_blend2_property(JSContext *ctx, JSValue obj) {
}

static int js_animation_node_blend2_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AnimationNodeBlend2::__class_id);
	classes["AnimationNodeBlend2"] = AnimationNodeBlend2::__class_id;
	class_id_list.insert(AnimationNodeBlend2::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeBlend2::__class_id, &animation_node_blend2_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AnimationNodeBlend2::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AnimationNodeSync::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeBlend2::__class_id, proto);

	define_animation_node_blend2_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, animation_node_blend2_class_constructor, "AnimationNodeBlend2", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimationNodeBlend2", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_blend2_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/animation_node_sync';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_blend2_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeBlend2");
	return m;
}

JSModuleDef *js_init_animation_node_blend2_module(JSContext *ctx) {
	return _js_init_animation_node_blend2_module(ctx, "godot/classes/animation_node_blend2");
}

void register_animation_node_blend2() {
	AnimationNodeBlend2::__init_js_class_id();
	js_init_animation_node_blend2_module(ctx);
}