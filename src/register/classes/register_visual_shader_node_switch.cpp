
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_switch.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_switch_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeSwitch *visual_shader_node_switch = static_cast<VisualShaderNodeSwitch *>(JS_GetOpaque(val, VisualShaderNodeSwitch::__class_id));
	if (visual_shader_node_switch)
		VisualShaderNodeSwitch::free(nullptr, visual_shader_node_switch);
}

static JSClassDef visual_shader_node_switch_class_def = {
	"VisualShaderNodeSwitch",
	.finalizer = visual_shader_node_switch_class_finalizer
};

static JSValue visual_shader_node_switch_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeSwitch *visual_shader_node_switch_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeSwitch::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_switch_class = memnew(VisualShaderNodeSwitch);
	if (!visual_shader_node_switch_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_switch_class);
	return obj;
}
static JSValue visual_shader_node_switch_class_set_op_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisualShaderNodeSwitch::set_op_type, VisualShaderNodeSwitch::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_switch_class_get_op_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeSwitch::get_op_type, VisualShaderNodeSwitch::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry visual_shader_node_switch_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_op_type", 1, &visual_shader_node_switch_class_set_op_type),
	JS_CFUNC_DEF("get_op_type", 0, &visual_shader_node_switch_class_get_op_type),
};

static int js_visual_shader_node_switch_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeSwitch::__class_id);
	classes["VisualShaderNodeSwitch"] = VisualShaderNodeSwitch::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeSwitch::__class_id, &visual_shader_node_switch_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeSwitch::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_switch_class_proto_funcs, _countof(visual_shader_node_switch_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_switch_class_constructor, "VisualShaderNodeSwitch", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeSwitch", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_switch_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_switch_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeSwitch");
	return m;
}

JSModuleDef *js_init_visual_shader_node_switch_module(JSContext *ctx) {
	return _js_init_visual_shader_node_switch_module(ctx, "godot/classes/visual_shader_node_switch");
}

void register_visual_shader_node_switch() {
	js_init_visual_shader_node_switch_module(ctx);
}