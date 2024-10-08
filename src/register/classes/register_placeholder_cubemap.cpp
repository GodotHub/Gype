
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/placeholder_cubemap.hpp>
#include <godot_cpp/classes/placeholder_texture_layered.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void placeholder_cubemap_class_finalizer(JSRuntime *rt, JSValue val) {
	PlaceholderCubemap *placeholder_cubemap = static_cast<PlaceholderCubemap *>(JS_GetOpaque(val, PlaceholderCubemap::__class_id));
	if (placeholder_cubemap)
		PlaceholderCubemap::free(nullptr, placeholder_cubemap);
}

static JSClassDef placeholder_cubemap_class_def = {
	"PlaceholderCubemap",
	.finalizer = placeholder_cubemap_class_finalizer
};

static JSValue placeholder_cubemap_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PlaceholderCubemap *placeholder_cubemap_class;
	JSValue obj = JS_NewObjectClass(ctx, PlaceholderCubemap::__class_id);
	if (JS_IsException(obj))
		return obj;
	placeholder_cubemap_class = memnew(PlaceholderCubemap);
	if (!placeholder_cubemap_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, placeholder_cubemap_class);
	return obj;
}

static int js_placeholder_cubemap_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PlaceholderCubemap::__class_id);
	classes["PlaceholderCubemap"] = PlaceholderCubemap::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PlaceholderCubemap::__class_id, &placeholder_cubemap_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PlaceholderTextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PlaceholderCubemap::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, placeholder_cubemap_class_constructor, "PlaceholderCubemap", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PlaceholderCubemap", ctor);

	return 0;
}

JSModuleDef *_js_init_placeholder_cubemap_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_placeholder_cubemap_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PlaceholderCubemap");
	return m;
}

JSModuleDef *js_init_placeholder_cubemap_module(JSContext *ctx) {
	return _js_init_placeholder_cubemap_module(ctx, "godot/classes/placeholder_cubemap");
}

void register_placeholder_cubemap() {
	js_init_placeholder_cubemap_module(ctx);
}