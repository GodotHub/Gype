
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/compressed_texture_layered.hpp>
#include <godot_cpp/classes/compressed_cubemap.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void compressed_cubemap_class_finalizer(JSRuntime *rt, JSValue val) {
	CompressedCubemap *compressed_cubemap = static_cast<CompressedCubemap *>(JS_GetOpaque(val, CompressedCubemap::__class_id));
	if (compressed_cubemap)
		CompressedCubemap::free(nullptr, compressed_cubemap);
}

static JSClassDef compressed_cubemap_class_def = {
	"CompressedCubemap",
	.finalizer = compressed_cubemap_class_finalizer
};

static JSValue compressed_cubemap_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CompressedCubemap *compressed_cubemap_class;
	JSValue obj = JS_NewObjectClass(ctx, CompressedCubemap::__class_id);
	if (JS_IsException(obj))
		return obj;
	compressed_cubemap_class = memnew(CompressedCubemap);
	if (!compressed_cubemap_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, compressed_cubemap_class);
	return obj;
}

static int js_compressed_cubemap_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CompressedCubemap::__class_id);
	classes["CompressedCubemap"] = CompressedCubemap::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CompressedCubemap::__class_id, &compressed_cubemap_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CompressedTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CompressedCubemap::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, compressed_cubemap_class_constructor, "CompressedCubemap", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CompressedCubemap", ctor);

	return 0;
}

JSModuleDef *_js_init_compressed_cubemap_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_compressed_cubemap_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CompressedCubemap");
	return m;
}

JSModuleDef *js_init_compressed_cubemap_module(JSContext *ctx) {
	return _js_init_compressed_cubemap_module(ctx, "godot/classes/compressed_cubemap");
}

void register_compressed_cubemap() {
	js_init_compressed_cubemap_module(ctx);
}