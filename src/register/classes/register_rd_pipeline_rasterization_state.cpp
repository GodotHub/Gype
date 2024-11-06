
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/rd_pipeline_rasterization_state.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rd_pipeline_rasterization_state_class_finalizer(JSRuntime *rt, JSValue val) {
	RDPipelineRasterizationState *rd_pipeline_rasterization_state = static_cast<RDPipelineRasterizationState *>(JS_GetOpaque(val, RDPipelineRasterizationState::__class_id));
	if (rd_pipeline_rasterization_state)
		memdelete(rd_pipeline_rasterization_state);
}

static JSClassDef rd_pipeline_rasterization_state_class_def = {
	"RDPipelineRasterizationState",
	.finalizer = rd_pipeline_rasterization_state_class_finalizer
};

static JSValue rd_pipeline_rasterization_state_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RDPipelineRasterizationState::__class_id);
	if (JS_IsException(obj))
		return obj;

	RDPipelineRasterizationState *rd_pipeline_rasterization_state_class;
	if (argc == 1) 
		rd_pipeline_rasterization_state_class = static_cast<RDPipelineRasterizationState *>(Variant(*argv).operator Object *());
	else 
		rd_pipeline_rasterization_state_class = memnew(RDPipelineRasterizationState);
	if (!rd_pipeline_rasterization_state_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, rd_pipeline_rasterization_state_class);
	return obj;
}
static JSValue rd_pipeline_rasterization_state_class_set_enable_depth_clamp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineRasterizationState::set_enable_depth_clamp, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_get_enable_depth_clamp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_enable_depth_clamp, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_discard_primitives(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineRasterizationState::set_discard_primitives, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_get_discard_primitives(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_discard_primitives, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_wireframe(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineRasterizationState::set_wireframe, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_get_wireframe(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_wireframe, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_cull_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineRasterizationState::set_cull_mode, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_get_cull_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_cull_mode, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_front_face(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineRasterizationState::set_front_face, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_get_front_face(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_front_face, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_depth_bias_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineRasterizationState::set_depth_bias_enabled, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_get_depth_bias_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_depth_bias_enabled, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_depth_bias_constant_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineRasterizationState::set_depth_bias_constant_factor, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_get_depth_bias_constant_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_depth_bias_constant_factor, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_depth_bias_clamp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineRasterizationState::set_depth_bias_clamp, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_get_depth_bias_clamp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_depth_bias_clamp, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_depth_bias_slope_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineRasterizationState::set_depth_bias_slope_factor, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_get_depth_bias_slope_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_depth_bias_slope_factor, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_line_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineRasterizationState::set_line_width, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_get_line_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_line_width, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_set_patch_control_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineRasterizationState::set_patch_control_points, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_rasterization_state_class_get_patch_control_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineRasterizationState::get_patch_control_points, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry rd_pipeline_rasterization_state_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_enable_depth_clamp", 1, &rd_pipeline_rasterization_state_class_set_enable_depth_clamp),
	JS_CFUNC_DEF("get_enable_depth_clamp", 0, &rd_pipeline_rasterization_state_class_get_enable_depth_clamp),
	JS_CFUNC_DEF("set_discard_primitives", 1, &rd_pipeline_rasterization_state_class_set_discard_primitives),
	JS_CFUNC_DEF("get_discard_primitives", 0, &rd_pipeline_rasterization_state_class_get_discard_primitives),
	JS_CFUNC_DEF("set_wireframe", 1, &rd_pipeline_rasterization_state_class_set_wireframe),
	JS_CFUNC_DEF("get_wireframe", 0, &rd_pipeline_rasterization_state_class_get_wireframe),
	JS_CFUNC_DEF("set_cull_mode", 1, &rd_pipeline_rasterization_state_class_set_cull_mode),
	JS_CFUNC_DEF("get_cull_mode", 0, &rd_pipeline_rasterization_state_class_get_cull_mode),
	JS_CFUNC_DEF("set_front_face", 1, &rd_pipeline_rasterization_state_class_set_front_face),
	JS_CFUNC_DEF("get_front_face", 0, &rd_pipeline_rasterization_state_class_get_front_face),
	JS_CFUNC_DEF("set_depth_bias_enabled", 1, &rd_pipeline_rasterization_state_class_set_depth_bias_enabled),
	JS_CFUNC_DEF("get_depth_bias_enabled", 0, &rd_pipeline_rasterization_state_class_get_depth_bias_enabled),
	JS_CFUNC_DEF("set_depth_bias_constant_factor", 1, &rd_pipeline_rasterization_state_class_set_depth_bias_constant_factor),
	JS_CFUNC_DEF("get_depth_bias_constant_factor", 0, &rd_pipeline_rasterization_state_class_get_depth_bias_constant_factor),
	JS_CFUNC_DEF("set_depth_bias_clamp", 1, &rd_pipeline_rasterization_state_class_set_depth_bias_clamp),
	JS_CFUNC_DEF("get_depth_bias_clamp", 0, &rd_pipeline_rasterization_state_class_get_depth_bias_clamp),
	JS_CFUNC_DEF("set_depth_bias_slope_factor", 1, &rd_pipeline_rasterization_state_class_set_depth_bias_slope_factor),
	JS_CFUNC_DEF("get_depth_bias_slope_factor", 0, &rd_pipeline_rasterization_state_class_get_depth_bias_slope_factor),
	JS_CFUNC_DEF("set_line_width", 1, &rd_pipeline_rasterization_state_class_set_line_width),
	JS_CFUNC_DEF("get_line_width", 0, &rd_pipeline_rasterization_state_class_get_line_width),
	JS_CFUNC_DEF("set_patch_control_points", 1, &rd_pipeline_rasterization_state_class_set_patch_control_points),
	JS_CFUNC_DEF("get_patch_control_points", 0, &rd_pipeline_rasterization_state_class_get_patch_control_points),
};

static void define_rd_pipeline_rasterization_state_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "enable_depth_clamp"),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_get_enable_depth_clamp, "get_enable_depth_clamp", 0),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_set_enable_depth_clamp, "set_enable_depth_clamp", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "discard_primitives"),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_get_discard_primitives, "get_discard_primitives", 0),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_set_discard_primitives, "set_discard_primitives", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "wireframe"),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_get_wireframe, "get_wireframe", 0),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_set_wireframe, "set_wireframe", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "cull_mode"),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_get_cull_mode, "get_cull_mode", 0),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_set_cull_mode, "set_cull_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "front_face"),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_get_front_face, "get_front_face", 0),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_set_front_face, "set_front_face", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "depth_bias_enabled"),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_get_depth_bias_enabled, "get_depth_bias_enabled", 0),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_set_depth_bias_enabled, "set_depth_bias_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "depth_bias_constant_factor"),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_get_depth_bias_constant_factor, "get_depth_bias_constant_factor", 0),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_set_depth_bias_constant_factor, "set_depth_bias_constant_factor", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "depth_bias_clamp"),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_get_depth_bias_clamp, "get_depth_bias_clamp", 0),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_set_depth_bias_clamp, "set_depth_bias_clamp", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "depth_bias_slope_factor"),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_get_depth_bias_slope_factor, "get_depth_bias_slope_factor", 0),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_set_depth_bias_slope_factor, "set_depth_bias_slope_factor", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "line_width"),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_get_line_width, "get_line_width", 0),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_set_line_width, "set_line_width", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "patch_control_points"),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_get_patch_control_points, "get_patch_control_points", 0),
        JS_NewCFunction(ctx, rd_pipeline_rasterization_state_class_set_patch_control_points, "set_patch_control_points", 1),
        JS_PROP_GETSET
    );
	
}

