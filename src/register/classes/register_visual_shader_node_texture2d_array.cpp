
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/texture2d_array.hpp>
#include <godot_cpp/classes/visual_shader_node_sample3d.hpp>
#include <godot_cpp/classes/visual_shader_node_texture2d_array.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void visual_shader_node_texture2d_array_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeTexture2DArray *visual_shader_node_texture2d_array = static_cast<VisualShaderNodeTexture2DArray *>(JS_GetOpaque(val, VisualShaderNodeTexture2DArray::__class_id));
	if (visual_shader_node_texture2d_array)
		VisualShaderNodeTexture2DArray::free(nullptr, visual_shader_node_texture2d_array);
}

static JSClassDef visual_shader_node_texture2d_array_class_def = {
	"VisualShaderNodeTexture2DArray",
	.finalizer = visual_shader_node_texture2d_array_class_finalizer
};

static JSValue visual_shader_node_texture2d_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeTexture2DArray *visual_shader_node_texture2d_array_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeTexture2DArray::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_texture2d_array_class = memnew(VisualShaderNodeTexture2DArray);
	if (!visual_shader_node_texture2d_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_texture2d_array_class);
	return obj;
}
static JSValue visual_shader_node_texture2d_array_class_set_texture_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeTexture2DArray::set_texture_array, VisualShaderNodeTexture2DArray::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_texture2d_array_class_get_texture_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeTexture2DArray::get_texture_array, VisualShaderNodeTexture2DArray::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry visual_shader_node_texture2d_array_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture_array", 1, &visual_shader_node_texture2d_array_class_set_texture_array),
	JS_CFUNC_DEF("get_texture_array", 0, &visual_shader_node_texture2d_array_class_get_texture_array),
};

static int js_visual_shader_node_texture2d_array_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeTexture2DArray::__class_id);
	classes["VisualShaderNodeTexture2DArray"] = VisualShaderNodeTexture2DArray::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeTexture2DArray::__class_id, &visual_shader_node_texture2d_array_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeSample3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeTexture2DArray::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_texture2d_array_class_proto_funcs, _countof(visual_shader_node_texture2d_array_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_texture2d_array_class_constructor, "VisualShaderNodeTexture2DArray", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeTexture2DArray", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_texture2d_array_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_texture2d_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeTexture2DArray");
	return m;
}

JSModuleDef *js_init_visual_shader_node_texture2d_array_module(JSContext *ctx) {
	return _js_init_visual_shader_node_texture2d_array_module(ctx, "godot/classes/visual_shader_node_texture2d_array");
}

void register_visual_shader_node_texture2d_array() {
	js_init_visual_shader_node_texture2d_array_module(ctx);
}