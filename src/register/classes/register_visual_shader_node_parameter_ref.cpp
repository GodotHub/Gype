
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_parameter_ref.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_parameter_ref_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeParameterRef *visual_shader_node_parameter_ref = static_cast<VisualShaderNodeParameterRef *>(JS_GetOpaque(val, VisualShaderNodeParameterRef::__class_id));
	if (visual_shader_node_parameter_ref)
		VisualShaderNodeParameterRef::free(nullptr, visual_shader_node_parameter_ref);
}

static JSClassDef visual_shader_node_parameter_ref_class_def = {
	"VisualShaderNodeParameterRef",
	.finalizer = visual_shader_node_parameter_ref_class_finalizer
};

static JSValue visual_shader_node_parameter_ref_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeParameterRef *visual_shader_node_parameter_ref_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeParameterRef::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_parameter_ref_class = memnew(VisualShaderNodeParameterRef);
	if (!visual_shader_node_parameter_ref_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_parameter_ref_class);
	return obj;
}
static JSValue visual_shader_node_parameter_ref_class_set_parameter_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisualShaderNodeParameterRef::set_parameter_name, VisualShaderNodeParameterRef::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_parameter_ref_class_get_parameter_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeParameterRef::get_parameter_name, VisualShaderNodeParameterRef::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry visual_shader_node_parameter_ref_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_parameter_name", 1, &visual_shader_node_parameter_ref_class_set_parameter_name),
	JS_CFUNC_DEF("get_parameter_name", 0, &visual_shader_node_parameter_ref_class_get_parameter_name),
};

static int js_visual_shader_node_parameter_ref_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeParameterRef::__class_id);
	classes["VisualShaderNodeParameterRef"] = VisualShaderNodeParameterRef::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeParameterRef::__class_id, &visual_shader_node_parameter_ref_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeParameterRef::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_parameter_ref_class_proto_funcs, _countof(visual_shader_node_parameter_ref_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_parameter_ref_class_constructor, "VisualShaderNodeParameterRef", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeParameterRef", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_parameter_ref_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_parameter_ref_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeParameterRef");
	return m;
}

JSModuleDef *js_init_visual_shader_node_parameter_ref_module(JSContext *ctx) {
	return _js_init_visual_shader_node_parameter_ref_module(ctx, "godot/classes/visual_shader_node_parameter_ref");
}

void register_visual_shader_node_parameter_ref() {
	js_init_visual_shader_node_parameter_ref_module(ctx);
}