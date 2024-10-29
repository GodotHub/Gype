
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_transform_compose.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_transform_compose_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_transform_compose_class_def = {
	"VisualShaderNodeTransformCompose",
	.finalizer = visual_shader_node_transform_compose_class_finalizer
};

static JSValue visual_shader_node_transform_compose_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeTransformCompose::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeTransformCompose *visual_shader_node_transform_compose_class = memnew(VisualShaderNodeTransformCompose);
	if (!visual_shader_node_transform_compose_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_transform_compose_class);	
	return obj;
}

void define_visual_shader_node_transform_compose_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_visual_shader_node_transform_compose_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeTransformCompose::__class_id);
	classes["VisualShaderNodeTransformCompose"] = VisualShaderNodeTransformCompose::__class_id;
	class_id_list.insert(VisualShaderNodeTransformCompose::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeTransformCompose::__class_id, &visual_shader_node_transform_compose_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeTransformCompose::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeTransformCompose::__class_id, proto);

	define_visual_shader_node_transform_compose_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_transform_compose_class_constructor, "VisualShaderNodeTransformCompose", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeTransformCompose", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_transform_compose_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_transform_compose_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeTransformCompose");
	return m;
}

JSModuleDef *js_init_visual_shader_node_transform_compose_module(JSContext *ctx) {
	return _js_init_visual_shader_node_transform_compose_module(ctx, "@godot/classes/visual_shader_node_transform_compose");
}

void register_visual_shader_node_transform_compose() {
	VisualShaderNodeTransformCompose::__init_js_class_id();
	js_init_visual_shader_node_transform_compose_module(ctx);
}