
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture_layered_rd.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
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
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue texture_layered_rd_class_set_texture_rd_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureLayeredRD::set_texture_rd_rid, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_layered_rd_class_get_texture_rd_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureLayeredRD::get_texture_rd_rid, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry texture_layered_rd_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture_rd_rid", 1, &texture_layered_rd_class_set_texture_rd_rid),
	JS_CFUNC_DEF("get_texture_rd_rid", 0, &texture_layered_rd_class_get_texture_rd_rid),
};

void define_texture_layered_rd_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_rd_rid"),
        JS_NewCFunction(ctx, texture_layered_rd_class_get_texture_rd_rid, "get_texture_rd_rid", 0),
        JS_NewCFunction(ctx, texture_layered_rd_class_set_texture_rd_rid, "set_texture_rd_rid", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_texture_layered_rd_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&TextureLayeredRD::__class_id);
	classes["TextureLayeredRD"] = TextureLayeredRD::__class_id;
	class_id_list.insert(TextureLayeredRD::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), TextureLayeredRD::__class_id, &texture_layered_rd_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, TextureLayered::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextureLayeredRD::__class_id, proto);
	define_texture_layered_rd_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, texture_layered_rd_class_proto_funcs, _countof(texture_layered_rd_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, texture_layered_rd_class_constructor, "TextureLayeredRD", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "TextureLayeredRD", ctor);

	return 0;
}

JSModuleDef *_js_init_texture_layered_rd_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/texture_layered';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	TextureLayeredRD::__init_js_class_id();
	js_init_texture_layered_rd_module(ctx);
}