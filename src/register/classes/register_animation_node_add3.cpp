
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/animation_node_sync.hpp>
#include <godot_cpp/classes/animation_node_add3.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void animation_node_add3_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationNodeAdd3 *animation_node_add3 = static_cast<AnimationNodeAdd3 *>(JS_GetOpaque(val, AnimationNodeAdd3::__class_id));
	if (animation_node_add3)
		AnimationNodeAdd3::free(nullptr, animation_node_add3);
}

static JSClassDef animation_node_add3_class_def = {
	"AnimationNodeAdd3",
	.finalizer = animation_node_add3_class_finalizer
};

static JSValue animation_node_add3_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationNodeAdd3 *animation_node_add3_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationNodeAdd3::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_node_add3_class = memnew(AnimationNodeAdd3);
	if (!animation_node_add3_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_node_add3_class);
	return obj;
}

static int js_animation_node_add3_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AnimationNodeAdd3::__class_id);
	classes["AnimationNodeAdd3"] = AnimationNodeAdd3::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeAdd3::__class_id, &animation_node_add3_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AnimationNodeSync::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeAdd3::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, animation_node_add3_class_constructor, "AnimationNodeAdd3", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AnimationNodeAdd3", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_add3_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_add3_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeAdd3");
	return m;
}

JSModuleDef *js_init_animation_node_add3_module(JSContext *ctx) {
	return _js_init_animation_node_add3_module(ctx, "godot/classes/animation_node_add3");
}

void register_animation_node_add3() {
	js_init_animation_node_add3_module(ctx);
}