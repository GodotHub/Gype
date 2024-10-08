
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/compressed_texture2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void compressed_texture2d_class_finalizer(JSRuntime *rt, JSValue val) {
	CompressedTexture2D *compressed_texture2d = static_cast<CompressedTexture2D *>(JS_GetOpaque(val, CompressedTexture2D::__class_id));
	if (compressed_texture2d)
		CompressedTexture2D::free(nullptr, compressed_texture2d);
}

static JSClassDef compressed_texture2d_class_def = {
	"CompressedTexture2D",
	.finalizer = compressed_texture2d_class_finalizer
};

static JSValue compressed_texture2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CompressedTexture2D *compressed_texture2d_class;
	JSValue obj = JS_NewObjectClass(ctx, CompressedTexture2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	compressed_texture2d_class = memnew(CompressedTexture2D);
	if (!compressed_texture2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, compressed_texture2d_class);
	return obj;
}
static JSValue compressed_texture2d_class_load(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CompressedTexture2D::load, CompressedTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue compressed_texture2d_class_get_load_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CompressedTexture2D::get_load_path, CompressedTexture2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry compressed_texture2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("load", 1, &compressed_texture2d_class_load),
	JS_CFUNC_DEF("get_load_path", 0, &compressed_texture2d_class_get_load_path),
};

static int js_compressed_texture2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CompressedTexture2D::__class_id);
	classes["CompressedTexture2D"] = CompressedTexture2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CompressedTexture2D::__class_id, &compressed_texture2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CompressedTexture2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, compressed_texture2d_class_proto_funcs, _countof(compressed_texture2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, compressed_texture2d_class_constructor, "CompressedTexture2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CompressedTexture2D", ctor);

	return 0;
}

JSModuleDef *_js_init_compressed_texture2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_compressed_texture2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CompressedTexture2D");
	return m;
}

JSModuleDef *js_init_compressed_texture2d_module(JSContext *ctx) {
	return _js_init_compressed_texture2d_module(ctx, "godot/classes/compressed_texture2d");
}

void register_compressed_texture2d() {
	js_init_compressed_texture2d_module(ctx);
}