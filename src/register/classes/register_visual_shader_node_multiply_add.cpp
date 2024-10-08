
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_multiply_add.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void visual_shader_node_multiply_add_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeMultiplyAdd *visual_shader_node_multiply_add = static_cast<VisualShaderNodeMultiplyAdd *>(JS_GetOpaque(val, VisualShaderNodeMultiplyAdd::__class_id));
	if (visual_shader_node_multiply_add)
		VisualShaderNodeMultiplyAdd::free(nullptr, visual_shader_node_multiply_add);
}

static JSClassDef visual_shader_node_multiply_add_class_def = {
	"VisualShaderNodeMultiplyAdd",
	.finalizer = visual_shader_node_multiply_add_class_finalizer
};

static JSValue visual_shader_node_multiply_add_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeMultiplyAdd *visual_shader_node_multiply_add_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeMultiplyAdd::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_multiply_add_class = memnew(VisualShaderNodeMultiplyAdd);
	if (!visual_shader_node_multiply_add_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_multiply_add_class);
	return obj;
}
static JSValue visual_shader_node_multiply_add_class_set_op_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeMultiplyAdd::set_op_type, VisualShaderNodeMultiplyAdd::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_multiply_add_class_get_op_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeMultiplyAdd::get_op_type, VisualShaderNodeMultiplyAdd::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry visual_shader_node_multiply_add_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_op_type", 1, &visual_shader_node_multiply_add_class_set_op_type),
	JS_CFUNC_DEF("get_op_type", 0, &visual_shader_node_multiply_add_class_get_op_type),
};

static int js_visual_shader_node_multiply_add_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeMultiplyAdd::__class_id);
	classes["VisualShaderNodeMultiplyAdd"] = VisualShaderNodeMultiplyAdd::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeMultiplyAdd::__class_id, &visual_shader_node_multiply_add_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeMultiplyAdd::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_multiply_add_class_proto_funcs, _countof(visual_shader_node_multiply_add_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_multiply_add_class_constructor, "VisualShaderNodeMultiplyAdd", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeMultiplyAdd", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_multiply_add_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_multiply_add_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeMultiplyAdd");
	return m;
}

JSModuleDef *js_init_visual_shader_node_multiply_add_module(JSContext *ctx) {
	return _js_init_visual_shader_node_multiply_add_module(ctx, "godot/classes/visual_shader_node_multiply_add");
}

void register_visual_shader_node_multiply_add() {
	js_init_visual_shader_node_multiply_add_module(ctx);
}