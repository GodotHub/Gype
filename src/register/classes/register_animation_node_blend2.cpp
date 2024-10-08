
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/animation_node_sync.hpp>
#include <godot_cpp/classes/animation_node_blend2.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void animation_node_blend2_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationNodeBlend2 *animation_node_blend2 = static_cast<AnimationNodeBlend2 *>(JS_GetOpaque(val, AnimationNodeBlend2::__class_id));
	if (animation_node_blend2)
		AnimationNodeBlend2::free(nullptr, animation_node_blend2);
}

static JSClassDef animation_node_blend2_class_def = {
	"AnimationNodeBlend2",
	.finalizer = animation_node_blend2_class_finalizer
};

static JSValue animation_node_blend2_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationNodeBlend2 *animation_node_blend2_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationNodeBlend2::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_node_blend2_class = memnew(AnimationNodeBlend2);
	if (!animation_node_blend2_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_node_blend2_class);
	return obj;
}

static int js_animation_node_blend2_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimationNodeBlend2::__class_id);
	classes["AnimationNodeBlend2"] = AnimationNodeBlend2::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeBlend2::__class_id, &animation_node_blend2_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AnimationNodeSync::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeBlend2::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, animation_node_blend2_class_constructor, "AnimationNodeBlend2", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimationNodeBlend2", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_blend2_module(JSContext *ctx, const char *module_name) {
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
	js_init_animation_node_blend2_module(ctx);
}