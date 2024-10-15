
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/canvas_layer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void canvas_layer_class_finalizer(JSRuntime *rt, JSValue val) {
	CanvasLayer *canvas_layer = static_cast<CanvasLayer *>(JS_GetOpaque(val, CanvasLayer::__class_id));
	if (canvas_layer)
		memdelete(canvas_layer);
}

static JSClassDef canvas_layer_class_def = {
	"CanvasLayer",
	.finalizer = canvas_layer_class_finalizer
};

static JSValue canvas_layer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CanvasLayer::__class_id);
	if (JS_IsException(obj))
		return obj;
	CanvasLayer *canvas_layer_class = memnew(CanvasLayer);
	if (!canvas_layer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, canvas_layer_class);	
	return obj;
}
static JSValue canvas_layer_class_set_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasLayer::set_layer, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_layer_class_get_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasLayer::get_layer, ctx, this_val, argc, argv);
};
static JSValue canvas_layer_class_set_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasLayer::set_visible, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_layer_class_is_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasLayer::is_visible, ctx, this_val, argc, argv);
};
static JSValue canvas_layer_class_show(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasLayer::show, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_layer_class_hide(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasLayer::hide, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_layer_class_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasLayer::set_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_layer_class_get_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasLayer::get_transform, ctx, this_val, argc, argv);
};
static JSValue canvas_layer_class_get_final_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasLayer::get_final_transform, ctx, this_val, argc, argv);
};
static JSValue canvas_layer_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasLayer::set_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_layer_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasLayer::get_offset, ctx, this_val, argc, argv);
};
static JSValue canvas_layer_class_set_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasLayer::set_rotation, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_layer_class_get_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasLayer::get_rotation, ctx, this_val, argc, argv);
};
static JSValue canvas_layer_class_set_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasLayer::set_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_layer_class_get_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasLayer::get_scale, ctx, this_val, argc, argv);
};
static JSValue canvas_layer_class_set_follow_viewport(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasLayer::set_follow_viewport, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_layer_class_is_following_viewport(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasLayer::is_following_viewport, ctx, this_val, argc, argv);
};
static JSValue canvas_layer_class_set_follow_viewport_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasLayer::set_follow_viewport_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_layer_class_get_follow_viewport_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasLayer::get_follow_viewport_scale, ctx, this_val, argc, argv);
};
static JSValue canvas_layer_class_set_custom_viewport(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CanvasLayer::set_custom_viewport, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue canvas_layer_class_get_custom_viewport(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasLayer::get_custom_viewport, ctx, this_val, argc, argv);
};
static JSValue canvas_layer_class_get_canvas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CanvasLayer::get_canvas, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry canvas_layer_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_layer", 1, &canvas_layer_class_set_layer),
	JS_CFUNC_DEF("get_layer", 0, &canvas_layer_class_get_layer),
	JS_CFUNC_DEF("set_visible", 1, &canvas_layer_class_set_visible),
	JS_CFUNC_DEF("is_visible", 0, &canvas_layer_class_is_visible),
	JS_CFUNC_DEF("show", 0, &canvas_layer_class_show),
	JS_CFUNC_DEF("hide", 0, &canvas_layer_class_hide),
	JS_CFUNC_DEF("set_transform", 1, &canvas_layer_class_set_transform),
	JS_CFUNC_DEF("get_transform", 0, &canvas_layer_class_get_transform),
	JS_CFUNC_DEF("get_final_transform", 0, &canvas_layer_class_get_final_transform),
	JS_CFUNC_DEF("set_offset", 1, &canvas_layer_class_set_offset),
	JS_CFUNC_DEF("get_offset", 0, &canvas_layer_class_get_offset),
	JS_CFUNC_DEF("set_rotation", 1, &canvas_layer_class_set_rotation),
	JS_CFUNC_DEF("get_rotation", 0, &canvas_layer_class_get_rotation),
	JS_CFUNC_DEF("set_scale", 1, &canvas_layer_class_set_scale),
	JS_CFUNC_DEF("get_scale", 0, &canvas_layer_class_get_scale),
	JS_CFUNC_DEF("set_follow_viewport", 1, &canvas_layer_class_set_follow_viewport),
	JS_CFUNC_DEF("is_following_viewport", 0, &canvas_layer_class_is_following_viewport),
	JS_CFUNC_DEF("set_follow_viewport_scale", 1, &canvas_layer_class_set_follow_viewport_scale),
	JS_CFUNC_DEF("get_follow_viewport_scale", 0, &canvas_layer_class_get_follow_viewport_scale),
	JS_CFUNC_DEF("set_custom_viewport", 1, &canvas_layer_class_set_custom_viewport),
	JS_CFUNC_DEF("get_custom_viewport", 0, &canvas_layer_class_get_custom_viewport),
	JS_CFUNC_DEF("get_canvas", 0, &canvas_layer_class_get_canvas),
};

