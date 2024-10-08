
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void texture_class_finalizer(JSRuntime *rt, JSValue val) {
	Texture *texture = static_cast<Texture *>(JS_GetOpaque(val, Texture::__class_id));
	if (texture)
		Texture::free(nullptr, texture);
}

static JSClassDef texture_class_def = {
	"Texture",
	.finalizer = texture_class_finalizer
};

static JSValue texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Texture *texture_class;
	JSValue obj = JS_NewObjectClass(ctx, Texture::__class_id);
	if (JS_IsException(obj))
		return obj;
	texture_class = memnew(Texture);
	if (!texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, texture_class);
	return obj;
}

static int js_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Texture::__class_id);
	classes["Texture"] = Texture::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Texture::__class_id, &texture_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Texture::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, texture_class_constructor, "Texture", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Texture", ctor);

	return 0;
}

JSModuleDef *_js_init_texture_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Texture");
	return m;
}

JSModuleDef *js_init_texture_module(JSContext *ctx) {
	return _js_init_texture_module(ctx, "godot/classes/texture");
}

void register_texture() {
	js_init_texture_module(ctx);
}