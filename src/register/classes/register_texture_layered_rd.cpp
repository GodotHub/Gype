
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/texture_layered_rd.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void texture_layered_rd_class_finalizer(JSRuntime *rt, JSValue val) {
	TextureLayeredRD *texture_layered_rd = static_cast<TextureLayeredRD *>(JS_GetOpaque(val, TextureLayeredRD::__class_id));
	if (texture_layered_rd)
		TextureLayeredRD::free(nullptr, texture_layered_rd);
}

static JSClassDef texture_layered_rd_class_def = {
	"TextureLayeredRD",
	.finalizer = texture_layered_rd_class_finalizer
};

static JSValue texture_layered_rd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TextureLayeredRD *texture_layered_rd_class;
	JSValue obj = JS_NewObjectClass(ctx, TextureLayeredRD::__class_id);
	if (JS_IsException(obj))
		return obj;
	texture_layered_rd_class = memnew(TextureLayeredRD);
	if (!texture_layered_rd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, texture_layered_rd_class);
	return obj;
}
static JSValue texture_layered_rd_class_set_texture_rd_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureLayeredRD::set_texture_rd_rid, TextureLayeredRD::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_layered_rd_class_get_texture_rd_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureLayeredRD::get_texture_rd_rid, TextureLayeredRD::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry texture_layered_rd_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture_rd_rid", 1, &texture_layered_rd_class_set_texture_rd_rid),
	JS_CFUNC_DEF("get_texture_rd_rid", 0, &texture_layered_rd_class_get_texture_rd_rid),
};

static int js_texture_layered_rd_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TextureLayeredRD::__class_id);
	classes["TextureLayeredRD"] = TextureLayeredRD::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TextureLayeredRD::__class_id, &texture_layered_rd_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, TextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextureLayeredRD::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, texture_layered_rd_class_proto_funcs, _countof(texture_layered_rd_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, texture_layered_rd_class_constructor, "TextureLayeredRD", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TextureLayeredRD", ctor);

	return 0;
}

JSModuleDef *_js_init_texture_layered_rd_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_texture_layered_rd_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextureLayeredRD");
	return m;
}

JSModuleDef *js_init_texture_layered_rd_module(JSContext *ctx) {
	return _js_init_texture_layered_rd_module(ctx, "godot/classes/texture_layered_rd");
}

void register_texture_layered_rd() {
	js_init_texture_layered_rd_module(ctx);
}