void define_canvas_layer_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "layer"),
        JS_NewCFunction(ctx, canvas_layer_class_get_layer, "get_layer", 0),
        JS_NewCFunction(ctx, canvas_layer_class_set_layer, "set_layer", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "visible"),
        JS_NewCFunction(ctx, canvas_layer_class_is_visible, "is_visible", 0),
        JS_NewCFunction(ctx, canvas_layer_class_set_visible, "set_visible", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "offset"),
        JS_NewCFunction(ctx, canvas_layer_class_get_offset, "get_offset", 0),
        JS_NewCFunction(ctx, canvas_layer_class_set_offset, "set_offset", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "rotation"),
        JS_NewCFunction(ctx, canvas_layer_class_get_rotation, "get_rotation", 0),
        JS_NewCFunction(ctx, canvas_layer_class_set_rotation, "set_rotation", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scale"),
        JS_NewCFunction(ctx, canvas_layer_class_get_scale, "get_scale", 0),
        JS_NewCFunction(ctx, canvas_layer_class_set_scale, "set_scale", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "transform"),
        JS_NewCFunction(ctx, canvas_layer_class_get_transform, "get_transform", 0),
        JS_NewCFunction(ctx, canvas_layer_class_set_transform, "set_transform", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "custom_viewport"),
        JS_NewCFunction(ctx, canvas_layer_class_get_custom_viewport, "get_custom_viewport", 0),
        JS_NewCFunction(ctx, canvas_layer_class_set_custom_viewport, "set_custom_viewport", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "follow_viewport_enabled"),
        JS_NewCFunction(ctx, canvas_layer_class_is_following_viewport, "is_following_viewport", 0),
        JS_NewCFunction(ctx, canvas_layer_class_set_follow_viewport, "set_follow_viewport", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "follow_viewport_scale"),
        JS_NewCFunction(ctx, canvas_layer_class_get_follow_viewport_scale, "get_follow_viewport_scale", 0),
        JS_NewCFunction(ctx, canvas_layer_class_set_follow_viewport_scale, "set_follow_viewport_scale", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_canvas_layer_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CanvasLayer::__class_id);
	classes["CanvasLayer"] = CanvasLayer::__class_id;
	class_id_list.insert(CanvasLayer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CanvasLayer::__class_id, &canvas_layer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CanvasLayer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CanvasLayer::__class_id, proto);

	define_canvas_layer_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, canvas_layer_class_proto_funcs, _countof(canvas_layer_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, canvas_layer_class_constructor, "CanvasLayer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CanvasLayer", ctor);

	return 0;
}

JSModuleDef *_js_init_canvas_layer_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_canvas_layer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CanvasLayer");
	return m;
}

JSModuleDef *js_init_canvas_layer_module(JSContext *ctx) {
	return _js_init_canvas_layer_module(ctx, "godot/classes/canvas_layer");
}

void register_canvas_layer() {
	CanvasLayer::__init_js_class_id();
	js_init_canvas_layer_module(ctx);
}