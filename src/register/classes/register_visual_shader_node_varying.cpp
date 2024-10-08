
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_varying.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_varying_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeVarying *visual_shader_node_varying = static_cast<VisualShaderNodeVarying *>(JS_GetOpaque(val, VisualShaderNodeVarying::__class_id));
	if (visual_shader_node_varying)
		VisualShaderNodeVarying::free(nullptr, visual_shader_node_varying);
}

static JSClassDef visual_shader_node_varying_class_def = {
	"VisualShaderNodeVarying",
	.finalizer = visual_shader_node_varying_class_finalizer
};

static JSValue visual_shader_node_varying_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeVarying *visual_shader_node_varying_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeVarying::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_varying_class = memnew(VisualShaderNodeVarying);
	if (!visual_shader_node_varying_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_varying_class);
	return obj;
}
static JSValue visual_shader_node_varying_class_set_varying_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisualShaderNodeVarying::set_varying_name, VisualShaderNodeVarying::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_varying_class_get_varying_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeVarying::get_varying_name, VisualShaderNodeVarying::__class_id, ctx, this_val, argv);
};
static JSValue visual_shader_node_varying_class_set_varying_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisualShaderNodeVarying::set_varying_type, VisualShaderNodeVarying::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_varying_class_get_varying_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeVarying::get_varying_type, VisualShaderNodeVarying::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry visual_shader_node_varying_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_varying_name", 1, &visual_shader_node_varying_class_set_varying_name),
	JS_CFUNC_DEF("get_varying_name", 0, &visual_shader_node_varying_class_get_varying_name),
	JS_CFUNC_DEF("set_varying_type", 1, &visual_shader_node_varying_class_set_varying_type),
	JS_CFUNC_DEF("get_varying_type", 0, &visual_shader_node_varying_class_get_varying_type),
};

static int js_visual_shader_node_varying_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeVarying::__class_id);
	classes["VisualShaderNodeVarying"] = VisualShaderNodeVarying::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeVarying::__class_id, &visual_shader_node_varying_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeVarying::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_varying_class_proto_funcs, _countof(visual_shader_node_varying_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_varying_class_constructor, "VisualShaderNodeVarying", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeVarying", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_varying_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_varying_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeVarying");
	return m;
}

JSModuleDef *js_init_visual_shader_node_varying_module(JSContext *ctx) {
	return _js_init_visual_shader_node_varying_module(ctx, "godot/classes/visual_shader_node_varying");
}

void register_visual_shader_node_varying() {
	js_init_visual_shader_node_varying_module(ctx);
}