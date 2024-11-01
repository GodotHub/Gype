
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rd_pipeline_multisample_state.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rd_pipeline_multisample_state_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef rd_pipeline_multisample_state_class_def = {
	"RDPipelineMultisampleState",
	.finalizer = rd_pipeline_multisample_state_class_finalizer
};

static JSValue rd_pipeline_multisample_state_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RDPipelineMultisampleState::__class_id);
	if (JS_IsException(obj))
		return obj;

	RDPipelineMultisampleState *rd_pipeline_multisample_state_class;
	if (argc == 1) 
		rd_pipeline_multisample_state_class = static_cast<RDPipelineMultisampleState *>(Variant(*argv).operator Object *());
	else 
		rd_pipeline_multisample_state_class = memnew(RDPipelineMultisampleState);
	if (!rd_pipeline_multisample_state_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, rd_pipeline_multisample_state_class);
	return obj;
}
static JSValue rd_pipeline_multisample_state_class_set_sample_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineMultisampleState::set_sample_count, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_multisample_state_class_get_sample_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineMultisampleState::get_sample_count, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_multisample_state_class_set_enable_sample_shading(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineMultisampleState::set_enable_sample_shading, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_multisample_state_class_get_enable_sample_shading(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineMultisampleState::get_enable_sample_shading, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_multisample_state_class_set_min_sample_shading(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineMultisampleState::set_min_sample_shading, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_multisample_state_class_get_min_sample_shading(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineMultisampleState::get_min_sample_shading, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_multisample_state_class_set_enable_alpha_to_coverage(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineMultisampleState::set_enable_alpha_to_coverage, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_multisample_state_class_get_enable_alpha_to_coverage(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineMultisampleState::get_enable_alpha_to_coverage, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_multisample_state_class_set_enable_alpha_to_one(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineMultisampleState::set_enable_alpha_to_one, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_multisample_state_class_get_enable_alpha_to_one(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineMultisampleState::get_enable_alpha_to_one, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_multisample_state_class_set_sample_masks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RDPipelineMultisampleState::set_sample_masks, ctx, this_val, argc, argv);
};
static JSValue rd_pipeline_multisample_state_class_get_sample_masks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RDPipelineMultisampleState::get_sample_masks, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry rd_pipeline_multisample_state_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_sample_count", 1, &rd_pipeline_multisample_state_class_set_sample_count),
	JS_CFUNC_DEF("get_sample_count", 0, &rd_pipeline_multisample_state_class_get_sample_count),
	JS_CFUNC_DEF("set_enable_sample_shading", 1, &rd_pipeline_multisample_state_class_set_enable_sample_shading),
	JS_CFUNC_DEF("get_enable_sample_shading", 0, &rd_pipeline_multisample_state_class_get_enable_sample_shading),
	JS_CFUNC_DEF("set_min_sample_shading", 1, &rd_pipeline_multisample_state_class_set_min_sample_shading),
	JS_CFUNC_DEF("get_min_sample_shading", 0, &rd_pipeline_multisample_state_class_get_min_sample_shading),
	JS_CFUNC_DEF("set_enable_alpha_to_coverage", 1, &rd_pipeline_multisample_state_class_set_enable_alpha_to_coverage),
	JS_CFUNC_DEF("get_enable_alpha_to_coverage", 0, &rd_pipeline_multisample_state_class_get_enable_alpha_to_coverage),
	JS_CFUNC_DEF("set_enable_alpha_to_one", 1, &rd_pipeline_multisample_state_class_set_enable_alpha_to_one),
	JS_CFUNC_DEF("get_enable_alpha_to_one", 0, &rd_pipeline_multisample_state_class_get_enable_alpha_to_one),
	JS_CFUNC_DEF("set_sample_masks", 1, &rd_pipeline_multisample_state_class_set_sample_masks),
	JS_CFUNC_DEF("get_sample_masks", 0, &rd_pipeline_multisample_state_class_get_sample_masks),
};

static void define_rd_pipeline_multisample_state_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "sample_count"),
        JS_NewCFunction(ctx, rd_pipeline_multisample_state_class_get_sample_count, "get_sample_count", 0),
        JS_NewCFunction(ctx, rd_pipeline_multisample_state_class_set_sample_count, "set_sample_count", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "enable_sample_shading"),
        JS_NewCFunction(ctx, rd_pipeline_multisample_state_class_get_enable_sample_shading, "get_enable_sample_shading", 0),
        JS_NewCFunction(ctx, rd_pipeline_multisample_state_class_set_enable_sample_shading, "set_enable_sample_shading", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "min_sample_shading"),
        JS_NewCFunction(ctx, rd_pipeline_multisample_state_class_get_min_sample_shading, "get_min_sample_shading", 0),
        JS_NewCFunction(ctx, rd_pipeline_multisample_state_class_set_min_sample_shading, "set_min_sample_shading", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "enable_alpha_to_coverage"),
        JS_NewCFunction(ctx, rd_pipeline_multisample_state_class_get_enable_alpha_to_coverage, "get_enable_alpha_to_coverage", 0),
        JS_NewCFunction(ctx, rd_pipeline_multisample_state_class_set_enable_alpha_to_coverage, "set_enable_alpha_to_coverage", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "enable_alpha_to_one"),
        JS_NewCFunction(ctx, rd_pipeline_multisample_state_class_get_enable_alpha_to_one, "get_enable_alpha_to_one", 0),
        JS_NewCFunction(ctx, rd_pipeline_multisample_state_class_set_enable_alpha_to_one, "set_enable_alpha_to_one", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "sample_masks"),
        JS_NewCFunction(ctx, rd_pipeline_multisample_state_class_get_sample_masks, "get_sample_masks", 0),
        JS_NewCFunction(ctx, rd_pipeline_multisample_state_class_set_sample_masks, "set_sample_masks", 1),
        JS_PROP_GETSET
    );
	
}

static void define_rd_pipeline_multisample_state_enum(JSContext *ctx, JSValue proto) {
}

static int js_rd_pipeline_multisample_state_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["RDPipelineMultisampleState"] = RDPipelineMultisampleState::__class_id;
	class_id_list.insert(RDPipelineMultisampleState::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RDPipelineMultisampleState::__class_id, &rd_pipeline_multisample_state_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RDPipelineMultisampleState::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDPipelineMultisampleState::__class_id, proto);

	define_rd_pipeline_multisample_state_property(ctx, proto);
	define_rd_pipeline_multisample_state_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_pipeline_multisample_state_class_proto_funcs, _countof(rd_pipeline_multisample_state_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, rd_pipeline_multisample_state_class_constructor, "RDPipelineMultisampleState", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RDPipelineMultisampleState", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_pipeline_multisample_state_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_pipeline_multisample_state_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDPipelineMultisampleState");
	return m;
}

JSModuleDef *js_init_rd_pipeline_multisample_state_module(JSContext *ctx) {
	return _js_init_rd_pipeline_multisample_state_module(ctx, "@godot/classes/rd_pipeline_multisample_state");
}

void register_rd_pipeline_multisample_state() {
	RDPipelineMultisampleState::__init_js_class_id();
	js_init_rd_pipeline_multisample_state_module(ctx);
}