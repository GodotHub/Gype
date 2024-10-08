
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visual_shader_node_vector_base.hpp>
#include <godot_cpp/classes/visual_shader_node_vector_refract.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_vector_refract_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeVectorRefract *visual_shader_node_vector_refract = static_cast<VisualShaderNodeVectorRefract *>(JS_GetOpaque(val, VisualShaderNodeVectorRefract::__class_id));
	if (visual_shader_node_vector_refract)
		VisualShaderNodeVectorRefract::free(nullptr, visual_shader_node_vector_refract);
}

static JSClassDef visual_shader_node_vector_refract_class_def = {
	"VisualShaderNodeVectorRefract",
	.finalizer = visual_shader_node_vector_refract_class_finalizer
};

static JSValue visual_shader_node_vector_refract_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeVectorRefract *visual_shader_node_vector_refract_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeVectorRefract::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_vector_refract_class = memnew(VisualShaderNodeVectorRefract);
	if (!visual_shader_node_vector_refract_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_vector_refract_class);
	return obj;
}

static int js_visual_shader_node_vector_refract_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeVectorRefract::__class_id);
	classes["VisualShaderNodeVectorRefract"] = VisualShaderNodeVectorRefract::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeVectorRefract::__class_id, &visual_shader_node_vector_refract_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeVectorBase::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeVectorRefract::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_vector_refract_class_constructor, "VisualShaderNodeVectorRefract", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeVectorRefract", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_vector_refract_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_vector_refract_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeVectorRefract");
	return m;
}

JSModuleDef *js_init_visual_shader_node_vector_refract_module(JSContext *ctx) {
	return _js_init_visual_shader_node_vector_refract_module(ctx, "godot/classes/visual_shader_node_vector_refract");
}

void register_visual_shader_node_vector_refract() {
	js_init_visual_shader_node_vector_refract_module(ctx);
}