
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/compressed_texture2d_array.hpp>
#include <godot_cpp/classes/compressed_texture_layered.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void compressed_texture2d_array_class_finalizer(JSRuntime *rt, JSValue val) {
	CompressedTexture2DArray *compressed_texture2d_array = static_cast<CompressedTexture2DArray *>(JS_GetOpaque(val, CompressedTexture2DArray::__class_id));
	if (compressed_texture2d_array)
		CompressedTexture2DArray::free(nullptr, compressed_texture2d_array);
}

static JSClassDef compressed_texture2d_array_class_def = {
	"CompressedTexture2DArray",
	.finalizer = compressed_texture2d_array_class_finalizer
};

static JSValue compressed_texture2d_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CompressedTexture2DArray *compressed_texture2d_array_class;
	JSValue obj = JS_NewObjectClass(ctx, CompressedTexture2DArray::__class_id);
	if (JS_IsException(obj))
		return obj;
	compressed_texture2d_array_class = memnew(CompressedTexture2DArray);
	if (!compressed_texture2d_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, compressed_texture2d_array_class);
	return obj;
}

static int js_compressed_texture2d_array_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CompressedTexture2DArray::__class_id);
	classes["CompressedTexture2DArray"] = CompressedTexture2DArray::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CompressedTexture2DArray::__class_id, &compressed_texture2d_array_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CompressedTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CompressedTexture2DArray::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, compressed_texture2d_array_class_constructor, "CompressedTexture2DArray", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CompressedTexture2DArray", ctor);

	return 0;
}

JSModuleDef *_js_init_compressed_texture2d_array_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_compressed_texture2d_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CompressedTexture2DArray");
	return m;
}

JSModuleDef *js_init_compressed_texture2d_array_module(JSContext *ctx) {
	return _js_init_compressed_texture2d_array_module(ctx, "godot/classes/compressed_texture2d_array");
}

void register_compressed_texture2d_array() {
	js_init_compressed_texture2d_array_module(ctx);
}