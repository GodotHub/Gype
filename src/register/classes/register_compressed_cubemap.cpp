
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/compressed_cubemap.hpp>
#include <godot_cpp/classes/compressed_texture_layered.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void compressed_cubemap_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef compressed_cubemap_class_def = {
	"CompressedCubemap",
	.finalizer = compressed_cubemap_class_finalizer
};

static JSValue compressed_cubemap_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CompressedCubemap::__class_id);
	if (JS_IsException(obj))
		return obj;

	CompressedCubemap *compressed_cubemap_class;
	if (argc == 1) 
		compressed_cubemap_class = static_cast<CompressedCubemap *>(static_cast<Object *>(Variant(*argv)));
	else 
		compressed_cubemap_class = memnew(CompressedCubemap);
	if (!compressed_cubemap_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, compressed_cubemap_class);	
	return obj;
}

static void define_compressed_cubemap_property(JSContext *ctx, JSValue proto) {
	
}

static void define_compressed_cubemap_enum(JSContext *ctx, JSValue proto) {
}

static int js_compressed_cubemap_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CompressedCubemap::__class_id);
	classes["CompressedCubemap"] = CompressedCubemap::__class_id;
	class_id_list.insert(CompressedCubemap::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CompressedCubemap::__class_id, &compressed_cubemap_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CompressedCubemap::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, CompressedTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CompressedCubemap::__class_id, proto);

	define_compressed_cubemap_property(ctx, proto);
	define_compressed_cubemap_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, compressed_cubemap_class_constructor, "CompressedCubemap", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CompressedCubemap", ctor);

	return 0;
}

JSModuleDef *_js_init_compressed_cubemap_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/compressed_texture_layered';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_compressed_cubemap_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CompressedCubemap");
	return m;
}

JSModuleDef *js_init_compressed_cubemap_module(JSContext *ctx) {
	return _js_init_compressed_cubemap_module(ctx, "@godot/classes/compressed_cubemap");
}

void register_compressed_cubemap() {
	CompressedCubemap::__init_js_class_id();
	js_init_compressed_cubemap_module(ctx);
}