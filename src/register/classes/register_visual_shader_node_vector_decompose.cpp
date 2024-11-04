
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_vector_base.hpp>
#include <godot_cpp/classes/visual_shader_node_vector_decompose.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_vector_decompose_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeVectorDecompose *visual_shader_node_vector_decompose = static_cast<VisualShaderNodeVectorDecompose *>(JS_GetOpaque(val, VisualShaderNodeVectorDecompose::__class_id));
	if (visual_shader_node_vector_decompose)
		memdelete(visual_shader_node_vector_decompose);
}

static JSClassDef visual_shader_node_vector_decompose_class_def = {
	"VisualShaderNodeVectorDecompose",
	.finalizer = visual_shader_node_vector_decompose_class_finalizer
};

static JSValue visual_shader_node_vector_decompose_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeVectorDecompose::__class_id);
	if (JS_IsException(obj))
		return obj;

	VisualShaderNodeVectorDecompose *visual_shader_node_vector_decompose_class;
	if (argc == 1) 
		visual_shader_node_vector_decompose_class = static_cast<VisualShaderNodeVectorDecompose *>(Variant(*argv).operator Object *());
	else 
		visual_shader_node_vector_decompose_class = memnew(VisualShaderNodeVectorDecompose);
	if (!visual_shader_node_vector_decompose_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_vector_decompose_class);
	return obj;
}

static void define_visual_shader_node_vector_decompose_property(JSContext *ctx, JSValue proto) {
	
}

static void define_visual_shader_node_vector_decompose_enum(JSContext *ctx, JSValue proto) {
}

static int js_visual_shader_node_vector_decompose_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["VisualShaderNodeVectorDecompose"] = VisualShaderNodeVectorDecompose::__class_id;
	class_id_list.insert(VisualShaderNodeVectorDecompose::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeVectorDecompose::__class_id, &visual_shader_node_vector_decompose_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeVectorDecompose::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeVectorBase::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeVectorDecompose::__class_id, proto);

	define_visual_shader_node_vector_decompose_property(ctx, proto);
	define_visual_shader_node_vector_decompose_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_vector_decompose_class_constructor, "VisualShaderNodeVectorDecompose", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "VisualShaderNodeVectorDecompose", ctor);
	constructors[VisualShaderNodeVectorDecompose::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_vector_decompose_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/visual_shader_node_vector_base';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_vector_decompose_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeVectorDecompose");
	return m;
}

JSModuleDef *js_init_visual_shader_node_vector_decompose_module(JSContext *ctx) {
	return _js_init_visual_shader_node_vector_decompose_module(ctx, "@godot/classes/visual_shader_node_vector_decompose");
}

void register_visual_shader_node_vector_decompose() {
	VisualShaderNodeVectorDecompose::__init_js_class_id();
	js_init_visual_shader_node_vector_decompose_module(ctx);
}