static void define_rd_pipeline_rasterization_state_enum(JSContext *ctx, JSValue proto) {
}

static int js_rd_pipeline_rasterization_state_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["RDPipelineRasterizationState"] = RDPipelineRasterizationState::__class_id;
	class_id_list.insert(RDPipelineRasterizationState::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RDPipelineRasterizationState::__class_id, &rd_pipeline_rasterization_state_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RDPipelineRasterizationState::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDPipelineRasterizationState::__class_id, proto);

	define_rd_pipeline_rasterization_state_property(ctx, proto);
	define_rd_pipeline_rasterization_state_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_pipeline_rasterization_state_class_proto_funcs, _countof(rd_pipeline_rasterization_state_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, rd_pipeline_rasterization_state_class_constructor, "RDPipelineRasterizationState", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "RDPipelineRasterizationState", ctor);
	constructors[RDPipelineRasterizationState::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_rd_pipeline_rasterization_state_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_pipeline_rasterization_state_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDPipelineRasterizationState");
	return m;
}

JSModuleDef *js_init_rd_pipeline_rasterization_state_module(JSContext *ctx) {
	return _js_init_rd_pipeline_rasterization_state_module(ctx, "@godot/classes/rd_pipeline_rasterization_state");
}

void register_rd_pipeline_rasterization_state() {
	RDPipelineRasterizationState::__init_js_class_id();
	js_init_rd_pipeline_rasterization_state_module(ctx);
}