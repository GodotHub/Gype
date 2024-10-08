
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/rd_texture_format.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void rd_texture_format_class_finalizer(JSRuntime *rt, JSValue val) {
	RDTextureFormat *rd_texture_format = static_cast<RDTextureFormat *>(JS_GetOpaque(val, RDTextureFormat::__class_id));
	if (rd_texture_format)
		RDTextureFormat::free(nullptr, rd_texture_format);
}

static JSClassDef rd_texture_format_class_def = {
	"RDTextureFormat",
	.finalizer = rd_texture_format_class_finalizer
};

static JSValue rd_texture_format_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RDTextureFormat *rd_texture_format_class;
	JSValue obj = JS_NewObjectClass(ctx, RDTextureFormat::__class_id);
	if (JS_IsException(obj))
		return obj;
	rd_texture_format_class = memnew(RDTextureFormat);
	if (!rd_texture_format_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rd_texture_format_class);
	return obj;
}
static JSValue rd_texture_format_class_set_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDTextureFormat::set_format, RDTextureFormat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_texture_format_class_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDTextureFormat::get_format, RDTextureFormat::__class_id, ctx, this_val, argv);
};
static JSValue rd_texture_format_class_set_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDTextureFormat::set_width, RDTextureFormat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_texture_format_class_get_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDTextureFormat::get_width, RDTextureFormat::__class_id, ctx, this_val, argv);
};
static JSValue rd_texture_format_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDTextureFormat::set_height, RDTextureFormat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_texture_format_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDTextureFormat::get_height, RDTextureFormat::__class_id, ctx, this_val, argv);
};
static JSValue rd_texture_format_class_set_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDTextureFormat::set_depth, RDTextureFormat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_texture_format_class_get_depth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDTextureFormat::get_depth, RDTextureFormat::__class_id, ctx, this_val, argv);
};
static JSValue rd_texture_format_class_set_array_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDTextureFormat::set_array_layers, RDTextureFormat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_texture_format_class_get_array_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDTextureFormat::get_array_layers, RDTextureFormat::__class_id, ctx, this_val, argv);
};
static JSValue rd_texture_format_class_set_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDTextureFormat::set_mipmaps, RDTextureFormat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_texture_format_class_get_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDTextureFormat::get_mipmaps, RDTextureFormat::__class_id, ctx, this_val, argv);
};
static JSValue rd_texture_format_class_set_texture_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDTextureFormat::set_texture_type, RDTextureFormat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_texture_format_class_get_texture_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDTextureFormat::get_texture_type, RDTextureFormat::__class_id, ctx, this_val, argv);
};
static JSValue rd_texture_format_class_set_samples(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDTextureFormat::set_samples, RDTextureFormat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_texture_format_class_get_samples(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDTextureFormat::get_samples, RDTextureFormat::__class_id, ctx, this_val, argv);
};
static JSValue rd_texture_format_class_set_usage_bits(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDTextureFormat::set_usage_bits, RDTextureFormat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_texture_format_class_get_usage_bits(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RDTextureFormat::get_usage_bits, RDTextureFormat::__class_id, ctx, this_val, argv);
};
static JSValue rd_texture_format_class_add_shareable_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDTextureFormat::add_shareable_format, RDTextureFormat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rd_texture_format_class_remove_shareable_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RDTextureFormat::remove_shareable_format, RDTextureFormat::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry rd_texture_format_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_format", 1, &rd_texture_format_class_set_format),
	JS_CFUNC_DEF("get_format", 0, &rd_texture_format_class_get_format),
	JS_CFUNC_DEF("set_width", 1, &rd_texture_format_class_set_width),
	JS_CFUNC_DEF("get_width", 0, &rd_texture_format_class_get_width),
	JS_CFUNC_DEF("set_height", 1, &rd_texture_format_class_set_height),
	JS_CFUNC_DEF("get_height", 0, &rd_texture_format_class_get_height),
	JS_CFUNC_DEF("set_depth", 1, &rd_texture_format_class_set_depth),
	JS_CFUNC_DEF("get_depth", 0, &rd_texture_format_class_get_depth),
	JS_CFUNC_DEF("set_array_layers", 1, &rd_texture_format_class_set_array_layers),
	JS_CFUNC_DEF("get_array_layers", 0, &rd_texture_format_class_get_array_layers),
	JS_CFUNC_DEF("set_mipmaps", 1, &rd_texture_format_class_set_mipmaps),
	JS_CFUNC_DEF("get_mipmaps", 0, &rd_texture_format_class_get_mipmaps),
	JS_CFUNC_DEF("set_texture_type", 1, &rd_texture_format_class_set_texture_type),
	JS_CFUNC_DEF("get_texture_type", 0, &rd_texture_format_class_get_texture_type),
	JS_CFUNC_DEF("set_samples", 1, &rd_texture_format_class_set_samples),
	JS_CFUNC_DEF("get_samples", 0, &rd_texture_format_class_get_samples),
	JS_CFUNC_DEF("set_usage_bits", 1, &rd_texture_format_class_set_usage_bits),
	JS_CFUNC_DEF("get_usage_bits", 0, &rd_texture_format_class_get_usage_bits),
	JS_CFUNC_DEF("add_shareable_format", 1, &rd_texture_format_class_add_shareable_format),
	JS_CFUNC_DEF("remove_shareable_format", 1, &rd_texture_format_class_remove_shareable_format),
};

static int js_rd_texture_format_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RDTextureFormat::__class_id);
	classes["RDTextureFormat"] = RDTextureFormat::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RDTextureFormat::__class_id, &rd_texture_format_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RDTextureFormat::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rd_texture_format_class_proto_funcs, _countof(rd_texture_format_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rd_texture_format_class_constructor, "RDTextureFormat", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RDTextureFormat", ctor);

	return 0;
}

JSModuleDef *_js_init_rd_texture_format_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rd_texture_format_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RDTextureFormat");
	return m;
}

JSModuleDef *js_init_rd_texture_format_module(JSContext *ctx) {
	return _js_init_rd_texture_format_module(ctx, "godot/classes/rd_texture_format");
}

void register_rd_texture_format() {
	js_init_rd_texture_format_module(ctx);
}