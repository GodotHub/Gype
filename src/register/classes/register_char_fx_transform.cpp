
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/char_fx_transform.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void char_fx_transform_class_finalizer(JSRuntime *rt, JSValue val) {
	CharFXTransform *char_fx_transform = static_cast<CharFXTransform *>(JS_GetOpaque(val, CharFXTransform::__class_id));
	if (char_fx_transform)
		CharFXTransform::free(nullptr, char_fx_transform);
}

static JSClassDef char_fx_transform_class_def = {
	"CharFXTransform",
	.finalizer = char_fx_transform_class_finalizer
};

static JSValue char_fx_transform_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CharFXTransform *char_fx_transform_class;
	JSValue obj = JS_NewObjectClass(ctx, CharFXTransform::__class_id);
	if (JS_IsException(obj))
		return obj;
	char_fx_transform_class = memnew(CharFXTransform);
	if (!char_fx_transform_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, char_fx_transform_class);
	return obj;
}
static JSValue char_fx_transform_class_get_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CharFXTransform::get_transform, CharFXTransform::__class_id, ctx, this_val, argv);
};
static JSValue char_fx_transform_class_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CharFXTransform::set_transform, CharFXTransform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CharFXTransform::get_range, CharFXTransform::__class_id, ctx, this_val, argv);
};
static JSValue char_fx_transform_class_set_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CharFXTransform::set_range, CharFXTransform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_elapsed_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CharFXTransform::get_elapsed_time, CharFXTransform::__class_id, ctx, this_val, argv);
};
static JSValue char_fx_transform_class_set_elapsed_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CharFXTransform::set_elapsed_time, CharFXTransform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_is_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CharFXTransform::is_visible, CharFXTransform::__class_id, ctx, this_val, argv);
};
static JSValue char_fx_transform_class_set_visibility(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CharFXTransform::set_visibility, CharFXTransform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_is_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CharFXTransform::is_outline, CharFXTransform::__class_id, ctx, this_val, argv);
};
static JSValue char_fx_transform_class_set_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CharFXTransform::set_outline, CharFXTransform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CharFXTransform::get_offset, CharFXTransform::__class_id, ctx, this_val, argv);
};
static JSValue char_fx_transform_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CharFXTransform::set_offset, CharFXTransform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CharFXTransform::get_color, CharFXTransform::__class_id, ctx, this_val, argv);
};
static JSValue char_fx_transform_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CharFXTransform::set_color, CharFXTransform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_environment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CharFXTransform::get_environment, CharFXTransform::__class_id, ctx, this_val, argv);
};
static JSValue char_fx_transform_class_set_environment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CharFXTransform::set_environment, CharFXTransform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_glyph_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharFXTransform::get_glyph_index, CharFXTransform::__class_id, ctx, this_val, argv);
};
static JSValue char_fx_transform_class_set_glyph_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CharFXTransform::set_glyph_index, CharFXTransform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_relative_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharFXTransform::get_relative_index, CharFXTransform::__class_id, ctx, this_val, argv);
};
static JSValue char_fx_transform_class_set_relative_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CharFXTransform::set_relative_index, CharFXTransform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_glyph_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharFXTransform::get_glyph_count, CharFXTransform::__class_id, ctx, this_val, argv);
};
static JSValue char_fx_transform_class_set_glyph_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CharFXTransform::set_glyph_count, CharFXTransform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_glyph_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharFXTransform::get_glyph_flags, CharFXTransform::__class_id, ctx, this_val, argv);
};
static JSValue char_fx_transform_class_set_glyph_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CharFXTransform::set_glyph_flags, CharFXTransform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharFXTransform::get_font, CharFXTransform::__class_id, ctx, this_val, argv);
};
static JSValue char_fx_transform_class_set_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CharFXTransform::set_font, CharFXTransform::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry char_fx_transform_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_transform", 0, &char_fx_transform_class_get_transform),
	JS_CFUNC_DEF("set_transform", 1, &char_fx_transform_class_set_transform),
	JS_CFUNC_DEF("get_range", 0, &char_fx_transform_class_get_range),
	JS_CFUNC_DEF("set_range", 1, &char_fx_transform_class_set_range),
	JS_CFUNC_DEF("get_elapsed_time", 0, &char_fx_transform_class_get_elapsed_time),
	JS_CFUNC_DEF("set_elapsed_time", 1, &char_fx_transform_class_set_elapsed_time),
	JS_CFUNC_DEF("is_visible", 0, &char_fx_transform_class_is_visible),
	JS_CFUNC_DEF("set_visibility", 1, &char_fx_transform_class_set_visibility),
	JS_CFUNC_DEF("is_outline", 0, &char_fx_transform_class_is_outline),
	JS_CFUNC_DEF("set_outline", 1, &char_fx_transform_class_set_outline),
	JS_CFUNC_DEF("get_offset", 0, &char_fx_transform_class_get_offset),
	JS_CFUNC_DEF("set_offset", 1, &char_fx_transform_class_set_offset),
	JS_CFUNC_DEF("get_color", 0, &char_fx_transform_class_get_color),
	JS_CFUNC_DEF("set_color", 1, &char_fx_transform_class_set_color),
	JS_CFUNC_DEF("get_environment", 0, &char_fx_transform_class_get_environment),
	JS_CFUNC_DEF("set_environment", 1, &char_fx_transform_class_set_environment),
	JS_CFUNC_DEF("get_glyph_index", 0, &char_fx_transform_class_get_glyph_index),
	JS_CFUNC_DEF("set_glyph_index", 1, &char_fx_transform_class_set_glyph_index),
	JS_CFUNC_DEF("get_relative_index", 0, &char_fx_transform_class_get_relative_index),
	JS_CFUNC_DEF("set_relative_index", 1, &char_fx_transform_class_set_relative_index),
	JS_CFUNC_DEF("get_glyph_count", 0, &char_fx_transform_class_get_glyph_count),
	JS_CFUNC_DEF("set_glyph_count", 1, &char_fx_transform_class_set_glyph_count),
	JS_CFUNC_DEF("get_glyph_flags", 0, &char_fx_transform_class_get_glyph_flags),
	JS_CFUNC_DEF("set_glyph_flags", 1, &char_fx_transform_class_set_glyph_flags),
	JS_CFUNC_DEF("get_font", 0, &char_fx_transform_class_get_font),
	JS_CFUNC_DEF("set_font", 1, &char_fx_transform_class_set_font),
};

static int js_char_fx_transform_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CharFXTransform::__class_id);
	classes["CharFXTransform"] = CharFXTransform::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CharFXTransform::__class_id, &char_fx_transform_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CharFXTransform::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, char_fx_transform_class_proto_funcs, _countof(char_fx_transform_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, char_fx_transform_class_constructor, "CharFXTransform", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CharFXTransform", ctor);

	return 0;
}

JSModuleDef *_js_init_char_fx_transform_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_char_fx_transform_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CharFXTransform");
	return m;
}

JSModuleDef *js_init_char_fx_transform_module(JSContext *ctx) {
	return _js_init_char_fx_transform_module(ctx, "godot/classes/char_fx_transform");
}

void register_char_fx_transform() {
	js_init_char_fx_transform_module(ctx);
}