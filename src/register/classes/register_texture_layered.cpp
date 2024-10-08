
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/classes/texture.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void texture_layered_class_finalizer(JSRuntime *rt, JSValue val) {
	TextureLayered *texture_layered = static_cast<TextureLayered *>(JS_GetOpaque(val, TextureLayered::__class_id));
	if (texture_layered)
		TextureLayered::free(nullptr, texture_layered);
}

static JSClassDef texture_layered_class_def = {
	"TextureLayered",
	.finalizer = texture_layered_class_finalizer
};

static JSValue texture_layered_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TextureLayered *texture_layered_class;
	JSValue obj = JS_NewObjectClass(ctx, TextureLayered::__class_id);
	if (JS_IsException(obj))
		return obj;
	texture_layered_class = memnew(TextureLayered);
	if (!texture_layered_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, texture_layered_class);
	return obj;
}
static JSValue texture_layered_class_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureLayered::get_format, TextureLayered::__class_id, ctx, this_val, argv);
};
static JSValue texture_layered_class_get_layered_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureLayered::get_layered_type, TextureLayered::__class_id, ctx, this_val, argv);
};
static JSValue texture_layered_class_get_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureLayered::get_width, TextureLayered::__class_id, ctx, this_val, argv);
};
static JSValue texture_layered_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureLayered::get_height, TextureLayered::__class_id, ctx, this_val, argv);
};
static JSValue texture_layered_class_get_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureLayered::get_layers, TextureLayered::__class_id, ctx, this_val, argv);
};
static JSValue texture_layered_class_has_mipmaps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureLayered::has_mipmaps, TextureLayered::__class_id, ctx, this_val, argv);
};
static JSValue texture_layered_class_get_layer_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureLayered::get_layer_data, TextureLayered::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry texture_layered_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_format", 0, &texture_layered_class_get_format),
	JS_CFUNC_DEF("get_layered_type", 0, &texture_layered_class_get_layered_type),
	JS_CFUNC_DEF("get_width", 0, &texture_layered_class_get_width),
	JS_CFUNC_DEF("get_height", 0, &texture_layered_class_get_height),
	JS_CFUNC_DEF("get_layers", 0, &texture_layered_class_get_layers),
	JS_CFUNC_DEF("has_mipmaps", 0, &texture_layered_class_has_mipmaps),
	JS_CFUNC_DEF("get_layer_data", 1, &texture_layered_class_get_layer_data),
};

static int js_texture_layered_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TextureLayered::__class_id);
	classes["TextureLayered"] = TextureLayered::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TextureLayered::__class_id, &texture_layered_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Texture::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextureLayered::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, texture_layered_class_proto_funcs, _countof(texture_layered_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, texture_layered_class_constructor, "TextureLayered", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TextureLayered", ctor);

	return 0;
}

JSModuleDef *_js_init_texture_layered_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_texture_layered_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextureLayered");
	return m;
}

JSModuleDef *js_init_texture_layered_module(JSContext *ctx) {
	return _js_init_texture_layered_module(ctx, "godot/classes/texture_layered");
}

void register_texture_layered() {
	js_init_texture_layered_module(ctx);
}