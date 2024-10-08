
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/classes/visual_shader_node_sample3d.hpp>
#include <godot_cpp/classes/visual_shader_node_texture3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void visual_shader_node_texture3d_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeTexture3D *visual_shader_node_texture3d = static_cast<VisualShaderNodeTexture3D *>(JS_GetOpaque(val, VisualShaderNodeTexture3D::__class_id));
	if (visual_shader_node_texture3d)
		VisualShaderNodeTexture3D::free(nullptr, visual_shader_node_texture3d);
}

static JSClassDef visual_shader_node_texture3d_class_def = {
	"VisualShaderNodeTexture3D",
	.finalizer = visual_shader_node_texture3d_class_finalizer
};

static JSValue visual_shader_node_texture3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualShaderNodeTexture3D *visual_shader_node_texture3d_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualShaderNodeTexture3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_shader_node_texture3d_class = memnew(VisualShaderNodeTexture3D);
	if (!visual_shader_node_texture3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_shader_node_texture3d_class);
	return obj;
}
static JSValue visual_shader_node_texture3d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualShaderNodeTexture3D::set_texture, VisualShaderNodeTexture3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue visual_shader_node_texture3d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualShaderNodeTexture3D::get_texture, VisualShaderNodeTexture3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry visual_shader_node_texture3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture", 1, &visual_shader_node_texture3d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &visual_shader_node_texture3d_class_get_texture),
};

static int js_visual_shader_node_texture3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&VisualShaderNodeTexture3D::__class_id);
	classes["VisualShaderNodeTexture3D"] = VisualShaderNodeTexture3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeTexture3D::__class_id, &visual_shader_node_texture3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNodeSample3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeTexture3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_texture3d_class_proto_funcs, _countof(visual_shader_node_texture3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_texture3d_class_constructor, "VisualShaderNodeTexture3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeTexture3D", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_texture3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_texture3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeTexture3D");
	return m;
}

JSModuleDef *js_init_visual_shader_node_texture3d_module(JSContext *ctx) {
	return _js_init_visual_shader_node_texture3d_module(ctx, "godot/classes/visual_shader_node_texture3d");
}

void register_visual_shader_node_texture3d() {
	js_init_visual_shader_node_texture3d_module(ctx);
}