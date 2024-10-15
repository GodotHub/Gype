
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/texture.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void texture2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Texture2D *texture2d = static_cast<Texture2D *>(JS_GetOpaque(val, Texture2D::__class_id));
	if (texture2d)
		memdelete(texture2d);
}

static JSClassDef texture2d_class_def = {
	"Texture2D",
	.finalizer = texture2d_class_finalizer
};

static JSValue texture2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Texture2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	Texture2D *texture2d_class = memnew(Texture2D);
	if (!texture2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, texture2d_class);	
	return obj;
}
static JSValue texture2d_class_get_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Texture2D::get_width, ctx, this_val, argc, argv);
};
static JSValue texture2d_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Texture2D::get_height, ctx, this_val, argc, argv);
};
static JSValue texture2d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Texture2D::get_size, ctx, this_val, argc, argv);
};
static JSValue texture2d_class_has_alpha(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Texture2D::has_alpha, ctx, this_val, argc, argv);
};
static JSValue texture2d_class_draw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&Texture2D::draw, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture2d_class_draw_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&Texture2D::draw_rect, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture2d_class_draw_rect_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&Texture2D::draw_rect_region, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture2d_class_get_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Texture2D::get_image, ctx, this_val, argc, argv);
};
static JSValue texture2d_class_create_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Texture2D::create_placeholder, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry texture2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_width", 0, &texture2d_class_get_width),
	JS_CFUNC_DEF("get_height", 0, &texture2d_class_get_height),
	JS_CFUNC_DEF("get_size", 0, &texture2d_class_get_size),
	JS_CFUNC_DEF("has_alpha", 0, &texture2d_class_has_alpha),
	JS_CFUNC_DEF("draw", 4, &texture2d_class_draw),
	JS_CFUNC_DEF("draw_rect", 5, &texture2d_class_draw_rect),
	JS_CFUNC_DEF("draw_rect_region", 6, &texture2d_class_draw_rect_region),
	JS_CFUNC_DEF("get_image", 0, &texture2d_class_get_image),
	JS_CFUNC_DEF("create_placeholder", 0, &texture2d_class_create_placeholder),
};

void define_texture2d_property(JSContext *ctx, JSValue obj) {
}

static int js_texture2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Texture2D::__class_id);
	classes["Texture2D"] = Texture2D::__class_id;
	class_id_list.insert(Texture2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Texture2D::__class_id, &texture2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Texture2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Texture::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Texture2D::__class_id, proto);

	define_texture2d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, texture2d_class_proto_funcs, _countof(texture2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, texture2d_class_constructor, "Texture2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Texture2D", ctor);

	return 0;
}

JSModuleDef *_js_init_texture2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/texture';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_texture2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Texture2D");
	return m;
}

JSModuleDef *js_init_texture2d_module(JSContext *ctx) {
	return _js_init_texture2d_module(ctx, "godot/classes/texture2d");
}

void register_texture2d() {
	Texture2D::__init_js_class_id();
	js_init_texture2d_module(ctx);
}