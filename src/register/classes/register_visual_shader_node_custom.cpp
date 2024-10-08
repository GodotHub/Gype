
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_custom.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void visual_shader_node_custom_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeCustom *visual_shader_node_custom = static_cast<VisualShaderNodeCustom *>(JS_GetOpaque(val, VisualShaderNodeCustom::__class_id));
	if (visual_shader_node_custom)
		VisualShaderNodeCustom::free(nullptr, visual_shader_node_custom);
}

static JSClassDef visual_shader_node_custom_class_def = {
	"VisualShaderNodeCustom",
	.finalizer = visual_shader_node_custom_class_finalizer
};

static JSValue visual_shader_node_custom_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeCustom *visual_shader_node_custom_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeCustom::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_custom_class = memnew(VisualShaderNodeCustom);
	if (!visual_shader_node_custom_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_custom_class);
	return obj;
}
static JSValue visual_shader_node_custom_class_get_option_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeCustom::get_option_index, VisualShaderNodeCustom::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry visual_shader_node_custom_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_option_index", 1, &visual_shader_node_custom_class_get_option_index),
};

static int js_visual_shader_node_custom_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeCustom::__class_id);
	classes["VisualShaderNodeCustom"] = VisualShaderNodeCustom::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeCustom::__class_id, &visual_shader_node_custom_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeCustom::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_custom_class_proto_funcs, _countof(visual_shader_node_custom_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_custom_class_constructor, "VisualShaderNodeCustom", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeCustom", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_custom_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_custom_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeCustom");
	return m;
}

JSModuleDef *js_init_visual_shader_node_custom_module(JSContext *ctx) {
	return _js_init_visual_shader_node_custom_module(ctx, "godot/classes/visual_shader_node_custom");
}

void register_visual_shader_node_custom() {
	js_init_visual_shader_node_custom_module(ctx);
}