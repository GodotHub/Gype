
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/parallax_layer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void parallax_layer_class_finalizer(JSRuntime *rt, JSValue val) {
	ParallaxLayer *parallax_layer = static_cast<ParallaxLayer *>(JS_GetOpaque(val, ParallaxLayer::__class_id));
	if (parallax_layer)
		ParallaxLayer::free(nullptr, parallax_layer);
}

static JSClassDef parallax_layer_class_def = {
	"ParallaxLayer",
	.finalizer = parallax_layer_class_finalizer
};

static JSValue parallax_layer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ParallaxLayer *parallax_layer_class;
	JSValue obj = JS_NewObjectClass(ctx, ParallaxLayer::__class_id);
	if (JS_IsException(obj))
		return obj;
	parallax_layer_class = memnew(ParallaxLayer);
	if (!parallax_layer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, parallax_layer_class);
	return obj;
}
static JSValue parallax_layer_class_set_motion_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ParallaxLayer::set_motion_scale, ParallaxLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax_layer_class_get_motion_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParallaxLayer::get_motion_scale, ParallaxLayer::__class_id, ctx, this_val, argv);
};
static JSValue parallax_layer_class_set_motion_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ParallaxLayer::set_motion_offset, ParallaxLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax_layer_class_get_motion_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParallaxLayer::get_motion_offset, ParallaxLayer::__class_id, ctx, this_val, argv);
};
static JSValue parallax_layer_class_set_mirroring(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ParallaxLayer::set_mirroring, ParallaxLayer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue parallax_layer_class_get_mirroring(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ParallaxLayer::get_mirroring, ParallaxLayer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry parallax_layer_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_motion_scale", 1, &parallax_layer_class_set_motion_scale),
	JS_CFUNC_DEF("get_motion_scale", 0, &parallax_layer_class_get_motion_scale),
	JS_CFUNC_DEF("set_motion_offset", 1, &parallax_layer_class_set_motion_offset),
	JS_CFUNC_DEF("get_motion_offset", 0, &parallax_layer_class_get_motion_offset),
	JS_CFUNC_DEF("set_mirroring", 1, &parallax_layer_class_set_mirroring),
	JS_CFUNC_DEF("get_mirroring", 0, &parallax_layer_class_get_mirroring),
};

static int js_parallax_layer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ParallaxLayer::__class_id);
	classes["ParallaxLayer"] = ParallaxLayer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ParallaxLayer::__class_id, &parallax_layer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ParallaxLayer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, parallax_layer_class_proto_funcs, _countof(parallax_layer_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, parallax_layer_class_constructor, "ParallaxLayer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ParallaxLayer", ctor);

	return 0;
}

JSModuleDef *_js_init_parallax_layer_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_parallax_layer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ParallaxLayer");
	return m;
}

JSModuleDef *js_init_parallax_layer_module(JSContext *ctx) {
	return _js_init_parallax_layer_module(ctx, "godot/classes/parallax_layer");
}

void register_parallax_layer() {
	js_init_parallax_layer_module(ctx);
}