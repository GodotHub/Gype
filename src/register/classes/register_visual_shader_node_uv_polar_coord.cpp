
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node_uv_polar_coord.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_uv_polar_coord_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef visual_shader_node_uv_polar_coord_class_def = {
	"VisualShaderNodeUVPolarCoord",
	.finalizer = visual_shader_node_uv_polar_coord_class_finalizer
};

static JSValue visual_shader_node_uv_polar_coord_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeUVPolarCoord::__class_id);
	if (JS_IsException(obj))
		return obj;
	VisualShaderNodeUVPolarCoord *visual_shader_node_uv_polar_coord_class = memnew(VisualShaderNodeUVPolarCoord);
	if (!visual_shader_node_uv_polar_coord_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_uv_polar_coord_class);	
	return obj;
}

void define_visual_shader_node_uv_polar_coord_property(JSContext *ctx, JSValue obj) {
}

static int js_visual_shader_node_uv_polar_coord_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualShaderNodeUVPolarCoord::__class_id);
	classes["VisualShaderNodeUVPolarCoord"] = VisualShaderNodeUVPolarCoord::__class_id;
	class_id_list.insert(VisualShaderNodeUVPolarCoord::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeUVPolarCoord::__class_id, &visual_shader_node_uv_polar_coord_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeUVPolarCoord::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeUVPolarCoord::__class_id, proto);

	define_visual_shader_node_uv_polar_coord_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_uv_polar_coord_class_constructor, "VisualShaderNodeUVPolarCoord", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualShaderNodeUVPolarCoord", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_uv_polar_coord_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_uv_polar_coord_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeUVPolarCoord");
	return m;
}

JSModuleDef *js_init_visual_shader_node_uv_polar_coord_module(JSContext *ctx) {
	return _js_init_visual_shader_node_uv_polar_coord_module(ctx, "godot/classes/visual_shader_node_uv_polar_coord");
}

void register_visual_shader_node_uv_polar_coord() {
	VisualShaderNodeUVPolarCoord::__init_js_class_id();
	js_init_visual_shader_node_uv_polar_coord_module(ctx);
}