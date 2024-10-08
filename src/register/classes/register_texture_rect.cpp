
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/texture_rect.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void texture_rect_class_finalizer(JSRuntime *rt, JSValue val) {
	TextureRect *texture_rect = static_cast<TextureRect *>(JS_GetOpaque(val, TextureRect::__class_id));
	if (texture_rect)
		TextureRect::free(nullptr, texture_rect);
}

static JSClassDef texture_rect_class_def = {
	"TextureRect",
	.finalizer = texture_rect_class_finalizer
};

static JSValue texture_rect_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TextureRect *texture_rect_class;
	JSValue obj = JS_NewObjectClass(ctx, TextureRect::__class_id);
	if (JS_IsException(obj))
		return obj;
	texture_rect_class = memnew(TextureRect);
	if (!texture_rect_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, texture_rect_class);
	return obj;
}
static JSValue texture_rect_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TextureRect::set_texture, TextureRect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_rect_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureRect::get_texture, TextureRect::__class_id, ctx, this_val, argv);
};
static JSValue texture_rect_class_set_expand_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TextureRect::set_expand_mode, TextureRect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_rect_class_get_expand_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureRect::get_expand_mode, TextureRect::__class_id, ctx, this_val, argv);
};
static JSValue texture_rect_class_set_flip_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TextureRect::set_flip_h, TextureRect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_rect_class_is_flipped_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureRect::is_flipped_h, TextureRect::__class_id, ctx, this_val, argv);
};
static JSValue texture_rect_class_set_flip_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TextureRect::set_flip_v, TextureRect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_rect_class_is_flipped_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureRect::is_flipped_v, TextureRect::__class_id, ctx, this_val, argv);
};
static JSValue texture_rect_class_set_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&TextureRect::set_stretch_mode, TextureRect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_rect_class_get_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureRect::get_stretch_mode, TextureRect::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry texture_rect_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture", 1, &texture_rect_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &texture_rect_class_get_texture),
	JS_CFUNC_DEF("set_expand_mode", 1, &texture_rect_class_set_expand_mode),
	JS_CFUNC_DEF("get_expand_mode", 0, &texture_rect_class_get_expand_mode),
	JS_CFUNC_DEF("set_flip_h", 1, &texture_rect_class_set_flip_h),
	JS_CFUNC_DEF("is_flipped_h", 0, &texture_rect_class_is_flipped_h),
	JS_CFUNC_DEF("set_flip_v", 1, &texture_rect_class_set_flip_v),
	JS_CFUNC_DEF("is_flipped_v", 0, &texture_rect_class_is_flipped_v),
	JS_CFUNC_DEF("set_stretch_mode", 1, &texture_rect_class_set_stretch_mode),
	JS_CFUNC_DEF("get_stretch_mode", 0, &texture_rect_class_get_stretch_mode),
};

static int js_texture_rect_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TextureRect::__class_id);
	classes["TextureRect"] = TextureRect::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TextureRect::__class_id, &texture_rect_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextureRect::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, texture_rect_class_proto_funcs, _countof(texture_rect_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, texture_rect_class_constructor, "TextureRect", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TextureRect", ctor);

	return 0;
}

JSModuleDef *_js_init_texture_rect_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_texture_rect_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextureRect");
	return m;
}

JSModuleDef *js_init_texture_rect_module(JSContext *ctx) {
	return _js_init_texture_rect_module(ctx, "godot/classes/texture_rect");
}

void register_texture_rect() {
	js_init_texture_rect_module(ctx);
}