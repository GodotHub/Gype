
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/placeholder_texture_layered.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void placeholder_texture_layered_class_finalizer(JSRuntime *rt, JSValue val) {
	PlaceholderTextureLayered *placeholder_texture_layered = static_cast<PlaceholderTextureLayered *>(JS_GetOpaque(val, PlaceholderTextureLayered::__class_id));
	if (placeholder_texture_layered)
		PlaceholderTextureLayered::free(nullptr, placeholder_texture_layered);
}

static JSClassDef placeholder_texture_layered_class_def = {
	"PlaceholderTextureLayered",
	.finalizer = placeholder_texture_layered_class_finalizer
};

static JSValue placeholder_texture_layered_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PlaceholderTextureLayered *placeholder_texture_layered_class;
	JSValue obj = JS_NewObjectClass(ctx, PlaceholderTextureLayered::__class_id);
	if (JS_IsException(obj))
		return obj;
	placeholder_texture_layered_class = memnew(PlaceholderTextureLayered);
	if (!placeholder_texture_layered_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, placeholder_texture_layered_class);
	return obj;
}
static JSValue placeholder_texture_layered_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PlaceholderTextureLayered::set_size, PlaceholderTextureLayered::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue placeholder_texture_layered_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PlaceholderTextureLayered::get_size, PlaceholderTextureLayered::__class_id, ctx, this_val, argv);
};
static JSValue placeholder_texture_layered_class_set_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PlaceholderTextureLayered::set_layers, PlaceholderTextureLayered::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry placeholder_texture_layered_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &placeholder_texture_layered_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &placeholder_texture_layered_class_get_size),
	JS_CFUNC_DEF("set_layers", 1, &placeholder_texture_layered_class_set_layers),
};

static int js_placeholder_texture_layered_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PlaceholderTextureLayered::__class_id);
	classes["PlaceholderTextureLayered"] = PlaceholderTextureLayered::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PlaceholderTextureLayered::__class_id, &placeholder_texture_layered_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, TextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PlaceholderTextureLayered::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, placeholder_texture_layered_class_proto_funcs, _countof(placeholder_texture_layered_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, placeholder_texture_layered_class_constructor, "PlaceholderTextureLayered", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PlaceholderTextureLayered", ctor);

	return 0;
}

JSModuleDef *_js_init_placeholder_texture_layered_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_placeholder_texture_layered_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PlaceholderTextureLayered");
	return m;
}

JSModuleDef *js_init_placeholder_texture_layered_module(JSContext *ctx) {
	return _js_init_placeholder_texture_layered_module(ctx, "godot/classes/placeholder_texture_layered");
}

void register_placeholder_texture_layered() {
	js_init_placeholder_texture_layered_module(ctx);
}