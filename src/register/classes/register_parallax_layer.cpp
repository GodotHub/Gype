
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/parallax_layer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void parallax_layer_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef parallax_layer_class_def = {
	"ParallaxLayer",
	.finalizer = parallax_layer_class_finalizer
};

static JSValue parallax_layer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ParallaxLayer::__class_id);
	if (JS_IsException(obj))
		return obj;
	ParallaxLayer *parallax_layer_class;
	if (argc == 1) {
		Variant vobj = *argv;
		parallax_layer_class = static_cast<ParallaxLayer *>(static_cast<Object *>(vobj));
	} else {
		parallax_layer_class = memnew(ParallaxLayer);
	}
	if (!parallax_layer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, parallax_layer_class);	
	return obj;
}
static JSValue parallax_layer_class_set_motion_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParallaxLayer::set_motion_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue parallax_layer_class_get_motion_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParallaxLayer::get_motion_scale, ctx, this_val, argc, argv);
};
static JSValue parallax_layer_class_set_motion_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParallaxLayer::set_motion_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue parallax_layer_class_get_motion_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParallaxLayer::get_motion_offset, ctx, this_val, argc, argv);
};
static JSValue parallax_layer_class_set_mirroring(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ParallaxLayer::set_mirroring, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue parallax_layer_class_get_mirroring(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParallaxLayer::get_mirroring, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry parallax_layer_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_motion_scale", 1, &parallax_layer_class_set_motion_scale),
	JS_CFUNC_DEF("get_motion_scale", 0, &parallax_layer_class_get_motion_scale),
	JS_CFUNC_DEF("set_motion_offset", 1, &parallax_layer_class_set_motion_offset),
	JS_CFUNC_DEF("get_motion_offset", 0, &parallax_layer_class_get_motion_offset),
	JS_CFUNC_DEF("set_mirroring", 1, &parallax_layer_class_set_mirroring),
	JS_CFUNC_DEF("get_mirroring", 0, &parallax_layer_class_get_mirroring),
};

void define_parallax_layer_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "motion_scale"),
        JS_NewCFunction(ctx, parallax_layer_class_get_motion_scale, "get_motion_scale", 0),
        JS_NewCFunction(ctx, parallax_layer_class_set_motion_scale, "set_motion_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "motion_offset"),
        JS_NewCFunction(ctx, parallax_layer_class_get_motion_offset, "get_motion_offset", 0),
        JS_NewCFunction(ctx, parallax_layer_class_set_motion_offset, "set_motion_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "motion_mirroring"),
        JS_NewCFunction(ctx, parallax_layer_class_get_mirroring, "get_mirroring", 0),
        JS_NewCFunction(ctx, parallax_layer_class_set_mirroring, "set_mirroring", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_parallax_layer_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ParallaxLayer::__class_id);
	classes["ParallaxLayer"] = ParallaxLayer::__class_id;
	class_id_list.insert(ParallaxLayer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ParallaxLayer::__class_id, &parallax_layer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ParallaxLayer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ParallaxLayer::__class_id, proto);

	define_parallax_layer_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, parallax_layer_class_proto_funcs, _countof(parallax_layer_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, parallax_layer_class_constructor, "ParallaxLayer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ParallaxLayer", ctor);

	return 0;
}

JSModuleDef *_js_init_parallax_layer_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_parallax_layer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ParallaxLayer");
	return m;
}

JSModuleDef *js_init_parallax_layer_module(JSContext *ctx) {
	return _js_init_parallax_layer_module(ctx, "@godot/classes/parallax_layer");
}

void register_parallax_layer() {
	ParallaxLayer::__init_js_class_id();
	js_init_parallax_layer_module(ctx);
}