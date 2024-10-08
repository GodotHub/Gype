
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/compressed_texture_layered.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void compressed_texture_layered_class_finalizer(JSRuntime *rt, JSValue val) {
	CompressedTextureLayered *compressed_texture_layered = static_cast<CompressedTextureLayered *>(JS_GetOpaque(val, CompressedTextureLayered::__class_id));
	if (compressed_texture_layered)
		CompressedTextureLayered::free(nullptr, compressed_texture_layered);
}

static JSClassDef compressed_texture_layered_class_def = {
	"CompressedTextureLayered",
	.finalizer = compressed_texture_layered_class_finalizer
};

static JSValue compressed_texture_layered_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CompressedTextureLayered *compressed_texture_layered_class;
	JSValue obj = JS_NewObjectClass(ctx, CompressedTextureLayered::__class_id);
	if (JS_IsException(obj))
		return obj;
	compressed_texture_layered_class = memnew(CompressedTextureLayered);
	if (!compressed_texture_layered_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, compressed_texture_layered_class);
	return obj;
}
static JSValue compressed_texture_layered_class_load(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CompressedTextureLayered::load, CompressedTextureLayered::__class_id, ctx, this_val, argv);
};
static JSValue compressed_texture_layered_class_get_load_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CompressedTextureLayered::get_load_path, CompressedTextureLayered::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry compressed_texture_layered_class_proto_funcs[] = {
	JS_CFUNC_DEF("load", 1, &compressed_texture_layered_class_load),
	JS_CFUNC_DEF("get_load_path", 0, &compressed_texture_layered_class_get_load_path),
};

static int js_compressed_texture_layered_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CompressedTextureLayered::__class_id);
	classes["CompressedTextureLayered"] = CompressedTextureLayered::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CompressedTextureLayered::__class_id, &compressed_texture_layered_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, TextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CompressedTextureLayered::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, compressed_texture_layered_class_proto_funcs, _countof(compressed_texture_layered_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, compressed_texture_layered_class_constructor, "CompressedTextureLayered", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CompressedTextureLayered", ctor);

	return 0;
}

JSModuleDef *_js_init_compressed_texture_layered_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_compressed_texture_layered_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CompressedTextureLayered");
	return m;
}

JSModuleDef *js_init_compressed_texture_layered_module(JSContext *ctx) {
	return _js_init_compressed_texture_layered_module(ctx, "godot/classes/compressed_texture_layered");
}

void register_compressed_texture_layered() {
	js_init_compressed_texture_layered_module(ctx);
}