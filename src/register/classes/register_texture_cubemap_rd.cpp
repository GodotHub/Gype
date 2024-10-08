
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/texture_layered_rd.hpp>
#include <godot_cpp/classes/texture_cubemap_rd.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void texture_cubemap_rd_class_finalizer(JSRuntime *rt, JSValue val) {
	TextureCubemapRD *texture_cubemap_rd = static_cast<TextureCubemapRD *>(JS_GetOpaque(val, TextureCubemapRD::__class_id));
	if (texture_cubemap_rd)
		TextureCubemapRD::free(nullptr, texture_cubemap_rd);
}

static JSClassDef texture_cubemap_rd_class_def = {
	"TextureCubemapRD",
	.finalizer = texture_cubemap_rd_class_finalizer
};

static JSValue texture_cubemap_rd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TextureCubemapRD *texture_cubemap_rd_class;
	JSValue obj = JS_NewObjectClass(ctx, TextureCubemapRD::__class_id);
	if (JS_IsException(obj))
		return obj;
	texture_cubemap_rd_class = memnew(TextureCubemapRD);
	if (!texture_cubemap_rd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, texture_cubemap_rd_class);
	return obj;
}

static int js_texture_cubemap_rd_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TextureCubemapRD::__class_id);
	classes["TextureCubemapRD"] = TextureCubemapRD::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TextureCubemapRD::__class_id, &texture_cubemap_rd_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, TextureLayeredRD::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextureCubemapRD::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, texture_cubemap_rd_class_constructor, "TextureCubemapRD", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TextureCubemapRD", ctor);

	return 0;
}

JSModuleDef *_js_init_texture_cubemap_rd_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_texture_cubemap_rd_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextureCubemapRD");
	return m;
}

JSModuleDef *js_init_texture_cubemap_rd_module(JSContext *ctx) {
	return _js_init_texture_cubemap_rd_module(ctx, "godot/classes/texture_cubemap_rd");
}

void register_texture_cubemap_rd() {
	js_init_texture_cubemap_rd_module(ctx);
}