
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void font_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef font_class_def = {
	"Font",
	.finalizer = font_class_finalizer
};

static JSValue font_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Font::__class_id);
	if (JS_IsException(obj))
		return obj;
	Font *font_class = memnew(Font);
	if (!font_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, font_class);	
	return obj;
}
static JSValue font_class_set_fallbacks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Font::set_fallbacks, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue font_class_get_fallbacks(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_fallbacks, ctx, this_val, argc, argv);
};
static JSValue font_class_find_variation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::find_variation, ctx, this_val, argc, argv);
};
static JSValue font_class_get_rids(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_rids, ctx, this_val, argc, argv);
};
static JSValue font_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_height, ctx, this_val, argc, argv);
};
static JSValue font_class_get_ascent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_ascent, ctx, this_val, argc, argv);
};
static JSValue font_class_get_descent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_descent, ctx, this_val, argc, argv);
};
static JSValue font_class_get_underline_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_underline_position, ctx, this_val, argc, argv);
};
static JSValue font_class_get_underline_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_underline_thickness, ctx, this_val, argc, argv);
};
static JSValue font_class_get_font_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_font_name, ctx, this_val, argc, argv);
};
static JSValue font_class_get_font_style_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_font_style_name, ctx, this_val, argc, argv);
};
static JSValue font_class_get_ot_name_strings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_ot_name_strings, ctx, this_val, argc, argv);
};
static JSValue font_class_get_font_style(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_font_style, ctx, this_val, argc, argv);
};
static JSValue font_class_get_font_weight(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_font_weight, ctx, this_val, argc, argv);
};
static JSValue font_class_get_font_stretch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_font_stretch, ctx, this_val, argc, argv);
};
static JSValue font_class_get_spacing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_spacing, ctx, this_val, argc, argv);
};
static JSValue font_class_get_opentype_features(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_opentype_features, ctx, this_val, argc, argv);
};
static JSValue font_class_set_cache_capacity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Font::set_cache_capacity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue font_class_get_string_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_string_size, ctx, this_val, argc, argv);
};
static JSValue font_class_get_multiline_string_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_multiline_string_size, ctx, this_val, argc, argv);
};
static JSValue font_class_draw_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_const_method_no_ret(&Font::draw_string, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue font_class_draw_multiline_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_const_method_no_ret(&Font::draw_multiline_string, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue font_class_draw_string_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_const_method_no_ret(&Font::draw_string_outline, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue font_class_draw_multiline_string_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_const_method_no_ret(&Font::draw_multiline_string_outline, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue font_class_get_char_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_char_size, ctx, this_val, argc, argv);
};
static JSValue font_class_draw_char(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::draw_char, ctx, this_val, argc, argv);
};
static JSValue font_class_draw_char_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::draw_char_outline, ctx, this_val, argc, argv);
};
static JSValue font_class_has_char(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::has_char, ctx, this_val, argc, argv);
};
static JSValue font_class_get_supported_chars(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_supported_chars, ctx, this_val, argc, argv);
};
static JSValue font_class_is_language_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::is_language_supported, ctx, this_val, argc, argv);
};
static JSValue font_class_is_script_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::is_script_supported, ctx, this_val, argc, argv);
};
static JSValue font_class_get_supported_feature_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_supported_feature_list, ctx, this_val, argc, argv);
};
static JSValue font_class_get_supported_variation_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_supported_variation_list, ctx, this_val, argc, argv);
};
static JSValue font_class_get_face_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Font::get_face_count, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry font_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_fallbacks", 1, &font_class_set_fallbacks),
	JS_CFUNC_DEF("get_fallbacks", 0, &font_class_get_fallbacks),
	JS_CFUNC_DEF("find_variation", 9, &font_class_find_variation),
	JS_CFUNC_DEF("get_rids", 0, &font_class_get_rids),
	JS_CFUNC_DEF("get_height", 1, &font_class_get_height),
	JS_CFUNC_DEF("get_ascent", 1, &font_class_get_ascent),
	JS_CFUNC_DEF("get_descent", 1, &font_class_get_descent),
	JS_CFUNC_DEF("get_underline_position", 1, &font_class_get_underline_position),
	JS_CFUNC_DEF("get_underline_thickness", 1, &font_class_get_underline_thickness),
	JS_CFUNC_DEF("get_font_name", 0, &font_class_get_font_name),
	JS_CFUNC_DEF("get_font_style_name", 0, &font_class_get_font_style_name),
	JS_CFUNC_DEF("get_ot_name_strings", 0, &font_class_get_ot_name_strings),
	JS_CFUNC_DEF("get_font_style", 0, &font_class_get_font_style),
	JS_CFUNC_DEF("get_font_weight", 0, &font_class_get_font_weight),
	JS_CFUNC_DEF("get_font_stretch", 0, &font_class_get_font_stretch),
	JS_CFUNC_DEF("get_spacing", 1, &font_class_get_spacing),
	JS_CFUNC_DEF("get_opentype_features", 0, &font_class_get_opentype_features),
	JS_CFUNC_DEF("set_cache_capacity", 2, &font_class_set_cache_capacity),
	JS_CFUNC_DEF("get_string_size", 7, &font_class_get_string_size),
	JS_CFUNC_DEF("get_multiline_string_size", 9, &font_class_get_multiline_string_size),
	JS_CFUNC_DEF("draw_string", 10, &font_class_draw_string),
	JS_CFUNC_DEF("draw_multiline_string", 12, &font_class_draw_multiline_string),
	JS_CFUNC_DEF("draw_string_outline", 11, &font_class_draw_string_outline),
	JS_CFUNC_DEF("draw_multiline_string_outline", 13, &font_class_draw_multiline_string_outline),
	JS_CFUNC_DEF("get_char_size", 2, &font_class_get_char_size),
	JS_CFUNC_DEF("draw_char", 5, &font_class_draw_char),
	JS_CFUNC_DEF("draw_char_outline", 6, &font_class_draw_char_outline),
	JS_CFUNC_DEF("has_char", 1, &font_class_has_char),
	JS_CFUNC_DEF("get_supported_chars", 0, &font_class_get_supported_chars),
	JS_CFUNC_DEF("is_language_supported", 1, &font_class_is_language_supported),
	JS_CFUNC_DEF("is_script_supported", 1, &font_class_is_script_supported),
	JS_CFUNC_DEF("get_supported_feature_list", 0, &font_class_get_supported_feature_list),
	JS_CFUNC_DEF("get_supported_variation_list", 0, &font_class_get_supported_variation_list),
	JS_CFUNC_DEF("get_face_count", 0, &font_class_get_face_count),
};

void define_font_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "fallbacks"),
        JS_NewCFunction(ctx, font_class_get_fallbacks, "get_fallbacks", 0),
        JS_NewCFunction(ctx, font_class_set_fallbacks, "set_fallbacks", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_font_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Font::__class_id);
	classes["Font"] = Font::__class_id;
	class_id_list.insert(Font::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Font::__class_id, &font_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Font::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Font::__class_id, proto);

	define_font_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, font_class_proto_funcs, _countof(font_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, font_class_constructor, "Font", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Font", ctor);

	return 0;
}

JSModuleDef *_js_init_font_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_font_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Font");
	return m;
}

JSModuleDef *js_init_font_module(JSContext *ctx) {
	return _js_init_font_module(ctx, "@godot/classes/font");
}

void register_font() {
	Font::__init_js_class_id();
	js_init_font_module(ctx);
}