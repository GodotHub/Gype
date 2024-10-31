
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_proximity_fade.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_proximity_fade_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_proximity_fade_class_def = {
	"VisualShaderNodeProximityFade",
	.finalizer = visual_shader_node_proximity_fade_class_finalizer
};

static JSValue visual_shader_node_proximity_fade_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeProximityFade::__class_id);
	if (JS_IsException(obj))
		return obj;

	VisualShaderNodeProximityFade *visual_shader_node_proximity_fade_class;
	if (argc == 1) 
		visual_shader_node_proximity_fade_class = static_cast<VisualShaderNodeProximityFade *>(Variant(*argv).operator Object *());
	else 
		visual_shader_node_proximity_fade_class = memnew(VisualShaderNodeProximityFade);
	if (!visual_shader_node_proximity_fade_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_proximity_fade_class);
	return obj;
}

static void define_visual_shader_node_proximity_fade_property(JSContext *ctx, JSValue proto) {
	
}

static void define_visual_shader_node_proximity_fade_enum(JSContext *ctx, JSValue proto) {
}

static int js_visual_shader_node_proximity_fade_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["VisualShaderNodeProximityFade"] = VisualShaderNodeProximityFade::__class_id;
	class_id_list.insert(VisualShaderNodeProximityFade::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeProximityFade::__class_id, &visual_shader_node_proximity_fade_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeProximityFade::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeProximityFade::__class_id, proto);

	define_visual_shader_node_proximity_fade_property(ctx, proto);
	define_visual_shader_node_proximity_fade_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_proximity_fade_class_constructor, "VisualShaderNodeProximityFade", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeProximityFade", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_proximity_fade_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_proximity_fade_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeProximityFade");
	return m;
}

JSModuleDef *js_init_visual_shader_node_proximity_fade_module(JSContext *ctx) {
	return _js_init_visual_shader_node_proximity_fade_module(ctx, "@godot/classes/visual_shader_node_proximity_fade");
}

void register_visual_shader_node_proximity_fade() {
	VisualShaderNodeProximityFade::__init_js_class_id();
	js_init_visual_shader_node_proximity_fade_module(ctx);
}