
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/texture2drd.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void texture2drd_class_finalizer(JSRuntime *rt, JSValue val) {
	Texture2DRD *texture2drd = static_cast<Texture2DRD *>(JS_GetOpaque(val, Texture2DRD::__class_id));
	if (texture2drd)
		Texture2DRD::free(nullptr, texture2drd);
}

static JSClassDef texture2drd_class_def = {
	"Texture2DRD",
	.finalizer = texture2drd_class_finalizer
};

static JSValue texture2drd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Texture2DRD *texture2drd_class;
	JSValue obj = JS_NewObjectClass(ctx, Texture2DRD::__class_id);
	if (JS_IsException(obj))
		return obj;
	texture2drd_class = memnew(Texture2DRD);
	if (!texture2drd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, texture2drd_class);
	return obj;
}
static JSValue texture2drd_class_set_texture_rd_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Texture2DRD::set_texture_rd_rid, Texture2DRD::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture2drd_class_get_texture_rd_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Texture2DRD::get_texture_rd_rid, Texture2DRD::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry texture2drd_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture_rd_rid", 1, &texture2drd_class_set_texture_rd_rid),
	JS_CFUNC_DEF("get_texture_rd_rid", 0, &texture2drd_class_get_texture_rd_rid),
};

static int js_texture2drd_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Texture2DRD::__class_id);
	classes["Texture2DRD"] = Texture2DRD::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Texture2DRD::__class_id, &texture2drd_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Texture2DRD::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, texture2drd_class_proto_funcs, _countof(texture2drd_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, texture2drd_class_constructor, "Texture2DRD", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Texture2DRD", ctor);

	return 0;
}

JSModuleDef *_js_init_texture2drd_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_texture2drd_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Texture2DRD");
	return m;
}

JSModuleDef *js_init_texture2drd_module(JSContext *ctx) {
	return _js_init_texture2drd_module(ctx, "godot/classes/texture2drd");
}

void register_texture2drd() {
	js_init_texture2drd_module(ctx);
}