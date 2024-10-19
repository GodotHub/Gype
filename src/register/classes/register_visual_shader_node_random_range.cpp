
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_random_range.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_random_range_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_random_range_class_def = {
	"VisualShaderNodeRandomRange",
	.finalizer = visual_shader_node_random_range_class_finalizer
};

static JSValue visual_shader_node_random_range_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeRandomRange::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeRandomRange *visual_shader_node_random_range_class = memnew(VisualShaderNodeRandomRange);
	if (!visual_shader_node_random_range_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_random_range_class);	
	return obj;
}

void define_visual_shader_node_random_range_property(JSContext *ctx, JSValue obj) {
}

static int js_visual_shader_node_random_range_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeRandomRange::__class_id);
	classes["VisualShaderNodeRandomRange"] = VisualShaderNodeRandomRange::__class_id;
	class_id_list.insert(VisualShaderNodeRandomRange::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeRandomRange::__class_id, &visual_shader_node_random_range_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeRandomRange::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeRandomRange::__class_id, proto);

	define_visual_shader_node_random_range_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_random_range_class_constructor, "VisualShaderNodeRandomRange", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeRandomRange", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_random_range_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_random_range_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeRandomRange");
	return m;
}

JSModuleDef *js_init_visual_shader_node_random_range_module(JSContext *ctx) {
	return _js_init_visual_shader_node_random_range_module(ctx, "godot/classes/visual_shader_node_random_range");
}

void register_visual_shader_node_random_range() {
	VisualShaderNodeRandomRange::__init_js_class_id();
	js_init_visual_shader_node_random_range_module(ctx);
}