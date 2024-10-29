
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/compressed_texture_layered.hpp>
#include <godot_cpp/classes/compressed_cubemap_array.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void compressed_cubemap_array_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef compressed_cubemap_array_class_def = {
	"CompressedCubemapArray",
	.finalizer = compressed_cubemap_array_class_finalizer
};

static JSValue compressed_cubemap_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CompressedCubemapArray::__class_id);
	if (JS_IsException(obj))
		return obj;
	CompressedCubemapArray *compressed_cubemap_array_class = memnew(CompressedCubemapArray);
	if (!compressed_cubemap_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, compressed_cubemap_array_class);	
	return obj;
}

void define_compressed_cubemap_array_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_compressed_cubemap_array_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CompressedCubemapArray::__class_id);
	classes["CompressedCubemapArray"] = CompressedCubemapArray::__class_id;
	class_id_list.insert(CompressedCubemapArray::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CompressedCubemapArray::__class_id, &compressed_cubemap_array_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CompressedCubemapArray::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, CompressedTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CompressedCubemapArray::__class_id, proto);

	define_compressed_cubemap_array_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, compressed_cubemap_array_class_constructor, "CompressedCubemapArray", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CompressedCubemapArray", ctor);

	return 0;
}

JSModuleDef *_js_init_compressed_cubemap_array_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/compressed_texture_layered';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_compressed_cubemap_array_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CompressedCubemapArray");
	return m;
}

JSModuleDef *js_init_compressed_cubemap_array_module(JSContext *ctx) {
	return _js_init_compressed_cubemap_array_module(ctx, "@godot/classes/compressed_cubemap_array");
}

void register_compressed_cubemap_array() {
	CompressedCubemapArray::__init_js_class_id();
	js_init_compressed_cubemap_array_module(ctx);
}