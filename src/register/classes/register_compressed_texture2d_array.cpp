
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/compressed_texture_layered.hpp>
#include <godot_cpp/classes/compressed_texture2d_array.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void compressed_texture2d_array_class_finalizer(JSRuntime *rt, JSValue val) {
	CompressedTexture2DArray *compressed_texture2d_array = static_cast<CompressedTexture2DArray *>(JS_GetOpaque(val, CompressedTexture2DArray::__class_id));
	if (compressed_texture2d_array)
		memdelete(compressed_texture2d_array);
}

static JSClassDef compressed_texture2d_array_class_def = {
	"CompressedTexture2DArray",
	.finalizer = compressed_texture2d_array_class_finalizer
};

static JSValue compressed_texture2d_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CompressedTexture2DArray::__class_id);
	if (JS_IsException(obj))
		return obj;

	CompressedTexture2DArray *compressed_texture2d_array_class;
	if (argc == 1) 
		compressed_texture2d_array_class = static_cast<CompressedTexture2DArray *>(Variant(*argv).operator Object *());
	else 
		compressed_texture2d_array_class = memnew(CompressedTexture2DArray);
	if (!compressed_texture2d_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, compressed_texture2d_array_class);
	return obj;
}

static void define_compressed_texture2d_array_property(JSContext *ctx, JSValue proto) {
	
}

static void define_compressed_texture2d_array_enum(JSContext *ctx, JSValue proto) {
}

static int js_compressed_texture2d_array_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["CompressedTexture2DArray"] = CompressedTexture2DArray::__class_id;
	class_id_list.insert(CompressedTexture2DArray::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CompressedTexture2DArray::__class_id, &compressed_texture2d_array_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CompressedTexture2DArray::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, CompressedTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CompressedTexture2DArray::__class_id, proto);

	define_compressed_texture2d_array_property(ctx, proto);
	define_compressed_texture2d_array_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, compressed_texture2d_array_class_constructor, "CompressedTexture2DArray", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "CompressedTexture2DArray", ctor);
	constructors[CompressedTexture2DArray::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_compressed_texture2d_array_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/compressed_texture_layered';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_compressed_texture2d_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CompressedTexture2DArray");
	return m;
}

JSModuleDef *js_init_compressed_texture2d_array_module(JSContext *ctx) {
	return _js_init_compressed_texture2d_array_module(ctx, "@godot/classes/compressed_texture2d_array");
}

void register_compressed_texture2d_array() {
	CompressedTexture2DArray::__init_js_class_id();
	js_init_compressed_texture2d_array_module(ctx);
}