
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/texture_rect.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void texture_rect_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef texture_rect_class_def = {
	"TextureRect",
	.finalizer = texture_rect_class_finalizer
};

static JSValue texture_rect_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, TextureRect::__class_id);
	if (JS_IsException(obj))
		return obj;
	TextureRect *texture_rect_class = memnew(TextureRect);
	if (!texture_rect_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, texture_rect_class);
	return obj;
}
static JSValue texture_rect_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&TextureRect::set_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_rect_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureRect::get_texture, ctx, this_val, argc, argv);
};
static JSValue texture_rect_class_set_expand_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&TextureRect::set_expand_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_rect_class_get_expand_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureRect::get_expand_mode, ctx, this_val, argc, argv);
};
static JSValue texture_rect_class_set_flip_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&TextureRect::set_flip_h, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_rect_class_is_flipped_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureRect::is_flipped_h, ctx, this_val, argc, argv);
};
static JSValue texture_rect_class_set_flip_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&TextureRect::set_flip_v, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_rect_class_is_flipped_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureRect::is_flipped_v, ctx, this_val, argc, argv);
};
static JSValue texture_rect_class_set_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&TextureRect::set_stretch_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_rect_class_get_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureRect::get_stretch_mode, ctx, this_val, argc, argv);
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

void define_texture_rect_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "texture"),
			JS_NewCFunction(ctx, texture_rect_class_get_texture, "get_texture", 0),
			JS_NewCFunction(ctx, texture_rect_class_set_texture, "set_texture", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "expand_mode"),
			JS_NewCFunction(ctx, texture_rect_class_get_expand_mode, "get_expand_mode", 0),
			JS_NewCFunction(ctx, texture_rect_class_set_expand_mode, "set_expand_mode", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "stretch_mode"),
			JS_NewCFunction(ctx, texture_rect_class_get_stretch_mode, "get_stretch_mode", 0),
			JS_NewCFunction(ctx, texture_rect_class_set_stretch_mode, "set_stretch_mode", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "flip_h"),
			JS_NewCFunction(ctx, texture_rect_class_is_flipped_h, "is_flipped_h", 0),
			JS_NewCFunction(ctx, texture_rect_class_set_flip_h, "set_flip_h", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "flip_v"),
			JS_NewCFunction(ctx, texture_rect_class_is_flipped_v, "is_flipped_v", 0),
			JS_NewCFunction(ctx, texture_rect_class_set_flip_v, "set_flip_v", 1),
			JS_PROP_GETSET);
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue ExpandMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, ExpandMode_obj, "EXPAND_KEEP_SIZE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, ExpandMode_obj, "EXPAND_IGNORE_SIZE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, ExpandMode_obj, "EXPAND_FIT_WIDTH", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, ExpandMode_obj, "EXPAND_FIT_WIDTH_PROPORTIONAL", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, ExpandMode_obj, "EXPAND_FIT_HEIGHT", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, ExpandMode_obj, "EXPAND_FIT_HEIGHT_PROPORTIONAL", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, proto, "ExpandMode", ExpandMode_obj);
	JSValue StretchMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_SCALE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_TILE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_KEEP", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_KEEP_CENTERED", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_KEEP_ASPECT", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_KEEP_ASPECT_CENTERED", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_KEEP_ASPECT_COVERED", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, proto, "StretchMode", StretchMode_obj);
}

static int js_texture_rect_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TextureRect::__class_id);
	classes["TextureRect"] = TextureRect::__class_id;
	class_id_list.insert(TextureRect::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), TextureRect::__class_id, &texture_rect_class_def);

	JSValue proto = JS_NewObjectClass(ctx, TextureRect::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextureRect::__class_id, proto);

	define_texture_rect_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, texture_rect_class_proto_funcs, _countof(texture_rect_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, texture_rect_class_constructor, "TextureRect", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "TextureRect", ctor);

	return 0;
}

JSModuleDef *_js_init_texture_rect_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/control';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	TextureRect::__init_js_class_id();
	js_init_texture_rect_module(ctx);
}