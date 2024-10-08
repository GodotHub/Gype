
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/visual_shader_node_vector_len.hpp>
#include <godot_cpp/classes/visual_shader_node_vector_base.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void visual_shader_node_vector_len_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeVectorLen *visual_shader_node_vector_len = static_cast<VisualShaderNodeVectorLen *>(JS_GetOpaque(val, VisualShaderNodeVectorLen::__class_id));
	if (visual_shader_node_vector_len)
		VisualShaderNodeVectorLen::free(nullptr, visual_shader_node_vector_len);
}

static JSClassDef visual_shader_node_vector_len_class_def = {
	"VisualShaderNodeVectorLen",
	.finalizer = visual_shader_node_vector_len_class_finalizer
};

static JSValue visual_shader_node_vector_len_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeVectorLen *visual_shader_node_vector_len_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeVectorLen::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_vector_len_class = memnew(VisualShaderNodeVectorLen);
	if (!visual_shader_node_vector_len_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_vector_len_class);
	return obj;
}

static int js_visual_shader_node_vector_len_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeVectorLen::__class_id);
	classes["VisualShaderNodeVectorLen"] = VisualShaderNodeVectorLen::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeVectorLen::__class_id, &visual_shader_node_vector_len_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeVectorBase::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeVectorLen::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_vector_len_class_constructor, "VisualShaderNodeVectorLen", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeVectorLen", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_vector_len_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_vector_len_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeVectorLen");
	return m;
}

JSModuleDef *js_init_visual_shader_node_vector_len_module(JSContext *ctx) {
	return _js_init_visual_shader_node_vector_len_module(ctx, "godot/classes/visual_shader_node_vector_len");
}

void register_visual_shader_node_vector_len() {
	js_init_visual_shader_node_vector_len_module(ctx);
}