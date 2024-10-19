
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture_cubemap_array_rd.hpp>
#include <godot_cpp/classes/texture_layered_rd.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void texture_cubemap_array_rd_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef texture_cubemap_array_rd_class_def = {
	"TextureCubemapArrayRD",
	.finalizer = texture_cubemap_array_rd_class_finalizer
};

static JSValue texture_cubemap_array_rd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, TextureCubemapArrayRD::__class_id);
	if (JS_IsException(obj))
		return obj;
	TextureCubemapArrayRD *texture_cubemap_array_rd_class = memnew(TextureCubemapArrayRD);
	if (!texture_cubemap_array_rd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, texture_cubemap_array_rd_class);	
	return obj;
}

void define_texture_cubemap_array_rd_property(JSContext *ctx, JSValue obj) {
}

static int js_texture_cubemap_array_rd_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&TextureCubemapArrayRD::__class_id);
	classes["TextureCubemapArrayRD"] = TextureCubemapArrayRD::__class_id;
	class_id_list.insert(TextureCubemapArrayRD::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), TextureCubemapArrayRD::__class_id, &texture_cubemap_array_rd_class_def);

	JSValue proto = JS_NewObjectClass(ctx, TextureCubemapArrayRD::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, TextureLayeredRD::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextureCubemapArrayRD::__class_id, proto);

	define_texture_cubemap_array_rd_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, texture_cubemap_array_rd_class_constructor, "TextureCubemapArrayRD", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "TextureCubemapArrayRD", ctor);

	return 0;
}

JSModuleDef *_js_init_texture_cubemap_array_rd_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/texture_layered_rd';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	TextureCubemapArrayRD::__init_js_class_id();
	js_init_texture_cubemap_array_rd_module(ctx);
}