
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/portable_compressed_texture2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void portable_compressed_texture2d_class_finalizer(JSRuntime *rt, JSValue val) {
	PortableCompressedTexture2D *portable_compressed_texture2d = static_cast<PortableCompressedTexture2D *>(JS_GetOpaque(val, PortableCompressedTexture2D::__class_id));
	if (portable_compressed_texture2d)
		PortableCompressedTexture2D::free(nullptr, portable_compressed_texture2d);
}

static JSClassDef portable_compressed_texture2d_class_def = {
	"PortableCompressedTexture2D",
	.finalizer = portable_compressed_texture2d_class_finalizer
};

static JSValue portable_compressed_texture2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PortableCompressedTexture2D *portable_compressed_texture2d_class;
	JSValue obj = JS_NewObjectClass(ctx, PortableCompressedTexture2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	portable_compressed_texture2d_class = memnew(PortableCompressedTexture2D);
	if (!portable_compressed_texture2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, portable_compressed_texture2d_class);
	return obj;
}
static JSValue portable_compressed_texture2d_class_create_from_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PortableCompressedTexture2D::create_from_image, PortableCompressedTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue portable_compressed_texture2d_class_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PortableCompressedTexture2D::get_format, PortableCompressedTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue portable_compressed_texture2d_class_get_compression_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PortableCompressedTexture2D::get_compression_mode, PortableCompressedTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue portable_compressed_texture2d_class_set_size_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PortableCompressedTexture2D::set_size_override, PortableCompressedTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue portable_compressed_texture2d_class_get_size_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PortableCompressedTexture2D::get_size_override, PortableCompressedTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue portable_compressed_texture2d_class_set_keep_compressed_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PortableCompressedTexture2D::set_keep_compressed_buffer, PortableCompressedTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue portable_compressed_texture2d_class_is_keeping_compressed_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PortableCompressedTexture2D::is_keeping_compressed_buffer, PortableCompressedTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue portable_compressed_texture2d_class_set_keep_all_compressed_buffers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_static_method_no_ret(&PortableCompressedTexture2D::set_keep_all_compressed_buffers, PortableCompressedTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue portable_compressed_texture2d_class_is_keeping_all_compressed_buffers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&PortableCompressedTexture2D::is_keeping_all_compressed_buffers, PortableCompressedTexture2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry portable_compressed_texture2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_from_image", 4, &portable_compressed_texture2d_class_create_from_image),
	JS_CFUNC_DEF("get_format", 0, &portable_compressed_texture2d_class_get_format),
	JS_CFUNC_DEF("get_compression_mode", 0, &portable_compressed_texture2d_class_get_compression_mode),
	JS_CFUNC_DEF("set_size_override", 1, &portable_compressed_texture2d_class_set_size_override),
	JS_CFUNC_DEF("get_size_override", 0, &portable_compressed_texture2d_class_get_size_override),
	JS_CFUNC_DEF("set_keep_compressed_buffer", 1, &portable_compressed_texture2d_class_set_keep_compressed_buffer),
	JS_CFUNC_DEF("is_keeping_compressed_buffer", 0, &portable_compressed_texture2d_class_is_keeping_compressed_buffer),
};
static const JSCFunctionListEntry portable_compressed_texture2d_class_static_funcs[] = {
	JS_CFUNC_DEF("set_keep_all_compressed_buffers", 1, &portable_compressed_texture2d_class_set_keep_all_compressed_buffers),
	JS_CFUNC_DEF("is_keeping_all_compressed_buffers", 0, &portable_compressed_texture2d_class_is_keeping_all_compressed_buffers),
};

static int js_portable_compressed_texture2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PortableCompressedTexture2D::__class_id);
	classes["PortableCompressedTexture2D"] = PortableCompressedTexture2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PortableCompressedTexture2D::__class_id, &portable_compressed_texture2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PortableCompressedTexture2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, portable_compressed_texture2d_class_proto_funcs, _countof(portable_compressed_texture2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, portable_compressed_texture2d_class_constructor, "PortableCompressedTexture2D", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, portable_compressed_texture2d_class_static_funcs, _countof(portable_compressed_texture2d_class_static_funcs));

	JS_SetModuleExport(ctx, m, "PortableCompressedTexture2D", ctor);

	return 0;
}

JSModuleDef *_js_init_portable_compressed_texture2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_portable_compressed_texture2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PortableCompressedTexture2D");
	return m;
}

JSModuleDef *js_init_portable_compressed_texture2d_module(JSContext *ctx) {
	return _js_init_portable_compressed_texture2d_module(ctx, "godot/classes/portable_compressed_texture2d");
}

void register_portable_compressed_texture2d() {
	js_init_portable_compressed_texture2d_module(ctx);
}