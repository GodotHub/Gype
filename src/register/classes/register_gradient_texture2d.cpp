
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/gradient_texture2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void gradient_texture2d_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef gradient_texture2d_class_def = {
	"GradientTexture2D",
	.finalizer = gradient_texture2d_class_finalizer
};

static JSValue gradient_texture2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GradientTexture2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	GradientTexture2D *gradient_texture2d_class = memnew(GradientTexture2D);
	if (!gradient_texture2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gradient_texture2d_class);
	return obj;
}
static JSValue gradient_texture2d_class_set_gradient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&GradientTexture2D::set_gradient, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture2d_class_get_gradient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GradientTexture2D::get_gradient, ctx, this_val, argc, argv);
};
static JSValue gradient_texture2d_class_set_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&GradientTexture2D::set_width, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture2d_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&GradientTexture2D::set_height, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture2d_class_set_use_hdr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&GradientTexture2D::set_use_hdr, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture2d_class_is_using_hdr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GradientTexture2D::is_using_hdr, ctx, this_val, argc, argv);
};
static JSValue gradient_texture2d_class_set_fill(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&GradientTexture2D::set_fill, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture2d_class_get_fill(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GradientTexture2D::get_fill, ctx, this_val, argc, argv);
};
static JSValue gradient_texture2d_class_set_fill_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&GradientTexture2D::set_fill_from, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture2d_class_get_fill_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GradientTexture2D::get_fill_from, ctx, this_val, argc, argv);
};
static JSValue gradient_texture2d_class_set_fill_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&GradientTexture2D::set_fill_to, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture2d_class_get_fill_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GradientTexture2D::get_fill_to, ctx, this_val, argc, argv);
};
static JSValue gradient_texture2d_class_set_repeat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&GradientTexture2D::set_repeat, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture2d_class_get_repeat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GradientTexture2D::get_repeat, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry gradient_texture2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_gradient", 1, &gradient_texture2d_class_set_gradient),
	JS_CFUNC_DEF("get_gradient", 0, &gradient_texture2d_class_get_gradient),
	JS_CFUNC_DEF("set_width", 1, &gradient_texture2d_class_set_width),
	JS_CFUNC_DEF("set_height", 1, &gradient_texture2d_class_set_height),
	JS_CFUNC_DEF("set_use_hdr", 1, &gradient_texture2d_class_set_use_hdr),
	JS_CFUNC_DEF("is_using_hdr", 0, &gradient_texture2d_class_is_using_hdr),
	JS_CFUNC_DEF("set_fill", 1, &gradient_texture2d_class_set_fill),
	JS_CFUNC_DEF("get_fill", 0, &gradient_texture2d_class_get_fill),
	JS_CFUNC_DEF("set_fill_from", 1, &gradient_texture2d_class_set_fill_from),
	JS_CFUNC_DEF("get_fill_from", 0, &gradient_texture2d_class_get_fill_from),
	JS_CFUNC_DEF("set_fill_to", 1, &gradient_texture2d_class_set_fill_to),
	JS_CFUNC_DEF("get_fill_to", 0, &gradient_texture2d_class_get_fill_to),
	JS_CFUNC_DEF("set_repeat", 1, &gradient_texture2d_class_set_repeat),
	JS_CFUNC_DEF("get_repeat", 0, &gradient_texture2d_class_get_repeat),
};

void define_gradient_texture2d_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "gradient"),
			JS_NewCFunction(ctx, gradient_texture2d_class_get_gradient, "get_gradient", 0),
			JS_NewCFunction(ctx, gradient_texture2d_class_set_gradient, "set_gradient", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "width"),
			JS_UNDEFINED,
			JS_NewCFunction(ctx, gradient_texture2d_class_set_width, "set_width", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "height"),
			JS_UNDEFINED,
			JS_NewCFunction(ctx, gradient_texture2d_class_set_height, "set_height", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "use_hdr"),
			JS_NewCFunction(ctx, gradient_texture2d_class_is_using_hdr, "is_using_hdr", 0),
			JS_NewCFunction(ctx, gradient_texture2d_class_set_use_hdr, "set_use_hdr", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "fill"),
			JS_NewCFunction(ctx, gradient_texture2d_class_get_fill, "get_fill", 0),
			JS_NewCFunction(ctx, gradient_texture2d_class_set_fill, "set_fill", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "fill_from"),
			JS_NewCFunction(ctx, gradient_texture2d_class_get_fill_from, "get_fill_from", 0),
			JS_NewCFunction(ctx, gradient_texture2d_class_set_fill_from, "set_fill_from", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "fill_to"),
			JS_NewCFunction(ctx, gradient_texture2d_class_get_fill_to, "get_fill_to", 0),
			JS_NewCFunction(ctx, gradient_texture2d_class_set_fill_to, "set_fill_to", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "repeat"),
			JS_NewCFunction(ctx, gradient_texture2d_class_get_repeat, "get_repeat", 0),
			JS_NewCFunction(ctx, gradient_texture2d_class_set_repeat, "set_repeat", 1),
			JS_PROP_GETSET);
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue Fill_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Fill_obj, "FILL_LINEAR", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Fill_obj, "FILL_RADIAL", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Fill_obj, "FILL_SQUARE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "Fill", Fill_obj);
	JSValue Repeat_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Repeat_obj, "REPEAT_NONE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Repeat_obj, "REPEAT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Repeat_obj, "REPEAT_MIRROR", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "Repeat", Repeat_obj);
}

static int js_gradient_texture2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GradientTexture2D::__class_id);
	classes["GradientTexture2D"] = GradientTexture2D::__class_id;
	class_id_list.insert(GradientTexture2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GradientTexture2D::__class_id, &gradient_texture2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GradientTexture2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GradientTexture2D::__class_id, proto);

	define_gradient_texture2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gradient_texture2d_class_proto_funcs, _countof(gradient_texture2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gradient_texture2d_class_constructor, "GradientTexture2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GradientTexture2D", ctor);

	return 0;
}

JSModuleDef *_js_init_gradient_texture2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/texture2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gradient_texture2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GradientTexture2D");
	return m;
}

JSModuleDef *js_init_gradient_texture2d_module(JSContext *ctx) {
	return _js_init_gradient_texture2d_module(ctx, "godot/classes/gradient_texture2d");
}

void register_gradient_texture2d() {
	GradientTexture2D::__init_js_class_id();
	js_init_gradient_texture2d_module(ctx);
}