
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/classes/animation_node_time_seek.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void animation_node_time_seek_class_finalizer(JSRuntime *rt, JSValue val) {
	AnimationNodeTimeSeek *animation_node_time_seek = static_cast<AnimationNodeTimeSeek *>(JS_GetOpaque(val, AnimationNodeTimeSeek::__class_id));
	if (animation_node_time_seek)
		AnimationNodeTimeSeek::free(nullptr, animation_node_time_seek);
}

static JSClassDef animation_node_time_seek_class_def = {
	"AnimationNodeTimeSeek",
	.finalizer = animation_node_time_seek_class_finalizer
};

static JSValue animation_node_time_seek_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AnimationNodeTimeSeek *animation_node_time_seek_class;
	JSValue obj = JS_NewObjectClass(ctx, AnimationNodeTimeSeek::__class_id);
	if (JS_IsException(obj))
		return obj;
	animation_node_time_seek_class = memnew(AnimationNodeTimeSeek);
	if (!animation_node_time_seek_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, animation_node_time_seek_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_animation_node_time_seek_property(JSContext *ctx, JSValue obj) {
}

static int js_animation_node_time_seek_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&AnimationNodeTimeSeek::__class_id);
	classes["AnimationNodeTimeSeek"] = AnimationNodeTimeSeek::__class_id;
	class_id_list.insert(AnimationNodeTimeSeek::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AnimationNodeTimeSeek::__class_id, &animation_node_time_seek_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AnimationNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AnimationNodeTimeSeek::__class_id, proto);
	define_animation_node_time_seek_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, animation_node_time_seek_class_constructor, "AnimationNodeTimeSeek", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "AnimationNodeTimeSeek", ctor);

	return 0;
}

JSModuleDef *_js_init_animation_node_time_seek_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/animation_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_animation_node_time_seek_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AnimationNodeTimeSeek");
	return m;
}

JSModuleDef *js_init_animation_node_time_seek_module(JSContext *ctx) {
	return _js_init_animation_node_time_seek_module(ctx, "godot/classes/animation_node_time_seek");
}

void register_animation_node_time_seek() {
	AnimationNodeTimeSeek::__init_js_class_id();
	js_init_animation_node_time_seek_module(ctx);
}