
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_remap.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_remap_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeRemap *visual_shader_node_remap = static_cast<VisualShaderNodeRemap *>(JS_GetOpaque(val, VisualShaderNodeRemap::__class_id));
	if (visual_shader_node_remap)
		memdelete(visual_shader_node_remap);
}

static JSClassDef visual_shader_node_remap_class_def = {
	"VisualShaderNodeRemap",
	.finalizer = visual_shader_node_remap_class_finalizer
};

static JSValue visual_shader_node_remap_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeRemap::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeRemap *visual_shader_node_remap_class = memnew(VisualShaderNodeRemap);
	if (!visual_shader_node_remap_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_remap_class);	
	return obj;
}

void define_visual_shader_node_remap_property(JSContext *ctx, JSValue obj) {
}

static int js_visual_shader_node_remap_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeRemap::__class_id);
	classes["VisualShaderNodeRemap"] = VisualShaderNodeRemap::__class_id;
	class_id_list.insert(VisualShaderNodeRemap::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeRemap::__class_id, &visual_shader_node_remap_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeRemap::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeRemap::__class_id, proto);

	define_visual_shader_node_remap_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_remap_class_constructor, "VisualShaderNodeRemap", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeRemap", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_remap_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_remap_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeRemap");
	return m;
}

JSModuleDef *js_init_visual_shader_node_remap_module(JSContext *ctx) {
	return _js_init_visual_shader_node_remap_module(ctx, "godot/classes/visual_shader_node_remap");
}

void register_visual_shader_node_remap() {
	VisualShaderNodeRemap::__init_js_class_id();
	js_init_visual_shader_node_remap_module(ctx);
}