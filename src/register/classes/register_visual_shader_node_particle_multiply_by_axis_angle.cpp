
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_multiply_by_axis_angle.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_shader_node_particle_multiply_by_axis_angle_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualShaderNodeParticleMultiplyByAxisAngle *visual_shader_node_particle_multiply_by_axis_angle = static_cast<VisualShaderNodeParticleMultiplyByAxisAngle *>(JS_GetOpaque(val, VisualShaderNodeParticleMultiplyByAxisAngle::__class_id));
	if (visual_shader_node_particle_multiply_by_axis_angle)
		memdelete(visual_shader_node_particle_multiply_by_axis_angle);
}

static JSClassDef visual_shader_node_particle_multiply_by_axis_angle_class_def = {
	"VisualShaderNodeParticleMultiplyByAxisAngle",
	.finalizer = visual_shader_node_particle_multiply_by_axis_angle_class_finalizer
};

static JSValue visual_shader_node_particle_multiply_by_axis_angle_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, VisualShaderNodeParticleMultiplyByAxisAngle::__class_id);
	if (JS_IsException(obj))
		return obj;

	VisualShaderNodeParticleMultiplyByAxisAngle *visual_shader_node_particle_multiply_by_axis_angle_class;
	if (argc == 1) 
		visual_shader_node_particle_multiply_by_axis_angle_class = static_cast<VisualShaderNodeParticleMultiplyByAxisAngle *>(Variant(*argv).operator Object *());
	else 
		visual_shader_node_particle_multiply_by_axis_angle_class = memnew(VisualShaderNodeParticleMultiplyByAxisAngle);
	if (!visual_shader_node_particle_multiply_by_axis_angle_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, visual_shader_node_particle_multiply_by_axis_angle_class);
	return obj;
}
static JSValue visual_shader_node_particle_multiply_by_axis_angle_class_set_degrees_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&VisualShaderNodeParticleMultiplyByAxisAngle::set_degrees_mode, ctx, this_val, argc, argv);
};
static JSValue visual_shader_node_particle_multiply_by_axis_angle_class_is_degrees_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&VisualShaderNodeParticleMultiplyByAxisAngle::is_degrees_mode, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_shader_node_particle_multiply_by_axis_angle_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_degrees_mode", 1, &visual_shader_node_particle_multiply_by_axis_angle_class_set_degrees_mode),
	JS_CFUNC_DEF("is_degrees_mode", 0, &visual_shader_node_particle_multiply_by_axis_angle_class_is_degrees_mode),
};

static void define_visual_shader_node_particle_multiply_by_axis_angle_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "degrees_mode"),
        JS_NewCFunction(ctx, visual_shader_node_particle_multiply_by_axis_angle_class_is_degrees_mode, "is_degrees_mode", 0),
        JS_NewCFunction(ctx, visual_shader_node_particle_multiply_by_axis_angle_class_set_degrees_mode, "set_degrees_mode", 1),
        JS_PROP_GETSET
    );
	
}

static void define_visual_shader_node_particle_multiply_by_axis_angle_enum(JSContext *ctx, JSValue proto) {
}

static int js_visual_shader_node_particle_multiply_by_axis_angle_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["VisualShaderNodeParticleMultiplyByAxisAngle"] = VisualShaderNodeParticleMultiplyByAxisAngle::__class_id;
	class_id_list.insert(VisualShaderNodeParticleMultiplyByAxisAngle::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualShaderNodeParticleMultiplyByAxisAngle::__class_id, &visual_shader_node_particle_multiply_by_axis_angle_class_def);

	JSValue proto = JS_NewObjectClass(ctx, VisualShaderNodeParticleMultiplyByAxisAngle::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualShaderNode::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualShaderNodeParticleMultiplyByAxisAngle::__class_id, proto);

	define_visual_shader_node_particle_multiply_by_axis_angle_property(ctx, proto);
	define_visual_shader_node_particle_multiply_by_axis_angle_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_shader_node_particle_multiply_by_axis_angle_class_proto_funcs, _countof(visual_shader_node_particle_multiply_by_axis_angle_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, visual_shader_node_particle_multiply_by_axis_angle_class_constructor, "VisualShaderNodeParticleMultiplyByAxisAngle", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "VisualShaderNodeParticleMultiplyByAxisAngle", ctor);
	constructors[VisualShaderNodeParticleMultiplyByAxisAngle::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_visual_shader_node_particle_multiply_by_axis_angle_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/visual_shader_node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_shader_node_particle_multiply_by_axis_angle_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualShaderNodeParticleMultiplyByAxisAngle");
	return m;
}

JSModuleDef *js_init_visual_shader_node_particle_multiply_by_axis_angle_module(JSContext *ctx) {
	return _js_init_visual_shader_node_particle_multiply_by_axis_angle_module(ctx, "@godot/classes/visual_shader_node_particle_multiply_by_axis_angle");
}

void register_visual_shader_node_particle_multiply_by_axis_angle() {
	VisualShaderNodeParticleMultiplyByAxisAngle::__init_js_class_id();
	js_init_visual_shader_node_particle_multiply_by_axis_angle_module(ctx);
}