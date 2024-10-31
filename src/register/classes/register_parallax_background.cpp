
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/parallax_background.hpp>
#include <godot_cpp/classes/canvas_layer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void parallax_background_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef parallax_background_class_def = {
	"ParallaxBackground",
	.finalizer = parallax_background_class_finalizer
};

static JSValue parallax_background_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ParallaxBackground::__class_id);
	if (JS_IsException(obj))
		return obj;

	ParallaxBackground *parallax_background_class;
	if (argc == 1) 
		parallax_background_class = static_cast<ParallaxBackground *>(static_cast<Object *>(Variant(*argv)));
	else 
		parallax_background_class = memnew(ParallaxBackground);
	if (!parallax_background_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, parallax_background_class);	
	return obj;
}
static JSValue parallax_background_class_set_scroll_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ParallaxBackground::set_scroll_offset, ctx, this_val, argc, argv);
};
static JSValue parallax_background_class_get_scroll_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParallaxBackground::get_scroll_offset, ctx, this_val, argc, argv);
};
static JSValue parallax_background_class_set_scroll_base_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ParallaxBackground::set_scroll_base_offset, ctx, this_val, argc, argv);
};
static JSValue parallax_background_class_get_scroll_base_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParallaxBackground::get_scroll_base_offset, ctx, this_val, argc, argv);
};
static JSValue parallax_background_class_set_scroll_base_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ParallaxBackground::set_scroll_base_scale, ctx, this_val, argc, argv);
};
static JSValue parallax_background_class_get_scroll_base_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParallaxBackground::get_scroll_base_scale, ctx, this_val, argc, argv);
};
static JSValue parallax_background_class_set_limit_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ParallaxBackground::set_limit_begin, ctx, this_val, argc, argv);
};
static JSValue parallax_background_class_get_limit_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParallaxBackground::get_limit_begin, ctx, this_val, argc, argv);
};
static JSValue parallax_background_class_set_limit_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ParallaxBackground::set_limit_end, ctx, this_val, argc, argv);
};
static JSValue parallax_background_class_get_limit_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ParallaxBackground::get_limit_end, ctx, this_val, argc, argv);
};
static JSValue parallax_background_class_set_ignore_camera_zoom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ParallaxBackground::set_ignore_camera_zoom, ctx, this_val, argc, argv);
};
static JSValue parallax_background_class_is_ignore_camera_zoom(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ParallaxBackground::is_ignore_camera_zoom, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry parallax_background_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_scroll_offset", 1, &parallax_background_class_set_scroll_offset),
	JS_CFUNC_DEF("get_scroll_offset", 0, &parallax_background_class_get_scroll_offset),
	JS_CFUNC_DEF("set_scroll_base_offset", 1, &parallax_background_class_set_scroll_base_offset),
	JS_CFUNC_DEF("get_scroll_base_offset", 0, &parallax_background_class_get_scroll_base_offset),
	JS_CFUNC_DEF("set_scroll_base_scale", 1, &parallax_background_class_set_scroll_base_scale),
	JS_CFUNC_DEF("get_scroll_base_scale", 0, &parallax_background_class_get_scroll_base_scale),
	JS_CFUNC_DEF("set_limit_begin", 1, &parallax_background_class_set_limit_begin),
	JS_CFUNC_DEF("get_limit_begin", 0, &parallax_background_class_get_limit_begin),
	JS_CFUNC_DEF("set_limit_end", 1, &parallax_background_class_set_limit_end),
	JS_CFUNC_DEF("get_limit_end", 0, &parallax_background_class_get_limit_end),
	JS_CFUNC_DEF("set_ignore_camera_zoom", 1, &parallax_background_class_set_ignore_camera_zoom),
	JS_CFUNC_DEF("is_ignore_camera_zoom", 0, &parallax_background_class_is_ignore_camera_zoom),
};

static void define_parallax_background_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "scroll_offset"),
        JS_NewCFunction(ctx, parallax_background_class_get_scroll_offset, "get_scroll_offset", 0),
        JS_NewCFunction(ctx, parallax_background_class_set_scroll_offset, "set_scroll_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "scroll_base_offset"),
        JS_NewCFunction(ctx, parallax_background_class_get_scroll_base_offset, "get_scroll_base_offset", 0),
        JS_NewCFunction(ctx, parallax_background_class_set_scroll_base_offset, "set_scroll_base_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "scroll_base_scale"),
        JS_NewCFunction(ctx, parallax_background_class_get_scroll_base_scale, "get_scroll_base_scale", 0),
        JS_NewCFunction(ctx, parallax_background_class_set_scroll_base_scale, "set_scroll_base_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "scroll_limit_begin"),
        JS_NewCFunction(ctx, parallax_background_class_get_limit_begin, "get_limit_begin", 0),
        JS_NewCFunction(ctx, parallax_background_class_set_limit_begin, "set_limit_begin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "scroll_limit_end"),
        JS_NewCFunction(ctx, parallax_background_class_get_limit_end, "get_limit_end", 0),
        JS_NewCFunction(ctx, parallax_background_class_set_limit_end, "set_limit_end", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "scroll_ignore_camera_zoom"),
        JS_NewCFunction(ctx, parallax_background_class_is_ignore_camera_zoom, "is_ignore_camera_zoom", 0),
        JS_NewCFunction(ctx, parallax_background_class_set_ignore_camera_zoom, "set_ignore_camera_zoom", 1),
        JS_PROP_GETSET
    );
	
}

static void define_parallax_background_enum(JSContext *ctx, JSValue proto) {
}

static int js_parallax_background_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ParallaxBackground::__class_id);
	classes["ParallaxBackground"] = ParallaxBackground::__class_id;
	class_id_list.insert(ParallaxBackground::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ParallaxBackground::__class_id, &parallax_background_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ParallaxBackground::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, CanvasLayer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ParallaxBackground::__class_id, proto);

	define_parallax_background_property(ctx, proto);
	define_parallax_background_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, parallax_background_class_proto_funcs, _countof(parallax_background_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, parallax_background_class_constructor, "ParallaxBackground", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ParallaxBackground", ctor);

	return 0;
}

JSModuleDef *_js_init_parallax_background_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/canvas_layer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_parallax_background_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ParallaxBackground");
	return m;
}

JSModuleDef *js_init_parallax_background_module(JSContext *ctx) {
	return _js_init_parallax_background_module(ctx, "@godot/classes/parallax_background");
}

void register_parallax_background() {
	ParallaxBackground::__init_js_class_id();
	js_init_parallax_background_module(ctx);
}