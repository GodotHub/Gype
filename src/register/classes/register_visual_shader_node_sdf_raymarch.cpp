
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_sdf_raymarch.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_sdf_raymarch_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_sdf_raymarch_class_def = {
	"VisualShaderNodeSDFRaymarch",
	.finalizer = visual_shader_node_sdf_raymarch_class_finalizer
};

static JSValue visual_shader_node_sdf_raymarch_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeSDFRaymarch::__class_id);
	if (JS_IsException(obj))
		return obj;

	VisualShaderNodeSDFRaymarch *visual_shader_node_sdf_raymarch_class;
	if (argc == 1) 
		visual_shader_node_sdf_raymarch_class = static_cast<VisualShaderNodeSDFRaymarch *>(Variant(*argv).operator Object *());
	else 
		visual_shader_node_sdf_raymarch_class = memnew(VisualShaderNodeSDFRaymarch);
	if (!visual_shader_node_sdf_raymarch_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_sdf_raymarch_class);
	return obj;
}

static void define_visual_shader_node_sdf_raymarch_property(JSContext *ctx, JSValue proto) {
	
}

static void define_visual_shader_node_sdf_raymarch_enum(JSContext *ctx, JSValue proto) {
}

static int js_visual_shader_node_sdf_raymarch_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["VisualShaderNodeSDFRaymarch"] = VisualShaderNodeSDFRaymarch::__class_id;
	class_id_list.insert(VisualShaderNodeSDFRaymarch::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeSDFRaymarch::__class_id, &visual_shader_node_sdf_raymarch_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeSDFRaymarch::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeSDFRaymarch::__class_id, proto);

	define_visual_shader_node_sdf_raymarch_property(ctx, proto);
	define_visual_shader_node_sdf_raymarch_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_sdf_raymarch_class_constructor, "VisualShaderNodeSDFRaymarch", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeSDFRaymarch", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_sdf_raymarch_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_sdf_raymarch_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeSDFRaymarch");
	return m;
}

JSModuleDef *js_init_visual_shader_node_sdf_raymarch_module(JSContext *ctx) {
	return _js_init_visual_shader_node_sdf_raymarch_module(ctx, "@godot/classes/visual_shader_node_sdf_raymarch");
}

void register_visual_shader_node_sdf_raymarch() {
	VisualShaderNodeSDFRaymarch::__init_js_class_id();
	js_init_visual_shader_node_sdf_raymarch_module(ctx);
}