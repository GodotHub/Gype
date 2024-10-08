
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_input.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void visual_shader_node_input_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeInput *visual_shader_node_input = static_cast<VisualShaderNodeInput *>(JS_GetOpaque(val, VisualShaderNodeInput::__class_id));
	if (visual_shader_node_input)
		VisualShaderNodeInput::free(nullptr, visual_shader_node_input);
}

static JSClassDef visual_shader_node_input_class_def = {
	"VisualShaderNodeInput",
	.finalizer = visual_shader_node_input_class_finalizer
};

static JSValue visual_shader_node_input_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeInput *visual_shader_node_input_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeInput::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_input_class = memnew(VisualShaderNodeInput);
	if (!visual_shader_node_input_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_input_class);
	return obj;
}
static JSValue visual_shader_node_input_class_set_input_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeInput::set_input_name, VisualShaderNodeInput::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_input_class_get_input_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeInput::get_input_name, VisualShaderNodeInput::__class_id, ctx, this_val, argv);
};
static JSValue visual_shader_node_input_class_get_input_real_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeInput::get_input_real_name, VisualShaderNodeInput::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry visual_shader_node_input_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_input_name", 1, &visual_shader_node_input_class_set_input_name),
	JS_CFUNC_DEF("get_input_name", 0, &visual_shader_node_input_class_get_input_name),
	JS_CFUNC_DEF("get_input_real_name", 0, &visual_shader_node_input_class_get_input_real_name),
};

static int js_visual_shader_node_input_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeInput::__class_id);
	classes["VisualShaderNodeInput"] = VisualShaderNodeInput::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeInput::__class_id, &visual_shader_node_input_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeInput::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_input_class_proto_funcs, _countof(visual_shader_node_input_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_input_class_constructor, "VisualShaderNodeInput", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeInput", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_input_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_input_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeInput");
	return m;
}

JSModuleDef *js_init_visual_shader_node_input_module(JSContext *ctx) {
	return _js_init_visual_shader_node_input_module(ctx, "godot/classes/visual_shader_node_input");
}

void register_visual_shader_node_input() {
	js_init_visual_shader_node_input_module(ctx);
}