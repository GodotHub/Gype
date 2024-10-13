
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_if.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_if_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeIf *visual_shader_node_if = static_cast<VisualShaderNodeIf *>(JS_GetOpaque(val, VisualShaderNodeIf::__class_id));
	if (visual_shader_node_if)
		VisualShaderNodeIf::free(nullptr, visual_shader_node_if);
}

static JSClassDef visual_shader_node_if_class_def = {
	"VisualShaderNodeIf",
	.finalizer = visual_shader_node_if_class_finalizer
};

static JSValue visual_shader_node_if_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeIf *visual_shader_node_if_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeIf::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_if_class = memnew(VisualShaderNodeIf);
	if (!visual_shader_node_if_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_if_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_visual_shader_node_if_property(JSContext *ctx, JSValue obj) {
}

static int js_visual_shader_node_if_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeIf::__class_id);
	classes["VisualShaderNodeIf"] = VisualShaderNodeIf::__class_id;
	class_id_list.insert(VisualShaderNodeIf::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeIf::__class_id, &visual_shader_node_if_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeIf::__class_id, proto);
	define_visual_shader_node_if_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_if_class_constructor, "VisualShaderNodeIf", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeIf", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_if_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_if_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeIf");
	return m;
}

JSModuleDef *js_init_visual_shader_node_if_module(JSContext *ctx) {
	return _js_init_visual_shader_node_if_module(ctx, "godot/classes/visual_shader_node_if");
}

void register_visual_shader_node_if() {
	VisualShaderNodeIf::__init_js_class_id();
	js_init_visual_shader_node_if_module(ctx);
}