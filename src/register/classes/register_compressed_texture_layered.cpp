
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/compressed_texture_layered.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void compressed_texture_layered_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef compressed_texture_layered_class_def = {
	"CompressedTextureLayered",
	.finalizer = compressed_texture_layered_class_finalizer
};

static JSValue compressed_texture_layered_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CompressedTextureLayered::__class_id);
	if (JS_IsException(obj))
		return obj;
	CompressedTextureLayered *compressed_texture_layered_class = memnew(CompressedTextureLayered);
	if (!compressed_texture_layered_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, compressed_texture_layered_class);
	return obj;
}
static JSValue compressed_texture_layered_class_load(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CompressedTextureLayered::load, ctx, this_val, argc, argv);
};
static JSValue compressed_texture_layered_class_get_load_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CompressedTextureLayered::get_load_path, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry compressed_texture_layered_class_proto_funcs[] = {
	JS_CFUNC_DEF("load", 1, &compressed_texture_layered_class_load),
	JS_CFUNC_DEF("get_load_path", 0, &compressed_texture_layered_class_get_load_path),
};

void define_compressed_texture_layered_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "load_path"),
			JS_NewCFunction(ctx, compressed_texture_layered_class_get_load_path, "get_load_path", 0),
			JS_NewCFunction(ctx, compressed_texture_layered_class_load, "load", 1),
			JS_PROP_GETSET);
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_compressed_texture_layered_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CompressedTextureLayered::__class_id);
	classes["CompressedTextureLayered"] = CompressedTextureLayered::__class_id;
	class_id_list.insert(CompressedTextureLayered::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CompressedTextureLayered::__class_id, &compressed_texture_layered_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CompressedTextureLayered::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, TextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CompressedTextureLayered::__class_id, proto);

	define_compressed_texture_layered_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, compressed_texture_layered_class_proto_funcs, _countof(compressed_texture_layered_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, compressed_texture_layered_class_constructor, "CompressedTextureLayered", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CompressedTextureLayered", ctor);

	return 0;
}

JSModuleDef *_js_init_compressed_texture_layered_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/texture_layered';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	CompressedTextureLayered::__init_js_class_id();
	js_init_compressed_texture_layered_module(ctx);
}