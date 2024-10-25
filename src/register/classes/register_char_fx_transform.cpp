
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/char_fx_transform.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void char_fx_transform_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef char_fx_transform_class_def = {
	"CharFXTransform",
	.finalizer = char_fx_transform_class_finalizer
};

static JSValue char_fx_transform_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CharFXTransform::__class_id);
	if (JS_IsException(obj))
		return obj;
	CharFXTransform *char_fx_transform_class = memnew(CharFXTransform);
	if (!char_fx_transform_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, char_fx_transform_class);	
	return obj;
}
static JSValue char_fx_transform_class_get_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CharFXTransform::get_transform, ctx, this_val, argc, argv);
};
static JSValue char_fx_transform_class_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CharFXTransform::set_transform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CharFXTransform::get_range, ctx, this_val, argc, argv);
};
static JSValue char_fx_transform_class_set_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CharFXTransform::set_range, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_elapsed_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CharFXTransform::get_elapsed_time, ctx, this_val, argc, argv);
};
static JSValue char_fx_transform_class_set_elapsed_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CharFXTransform::set_elapsed_time, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_is_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CharFXTransform::is_visible, ctx, this_val, argc, argv);
};
static JSValue char_fx_transform_class_set_visibility(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CharFXTransform::set_visibility, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_is_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CharFXTransform::is_outline, ctx, this_val, argc, argv);
};
static JSValue char_fx_transform_class_set_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CharFXTransform::set_outline, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CharFXTransform::get_offset, ctx, this_val, argc, argv);
};
static JSValue char_fx_transform_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CharFXTransform::set_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CharFXTransform::get_color, ctx, this_val, argc, argv);
};
static JSValue char_fx_transform_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CharFXTransform::set_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_environment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CharFXTransform::get_environment, ctx, this_val, argc, argv);
};
static JSValue char_fx_transform_class_set_environment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CharFXTransform::set_environment, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_glyph_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharFXTransform::get_glyph_index, ctx, this_val, argc, argv);
};
static JSValue char_fx_transform_class_set_glyph_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CharFXTransform::set_glyph_index, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_relative_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharFXTransform::get_relative_index, ctx, this_val, argc, argv);
};
static JSValue char_fx_transform_class_set_relative_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CharFXTransform::set_relative_index, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_glyph_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharFXTransform::get_glyph_count, ctx, this_val, argc, argv);
};
static JSValue char_fx_transform_class_set_glyph_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CharFXTransform::set_glyph_count, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_glyph_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharFXTransform::get_glyph_flags, ctx, this_val, argc, argv);
};
static JSValue char_fx_transform_class_set_glyph_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CharFXTransform::set_glyph_flags, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue char_fx_transform_class_get_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharFXTransform::get_font, ctx, this_val, argc, argv);
};
static JSValue char_fx_transform_class_set_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CharFXTransform::set_font, ctx, this_val, argc, argv);
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

void define_char_fx_transform_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "transform"),
        JS_NewCFunction(ctx, char_fx_transform_class_get_transform, "get_transform", 0),
        JS_NewCFunction(ctx, char_fx_transform_class_set_transform, "set_transform", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "range"),
        JS_NewCFunction(ctx, char_fx_transform_class_get_range, "get_range", 0),
        JS_NewCFunction(ctx, char_fx_transform_class_set_range, "set_range", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "elapsed_time"),
        JS_NewCFunction(ctx, char_fx_transform_class_get_elapsed_time, "get_elapsed_time", 0),
        JS_NewCFunction(ctx, char_fx_transform_class_set_elapsed_time, "set_elapsed_time", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "visible"),
        JS_NewCFunction(ctx, char_fx_transform_class_is_visible, "is_visible", 0),
        JS_NewCFunction(ctx, char_fx_transform_class_set_visibility, "set_visibility", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "outline"),
        JS_NewCFunction(ctx, char_fx_transform_class_is_outline, "is_outline", 0),
        JS_NewCFunction(ctx, char_fx_transform_class_set_outline, "set_outline", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "offset"),
        JS_NewCFunction(ctx, char_fx_transform_class_get_offset, "get_offset", 0),
        JS_NewCFunction(ctx, char_fx_transform_class_set_offset, "set_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "color"),
        JS_NewCFunction(ctx, char_fx_transform_class_get_color, "get_color", 0),
        JS_NewCFunction(ctx, char_fx_transform_class_set_color, "set_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "env"),
        JS_NewCFunction(ctx, char_fx_transform_class_get_environment, "get_environment", 0),
        JS_NewCFunction(ctx, char_fx_transform_class_set_environment, "set_environment", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "glyph_index"),
        JS_NewCFunction(ctx, char_fx_transform_class_get_glyph_index, "get_glyph_index", 0),
        JS_NewCFunction(ctx, char_fx_transform_class_set_glyph_index, "set_glyph_index", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "glyph_count"),
        JS_NewCFunction(ctx, char_fx_transform_class_get_glyph_count, "get_glyph_count", 0),
        JS_NewCFunction(ctx, char_fx_transform_class_set_glyph_count, "set_glyph_count", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "glyph_flags"),
        JS_NewCFunction(ctx, char_fx_transform_class_get_glyph_flags, "get_glyph_flags", 0),
        JS_NewCFunction(ctx, char_fx_transform_class_set_glyph_flags, "set_glyph_flags", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "relative_index"),
        JS_NewCFunction(ctx, char_fx_transform_class_get_relative_index, "get_relative_index", 0),
        JS_NewCFunction(ctx, char_fx_transform_class_set_relative_index, "set_relative_index", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "font"),
        JS_NewCFunction(ctx, char_fx_transform_class_get_font, "get_font", 0),
        JS_NewCFunction(ctx, char_fx_transform_class_set_font, "set_font", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_char_fx_transform_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CharFXTransform::__class_id);
	classes["CharFXTransform"] = CharFXTransform::__class_id;
	class_id_list.insert(CharFXTransform::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CharFXTransform::__class_id, &char_fx_transform_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CharFXTransform::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CharFXTransform::__class_id, proto);

	define_char_fx_transform_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, char_fx_transform_class_proto_funcs, _countof(char_fx_transform_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, char_fx_transform_class_constructor, "CharFXTransform", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CharFXTransform", ctor);

	return 0;
}

JSModuleDef *_js_init_char_fx_transform_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	CharFXTransform::__init_js_class_id();
	js_init_char_fx_transform_module(ctx);
}