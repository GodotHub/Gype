
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/viewport_texture.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void viewport_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	ViewportTexture *viewport_texture = static_cast<ViewportTexture *>(JS_GetOpaque(val, ViewportTexture::__class_id));
	if (viewport_texture)
		ViewportTexture::free(nullptr, viewport_texture);
}

static JSClassDef viewport_texture_class_def = {
	"ViewportTexture",
	.finalizer = viewport_texture_class_finalizer
};

static JSValue viewport_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ViewportTexture *viewport_texture_class;
	JSValue obj = JS_NewObjectClass(ctx, ViewportTexture::__class_id);
	if (JS_IsException(obj))
		return obj;
	viewport_texture_class = memnew(ViewportTexture);
	if (!viewport_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, viewport_texture_class);
	return obj;
}
static JSValue viewport_texture_class_set_viewport_path_in_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ViewportTexture::set_viewport_path_in_scene, ViewportTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue viewport_texture_class_get_viewport_path_in_scene(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ViewportTexture::get_viewport_path_in_scene, ViewportTexture::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry viewport_texture_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_viewport_path_in_scene", 1, &viewport_texture_class_set_viewport_path_in_scene),
	JS_CFUNC_DEF("get_viewport_path_in_scene", 0, &viewport_texture_class_get_viewport_path_in_scene),
};

static int js_viewport_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ViewportTexture::__class_id);
	classes["ViewportTexture"] = ViewportTexture::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ViewportTexture::__class_id, &viewport_texture_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ViewportTexture::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, viewport_texture_class_proto_funcs, _countof(viewport_texture_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, viewport_texture_class_constructor, "ViewportTexture", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ViewportTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_viewport_texture_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_viewport_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ViewportTexture");
	return m;
}

JSModuleDef *js_init_viewport_texture_module(JSContext *ctx) {
	return _js_init_viewport_texture_module(ctx, "godot/classes/viewport_texture");
}

void register_viewport_texture() {
	js_init_viewport_texture_module(ctx);
}