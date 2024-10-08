
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/visual_shader_node_varying_getter.hpp>
#include <godot_cpp/classes/visual_shader_node_varying.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void visual_shader_node_varying_getter_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeVaryingGetter *visual_shader_node_varying_getter = static_cast<VisualShaderNodeVaryingGetter *>(JS_GetOpaque(val, VisualShaderNodeVaryingGetter::__class_id));
	if (visual_shader_node_varying_getter)
		VisualShaderNodeVaryingGetter::free(nullptr, visual_shader_node_varying_getter);
}

static JSClassDef visual_shader_node_varying_getter_class_def = {
	"VisualShaderNodeVaryingGetter",
	.finalizer = visual_shader_node_varying_getter_class_finalizer
};

static JSValue visual_shader_node_varying_getter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeVaryingGetter *visual_shader_node_varying_getter_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeVaryingGetter::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_varying_getter_class = memnew(VisualShaderNodeVaryingGetter);
	if (!visual_shader_node_varying_getter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_varying_getter_class);
	return obj;
}

static int js_visual_shader_node_varying_getter_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeVaryingGetter::__class_id);
	classes["VisualShaderNodeVaryingGetter"] = VisualShaderNodeVaryingGetter::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeVaryingGetter::__class_id, &visual_shader_node_varying_getter_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeVarying::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeVaryingGetter::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_varying_getter_class_constructor, "VisualShaderNodeVaryingGetter", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeVaryingGetter", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_varying_getter_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_varying_getter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeVaryingGetter");
	return m;
}

JSModuleDef *js_init_visual_shader_node_varying_getter_module(JSContext *ctx) {
	return _js_init_visual_shader_node_varying_getter_module(ctx, "godot/classes/visual_shader_node_varying_getter");
}

void register_visual_shader_node_varying_getter() {
	js_init_visual_shader_node_varying_getter_module(ctx);
}