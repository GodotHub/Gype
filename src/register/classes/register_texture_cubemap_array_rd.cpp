
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/texture_cubemap_array_rd.hpp>
#include <godot_cpp/classes/texture_layered_rd.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void texture_cubemap_array_rd_class_finalizer(JSRuntime *rt, JSValue val) {
	TextureCubemapArrayRD *texture_cubemap_array_rd = static_cast<TextureCubemapArrayRD *>(JS_GetOpaque(val, TextureCubemapArrayRD::__class_id));
	if (texture_cubemap_array_rd)
		TextureCubemapArrayRD::free(nullptr, texture_cubemap_array_rd);
}

static JSClassDef texture_cubemap_array_rd_class_def = {
	"TextureCubemapArrayRD",
	.finalizer = texture_cubemap_array_rd_class_finalizer
};

static JSValue texture_cubemap_array_rd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TextureCubemapArrayRD *texture_cubemap_array_rd_class;
	JSValue obj = JS_NewObjectClass(ctx, TextureCubemapArrayRD::__class_id);
	if (JS_IsException(obj))
		return obj;
	texture_cubemap_array_rd_class = memnew(TextureCubemapArrayRD);
	if (!texture_cubemap_array_rd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, texture_cubemap_array_rd_class);
	return obj;
}

static int js_texture_cubemap_array_rd_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TextureCubemapArrayRD::__class_id);
	classes["TextureCubemapArrayRD"] = TextureCubemapArrayRD::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TextureCubemapArrayRD::__class_id, &texture_cubemap_array_rd_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, TextureLayeredRD::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextureCubemapArrayRD::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, texture_cubemap_array_rd_class_constructor, "TextureCubemapArrayRD", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TextureCubemapArrayRD", ctor);

	return 0;
}

JSModuleDef *_js_init_texture_cubemap_array_rd_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_texture_cubemap_array_rd_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextureCubemapArrayRD");
	return m;
}

JSModuleDef *js_init_texture_cubemap_array_rd_module(JSContext *ctx) {
	return _js_init_texture_cubemap_array_rd_module(ctx, "godot/classes/texture_cubemap_array_rd");
}

void register_texture_cubemap_array_rd() {
	js_init_texture_cubemap_array_rd_module(ctx);
}