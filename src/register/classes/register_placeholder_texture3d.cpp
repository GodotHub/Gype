
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/placeholder_texture3d.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void placeholder_texture3d_class_finalizer(JSRuntime *rt, JSValue val) {
	PlaceholderTexture3D *placeholder_texture3d = static_cast<PlaceholderTexture3D *>(JS_GetOpaque(val, PlaceholderTexture3D::__class_id));
	if (placeholder_texture3d)
		PlaceholderTexture3D::free(nullptr, placeholder_texture3d);
}

static JSClassDef placeholder_texture3d_class_def = {
	"PlaceholderTexture3D",
	.finalizer = placeholder_texture3d_class_finalizer
};

static JSValue placeholder_texture3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PlaceholderTexture3D *placeholder_texture3d_class;
	JSValue obj = JS_NewObjectClass(ctx, PlaceholderTexture3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	placeholder_texture3d_class = memnew(PlaceholderTexture3D);
	if (!placeholder_texture3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, placeholder_texture3d_class);
	return obj;
}
static JSValue placeholder_texture3d_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PlaceholderTexture3D::set_size, PlaceholderTexture3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue placeholder_texture3d_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PlaceholderTexture3D::get_size, PlaceholderTexture3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry placeholder_texture3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &placeholder_texture3d_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &placeholder_texture3d_class_get_size),
};

static int js_placeholder_texture3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PlaceholderTexture3D::__class_id);
	classes["PlaceholderTexture3D"] = PlaceholderTexture3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PlaceholderTexture3D::__class_id, &placeholder_texture3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Texture3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PlaceholderTexture3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, placeholder_texture3d_class_proto_funcs, _countof(placeholder_texture3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, placeholder_texture3d_class_constructor, "PlaceholderTexture3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PlaceholderTexture3D", ctor);

	return 0;
}

JSModuleDef *_js_init_placeholder_texture3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_placeholder_texture3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PlaceholderTexture3D");
	return m;
}

JSModuleDef *js_init_placeholder_texture3d_module(JSContext *ctx) {
	return _js_init_placeholder_texture3d_module(ctx, "godot/classes/placeholder_texture3d");
}

void register_placeholder_texture3d() {
	js_init_placeholder_texture3d_module(ctx);
}