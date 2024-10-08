
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/compressed_texture_layered.hpp>
#include <godot_cpp/classes/compressed_cubemap_array.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void compressed_cubemap_array_class_finalizer(JSRuntime *rt, JSValue val) {
	CompressedCubemapArray *compressed_cubemap_array = static_cast<CompressedCubemapArray *>(JS_GetOpaque(val, CompressedCubemapArray::__class_id));
	if (compressed_cubemap_array)
		CompressedCubemapArray::free(nullptr, compressed_cubemap_array);
}

static JSClassDef compressed_cubemap_array_class_def = {
	"CompressedCubemapArray",
	.finalizer = compressed_cubemap_array_class_finalizer
};

static JSValue compressed_cubemap_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CompressedCubemapArray *compressed_cubemap_array_class;
	JSValue obj = JS_NewObjectClass(ctx, CompressedCubemapArray::__class_id);
	if (JS_IsException(obj))
		return obj;
	compressed_cubemap_array_class = memnew(CompressedCubemapArray);
	if (!compressed_cubemap_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, compressed_cubemap_array_class);
	return obj;
}

static int js_compressed_cubemap_array_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CompressedCubemapArray::__class_id);
	classes["CompressedCubemapArray"] = CompressedCubemapArray::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CompressedCubemapArray::__class_id, &compressed_cubemap_array_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CompressedTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CompressedCubemapArray::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, compressed_cubemap_array_class_constructor, "CompressedCubemapArray", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CompressedCubemapArray", ctor);

	return 0;
}

JSModuleDef *_js_init_compressed_cubemap_array_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_compressed_cubemap_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CompressedCubemapArray");
	return m;
}

JSModuleDef *js_init_compressed_cubemap_array_module(JSContext *ctx) {
	return _js_init_compressed_cubemap_array_module(ctx, "godot/classes/compressed_cubemap_array");
}

void register_compressed_cubemap_array() {
	js_init_compressed_cubemap_array_module(ctx);
}