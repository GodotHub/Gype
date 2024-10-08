
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/curve_texture.hpp>
#include <godot_cpp/classes/visual_shader_node_curve_texture.hpp>
#include <godot_cpp/classes/visual_shader_node_resizable_base.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_curve_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeCurveTexture *visual_shader_node_curve_texture = static_cast<VisualShaderNodeCurveTexture *>(JS_GetOpaque(val, VisualShaderNodeCurveTexture::__class_id));
	if (visual_shader_node_curve_texture)
		VisualShaderNodeCurveTexture::free(nullptr, visual_shader_node_curve_texture);
}

static JSClassDef visual_shader_node_curve_texture_class_def = {
	"VisualShaderNodeCurveTexture",
	.finalizer = visual_shader_node_curve_texture_class_finalizer
};

static JSValue visual_shader_node_curve_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeCurveTexture *visual_shader_node_curve_texture_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeCurveTexture::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_curve_texture_class = memnew(VisualShaderNodeCurveTexture);
	if (!visual_shader_node_curve_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_curve_texture_class);
	return obj;
}
static JSValue visual_shader_node_curve_texture_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&VisualShaderNodeCurveTexture::set_texture, VisualShaderNodeCurveTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_curve_texture_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeCurveTexture::get_texture, VisualShaderNodeCurveTexture::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry visual_shader_node_curve_texture_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture", 1, &visual_shader_node_curve_texture_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &visual_shader_node_curve_texture_class_get_texture),
};

static int js_visual_shader_node_curve_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeCurveTexture::__class_id);
	classes["VisualShaderNodeCurveTexture"] = VisualShaderNodeCurveTexture::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeCurveTexture::__class_id, &visual_shader_node_curve_texture_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeResizableBase::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeCurveTexture::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_curve_texture_class_proto_funcs, _countof(visual_shader_node_curve_texture_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_curve_texture_class_constructor, "VisualShaderNodeCurveTexture", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeCurveTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_curve_texture_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_curve_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeCurveTexture");
	return m;
}

JSModuleDef *js_init_visual_shader_node_curve_texture_module(JSContext *ctx) {
	return _js_init_visual_shader_node_curve_texture_module(ctx, "godot/classes/visual_shader_node_curve_texture");
}

void register_visual_shader_node_curve_texture() {
	js_init_visual_shader_node_curve_texture_module(ctx);
}