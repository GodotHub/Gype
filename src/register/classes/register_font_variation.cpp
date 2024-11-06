
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/font_variation.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void font_variation_class_finalizer(JSRuntime *rt, JSValue val) {
	FontVariation *font_variation = static_cast<FontVariation *>(JS_GetOpaque(val, FontVariation::__class_id));
	if (font_variation)
		memdelete(font_variation);
}

static JSClassDef font_variation_class_def = {
	"FontVariation",
	.finalizer = font_variation_class_finalizer
};

static JSValue font_variation_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, FontVariation::__class_id);
	if (JS_IsException(obj))
		return obj;

	FontVariation *font_variation_class;
	if (argc == 1) 
		font_variation_class = static_cast<FontVariation *>(Variant(*argv).operator Object *());
	else 
		font_variation_class = memnew(FontVariation);
	if (!font_variation_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, font_variation_class);
	return obj;
}
static JSValue font_variation_class_set_base_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&FontVariation::set_base_font, ctx, this_val, argc, argv);
};
static JSValue font_variation_class_get_base_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FontVariation::get_base_font, ctx, this_val, argc, argv);
};
static JSValue font_variation_class_set_variation_opentype(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&FontVariation::set_variation_opentype, ctx, this_val, argc, argv);
};
static JSValue font_variation_class_get_variation_opentype(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FontVariation::get_variation_opentype, ctx, this_val, argc, argv);
};
static JSValue font_variation_class_set_variation_embolden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&FontVariation::set_variation_embolden, ctx, this_val, argc, argv);
};
static JSValue font_variation_class_get_variation_embolden(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FontVariation::get_variation_embolden, ctx, this_val, argc, argv);
};
static JSValue font_variation_class_set_variation_face_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&FontVariation::set_variation_face_index, ctx, this_val, argc, argv);
};
static JSValue font_variation_class_get_variation_face_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FontVariation::get_variation_face_index, ctx, this_val, argc, argv);
};
static JSValue font_variation_class_set_variation_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&FontVariation::set_variation_transform, ctx, this_val, argc, argv);
};
static JSValue font_variation_class_get_variation_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FontVariation::get_variation_transform, ctx, this_val, argc, argv);
};
static JSValue font_variation_class_set_opentype_features(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&FontVariation::set_opentype_features, ctx, this_val, argc, argv);
};
static JSValue font_variation_class_set_spacing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&FontVariation::set_spacing, ctx, this_val, argc, argv);
};
static JSValue font_variation_class_set_baseline_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&FontVariation::set_baseline_offset, ctx, this_val, argc, argv);
};
static JSValue font_variation_class_get_baseline_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&FontVariation::get_baseline_offset, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry font_variation_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_base_font", 1, &font_variation_class_set_base_font),
	JS_CFUNC_DEF("get_base_font", 0, &font_variation_class_get_base_font),
	JS_CFUNC_DEF("set_variation_opentype", 1, &font_variation_class_set_variation_opentype),
	JS_CFUNC_DEF("get_variation_opentype", 0, &font_variation_class_get_variation_opentype),
	JS_CFUNC_DEF("set_variation_embolden", 1, &font_variation_class_set_variation_embolden),
	JS_CFUNC_DEF("get_variation_embolden", 0, &font_variation_class_get_variation_embolden),
	JS_CFUNC_DEF("set_variation_face_index", 1, &font_variation_class_set_variation_face_index),
	JS_CFUNC_DEF("get_variation_face_index", 0, &font_variation_class_get_variation_face_index),
	JS_CFUNC_DEF("set_variation_transform", 1, &font_variation_class_set_variation_transform),
	JS_CFUNC_DEF("get_variation_transform", 0, &font_variation_class_get_variation_transform),
	JS_CFUNC_DEF("set_opentype_features", 1, &font_variation_class_set_opentype_features),
	JS_CFUNC_DEF("set_spacing", 2, &font_variation_class_set_spacing),
	JS_CFUNC_DEF("set_baseline_offset", 1, &font_variation_class_set_baseline_offset),
	JS_CFUNC_DEF("get_baseline_offset", 0, &font_variation_class_get_baseline_offset),
};

static void define_font_variation_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "base_font"),
        JS_NewCFunction(ctx, font_variation_class_get_base_font, "get_base_font", 0),
        JS_NewCFunction(ctx, font_variation_class_set_base_font, "set_base_font", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "variation_opentype"),
        JS_NewCFunction(ctx, font_variation_class_get_variation_opentype, "get_variation_opentype", 0),
        JS_NewCFunction(ctx, font_variation_class_set_variation_opentype, "set_variation_opentype", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "variation_face_index"),
        JS_NewCFunction(ctx, font_variation_class_get_variation_face_index, "get_variation_face_index", 0),
        JS_NewCFunction(ctx, font_variation_class_set_variation_face_index, "set_variation_face_index", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "variation_embolden"),
        JS_NewCFunction(ctx, font_variation_class_get_variation_embolden, "get_variation_embolden", 0),
        JS_NewCFunction(ctx, font_variation_class_set_variation_embolden, "set_variation_embolden", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "variation_transform"),
        JS_NewCFunction(ctx, font_variation_class_get_variation_transform, "get_variation_transform", 0),
        JS_NewCFunction(ctx, font_variation_class_set_variation_transform, "set_variation_transform", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "opentype_features"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, font_variation_class_set_opentype_features, "set_opentype_features", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "spacing_glyph"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, font_variation_class_set_spacing, "set_spacing", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "spacing_space"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, font_variation_class_set_spacing, "set_spacing", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "spacing_top"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, font_variation_class_set_spacing, "set_spacing", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "spacing_bottom"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, font_variation_class_set_spacing, "set_spacing", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "baseline_offset"),
        JS_NewCFunction(ctx, font_variation_class_get_baseline_offset, "get_baseline_offset", 0),
        JS_NewCFunction(ctx, font_variation_class_set_baseline_offset, "set_baseline_offset", 1),
        JS_PROP_GETSET
    );
	
}

static void define_font_variation_enum(JSContext *ctx, JSValue proto) {
}

static int js_font_variation_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["FontVariation"] = FontVariation::__class_id;
	class_id_list.insert(FontVariation::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), FontVariation::__class_id, &font_variation_class_def);

	JSValue proto = JS_NewObjectClass(ctx, FontVariation::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Font::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FontVariation::__class_id, proto);

	define_font_variation_property(ctx, proto);
	define_font_variation_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, font_variation_class_proto_funcs, _countof(font_variation_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, font_variation_class_constructor, "FontVariation", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "FontVariation", ctor);
	constructors[FontVariation::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_font_variation_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/font';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_font_variation_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FontVariation");
	return m;
}

JSModuleDef *js_init_font_variation_module(JSContext *ctx) {
	return _js_init_font_variation_module(ctx, "@godot/classes/font_variation");
}

void register_font_variation() {
	FontVariation::__init_js_class_id();
	js_init_font_variation_module(ctx);
}